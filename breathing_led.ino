//Enzo Vito
//14 July 2016
//DESCRIPTION: This sketch modulates the light of an LED as if it were "breathing". This is inspired by the LEDs found in Mac laptops in standby.
//EQUIPMENT:
//- Arduino Uno Rev 3
//- LED
//- Jumper wires
//- Solderless breadboard
//FUNCTIONS:
//- pinMode(pin,mode) configures a pin to behave as an input or an output
//- float datatype for a number with a decimal point
//- exp() exponential function e^()
//- sin() sine function
//- millis() returns the number of milliseconds since the Arduino began running current program. Similar to tic/toc on Matlab.
//- analogWrite() writes the analog value (PWM wave) to a pin
//=========================
//=========================

void setup()
{
  pinMode(9, OUTPUT);
}
//This sets up pin 9 on the Arduino as an OUTPUT. 
//For the "breathing" effect to work, the output needs to come from a pin that supports pulse width modulation (PWM). This is indicated
//by the "~" symbol. The pins that are supported on the Uno Rev 3 are 3, 5, 6, 9, 10, and 11.

//=========================
//=========================
void loop()
{
  float val = (exp(sin(millis()/3500.0*2.5)) - 0.36787944)*100;
  analogWrite(9, val);
}
//This is the equation that modulates the light in a sine wave like form.
//Increasing 3500.0 or 2.5 increases the time it takes for the LED to dim and brighten. Increasing the value makes the light "choppy" as it fades/brightens to/from OFF.

