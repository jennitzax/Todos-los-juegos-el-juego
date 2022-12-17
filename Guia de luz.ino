// Despertador de estrellas
// Jenny Ramirez Osorio y Sofia Storani
// Maestría en Tecnología y Estética de las Artes Electrónicas

/////////////////////////////////////////////////////////////////


int colorR = 13;
int colorG = 12;
int colorB = 11;

int VRX = A0;
int VRY = A1;
int SW = 2;

int valorX = 0;
int valorY = 0;
bool boton = false;
String x;
String y;

 
void setup () {
  pinMode(colorR, OUTPUT);
  pinMode(colorG, OUTPUT);
  pinMode(colorB, OUTPUT);
  pinMode(VRX, INPUT);
  pinMode(VRY, INPUT);
  pinMode(SW, INPUT_PULLUP);

  Serial.begin(9600);
}

void loop () {

if (valorX = 0 )

  analogWrite(colorR,valorX/4);
  analogWrite(colorG,valorY/4);
 // digitalWrite(colorR, HIGH);
 // digitalWrite(colorG, HIGH);
  digitalWrite(colorB, HIGH);

  valorX = analogRead(VRX);
  valorY = analogRead(VRY);
  boton = digitalRead(SW);

  valorX = map(valorX, 0, 1023, 0, 600); // Mapeamos al tama�o x de la imagen
  x = String(valorX);
  valorY = map(valorY, 0, 1023, 0, 400); // Mapeamos al tama�o y de la imagen
  y = String(valorY);

}
  
  Serial.println(x + " " + y + " " + boton);
  delay(100);


}
