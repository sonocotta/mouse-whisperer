# Mouse Whisperer project files

![Open Source Hardware](/images/open-source-hardware-logo.png)
![Open Source Software](/images/open-source-software-logo.png)
<a href="https://www.tindie.com/stores/sonocotta/?ref=offsite_badges&utm_source=sellers_andrey-malyshenko&utm_medium=badges&utm_campaign=badge_medium"><img src="https://d2ss6ovg47m0r5.cloudfront.net/badges/tindie-mediums.png" alt="I sell on Tindie" width="150" height="78"></a>
<br />
[![Dev Chat](https://img.shields.io/discord/1233306441469657140?logo=discord&label=discord&style=flat-square)](https://discord.gg/PtnaAaQMpS)

Mouse Whisperer is a small development kit based on Microchip [ATtiny85](https://www.microchip.com/en-us/product/ATTINY85) MCU. It will act like a physical mouse and draw perfect circles while you're away.

![image](https://user-images.githubusercontent.com/5459747/208095899-07817a1a-26ad-44ba-9326-8fe75084e484.png)


## Why

There are many reasons why not, but also a few reasons why.

- I'm sick and tired of entering passwords each time I leave my laptop for 2 minutes
- I don't want my screen to go dark whenever I'm focused on something and happen to not move the mouse for a minute or two
- I want to be available for other Team members, even if I go for a cup of coffee
- But mainly, if someone enforces stupid policies on my laptop and I cannot change them - I will work around them

## How

Mouse Whisperer is based on the [Micronucleos](https://github.com/micronucleus/micronucleus) bootloader, which allows USB communication for both flashing and user code communication.

Provided code sample initializes board as USB mouse device and draws perfect circles until switched off.

## Main features

- [ATtiny85](https://www.microchip.com/en-us/product/ATTINY85) MCU
- 8 KB Flash, 512B EEPROM, 512B SRAM
- WS2812E RGB addressable LED for status indication
- TTP223-based touch sensor for switching it ON and OFF
- Sandwich PCB design to protect important electronics from cats and children

![image](https://user-images.githubusercontent.com/5459747/208096216-27483410-b548-404d-a4b2-dbdbd9e3f393.png)

## How to use it

Mouse Whisperer comes preloaded with software. Simply insert it into the USB socket, no drivers are needed. Touch the edge of the board to switch it off, and touch it again to switch it back on.

If you wish to update the software to your taste see the information below.

### Using Platformio and included sample firmware

Samples code in this repo are provided as a Platformio project, please follow the official Platformio [installation guide](https://platformio.org/install) first.

When a project is built using the `Platformio: Build` task and ready to be flashed, run the `Platformio: Upload` task. You insert your board into the USB after that and the flashing process will start automatically. When done, the code starts execution immediately.

![image](https://user-images.githubusercontent.com/5459747/208096469-a39ed78d-982c-420f-80d3-c3b3fbc119e5.png)

### Using Arduino

Please follow [Digispark tutorial](http://digistump.com/wiki/digispark/tutorials/connecting)

## Hardware

Please find hardware schematics in the [hardware](/hardware) folder

## Where to buy

Order at [Tindie](https://www.tindie.com/products/sonocotta/mouse-whisperer/) and [Elecrow](https://www.elecrow.com/mouse-whisperer.html)

## Demo

![DSC_0071.MOV](/images/DSC_0071.MOV.gif)
![DSC_0073.MOV](/images/DSC_0073.MOV.gif)
![DSC_0076.MOV](/images/DSC_0076.MOV.gif)

## Links

- [Microchip ATTINY85](https://www.microchip.com/en-us/product/ATTINY85)
- [Micronucleos](https://github.com/micronucleus/micronucleus)
- [ATtiny Flasher - Product site](https://sonocotta.com/)
