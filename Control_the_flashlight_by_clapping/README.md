<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Controlling Lamp with Applause</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            line-height: 1.6;
        }

        .container {
            max-width: 800px;
            margin: 0 auto;
            padding: 20px;
            background-color: #f9f9f9;
            border: 1px solid #ddd;
            border-radius: 5px;
            box-shadow: 0 2px 5px rgba(0, 0, 0, 0.1);
        }

        h1 {
            text-align: center;
            color: #2e86c1;
        }

        p {
            margin-bottom: 20px;
        }

        .code {
            font-family: monospace;
            background-color: #f2f2f2;
            padding: 10px;
            border-radius: 5px;
            overflow-x: auto;
        }

        .lamp-img {
            display: block;
            margin: 0 auto;
            max-width: 200px;
        }

        .applause-img {
            display: block;
            margin: 0 auto;
            max-width: 150px;
            margin-bottom: 20px;
        }

        .note {
            color: #888;
            font-style: italic;
            text-align: center;
            margin-top: 10px;
        }
    </style>
</head>
<body>
    <div class="container">
        <h1>Controlling Lamp with Applause</h1>
        <p>
            Welcome to the Redmi file! In this project, we control a lamp using applause detected by a sound sensor.
            The setup involves an Arduino board, a sound sensor, and a lamp connected via wires.
        </p>

        <img class="lamp-img" src="lamp_image.jpg" alt="Lamp Image">

        <p>
            The Arduino code reads the data from the sound sensor, and whenever it detects applause,
            it toggles the lamp on or off. Here's a simplified version of the code:
        </p>

        <div class="code">
            <pre>
int sensor_pin = 7;
int led = 6;
String led_status = "off";

void setup() {
    // Code for pin setup...
}

void loop() {
    // Code for main functionality...
}
            </pre>
        </div>

        <img class="applause-img" src="applause_image.jpg" alt="Applause Image">

        <p>
            The sound sensor detects applause by measuring sound levels above a certain threshold.
            When you clap or produce applause near the sensor, it sends a signal to the Arduino board.
            The Arduino then checks the current state of the lamp (on or off) and toggles it accordingly.
            The lamp's status is tracked using the variable "led_status."
        </p>

        <p class="note">
            Note: You can customize the code and add more features as per your requirements.
        </p>
    </div>
</body>
</html>
