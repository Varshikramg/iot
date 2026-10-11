#!/usr/bin/env python3
"""Read an LM35 on MCP3008 CH0 (enable SPI; wire ADC per its data sheet)."""
from gpiozero import MCP3008
from time import sleep

# LM35 output is approximately 10 mV per degree C. MCP3008 VREF is assumed 3.3 V.
sensor = MCP3008(channel=0, max_voltage=3.3)
try:
    while True:
        volts = sensor.value * 3.3
        celsius = volts * 100.0
        print(f"Voltage: {volts:.3f} V  Temperature: {celsius:.1f} C")
        sleep(1)
finally:
    sensor.close()
