const int MASK_PF_SHIFT_REGISTER_SI  = 1 << PF0 | 1 << PF1 | 1 << PF4 | 1 << PF5 | 1 << PF6 | 1 << PF7;    // Mask for Shift Register SI on Port F [PF0 (A5), PF1 (A4), PF4 (A3), PF5 (A2), PF6 (A1), PF7 (A0)]
const int MASK_PD_SHIFT_REGISTER_SI  = 1 << PD0 | 1 << PD1;                                                // Mask for Shift Register SI on Port D [PD0 (3), PD1 (2)]
const int MASK_PD_SHIFT_REGISTER_SCK = 1 << PD4;                                                           // Mask for Shift Register SCK          [PD4 (4)]
const int MASK_PD_SHIFT_REGISTER_RCK = 1 << PD6;                                                           // Mask for Shift Register RCK          [PD6 (12)]
const int MASK_PD_DECODER_GL         = 1 << PD7;                                                           // Mask for Decoder GL                  [PD7 (6)]
const int MASK_PB_DECODER_ABC        = 1 << PB4 | 1 << PB5 | 1 << PB6;                                     // Mask for Decoder A, B, C             [PB4 (8), PB5 (9), PB6 (10)]

// 3D Wave
const int time_divider = 10;
const int animation_length = 16;
const unsigned char animation[animation_length * 64] PROGMEM = { 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80, 0x80, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80, 0x80, 0x40, 0x08, 0x10, 0x20, 0x40, 0x80, 0x80, 0x40, 0x20, 0x10, 0x20, 0x40, 0x80, 0x80, 0x40, 0x20, 0x10, 0x20, 0x40, 0x80, 0x80, 0x40, 0x20, 0x10, 0x08, 0x40, 0x80, 0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x80, 0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80, 0x80, 0x40, 0x08, 0x10, 0x20, 0x40, 0x80, 0x80, 0x40, 0x20, 0x10, 0x20, 0x40, 0x80, 0x80, 0x40, 0x20, 0x10, 0x20, 0x40, 0x80, 0x80, 0x40, 0x20, 0x10, 0x08, 0x40, 0x80, 0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x80, 0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01, 0x01, 0x08, 0x10, 0x20, 0x40, 0x80, 0x80, 0x40, 0x20, 0x10, 0x20, 0x40, 0x80, 0x80, 0x40, 0x20, 0x10, 0x20, 0x40, 0x80, 0x80, 0x40, 0x20, 0x10, 0x08, 0x40, 0x80, 0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x80, 0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01, 0x01, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01, 0x01, 0x02, 0x10, 0x20, 0x40, 0x80, 0x80, 0x40, 0x20, 0x10, 0x20, 0x40, 0x80, 0x80, 0x40, 0x20, 0x10, 0x08, 0x40, 0x80, 0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x80, 0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01, 0x01, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01, 0x01, 0x02, 0x10, 0x08, 0x04, 0x02, 0x01, 0x01, 0x02, 0x04, 0x20, 0x40, 0x80, 0x80, 0x40, 0x20, 0x10, 0x08, 0x40, 0x80, 0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x80, 0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01, 0x01, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01, 0x01, 0x02, 0x10, 0x08, 0x04, 0x02, 0x01, 0x01, 0x02, 0x04, 0x08, 0x04, 0x02, 0x01, 0x01, 0x02, 0x04, 0x08, 0x40, 0x80, 0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x80, 0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01, 0x01, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01, 0x01, 0x02, 0x10, 0x08, 0x04, 0x02, 0x01, 0x01, 0x02, 0x04, 0x08, 0x04, 0x02, 0x01, 0x01, 0x02, 0x04, 0x08, 0x04, 0x02, 0x01, 0x01, 0x02, 0x04, 0x08, 0x10, 0x80, 0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01, 0x01, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01, 0x01, 0x02, 0x10, 0x08, 0x04, 0x02, 0x01, 0x01, 0x02, 0x04, 0x08, 0x04, 0x02, 0x01, 0x01, 0x02, 0x04, 0x08, 0x04, 0x02, 0x01, 0x01, 0x02, 0x04, 0x08, 0x10, 0x02, 0x01, 0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01, 0x01, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01, 0x01, 0x02, 0x10, 0x08, 0x04, 0x02, 0x01, 0x01, 0x02, 0x04, 0x08, 0x04, 0x02, 0x01, 0x01, 0x02, 0x04, 0x08, 0x04, 0x02, 0x01, 0x01, 0x02, 0x04, 0x08, 0x10, 0x02, 0x01, 0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x01, 0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01, 0x01, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01, 0x01, 0x02, 0x10, 0x08, 0x04, 0x02, 0x01, 0x01, 0x02, 0x04, 0x08, 0x04, 0x02, 0x01, 0x01, 0x02, 0x04, 0x08, 0x04, 0x02, 0x01, 0x01, 0x02, 0x04, 0x08, 0x10, 0x02, 0x01, 0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x01, 0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01, 0x01, 0x02, 0x10, 0x08, 0x04, 0x02, 0x01, 0x01, 0x02, 0x04, 0x08, 0x04, 0x02, 0x01, 0x01, 0x02, 0x04, 0x08, 0x04, 0x02, 0x01, 0x01, 0x02, 0x04, 0x08, 0x10, 0x02, 0x01, 0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x01, 0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80, 0x80, 0x10, 0x08, 0x04, 0x02, 0x01, 0x01, 0x02, 0x04, 0x08, 0x04, 0x02, 0x01, 0x01, 0x02, 0x04, 0x08, 0x04, 0x02, 0x01, 0x01, 0x02, 0x04, 0x08, 0x10, 0x02, 0x01, 0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x01, 0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80, 0x80, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80, 0x80, 0x40, 0x08, 0x04, 0x02, 0x01, 0x01, 0x02, 0x04, 0x08, 0x04, 0x02, 0x01, 0x01, 0x02, 0x04, 0x08, 0x10, 0x02, 0x01, 0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x01, 0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80, 0x80, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80, 0x80, 0x40, 0x08, 0x10, 0x20, 0x40, 0x80, 0x80, 0x40, 0x20, 0x04, 0x02, 0x01, 0x01, 0x02, 0x04, 0x08, 0x10, 0x02, 0x01, 0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x01, 0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80, 0x80, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80, 0x80, 0x40, 0x08, 0x10, 0x20, 0x40, 0x80, 0x80, 0x40, 0x20, 0x10, 0x20, 0x40, 0x80, 0x80, 0x40, 0x20, 0x10, 0x02, 0x01, 0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x01, 0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80, 0x80, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80, 0x80, 0x40, 0x08, 0x10, 0x20, 0x40, 0x80, 0x80, 0x40, 0x20, 0x10, 0x20, 0x40, 0x80, 0x80, 0x40, 0x20, 0x10, 0x20, 0x40, 0x80, 0x80, 0x40, 0x20, 0x10, 0x08, 0x01, 0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80, 0x80, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80, 0x80, 0x40, 0x08, 0x10, 0x20, 0x40, 0x80, 0x80, 0x40, 0x20, 0x10, 0x20, 0x40, 0x80, 0x80, 0x40, 0x20, 0x10, 0x20, 0x40, 0x80, 0x80, 0x40, 0x20, 0x10, 0x08, 0x40, 0x80, 0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80, 0x80, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80, 0x80, 0x40, 0x08, 0x10, 0x20, 0x40, 0x80, 0x80, 0x40, 0x20, 0x10, 0x20, 0x40, 0x80, 0x80, 0x40, 0x20, 0x10, 0x20, 0x40, 0x80, 0x80, 0x40, 0x20, 0x10, 0x08, 0x40, 0x80, 0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x80, 0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02 };

//
//const int time_divider = 10;
//const int animation_length = 24;
//const unsigned char animation[animation_length * 64] PROGMEM = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

byte temp[8][8];

void setup() {
  
    // Setup IO
    DDRF = MASK_PF_SHIFT_REGISTER_SI;
    DDRD = MASK_PD_SHIFT_REGISTER_SI | MASK_PD_SHIFT_REGISTER_SCK | MASK_PD_SHIFT_REGISTER_RCK | MASK_PD_DECODER_GL;
    DDRB = MASK_PB_DECODER_ABC;
    PIND = MASK_PD_DECODER_GL;
}

void loop() {
  for (int frame = 0; frame < animation_length; frame++) {
    for (int k = 0; k < 64; k++) {
      temp[k/8][k%8] = pgm_read_byte(animation + frame * 64 + k); 
    }
    for (int i = 0; i < time_divider; i++) {
      displayImage(temp);
    }
  }
  
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
    delay(1);
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
