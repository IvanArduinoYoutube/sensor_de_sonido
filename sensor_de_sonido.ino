//definimos los pines
const int sensor_de_sonido = A0;
const int led = 10;
int sensor;

void setup() {
 //declaramos el modo de los pines y apagamos el led
  Serial.begin(9600);
  pinMode(sensor_de_sonido, INPUT);
  pinMode(led, OUTPUT);
  digitalWrite(led, LOW);

}

void loop() {
  sensor = analogRead(sensor_de_sonido);
  Serial.println(sensor);
  //si el sensor capta algo el led se enciende
  if (sensor >= 525) {
    digitalWrite(led, HIGH);
  }
  //si no es así, entonces se apaga
  else {
    digitalWrite(led, LOW);
  }

}
