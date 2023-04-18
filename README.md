# Insan-IOT-Light-By-Insan-Technology
Insan-IOT-Light By #Insan_Technology Company Eng. Abdallah Islam Bin ElHassan
https://insantechnology.com/

This uses Thingspeak as the IOT cloud. To begin with login to Thingspeak with the credentials and then create a new channel.Once a new channel is 
created.Click on the "Create" option on the top and select "+" symbol.Now choose the "Google Voice Assistant" option. Fill in all the credentials needed.Now we will be 
redirected to the "IF THIS THEN THAT" webpage.Now choose the other "+" symbol and use "WEBHOOKS" service.Fill in the credentials.
Repeat the same thing for the "off" service as well.

Now the webservice is setup.The next thing we have to do is,program the microcontroller we are using which is NodeMCU ESP8266 module.
The coding is done in the arduino IDE.But we can use drag and drop platform and then generate the code from there and dump it into the microcontroller using 
the arduino IDE.

Install necessary libraries in your Arduino IDE Before compiling 
The code to avoid errors while uploading it to the board.Make sure the Microcontroller is connected to your computerwhile uploading the code. Make sure the connections 
are right.In this experiment D0 (GPIO16) pin is used for signal.Use relay module if necessary.Connect a Vcc,ground and signal pin D0(GPIO16) to relay.
All right we are done with the setup!

Now we are all set! "Okay Google! Turn on the light" 
