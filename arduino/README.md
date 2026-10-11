# Arduino / NodeMCU experiments

Each folder contains one standalone sketch for the same-named experiment. Open the `.ino` file in Arduino IDE, install any listed library, select the matching board, and upload.

## Board support

The sketches support Arduino Uno/Nano and ESP8266 NodeMCU where the experiment permits. Pins are selected at compile time using `ESP8266`; check the pin table at the top of each sketch before wiring. NodeMCU labels such as `D1` are not GPIO numbers: this code uses the GPIO numbers shown in the comments.

For NodeMCU, power sensors from 3.3 V and keep every input at or below 3.3 V. Use a resistor divider on an HC-SR04 Echo output. A bare analog LM35 usually needs a suitable amplifier or a board with an appropriate ADC range on NodeMCU; see that experiment's notes.

## Experiments

| Folder | Parts / notes |
|---|---|
| `01_led` | One LED and current-limiting resistor |
| `02_multiple_leds` | Three LEDs, each with its own resistor |
| `03_buzzer` | Active buzzer (passive buzzer also supported) |
| `04_dht_temperature_humidity` | DHT11 or DHT22; install **DHT sensor library by Adafruit** and **Adafruit Unified Sensor** |
| `05_analog_temperature_lm35` | LM35 analog temperature sensor |
| `06_ultrasonic_hc_sr04` | HC-SR04; level shift Echo for NodeMCU |
| `07_pir_motion` | HC-SR501 PIR motion sensor |

The sketches print readings and status to Serial Monitor at 9600 baud unless noted.
