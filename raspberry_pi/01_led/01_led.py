#!/usr/bin/env python3
"""Blink one LED. LED anode -> GPIO17 through 220-330 ohm; cathode -> GND."""
from gpiozero import LED
from signal import pause

led = LED(17)
led.blink(on_time=0.5, off_time=0.5)
pause()
