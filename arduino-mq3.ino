const int VCC = A1;
const int DOUT = A2;
const int AOUT = A3;
const int GND = A4;

void setup() {
  // put your setup code here, to run once:
  pinMode(VCC, OUTPUT);
  pinMode(DOUT, INPUT);
  pinMode(GND, OUTPUT);

  digitalWrite(VCC, HIGH);
  digitalWrite(GND, LOW);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int y = analogRead(AOUT);
  float yy = y* 0.00488;
  Serial.print("Raw Value: ");
  Serial.print(y);
  Serial.print(" Volt_value: ");
  Serial.println(yy, 3);
  delay(2000);
}
