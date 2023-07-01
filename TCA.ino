#define NAME "Taylan Bakar"
#define T2 2
#define T4 4 

int t2;
int t4;
int t2V = 0;
int t4V;
int t2Pos = 0;
int t4Pos = 0;


void setup(){
  Serial.begin(115200);  
  delay(1000);
  pinMode(T2, INPUT_PULLUP);
  pinMode(T4, INPUT_PULLUP);
}

void loop(){
  t2 = digitalRead(T2);
  t2V = t2;
  t2 = digitalRead(T2);
  if (t2V == 0 && t2 == 1) Serial.print("edge\n");
  
}
