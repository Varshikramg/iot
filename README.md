# Sensor and actuator experiments

The same seven experiments are provided for both platforms. Choose the folder for the hardware available to you:

- [`arduino/`](arduino/README.md) — Arduino Uno/Nano and compatible ESP8266 NodeMCU sketches (`.ino`).
- [`raspberry_pi/`](raspberry_pi/README.md) — Raspberry Pi Python programs (`.py`).
- [`arduino/additional_experiments/`](arduino/additional_experiments/README.md) — eight more Arduino Uno sketches based on the supplied experiments.

Each experiment has one runnable program per platform: single LED, multiple LEDs, buzzer, DHT temperature/humidity, analog LM35 temperature, HC-SR04 ultrasonic distance, and PIR motion detection. The commands below download directly from this repository's `main` branch. In Windows PowerShell, use `curl.exe` (not `curl`, which is an alias for `Invoke-WebRequest`). `-L` follows redirects and `-o` chooses the local filename.

## Arduino / NodeMCU

Run a command in a terminal to download a sketch, then open the downloaded `.ino` file in Arduino IDE.

```bash
curl.exe -L https://raw.githubusercontent.com/Varshikramg/iot/main/arduino/01_led/01_led.ino -o 01_led.ino
curl.exe -L https://raw.githubusercontent.com/Varshikramg/iot/main/arduino/02_multiple_leds/02_multiple_leds.ino -o 02_multiple_leds.ino
curl.exe -L https://raw.githubusercontent.com/Varshikramg/iot/main/arduino/03_buzzer/03_buzzer.ino -o 03_buzzer.ino
curl.exe -L https://raw.githubusercontent.com/Varshikramg/iot/main/arduino/04_dht_temperature_humidity/04_dht_temperature_humidity.ino -o 04_dht_temperature_humidity.ino
curl.exe -L https://raw.githubusercontent.com/Varshikramg/iot/main/arduino/05_analog_temperature_lm35/05_analog_temperature_lm35.ino -o 05_analog_temperature_lm35.ino
curl.exe -L https://raw.githubusercontent.com/Varshikramg/iot/main/arduino/06_ultrasonic_hc_sr04/06_ultrasonic_hc_sr04.ino -o 06_ultrasonic_hc_sr04.ino
curl.exe -L https://raw.githubusercontent.com/Varshikramg/iot/main/arduino/07_pir_motion/07_pir_motion.ino -o 07_pir_motion.ino
```

### Additional Arduino experiments

These sketches are separate programs for Arduino Uno/Nano. Download each one individually:

```powershell
curl.exe -L https://raw.githubusercontent.com/Varshikramg/iot/main/arduino/additional_experiments/01_dht_temperature_humidity/01_dht_temperature_humidity.ino -o 01_dht_temperature_humidity.ino
curl.exe -L https://raw.githubusercontent.com/Varshikramg/iot/main/arduino/additional_experiments/02_police_lights_speed_control/02_police_lights_speed_control.ino -o 02_police_lights_speed_control.ino
curl.exe -L https://raw.githubusercontent.com/Varshikramg/iot/main/arduino/additional_experiments/03_weather_monitor/03_weather_monitor.ino -o 03_weather_monitor.ino
curl.exe -L https://raw.githubusercontent.com/Varshikramg/iot/main/arduino/additional_experiments/04_smart_irrigation/04_smart_irrigation.ino -o 04_smart_irrigation.ino
curl.exe -L https://raw.githubusercontent.com/Varshikramg/iot/main/arduino/additional_experiments/05_intrusion_detection/05_intrusion_detection.ino -o 05_intrusion_detection.ino
curl.exe -L https://raw.githubusercontent.com/Varshikramg/iot/main/arduino/additional_experiments/06_smart_parking/06_smart_parking.ino -o 06_smart_parking.ino
curl.exe -L https://raw.githubusercontent.com/Varshikramg/iot/main/arduino/additional_experiments/07_ir_object_counting/07_ir_object_counting.ino -o 07_ir_object_counting.ino
curl.exe -L https://raw.githubusercontent.com/Varshikramg/iot/main/arduino/additional_experiments/08_motion_activated_light_relay/08_motion_activated_light_relay.ino -o 08_motion_activated_light_relay.ino
```

## Raspberry Pi

Run a command on the Pi to download a program, then start it with `python3 <filename>`.

```bash
curl.exe -L https://raw.githubusercontent.com/Varshikramg/iot/main/raspberry_pi/01_led/01_led.py -o 01_led.py
curl.exe -L https://raw.githubusercontent.com/Varshikramg/iot/main/raspberry_pi/02_multiple_leds/02_multiple_leds.py -o 02_multiple_leds.py
curl.exe -L https://raw.githubusercontent.com/Varshikramg/iot/main/raspberry_pi/03_buzzer/03_buzzer.py -o 03_buzzer.py
curl.exe -L https://raw.githubusercontent.com/Varshikramg/iot/main/raspberry_pi/04_dht_temperature_humidity/04_dht_temperature_humidity.py -o 04_dht_temperature_humidity.py
curl.exe -L https://raw.githubusercontent.com/Varshikramg/iot/main/raspberry_pi/05_analog_temperature_lm35/05_analog_temperature_lm35.py -o 05_analog_temperature_lm35.py
curl.exe -L https://raw.githubusercontent.com/Varshikramg/iot/main/raspberry_pi/06_ultrasonic_hc_sr04/06_ultrasonic_hc_sr04.py -o 06_ultrasonic_hc_sr04.py
curl.exe -L https://raw.githubusercontent.com/Varshikramg/iot/main/raspberry_pi/07_pir_motion/07_pir_motion.py -o 07_pir_motion.py
```

Read the platform README and wiring comments before connecting components. Raspberry Pi GPIO and NodeMCU GPIO are 3.3 V only; the HC-SR04 Echo signal needs level shifting before connection to either.
