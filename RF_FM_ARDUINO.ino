int pinBuzzer = 9; //PIN PWD 

void setup() {
  pinMode(pinBuzzer, OUTPUT); //MODO DE SALIDA PARA EL PIN
}
void loop() {
  tone(pinBuzzer, 1000); //FRECUENCIA CON LA QUE SE VAA GENERAR EL ENVIO 
  analogWrite(pinBuzzer, 255); //MODULACION Y CONTROL DE LA CORRIENTE
  delay(500): //TIEMPO Y ESPERA EN MILISEGUNDOS
}
