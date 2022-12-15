# Mouse Whisperer project files

![Open Source Hardware](/images/open-source-hardware-logo.png)
![Open Source Software](/images/open-source-software-logo.png)

Mouse Whisperer is a small development kit that is based on Microchip [ATtiny85](https://www.microchip.com/en-us/product/ATTINY85) MCU. It will act like physical mouse and draw perfect circles while you're away.

## Why

There are may reasons why not, but also a few resons why.

- I'm sick and tired entering passwords each time I leave latop for 2 minutes
- I don't wont my screen to go dark whenever I'm focused on someting and happen to not move the mouse for a minute or two
- I want to be available for other Team members, even if I went for a cup of coffee
- But mainly, if someone enforce stupid policies on my laptop and I cannot change them - I will workaround them

## How

Mouse Whisperer is based on [Micronucleos](https://github.com/micronucleus/micronucleus) bootloader, that allows USB communication for both flashing and user code communication. 

Provided code sample initialises board as USB mouse device and draws a perfect circles until switched off.

## Main features

- [ATtiny85](https://www.microchip.com/en-us/product/ATTINY85) MCU
- 8 KB Flash, 512B EEPROM, 512B SRAM
- WS2812E RGB adressable LED for status indication
- TTP223 based touch sensor for switching it ON and OFF
- Sandwich PCB design to protect important electronics from cats and children

## How to use it

### Using Platformio and included sample firmware

Samples code in this repo provided as Platformio project, please follow the official Platformio [installation guide](https://platformio.org/install) first.

When project is built using `Platformio: Build` task and ready to be flashed, run `Platformio: Upload` task. You insert your board into USB after that and flashing process will start automatically. When done, code starts execution imidiately.

### Using Arduino

Please follow [Digispark tutorial](http://digistump.com/wiki/digispark/tutorials/connecting)


## Hardware

Please find hardware schematics in the [hardware](/hardware) folder

## Where to buy

Order at [Tindie](https://www.tindie.com/products/sonocotta/)

## Demo


## Links

- [Microship ATTINY85](https://www.microchip.com/en-us/product/ATTINY85)
- [Micronucleos](https://github.com/micronucleus/micronucleus)
- [ATtiny Flasher - Product site](https://sonocotta.com/)
