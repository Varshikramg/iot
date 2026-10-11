#!/usr/bin/env python3
"""Sequence three LEDs on BCM GPIO17, GPIO27, and GPIO22."""
from gpiozero import LED
from time import sleep

leds = [LED(pin) for pin in (17, 27, 22)]
try:
    while True:
        for led in leds + leds[::-1]:
            led.on()
            sleep(0.25)
            led.off()
finally:
    for led in leds:
        led.off()
        led.close()
