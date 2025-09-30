# Robotikos pirmas namų darbas
Plant watering arduino project

# Problem
In my house I have a lot of plants in almost every room, some of the plants have to be watered rarely, but most of them have to be watered 2-3 times each week, which takes up a lot of time, so I decided to make this project which can do this task for me.

# Design
The idea of the design is to constantly monitor a plants soil's moistness and temperature, if the the soil is too dry then the arduino can provide some water if there's still any in the water tank which is monitored by a force sensor, if the temperature is too low then a lightbulb turns on which heats the plant. Depending on the sensitivity set by the potenciometer and the dryness of the soil a servo is rotated between 0 and 90 which opens or closes a valve. 



# Parts List

|Component                       |Quantity|
|--------------------------------|--------|
| Arduino Uno R3                 |1       |
| Soil Moisture Sensor           |1       |
|Positional Micro Servo          |1       |
|4 batteries, AA, no 1.5V Battery|1       |
|250 kΩ Potentiometer            |1       |
| Temperature Sensor             |1       |
| Force Sensor                   |1       |
|1 kΩ Resistor                   |2       |
| LCD 16 x 2                     |1       |
| Light bulb                     |1       |
| TIP120                         |1       |

# Design and schematics

## Design in tinkercad
![Tinkercad Design](https://raw.githubusercontent.com/hyaqua/Robotika1/refs/heads/main/assets/Robotika1_from_tinkercad.png)

## Schematic of the design
![Schematic of the design from tinkercad](https://raw.githubusercontent.com/hyaqua/Robotika1/refs/heads/main/assets/Automatic%20plant%20watering_page-0001.png)

# Demo video

https://github.com/user-attachments/assets/d0ae573b-9af6-4fd3-a6fe-22ee320aa0e0

Demo video can be found inside the assets folder

# Encountered problems
- Servo doesn't sit at a perfect 0 degrees, but this problem can be solved by placing the valve in such a way that it's closed even though the servo is rotated somewhat.
- The lcd configuration and wiring was confusing but Google was able to help.
- Calculating the force from the water tank was difficult.
- 
- Water sensor sends low signal when wet and high signal when dry, which is opposite from the servo which when open has a higher signal and when closed has a lower signal, but using map this problem can be solved by reversing the numbers from the signal.
- Water sensor signal is in a larger range than servo signal, this problem was solved using the map function.

# Future improvements
- Scaleability of the device - As of right now the code and the device are made in a way that only supports one soil pot.
- Ability to externally monitor the water sensor - The way the code is written and the way that the arduino is connected, there is no way to monitor the wetness of the soil remotely.
