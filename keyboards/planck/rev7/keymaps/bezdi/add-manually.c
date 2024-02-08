#include QMK_KEYBOARD_H
#include "keymap_us_international.h"
#include "sendstring_hungarian.h"

enum unicode_names {
  U_UDAC_LOWER,// ű
  U_UDAC_UPPER,// Ű
  U_UACU_LOWER,// ú
  U_UACU_UPPER,// Ú
  U_UDIA_LOWER,// ü
  U_UDIA_UPPER,// Ü
  U_EACU_LOWER,// é
  U_EACU_UPPER,// É
  U_IACU_LOWER,// í
  U_IACU_UPPER,// Í
  U_OACU_LOWER,// ó
  U_OACU_UPPER,// Ó
  U_ODIA_LOWER,// ö
  U_ODIA_UPPER,// Ö
  U_ODAC_LOWER,// ő
  U_ODAC_UPPER,// Ő
  U_AACU_LOWER,// á
  U_AACU_UPPER,// Á
};

const uint32_t unicode_map[] PROGMEM = {
  [U_UDAC_LOWER] = 0x0171,  // ű
  [U_UDAC_UPPER] = 0x0170,  // Ű
  [U_UACU_LOWER] = 0x00fa,  // ú
  [U_UACU_UPPER] = 0x00da,  // Ú
  [U_UDIA_LOWER] = 0x00fc,  // ü
  [U_UDIA_UPPER] = 0x00dc,  // Ü
  [U_EACU_LOWER] = 0x00e9,  // é
  [U_EACU_UPPER] = 0x00c9,  // É
  [U_IACU_LOWER] = 0x00ed,  // í
  [U_IACU_UPPER] = 0x00cd,  // Í
  [U_OACU_LOWER] = 0x00f3,  // ó
  [U_OACU_UPPER] = 0x00d3,  // Ó
  [U_ODIA_LOWER] = 0x00f6,  // ö
  [U_ODIA_UPPER] = 0x00d6,  // Ö
  [U_ODAC_LOWER] = 0x0151,  // ő
  [U_ODAC_UPPER] = 0x0150,  // Ő
  [U_AACU_LOWER] = 0x00e1,  // á
  [U_AACU_UPPER] = 0x00c1,  // Á
};

// ű and Ű keycode.
#define U_UDAC UP(U_UDAC_LOWER, U_UDAC_UPPER)
// ú and Ú keycode.
#define U_UACU UP(U_UACU_LOWER, U_UACU_UPPER)
// ü and Ü keycode.
#define U_UDIA UP(U_UDIA_LOWER, U_UDIA_UPPER)
// é and É keycode.
#define U_EACU UP(U_EACU_LOWER, U_EACU_UPPER)
// í and Í keycode.
#define U_IACU UP(U_IACU_LOWER, U_IACU_UPPER)
// ó and Ó keycode.
#define U_OACU UP(U_OACU_LOWER, U_OACU_UPPER)
// ö and Ö keycode.
#define U_ODIA UP(U_ODIA_LOWER, U_ODIA_UPPER)
// ő and Ő keycode.
#define U_ODAC UP(U_ODAC_LOWER, U_ODAC_UPPER)
// á and Á keycode.
#define U_AACU UP(U_AACU_LOWER, U_AACU_UPPER)

#define UNICODE_SELECTED_MODES UNICODE_MODE_MACOS, UNICODE_MODE_WINCOMPOSE, UNICODE_MODE_LINUX