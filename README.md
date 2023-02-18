# SLIMEZISTOR

# AKA THE "TRASH THERAMIN"

BUY OR GET DONATED AN [ADAFRUIT  CIRCUIT PLAYGROUND EXPRESS BOARD ](https://www.adafruit.com/product/3333) AND [USB CABLE](https://www.adafruit.com/product/592) FROM ADAFRUIT...IF THEY'RE IN STOCK, WHICH THEY NEVER ARE...

[...IF ADAFRUIT IS SOLD OUT CHECK DIGIKEY FOR STOCK](https://www.digikey.com/en/products/detail/adafruit-industries-llc/3517/7310915)  THE KIT FROM DIGIKEY COMES WITH THE USB CABLE AND A BATTERY PACK AND BATTERIES, WHICH IS USEFUL!  


THE DEVICE UNDER TEST IS THE CONNECTION BETWEEN THE A0 AND A1(DIGITAL PIN 6) PIN!

### PINOUT FOR CIRCUIT PLAYGROUND EXPRESS:

![](https://cdn-learn.adafruit.com/assets/assets/000/047/156/large1024/circuit_playground_Adafruit_Circuit_Playground_Express_Pinout.png?1507829017)

### TOP OF BOARD, NOTE LOCATION OF A0 AND A1 IN LOWER RIGHT QUADRANT:

![](https://cdn-shop.adafruit.com/970x728/3333-03.jpg)

ON THE BOTTOM OF THE BOARD, THE ELECTRODES WHICH ARE BEING MEASURED ARE IN THE LOWER LEFT QUADRANT, ABOVE AND TO THE LEFT OF THE "C" IN "CIRCUIT PLAYGROUND"

![](https://cdn-shop.adafruit.com/970x728/3333-06.jpg)

[DOWNLOAD AND INSTALL THE ARDUINO SOFTWARE FROM ARDUINO.CC](https://wiki-content.arduino.cc/en/software)

[SET UP ARDUINO FOR THE CIRCUIT PLAYGROUND EXPRESS IN ORDER TO INSTALL THE SLIMEZISTOR ON THE BOARD](https://learn.adafruit.com/adafruit-circuit-playground-express/set-up-arduino-ide)

COPY AND PASTE THE CODE BELOW INTO THE ARDUINO IDE AND UPLOAD IT:

```
int outpin = 6;
int x0 = 0;//value of analog pin A0
int vmin = 250;//upper voltage trigger to toggle digital LOW
int vmax = 750;//lower voltage trigger to toggle digital HIGH

void setup() {

    pinMode(outpin,OUTPUT);
    digitalWrite(outpin,LOW);
    Serial.begin(115200);

}

void loop() {
  x0 = analogRead(A0);
  if(x0 > vmax){
    digitalWrite(outpin,LOW);  
  }
  if(x0 < vmin){
    digitalWrite(outpin,HIGH);
  }
  Serial.println(x0);

}
```

TO TEST, OPEN THE SERIAL PLOTTER, BE SURE TO SET THE BAUD RATE TO 115200, AND OBSERVE THE DATA!

GROW MYCELIUM IN THE SPACE ALONG THE BOARD BETWEEN THE A1 AND A0 ELECTRODES!  

PUT A MICROPHONE(COULD BE FROM A SMART PHONE) RIGHT NEXT TO THE SPEAKER!

RECORD THE SOUND WITH A LIVESTREAM AND USE THAT AS A DATASET FOR THE WHOLE INTERNET TO PLAY WITH TO MAKE MUSIC AND ALSO 3D AND 4D POINT CLOUDS FOR BLENDER, VECTOR GRAPHICS GRAPHS FOR INKSCAPE, AND  BITMAP IMAGES FOR MEMES!

COMBINE WITH TIMELAPS MICROSCOPE IMAGES OF THE GROWING MYCELIUM ON THE BOARD!

INSTALL JUPYTER ON YOUR MACHINE!

CONNECT TO THE SERIAL!

USE THE FOLLOWING CODE IN A JUPYTER NOTEBOOK CELL TO RECORD 1 SECOND OF DATA AND PLOT IT!  THIS IS VERY BAD CODE IT LOSES MOST OF THE POINTS! FIX THIS CODE!


```
import serial
import json
import time
import matplotlib.pyplot as plt

# Open the serial port at 115200 baud rate
ser = serial.Serial('COM16', 115200)

# Initialize variables for recording data
data = []
start_time = time.time()
end_time = start_time + 1

# Record data for 10 seconds
while time.time() < end_time:
    line = ser.readline()
    data.append(line.decode().strip())

# Close the serial port
ser.close()

# Save the data as a JSON object
with open('data.json', 'w') as f:
    json.dump(data, f)

# Plot the data
plt.plot(data)
plt.show()
```



