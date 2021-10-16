
void setup() {
pinMode(A0,OUTPUT);
pinMode(A1,OUTPUT);
pinMode(A2,OUTPUT);
pinMode(A3,OUTPUT);
for(int i=0;i<14;i++){
  pinMode(i,OUTPUT);
}

digitalWrite(A0,LOW);
digitalWrite(A1,LOW);

}





int counter = 0;




void loop() {

counter++;
digitalWrite(A2,LOW);
digitalWrite(A3,LOW);


if(counter == 100)
exit(0);

if (isPrime(counter)==1){
  show(2,counter % 10);
  show(1, counter / 10);
  if(counter > 50)
  digitalWrite(A3,HIGH);
  else
  digitalWrite(A2,HIGH);
}
delay(300);
}




int isPrime(int number){
  if(number>=2){
  for (int i = 2; i < (sqrt(number) + 1);i++){
        if (number % i == 0 && i!=number)
           return 0;
  }
  }
  else return 0;
  
  return 1;
}






void show(int seg, int num){
if(seg ==1){


switch(num){

case 0:
digitalWrite(0,HIGH);
digitalWrite(1,HIGH);
digitalWrite(2,HIGH);
digitalWrite(3,HIGH);
digitalWrite(4,HIGH);
digitalWrite(5,HIGH);
digitalWrite(6,LOW);

break;
case 1:
digitalWrite(0,LOW);
digitalWrite(1,HIGH);
digitalWrite(2,HIGH);
digitalWrite(3,LOW);
digitalWrite(4,LOW);
digitalWrite(5,LOW);
digitalWrite(6,LOW);
break;

case 2:
digitalWrite(0,HIGH);
digitalWrite(1,HIGH);
digitalWrite(6,HIGH);
digitalWrite(4,HIGH);
digitalWrite(3,HIGH);

digitalWrite(2,LOW);
digitalWrite(5,LOW);

break;

case 3:
digitalWrite(0,HIGH);
digitalWrite(1,HIGH);
digitalWrite(6,HIGH);
digitalWrite(2,HIGH);
digitalWrite(3,HIGH);

digitalWrite(4,LOW);
digitalWrite(5,LOW);

break;


case 4:
digitalWrite(0,LOW);
digitalWrite(5,HIGH);
digitalWrite(6,HIGH);
digitalWrite(1,HIGH);
digitalWrite(2,HIGH);
digitalWrite(3,LOW);
digitalWrite(4,LOW);

break;



case 5:
digitalWrite(0,HIGH);
digitalWrite(5,HIGH);
digitalWrite(6,HIGH);
digitalWrite(2,HIGH);
digitalWrite(3,HIGH);
digitalWrite(4,LOW);
digitalWrite(1,LOW);

break;
case 6:
digitalWrite(0,HIGH);
digitalWrite(5,HIGH);
digitalWrite(6,HIGH);
digitalWrite(4,HIGH);
digitalWrite(3,HIGH);
digitalWrite(2,HIGH);
digitalWrite(1,LOW);



break;

case 7:
digitalWrite(0,HIGH);
digitalWrite(1,HIGH);
digitalWrite(2,HIGH);
digitalWrite(3,LOW);
digitalWrite(4,LOW);
digitalWrite(5,LOW);
digitalWrite(6,LOW);

break;
case 8:
digitalWrite(0,HIGH);
digitalWrite(1,HIGH);
digitalWrite(2,HIGH);
digitalWrite(3,HIGH);
digitalWrite(4,HIGH);
digitalWrite(5,HIGH);
digitalWrite(6,HIGH);
break;
case 9:
digitalWrite(0,HIGH);
digitalWrite(5,HIGH);
digitalWrite(1,HIGH);
digitalWrite(6,HIGH);
digitalWrite(2,HIGH);
digitalWrite(3,HIGH);
digitalWrite(4,LOW);

break;

}


  
}

if(seg==2){

switch(num){

case 0:
digitalWrite(7,HIGH);
digitalWrite(8,HIGH);
digitalWrite(9,HIGH);
digitalWrite(10,HIGH);
digitalWrite(11,HIGH);
digitalWrite(12,HIGH);
digitalWrite(13,LOW);


break;
case 1:
digitalWrite(7,LOW);
digitalWrite(8,HIGH);
digitalWrite(9,HIGH);
digitalWrite(10,LOW);
digitalWrite(11,LOW);
digitalWrite(12,LOW);
digitalWrite(13,LOW);
break;

case 2:
digitalWrite(7,HIGH);
digitalWrite(8,HIGH);
digitalWrite(13,HIGH);
digitalWrite(11,HIGH);
digitalWrite(10,HIGH);
digitalWrite(9,LOW);
digitalWrite(12,LOW);

break;

case 3:
digitalWrite(7,HIGH);
digitalWrite(8,HIGH);
digitalWrite(13,HIGH);
digitalWrite(9,HIGH);
digitalWrite(10,HIGH);
digitalWrite(11,LOW);
digitalWrite(12,LOW);

break;

case 4:
digitalWrite(7,LOW);
digitalWrite(12,HIGH);
digitalWrite(13,HIGH);
digitalWrite(8,HIGH);
digitalWrite(9,HIGH);
digitalWrite(10,LOW);
digitalWrite(11,LOW);

break;



case 5:
digitalWrite(7,HIGH);
digitalWrite(12,HIGH);
digitalWrite(13,HIGH);
digitalWrite(9,HIGH);
digitalWrite(10,HIGH);
digitalWrite(11,LOW);
digitalWrite(8,LOW);

break;

case 6:
digitalWrite(7,HIGH);
digitalWrite(12,HIGH);
digitalWrite(13,HIGH);
digitalWrite(11,HIGH);
digitalWrite(10,HIGH);
digitalWrite(9,HIGH);
digitalWrite(8,LOW);



break;

case 7:
digitalWrite(7,HIGH);
digitalWrite(8,HIGH);
digitalWrite(9,HIGH);
digitalWrite(10,LOW);
digitalWrite(11,LOW);
digitalWrite(12,LOW);
digitalWrite(13,LOW);

break;

case 8:
digitalWrite(7,HIGH);
digitalWrite(8,HIGH);
digitalWrite(9,HIGH);
digitalWrite(10,HIGH);
digitalWrite(11,HIGH);
digitalWrite(12,HIGH);
digitalWrite(13,HIGH);
break;

case 9:
digitalWrite(7,HIGH);
digitalWrite(9,HIGH);
digitalWrite(8,HIGH);
digitalWrite(13,HIGH);
digitalWrite(10,HIGH);
digitalWrite(12,HIGH);
digitalWrite(11,LOW);

break;

}


  
}



}
