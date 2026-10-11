#!/usr/bin/env python3
"""Read DHT11/DHT22 on BCM GPIO4 (install Adafruit CircuitPython DHT + Blinka)."""
import time
import board
import adafruit_dht

# Change DHT11 to DHT22 when using a DHT22 sensor.
dht = adafruit_dht.DHT11(board.D4)
try:
    while True:
        try:
            print(f"Temperature: {dht.temperature:.1f} C")
            print(f"Humidity: {dht.humidity:.1f} %")
        except RuntimeError as error:
            # Occasional checksum/timing failures are normal for DHT sensors.
            print(f"DHT read failed: {error}")
        time.sleep(2)
finally:
    dht.exit()
