# Robotikos pirmas namų darbas
Plant watering arduino project

# Problem
In my house I have a lot of plants in almost every room, some of the plants have to be watered rarely, but most of them have to be watered 2-3 times each week, which takes up a lot of time, so I decided to make this project which can do this task for me.

# Design
The idea of the design is to constantly measure the water level of the soil and if the soil is too dry then provide it some water from a container. The soil measurement sensors sends a signal of how wet the soil is, and depending on the strength of the signal a servo rotates from 0 to 90 degrees, which opens or closes a valve. 


# Parts List

| Component | Quantity |
| ------------- | ------------- |
| Arduino Uno R3 | 1 |
| Soil Moisture Sensor | 1 |
| Positional Micro Servo | 1 |
| 4x AA battery holder | 1 |
| AA Battery | 4 |

# Design and schematics

## Design in tinkercad
![Tinkercad Design](https://raw.githubusercontent.com/hyaqua/Robotika1/refs/heads/main/assets/Robotika1_from_tinkercad.png)

## Schematic of the design
![Schematic of the design from tinkercad](https://raw.githubusercontent.com/hyaqua/Robotika1/refs/heads/main/assets/Automatic%20plant%20watering_page-0001.jpg)

# Encountered problems
- Servo doesn't sit at a perfect 0 degrees, but this problem can be solved by placing the valve in such a way that it's closed even though the servo is rotated somewhat.
- Water sensor sends low signal when wet and high signal when dry, which is opposite from the servo which when open has a higher signal and when closed has a lower signal, but using map this problem can be solved by reversing the numbers from the signal.
- Water sensor signal is in a larger range than servo signal, this problem was solved using the map function.

# Future improvements
- Scaleability of the device - As of right now the code and the device are made in a way that only supports one soil pot.
- Ability to externally monitor the water sensor - The way the code is written and the way that the arduino is connected, there is no way to monitor the wetness of the soil remotely.
- Ability to measure water level - To know the current water level in the container, you have to check it manually, there is no way to remotely check if there is enough water in the container.
