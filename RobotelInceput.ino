//L298n Motor Driver pins.
#define in1 2
#define in2 3
#define in3 4
#define in4 5

#define SPEED 255 // 160 – 255

// sensor1 și snsor2 = sensor dreapta
// sensor3 și sensor4 = sensor stânga
#define sensor1 A0
#define sensor2 A1
#define sensor3 A2
#define sensor4 A3

// iniţializarea variabile data 1 până la 4
int data1, data2, data3, data4;

void setup() {
pinMode(in1, OUTPUT);
pinMode(in2, OUTPUT);
pinMode(in3, OUTPUT);
pinMode(in4, OUTPUT);

pinMode(sensor1, INPUT);
pinMode(sensor2, INPUT);
pinMode(sensor3, INPUT);
pinMode(sensor4, INPUT);
}

void loop() {
// citirea senzorilor
// logic LOW/HIGH
data1 = digitalRead(sensor1);
data2 = digitalRead(sensor2);
data3 = digitalRead(sensor3);
data4 = digitalRead(sensor4);

if (data1 == LOW && data2 == LOW && data3 == LOW && data4 == LOW)
{
//inainte
forward();
}

else if (data1 == HIGH && data2 == HIGH && data3 == HIGH && data4 == LOW)
{
//dreapta
right();
}

else if (data1 == LOW && data2 == HIGH && data3 == HIGH && data4 == HIGH)
{
//stânga
left();
}

else if (data1 == HIGH && data2 == HIGH && data3 == LOW && data4 == LOW)
{
//dreapta
right();
}

else if (data1 == LOW && data2 == LOW && data3 == HIGH && data4 == HIGH)
{
//stânga
left();
}

else if (data1 == HIGH && data2 == LOW && data3 == LOW && data4 == LOW)
{
//dreapta
right();
}

else if (data1 == LOW && data2 == LOW && data3 == LOW && data4 == HIGH)
{
//stânga
left();
}

else if (data1 == HIGH && data2 == LOW && data3 == HIGH && data4 == LOW)
{
//dreapta
right();
}

else if (data1 == LOW && data2 == HIGH && data3 == LOW && data4 == HIGH)
{
//stânga
left();
}

else if (data1 == LOW && data2 == HIGH && data3 == LOW && data4 == LOW)
{
//dreapta
right();
}

else if (data1 == LOW && data2 == LOW && data3 == HIGH && data4 == LOW)
{
//stânga
left();
}

else if (data1 == LOW && data2 == HIGH && data3 == HIGH && data4 == LOW)
{
//inainte
forward();
}

else if (data1 == HIGH && data2 == HIGH && data3 == HIGH && data4 == HIGH)
{
//inainte
forward();
}
}

void forward() {
stop();
analogWrite(in1, SPEED);
analogWrite(in3, SPEED);
}

void back() {
stop();
analogWrite(in2, SPEED);
analogWrite(in4, SPEED);
}

void left() {
stop();
analogWrite(in3, SPEED);
analogWrite(in2, SPEED);
}

void right() {
stop();
analogWrite(in4, SPEED);
analogWrite(in1, SPEED);
}

void stop() {
analogWrite(in1, 0);
analogWrite(in2, 0);
analogWrite(in3, 0);
analogWrite(in4, 0);
}
