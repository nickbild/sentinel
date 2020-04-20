# Sentinel

<p align="center">
<img src="https://raw.githubusercontent.com/nickbild/sentinel/master/media/teaser.gif">
</p>

It is very important to avoid touching your eyes, mouth, and nose to prevent the spread of infectious disease.  However, this tends to be very difficult to remember through the course of the day.  In fact, trying to avoid touching our faces often serves only to remind us just how frequently we do touch them.

Sentinel was designed to provide a subtle reminder not to touch your face.  When your hand approaches your face too closely, a red light will appear in your peripheral vision in time to modify behavior.

## How it Works

An ultrasonic distance sensor is mounted at an angle on a pair of glasses.  When an object is detected in close proximity, a red warning LED on the frame of the glasses is illuminated.  Processing is handled by an Arduino Nano 33 IoT ([code here](https://github.com/nickbild/sentinel/blob/master/sentinel/sentinel.ino)).

## Media

YouTube Video:
https://www.youtube.com/watch?v=yMnGv9zEGWM

Front:
![front](https://raw.githubusercontent.com/nickbild/sentinel/master/media/20200306_204227_sm.jpg)

Angle:
![angle](https://raw.githubusercontent.com/nickbild/sentinel/master/media/20200306_204300_sm.jpg)

Inside:
![inside](https://raw.githubusercontent.com/nickbild/sentinel/master/media/20200306_204326_sm.jpg)

## Bill of Materials

- 1 x Arduino Nano 33 IoT
- 1 x Ultrasonic distance sensor
- 1 x Adafruit NeoPixel 5050 RGB LED
- 1 x Logic level shifter (or resistors to form a voltage divider)
- 1 x Battery pack
- Miscellaneous wire

## About the Author

[Nick A. Bild, MS](https://nickbild79.firebaseapp.com/#!/)

Thanks to Rod Simons for inspiring this project.
