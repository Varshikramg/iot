# Sensor and actuator experiments

The same seven experiments are provided for both platforms. Choose the folder for the hardware available to you:

- [`arduino/`](arduino/README.md) — Arduino Uno/Nano and compatible ESP8266 NodeMCU sketches (`.ino`).
- [`raspberry_pi/`](raspberry_pi/README.md) — Raspberry Pi Python programs (`.py`).

Each experiment has one runnable program per platform: single LED, multiple LEDs, buzzer, DHT temperature/humidity, analog LM35 temperature, HC-SR04 ultrasonic distance, and PIR motion detection. The commands below download directly from this repository's `main` branch. `-L` follows redirects and `-o` chooses the local filename.

## Arduino / NodeMCU

Run a command in a terminal to download a sketch, then open the downloaded `.ino` file in Arduino IDE.

```bash
curl -L https://raw.githubusercontent.com/Varshikramg/iot/main/arduino/01_led/01_led.ino -o 01_led.ino
curl -L https://raw.githubusercontent.com/Varshikramg/iot/main/arduino/02_multiple_leds/02_multiple_leds.ino -o 02_multiple_leds.ino
curl -L https://raw.githubusercontent.com/Varshikramg/iot/main/arduino/03_buzzer/03_buzzer.ino -o 03_buzzer.ino
curl -L https://raw.githubusercontent.com/Varshikramg/iot/main/arduino/04_dht_temperature_humidity/04_dht_temperature_humidity.ino -o 04_dht_temperature_humidity.ino
curl -L https://raw.githubusercontent.com/Varshikramg/iot/main/arduino/05_analog_temperature_lm35/05_analog_temperature_lm35.ino -o 05_analog_temperature_lm35.ino
curl -L https://raw.githubusercontent.com/Varshikramg/iot/main/arduino/06_ultrasonic_hc_sr04/06_ultrasonic_hc_sr04.ino -o 06_ultrasonic_hc_sr04.ino
curl -L https://raw.githubusercontent.com/Varshikramg/iot/main/arduino/07_pir_motion/07_pir_motion.ino -o 07_pir_motion.ino
```

## Raspberry Pi

Run a command on the Pi to download a program, then start it with `python3 <filename>`.

```bash
curl -L https://raw.githubusercontent.com/Varshikramg/iot/main/raspberry_pi/01_led/01_led.py -o 01_led.py
curl -L https://raw.githubusercontent.com/Varshikramg/iot/main/raspberry_pi/02_multiple_leds/02_multiple_leds.py -o 02_multiple_leds.py
curl -L https://raw.githubusercontent.com/Varshikramg/iot/main/raspberry_pi/03_buzzer/03_buzzer.py -o 03_buzzer.py
curl -L https://raw.githubusercontent.com/Varshikramg/iot/main/raspberry_pi/04_dht_temperature_humidity/04_dht_temperature_humidity.py -o 04_dht_temperature_humidity.py
curl -L https://raw.githubusercontent.com/Varshikramg/iot/main/raspberry_pi/05_analog_temperature_lm35/05_analog_temperature_lm35.py -o 05_analog_temperature_lm35.py
curl -L https://raw.githubusercontent.com/Varshikramg/iot/main/raspberry_pi/06_ultrasonic_hc_sr04/06_ultrasonic_hc_sr04.py -o 06_ultrasonic_hc_sr04.py
curl -L https://raw.githubusercontent.com/Varshikramg/iot/main/raspberry_pi/07_pir_motion/07_pir_motion.py -o 07_pir_motion.py
```

Read the platform README and wiring comments before connecting components. Raspberry Pi GPIO and NodeMCU GPIO are 3.3 V only; the HC-SR04 Echo signal needs level shifting before connection to either.
