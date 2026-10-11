# Raspberry Pi experiments

Each folder contains one standalone Python 3 program. These examples use BCM GPIO numbering. Run from a terminal on the Pi with `python3 filename.py`; stop with Ctrl+C. Install GPIO Zero with `python3 -m pip install gpiozero` (or use the OS package `python3-gpiozero`). The DHT example has additional setup below.

Disconnect power before changing wires. Do not connect 5 V signals to Raspberry Pi GPIO. Use a resistor for each LED. The HC-SR04 Echo pin is commonly 5 V and must go through a resistor divider or level shifter before reaching the Pi.

## Experiments

| Folder | Parts / notes |
|---|---|
| `01_led` | One LED and current-limiting resistor |
| `02_multiple_leds` | Three LEDs, each with its own resistor |
| `03_buzzer` | Active buzzer; use a transistor driver if the buzzer draws more current than a GPIO can supply |
| `04_dht_temperature_humidity` | DHT11/DHT22; install `adafruit-circuitpython-dht` and `adafruit-blinka`; enable/configure the Pi GPIO backend as required by the OS |
| `05_analog_temperature_lm35` | LM35 via MCP3008 ADC; Pi has no analog input |
| `06_ultrasonic_hc_sr04` | HC-SR04 with Echo level divider |
| `07_pir_motion` | HC-SR501 PIR |

The DHT file uses GPIO4 and the Adafruit DHT library. The LM35 file assumes MCP3008 channel 0 and SPI enabled (`raspi-config`).
