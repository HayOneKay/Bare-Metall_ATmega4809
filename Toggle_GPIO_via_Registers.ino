uint8_t* portaAddress = (uint8_t*)0x0400;
uint8_t* portaA = (uint8_t*)0x0404;

void setup() {
 
  //Als ausgang setzen
  *portaAddress = 1;

  //Ausgang auf HIGH setzen
  *portaA = 1;
}

void loop() {
  // Your code here

}

void porta(){
   byte* content = *portaAddress;
  Serial.print((int)content);
  Serial.print("\n");
}

}
