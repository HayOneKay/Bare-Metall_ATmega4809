uint8_t* portaAddress = (uint8_t*)0x0400;
uint8_t* portaA = (uint8_t*)0x0404;

void setup() {
 
  //Set pin as Output
  *portaAddress = 1;

  //Set pin Level as "HIGH"
  *portaA = 1;
}

void loop() {
  porta()
}

void porta(){
  //Reads the Current Value in the portA Register and Prints it
  byte* content = *portaAddress;
  Serial.print((int)content);
  Serial.print("\n");
}

}
