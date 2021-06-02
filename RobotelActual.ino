
//Definire Pini

int ENA = 3; //Activeaza Pin-ul motorului drept
int IN1 = 1; //Controleaza Pin
int IN2 = 2;

int ENB = 6; //Activeaza Pin-ul motorului stang
int IN3 = 4;
int IN4 = 5;

//Viteza motoarelor

#define ENASpeed 200 
#define ENBSpeed 200

int Sensor1 = 0;
int Sensor2 = 0;
int Sensor3 = 0;
int Sensor4 = 0;

void setup() {

  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);

  pinMode(ENB, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  pinMode(Sensor1, INPUT);
  pinMode(Sensor2, INPUT);
  pinMode(Sensor3, INPUT);
  pinMode(Sensor4, INPUT);
  
}

void loop(){

  //Folosim analogWrite pentru functionarea motorului la viteza buna

  analogWrite(ENA, ENASpeed);
  analogWrite(ENB, ENBSpeed);

  //Citeste senzorul HIGH-NEGRU LOW-ALB

  Sensor1 = digitalRead(8);
  Sensor2 = digitalRead(9);
  Sensor3 = digitalRead(10);
  Sensor4 = digitalRead(11);

  //Seteaza conditiile pentru fata, stanga, dreapta

  if(Sensor4 == LOW && Sensor3 == LOW && Sensor2 == HIGH && Sensor1 == HIGH){

    //Vireaza la stanga
    //motor A spate

    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);

    //motor B fata

    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);
  }

  else if (Sensor4 == HIGH && Sensor3 == HIGH && Sensor2 == LOW && Sensor1 == LOW){

    //Vireaza la dreapta
    //motor A fata

    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);

    //motor B spate

    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
  }

  else{

    //if(Sensor4 == LOW && Sensor3 == HIGH && Sensor2 == HIGH && Sensor1 == LOW)

    //fata

    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);
  }
}
  
