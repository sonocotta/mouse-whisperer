#!/bin/bash

USBASP=16c0:05dc
MICRONUCLEOS=16d0:0753
PIOENV=attiny85-mouse-whisperer

export PATH=$PATH:~/.platformio/penv/bin 

function bootloader() {
    pushd ./../../micronucleus/firmware/

    while :
    do 
        if make fuse flash; then
            echo " bootloader flashed! Insert whisperer into usb port now"
            break
        else
            echo "Failed, try again.."
        fi
        sleep 2
    done
    
    popd
}

function flash() {
    pushd ./..

    while :
    do 
        if platformio run --target upload --environment $PIOENV; then
            echo " firmware flashed!"
            break
        else
            echo "Failed, try again.."
        fi
        sleep 2
    done

    

    popd
}

while :
do
    if lsusb | grep $USBASP; then
        echo "Device usbasp ($USBASP) found, flashing bootloader.."
        bootloader;
        echo -n "Flashed, waiting for device.."
        while :
        do 
            if lsusb | grep $MICRONUCLEOS; then
                echo " connected!"
                flash;
                break
            else
                echo -n "."
            fi
            sleep 2
        done
    else
        echo -n "Looking for usbasp ($USBASP) device.."
        while :
        do
            if lsusb | grep $USBASP; then
                break
            else
                echo -n "."
            fi
            sleep 2
        done
    fi
    # echo "bottom loop!"
    # sleep 1
done