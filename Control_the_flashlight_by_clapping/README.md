<h1><div align="center"><i>Hack Your Home: Arduino Applause-Controlled Smart Lamp! <img src="https://i.imgur.com/rNPy3OE.gif" width="45"></i></div></h1>

<div align="center">
    <a href="https://imgur.com/pTPH4T9">
        <img src="https://i.imgur.com/pTPH4T9.png" title="source: imgur.com" width="700" height="400" />
    </a>
</div>

# <i color="#00979C"> Project Overview <i color="#F9F9F9">
Welcome to the Redmi file! This project allows you to control a lamp using applause detected by a sound sensor. It's an exciting and interactive way to turn the lamp on and off effortlessly.

# <i color="#00979C"> Project Setup <i color="#F9F9F9">
To implement this project, you'll need the following components:
- Arduino board
- Sound sensor
- breadboard
- Resistance
- Lamp
- Wires for connections

# <i color="#00979C"> How It Works <i color="#F9F9F9">
The Arduino code reads data from the sound sensor, and when it detects applause or a loud sound, it triggers an action to toggle the lamp's state.

```cpp
int sensor_pin = 7;
int lamp = 6;
String lamp_status = "off";

void setup() {
    // Pin setup and initialization...
}

void loop() {
    // Main functionality to control the lamp...
}
```

# <i color="#00979C"> Understanding the Logic <i color="#F9F9F9">
The sound sensor detects applause by measuring sound levels above a certain threshold. When you clap or produce applause near the sensor, it sends a signal to the Arduino board. The Arduino then checks the current state of the lamp (on or off) and toggles it accordingly. The lamp's status is tracked using the variable "lamp_status."


# <i color="#00979C"> Customization <i color="#F9F9F9">
Feel free to customize the code to add more features or adjust the sensitivity of the sound sensor. Experiment with different sound levels to find the perfect setting for your applause-controlled lamp!

**Note:** You can further enhance the project by adding Lamps to indicate the lamp's state or incorporating other sensors for different control mechanisms.

# <i color="#00979C"> Get Started <i color="#F9F9F9">
Ready to try it out? Gather the components, upload the code to your Arduino, and witness the magic of controlling the lamp with applause!



<h3><div align="center"><i color="#00979C"> Applause-Controlled Smart Lamp Demo <i color="#F9F9F9"></i></div></h3>
<div align="center">
    <video width="700" height="400" controls>
        <source src="/home/oualid/Desktop/project_alx/Arduino_Uno/Control_the_flashlight_by_clapping/Arduino.mp4" type="video/mp4">
        Your browser does not support the video tag.
    </video>
</div>

