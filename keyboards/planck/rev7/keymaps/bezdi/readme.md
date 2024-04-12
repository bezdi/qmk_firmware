# Create firmware for Planck rev7 with bezdi's layout

## Convert json to C

Update with current layout json file name (bezdi012.json, bezdi013.json, etc.) 

```
qmk json2c ~/r/keymaps/planck-rev7/bezdi027.json -o ~/r/qmk_firmware/keyboards/planck/rev7/keymaps/bezdi/keymap.c
```

## Compile firmware

1. Replace the first (`#include QMK_KEYBOARD_H`) line in `keymap.c` with the content of `add-manually.c`

2. Run this command:
```
qmk compile -kb planck/rev7 -km bezdi
```
