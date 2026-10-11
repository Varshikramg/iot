#!/usr/bin/env python3
"""Measure distance with HC-SR04: Trigger BCM23, Echo BCM24 through divider."""
from gpiozero import DistanceSensor
from time import sleep

# max_distance limits pulse wait and is also the sensor's normalized scale.
sensor = DistanceSensor(echo=24, trigger=23, max_distance=4)
try:
    while True:
        print(f"Distance: {sensor.distance * 100:.1f} cm")
        sleep(0.25)
finally:
    sensor.close()
