# Create firmware for Planck rev7 with bezdi's layout




## A. QMK configuratior

Create and download a new layout in the QMK configurator:
https://config.qmk.fm/#/planck/rev7/LAYOUT_ortho_4x12




## B. Convert json to C

Update with current layout json file name (bezdi012.json, bezdi013.json, etc.)
```
qmk json2c ~/r/keymaps/planck_rev7_bezdi030.json -o ~/r/qmk_firmware/keyboards/planck/rev7/keymaps/bezdi/keymap.c
```



## C. Compile firmware

1. Add after the first line (`#include QMK_KEYBOARD_H`) in `keymap.c` file the content of `add-manually.c` file.

2. Run this command:
```
qmk compile -kb planck/rev7 -km bezdi
```



## D. Flash firmware

Use the QMK Toolbox app to flash the firmware to the keyboard.



## E. Test the layout

()[]{}
<><><><>,.,.áéúüűíóöő

