#!/usr/bin/env python3
"""Switch an active buzzer on and off using BCM GPIO18."""
from gpiozero import Buzzer
from time import sleep

buzzer = Buzzer(18)
try:
    while True:
        buzzer.on()
        print("Buzzer ON")
        sleep(0.5)
        buzzer.off()
        print("Buzzer OFF")
        sleep(0.5)
finally:
    buzzer.off()
    buzzer.close()
