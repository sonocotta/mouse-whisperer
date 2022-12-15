# ATtiny Candle project files - Candle formware sample Platformio project

![Open Source Hardware](/images/open-source-hardware-logo.png)
![Open Source Software](/images/open-source-software-logo.png)

This is a simple demonstration of ATtiny Candle acting as HID device, specifically Mouse. It continously moves cursor just enough to keep screen awake. Built-in button allows to swith it off and on again.

On the RGB Flavoured board it used LEDs to display current status. OLED Flavoured board uses screen for the same purpose.

## How to flash

Use `Build` and `Upload` task in the appropriate Platformio environment
- Attiny85 environments with USB upload protocol - press RESET button once asked to connect device

![Flashing with Platformio](images/simplescreenrecorder-2022-01-29_21.42.01.mkv.gif)

## Demo

### ATtiny85 with RGB leds

![ATtiny85 with RGB leds](images/VID_20220129_213118.mp4.gif)

### ATtiny85 with OLED screen

![ATtiny85 with OLED screen](images/VID_20220129_213224.mp4.gif)

