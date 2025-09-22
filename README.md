# Robotikos pirmas namų darbas
Plant watering arduino project

# Problem
In my house I have a lot of plants in almost every room, some of the plants have to be watered rarely, but most of them have to be watered 2-3 times each week, which takes up a lot of time, so I decided to make this project which can do this task for me.

# Design
The idea of the design is to constantly measure the water level of the soil and if the soil is too dry then provide it some water. The soil measurement sensors sends a signal of how wet the soil is, and depending on the strength of the signal a servo rotates from 0 to 90 degrees, which opens or closes a valve. 


# Parts List

# Schematics


## Design in tinkercad
<img width="1893" height="1289" alt="Robotika1_from_tinkercad" src="https://github.com/user-attachments/assets/1021e741-6f71-4bb2-8855-b2c9d46f4a6b" />

## Schematic of the design


# Encountered problems
Servo doesn't sit at a perfect 0 degrees - 
Water sensor sends low signal when wet and high signal when dry
Water sensor signal is in a larger range than servo
How to control servo

# Future improvements
Scaleability of the method
Ability to externally monitor the water sensor
