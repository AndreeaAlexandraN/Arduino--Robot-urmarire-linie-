# Arduino- Robot urmarire linie

<b>1. Introducere</b>

 Scopul acestui proiect este de a construi un robotel care urmareste o linie neagra pe un fundal alb. Când robotul este plasat pe drum, acesta urmează drumul prin detectarea liniei. Direcția de mișcare a robotului depinde de cele patru ieșiri ale senzorilor. Când cei patru senzori sunt pe linie, robotul merge înainte. Dacă senzorul stâng se îndepărtează de linie, robotul se deplasează spre dreapta. În mod similar, dacă senzorul din dreapta se îndepărtează de cale, robotul se deplasează spre stânga. 

<b>2. Componente</b>

| Cantitate | Componenta | Descriere | Imagine |
| ------ | ------ | ------ | ------ |
| 1 | [Placă de dezvoltare UNO R3](https://ardushop.ro/ro/home/29-placa-de-dezvoltare-uno-r3.html?gclid=Cj0KCQjw2NyFBhDoARIsAMtHtZ4LCzQbTCtyM7OxvrxcaJ3C2rrOu9mCsjnQpR9yKnHbsmM-10i9QcEaAmWTEALw_wcB) | Am bagat codul cu ajutorul programului Arduino din calculator in placuta. | <img width=100 src="https://ardushop.ro/873-thickbox_default/placa-de-dezvoltare-uno-r3.jpg"> |
| 1 | [L298N](https://ardushop.ro/ro/electronica/84-l298n-punte-h-dubla-dual-h-bridge-motor-dcsteppe.html?gclid=Cj0KCQjw2NyFBhDoARIsAMtHtZ6Ia90bG6sEwpxudQ5gBPMimWwy8yikcUiLC3jpAglO9BN81ZfZGnQaAriwEALw_wcB) | Controleaza motoarele. | <img width=100 src="https://ardushop.ro/4686-thickbox_default/l298n-punte-h-dubla-dual-h-bridge-motor-dcsteppe.jpg"> |
| 4 | [Modul 4 senzori IR TCRT5000 ](https://www.amazon.com/Four-Way-Infrared-Tracking-Transmission-Avoidance/dp/B07Z455KZT) | Simte prezența unui obiect utilizând fasciculul IR reflectat de obiect.| <img width=100 src="https://images-na.ssl-images-amazon.com/images/I/51U-k-vu0-L.jpg"> |

<b>3. Implementare</b>

 Am inceput prin aranajarea pe placa a tuturor componentelor, apoi am continuat cu conectarea lor. Am conectat bateria, intrerupatorul si driver-ul L298N cu ajutorul firelor negre si rosii. Motoarele sunt, de asemenea, conectate la driver cu ajutorul unor fire rosii si negre.  Placa arduoino si driver-ul sunt conectate prin cabluri mama-tata si cabluri mama-mama. Senzorii si placa sunt conectati prin cabluri mama-tata. In cod se definesc pinii si vitezele motoarelor, se seteaza senzorii pe high sau low(negru sau alb), iar apoi se pun conditiile: robotul merge inainte, face stanga sau face dreapta.

<b>4. Schema electrica</b>

<img width=500 src="https://i.imgur.com/lupi1oi.png">


<b>5. Erori</b>
 
• Rotile robotului nu se invarteau cu aceeasi viteza.-> Am rezolvat problema din cod.

• Senzorii nu detectau culoarea neagra.-> Am umblat la sensibilitatea potentiometrului.

• Robotelul se oprea dupa anumite curbe.-> Am rezolvat problema din cod.

• Inversarea cablurilor.-> Am fost mai atenta la ordinea lor.


<b>6. Imagini</b>

•	fața

<img width=500 src="https://i.imgur.com/nJEEZnz.jpg">

•	sus

<img width=500 src="https://i.imgur.com/7yM1hXl.jpg">

•	jos  

<img width=500 src="https://i.imgur.com/Zw5GkpY.jpg">

•	lateral

<img width=500 src="https://i.imgur.com/Ipt6SHx.jpg">


<b>7. Video</b>

[![](https://i.imgur.com/2ir64jS.gif)](https://youtu.be/6OExOGbLgPk)

<b>8. Proiecte similare</b>
 
 [O masinuta cu 2 senzori IR si 4 motoare](https://www.pcbway.com/blog/Activities/Make_Arduino_Line_Follower_Robot_Car_with_Arduino_UNO__L298N_Motor_Driver__IR_Sensor.html)

 [O masinuta cu 2 senzori IR si 4 motoare](https://www.instructables.com/Line-Follower-Robot-Using-Arduino-Uno-and-L298N/)
 
 [O masinuta cu 3 senzori IR si 2 motoare](https://create.arduino.cc/projecthub/embeddedlab786/line-follower-robot-d22d06)
