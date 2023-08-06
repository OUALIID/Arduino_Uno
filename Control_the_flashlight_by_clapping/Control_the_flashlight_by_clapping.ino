/*===============================================
Control the flashlight by clapping
=> Clap once to turn on the flashlight
=> Clap again to turn off the flashlight
Please wait for one second after the first clap before clapping again.
===============================================*/

int sensor_pin = 7;         // Sound sensor connected to digital pin 7
int lamp = 6;               // Lamp connected to digital pin 6
String lamp_status = "off"; // Variable to track the current state of the lamp

void setup()
{
    // put your setup code here, to run once:
    pinMode(sensor_pin, INPUT); // Set the sound sensor pin as an input
    pinMode(lamp, OUTPUT);      // Set the lamp pin as an output
}
void loop()
{
    // put your main code here, to run repeatedly:
    int sensor_data = digitalRead(sensor_pin); // Read the sound sensor data (0 or 1)

    if (sensor_data == 1) // If the sound sensor detects applause (HIGH signal)
    {
        if (lamp_status == "on") // If the lamp is currently on, turn it off
        {
            digitalWrite(lamp, LOW); // Turn off the lamp
            lamp_status = "off";     // Update the lamp status to "off"
        }
        else if (lamp_status == "off") // If the lamp is currently off, turn it on:
        {
            digitalWrite(lamp, HIGH); // Turn on the lamp
            lamp_status = "on";       // Update the lamp status to "on"
        }

        delay(1000); // Add a 1000 milliseconds delay to avoid rapid toggling due to continuous applause
    }
}