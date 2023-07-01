//DIR Register in MMIO Space
uint16_t* directionReg = (uint16_t*)0x0400;
//portA Register in MMIO Space
uint16_t* portaA = (uint16_t*)0x0404;

void setup() {
 
  //Set pin as Output
  *directionReg = 1;

  //Set pin Level as "HIGH"
  *portaA = 1;
}

void loop() {
  ReadPortA()
}

void ReadPortA(){
  //Reads the Current Value in the Direction Register and Prints it
  byte* content = *directionReg;
  Serial.print((int)content);
  Serial.print("\n");
}

