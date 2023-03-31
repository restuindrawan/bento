# restuindrawan/bento

![RLmc20230331_220842_RS_2](https://user-images.githubusercontent.com/57904667/229147497-1d151d16-4aa1-4451-8bbf-213ca4bdd751.jpg)

*A short description of the keyboard/project*
The Bento Macropad is a 5-key macropad with rotary encoder designed by Dwin17 (Discord: **Dwin#3766**, Reddit: **nguyedt**) with PCB designed by coarse (keyboard.coarse.tech).

**Key features include in this fork:**
- Powered by QMK Firmware
- VIAL Support
- EC11 Rotary Encoder

* Keyboard Maintainer: [restuindrawan](https://github.com/restuindrawan)

* Hardware Supported: *The PCBs, controllers supported*
Pro Micro (or equivalent)

Pin Configuration:

![Pins](https://i.imgur.com/SEvQf43.png)

You may use these PCB files for personal use only. My preferred PCB printing company is JLCPCB. Enjoy!
[Greber File](https://github.com/restuindrawan/bento/tree/master/gerber)

________________________________________________________________________________________________________________________________________________________________

* Hardware Availability: *Links to where you can find this hardware*

| Part | Quantity |
| --- | --- |
| Bento Macropad PCB | 1|
| Bento Macropad Case | 1 [(model available on Thingiverse)](https://www.thingiverse.com/thing:4594580)|
| Pro Micro (or equivalent) | 1|
| EC11 Rotary Encoder | 1|
| Rotary Encoder Knob (for 6mm shaft) | 1|
| Reset Switch | 1|
| Strip of 3x WS2812B RGB LEDs| 1|
| Lead wire (for RGB underglow) | As required|
| Cherry MX-compatible switches | 5|
| Cherry MX-compatible keycaps | 5|

**Optional for LED lighting**
| Part | Quantity |
| --- | --- |
| Single color LED (2x3x4mm or 1.8mm)| 5|
| 330 Ohm Resistor | 6|
| 10k Ohm Resistor |1|
| MOSFET | 1| 

________________________________________________________________________________________________________________________________________________________________

Make example for this keyboard (after setting up your build environment):

    make restuindrawan/bento:default

Flashing example for this keyboard:

    make restuindrawan/bento:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,1) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
________________________________________________________________________________________________________________________________________________________________

## NOTE: If you have flashed your Bento Macropad using this compiled firmware, it will have this layout by default:
![image](https://user-images.githubusercontent.com/57904667/229148777-bfdf8133-cb72-423e-86aa-6213d0efbe44.png)
![image](https://user-images.githubusercontent.com/57904667/229148865-301fd9c6-5677-4872-9750-360aa8a1ac5f.png)
![image](https://user-images.githubusercontent.com/57904667/229148899-6d21b6cf-7dd0-4389-9e03-b61c11f7f680.png)
![image](https://user-images.githubusercontent.com/57904667/229148923-4f1ddf4a-114b-4881-8b6f-59d4d210dedb.png)
