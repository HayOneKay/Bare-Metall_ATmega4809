uint8_t SRAM_BASE = 0x2800;
uint8_t* start = (uint8_t*)0x2BFF;
uint8_t BOTTOM = 0x3FFF;

void setup(){
  Serial.begin(9600);  
  delay(1000);
  //Store Array of Values 22 in the RAM Address 0x2BFF (Array Index 0)
  *(start + 0) = 3;
  *(start + 1) = 0b00000001;
  *(start + 2) = 0b00000010;
  *(start + 3) = 0b00000100;
}

void loop(){
  printArray(start);
}

void printArray(uint8_t* addr){
  uint8_t len = *addr;
   Serial.print("[ ");
  for (int i = 1; i != len + 1; i++){
    Serial.print(*(start + i));
    Serial.print(" ");
  }
   Serial.print("]");
   Serial.print("\n");
}
