
//"Example" Structure Definieren

typedef struct {
  uint16_t var1 = 0b1000000000000001;
  uint8_t var2 = 2;
  uint8_t var3 = 3;
  
} example;

example abc;
//Basis Adresse des Structs "abc", welches lustigerweise auch die Startadresse vom SRAM ist (10240)
int l = &abc;
//uint16_t s werden im little endian format gespeichert, (speichere erstes byte)
uint8_t* var = l; 

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  delay(1000);

}

void loop() {
  // put your main code here, to run repeatedly:
 //Adresse ausgeben
  Serial.print(int(l));
  Serial.print("    ");
  //Inhalt der Adresse ausgeben
  Serial.print(*var);
  Serial.print("\n");
}
