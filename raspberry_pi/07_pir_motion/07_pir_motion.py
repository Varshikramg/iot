#!/usr/bin/env python3
"""Read an HC-SR501 PIR output on BCM GPIO17."""
from gpiozero import MotionSensor
from signal import pause

pir = MotionSensor(17)
pir.when_motion = lambda: print("Motion detected")
pir.when_no_motion = lambda: print("No motion")
pause()
