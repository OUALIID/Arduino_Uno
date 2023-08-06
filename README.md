<!DOCTYPE html>
<html>
<head>
    <style>
        /* Remove underlines from h1 and h2 */
        h1, h2 {
            text-decoration: none;
            border-bottom: none;
        }

        /* Center the content inside div */
        div {
            text-align: center;
        }
    </style>
</head>
<body>

<div>
    <h1>Hack Your Home: Arduino Applause-Controlled Smart Lamp! <img src="https://i.imgur.com/rNPy3OE.gif" width="45"></h1>
</div>

<div align="center">
    <a href="https://imgur.com/pTPH4T9">
        <img src="https://i.imgur.com/pTPH4T9.png" title="source: imgur.com" width="700" height="400" />
    </a>
</div>

<h2>Project Overview</h2>
<p>Welcome to the Redmi file! This project allows you to control a lamp using applause detected by a sound sensor. It's an exciting and interactive way to turn the lamp on and off effortlessly.</p>

<h2>Project Setup</h2>
<p>To implement this project, you'll need the following components:</p>
<ul>
    <li>Arduino board</li>
    <li>Sound sensor</li>
    <li>Breadboard</li>
    <li>Resistance</li>
    <li>Lamp</li>
    <li>Wires for connections</li>
</ul>

<h2>How It Works</h2>
<p>The Arduino code reads data from the sound sensor, and when it detects applause or a loud sound, it triggers an action to toggle the lamp's state.</p>

<pre>
<code>
int sensor_pin = 7;
int lamp = 6;
String lamp_status = "off";

void setup() {
    // Pin setup and initialization...
}

void loop() {
    // Main functionality to control the lamp...
}
</code>
</pre>

<h2>Understanding the Logic</h2>
<p>The sound sensor detects applause by measuring sound levels above a certain threshold. When you clap or produce applause near the sensor, it sends a signal to the Arduino board. The Arduino then checks the current state of the lamp (on or off) and toggles it accordingly. The lamp's status is tracked using the variable "lamp_status."</p>

<h2>Customization</h2>
<p>Feel free to customize the code to add more features or adjust the sensitivity of the sound sensor. Experiment with different sound levels to find the perfect setting for your applause-controlled lamp!</p>

<p><strong>Note:</strong> You can further enhance the project by adding Lamps to indicate the lamp's state or incorporating other sensors for different control mechanisms.</p>

<h2>Get Started</h2>
<p>Ready to try it out? Gather the components, upload the code to your Arduino, and witness the magic of controlling the lamp with applause!</p>

<!-- Video with Title -->
<div align="center">
    <h2>Applause-Controlled Smart Lamp Demo</h2>
    <!-- Replace "VIDEO_URL" with the actual URL of your video -->
    <iframe width="560" height="315" src="VIDEO_URL" frameborder="0" allowfullscreen></iframe>
</div>

</body>
</html>
