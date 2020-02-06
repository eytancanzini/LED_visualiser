#define LED_1 2
#define LED_2 3
#define LED_3 4
#define LED_4 5
#define sensorPin A0

int sensorValue = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(sensorPin,INPUT);
  pinMode(LED_1,OUTPUT);
  pinMode(LED_2,OUTPUT);
  pinMode(LED_3,OUTPUT);
  pinMode(LED_4,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorValue = analogRead(sensorPin);
  analogWrite(LED_1,sensorValue);
  if (sensorValue > 50) {
    int sensorValue2 = sensorValue;
    analogWrite(LED_2,sensorValue2);
  }
  if (sensorValue > 101) {
    int sensorValue3 = sensorValue;
    analogWrite(LED_3,sensorValue3);
  }
  if (sensorValue > 152) {
    int sensorValue4 = sensorValue;
    analogWrite(LED_4,sensorValue4);
  }
  else {
    analogWrite(LED_2,0);
    analogWrite(LED_3,0);
    analogWrite(LED_4,0);
  }
  Serial.println(sensorValue);
}
