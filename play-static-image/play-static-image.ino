const int MASK_PF_SHIFT_REGISTER_SI  = 1 << PF0 | 1 << PF1 | 1 << PF4 | 1 << PF5 | 1 << PF6 | 1 << PF7;    // Mask for Shift Register SI on Port F [PF0 (A5), PF1 (A4), PF4 (A3), PF5 (A2), PF6 (A1), PF7 (A0)]
const int MASK_PD_SHIFT_REGISTER_SI  = 1 << PD0 | 1 << PD1;                                                // Mask for Shift Register SI on Port D [PD0 (3), PD1 (2)]
const int MASK_PD_SHIFT_REGISTER_SCK = 1 << PD4;                                                           // Mask for Shift Register SCK          [PD4 (4)]
const int MASK_PD_SHIFT_REGISTER_RCK = 1 << PD6;                                                           // Mask for Shift Register RCK          [PD6 (12)]
const int MASK_PD_DECODER_GL         = 1 << PD7;                                                           // Mask for Decoder GL                  [PD7 (6)]
const int MASK_PB_DECODER_ABC        = 1 << PB4 | 1 << PB5 | 1 << PB6;                                     // Mask for Decoder A, B, C             [PB4 (8), PB5 (9), PB6 (10)]

// Image
byte image[8][8] = {{ 0x55, 0xAA, 0x55, 0xAA, 0x55, 0xAA, 0x55, 0xAA },
                    { 0xAA, 0x55, 0xAA, 0x55, 0xAA, 0x55, 0xAA, 0x55 },
                    { 0x55, 0xAA, 0x55, 0xAA, 0x55, 0xAA, 0x55, 0xAA },
                    { 0xAA, 0x55, 0xAA, 0x55, 0xAA, 0x55, 0xAA, 0x55 },
                    { 0x55, 0xAA, 0x55, 0xAA, 0x55, 0xAA, 0x55, 0xAA },
                    { 0xAA, 0x55, 0xAA, 0x55, 0xAA, 0x55, 0xAA, 0x55 },
                    { 0x55, 0xAA, 0x55, 0xAA, 0x55, 0xAA, 0x55, 0xAA },
                    { 0xAA, 0x55, 0xAA, 0x55, 0xAA, 0x55, 0xAA, 0x55 }};


void setup() {
  
    // Setup IO
    DDRF = MASK_PF_SHIFT_REGISTER_SI;
    DDRD = MASK_PD_SHIFT_REGISTER_SI | MASK_PD_SHIFT_REGISTER_SCK | MASK_PD_SHIFT_REGISTER_RCK | MASK_PD_DECODER_GL;
    DDRB = MASK_PB_DECODER_ABC;
    PIND = MASK_PD_DECODER_GL;
}

void loop() {
  displayImage(image);
}

void selectLayer(int layer) {
  PORTB = PORTB & ~MASK_PB_DECODER_ABC | (layer << 4);
}

void displayImage(byte image[8][8]) {
  for (int i = 0; i < 8; i++) {
    fillShiftRegisters(image[i]);
    selectLayer(i);
    PIND = MASK_PD_SHIFT_REGISTER_RCK | MASK_PD_DECODER_GL;
    PIND = MASK_PD_SHIFT_REGISTER_RCK | MASK_PD_DECODER_GL;
    delay(1.25);
  }
}

void fillShiftRegisters(byte layer[8]) {
  
  // Fills each shift register with 8 bits
  for (int i = 0; i < 8; i++) {
    shiftBitIntoShiftRegisters(layer[i]);
  }
}

void shiftBitIntoShiftRegisters(byte bits) {
  
  // Output to Shift Register SI
  PORTF = bits; // Output to Shift Register SI on Port F
  PORTD = PORTD & ~(MASK_PD_SHIFT_REGISTER_SI | MASK_PD_SHIFT_REGISTER_SCK) | ((bits >> 2) & MASK_PD_SHIFT_REGISTER_SI); // Output to Shift Register SI on Port D and reset Shift Register SCK
  
  // Pulse Shift Register SCK
  PIND = MASK_PD_SHIFT_REGISTER_SCK; // Set Shift Register SCK
}

