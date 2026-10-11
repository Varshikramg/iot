# Additional Arduino experiments

These eight standalone Arduino Uno/Nano sketches are based on the supplied experiment notes. Each file is a separate Arduino program; download and open one sketch at a time. Pin numbers and sensor assumptions are documented at the top of each file.

Install **DHT sensor library by Adafruit** and **Adafruit Unified Sensor** for experiments 1 and 3. Open Serial Monitor at 9600 baud for readings and status. The police light experiment also accepts `fast`, `medium`, or `slow` in Serial Monitor (set line ending to Newline).

## Experiments

1. DHT11 temperature and humidity
2. Two-LED police light with serial speed control
3. DHT11 and rain sensor weather monitor
4. Soil moisture and rain smart irrigation indicator
5. PIR intrusion alarm with buzzer
6. HC-SR04 smart parking status
7. IR object counter
8. PIR motion-activated light using a relay module

The soil moisture percentage needs calibration for the specific sensor and soil. The irrigation example is an indicator only; it does not switch a water pump. The relay example switches a low-voltage LED load only. Do not use it to switch mains voltage.
