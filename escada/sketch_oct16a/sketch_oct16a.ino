int a=0;
int sensorValue;
String n;
String m;
String o;
String p;
long q;
void  setup ()                     // ejecutar una vez, cuando se inicia el bosquejo
{
  Serial.begin (9600);    
  pinMode(2,INPUT);
  pinMode ( A0 , OUTPUT ) ;
  pinMode(3,INPUT);  // creó la biblioteca de serie a 9600 bps
}

void  loop ()   // ejecutar una y otra vez
{sensorValue = analogRead ( A0 ) ; 
//delay(1000);
Serial.read();
if (Serial.available()>0){
if (a==0){a=1;}else{a=0;}}else{
n="/"+String(sensorValue)+"/"+"0"+"/"+a+"/";
m="/"+String(sensorValue)+"/"+"11"+"/"+a+"/";
o="/"+String(sensorValue)+"/"+"10"+"/"+a+"/";
p="/"+String(sensorValue)+"/"+"12"+"/"+a+"/";
delay(200);
q=Serial.read();
if (q==20){
digitalWrite(12,HIGH);}
if (q==30){
digitalWrite(12,LOW);}

 if ((digitalRead(2)==HIGH)&&(digitalRead(3)==HIGH)){


   Serial.println (m);

}
if ((digitalRead(2)==LOW)&&(digitalRead(3)==LOW)){
 

   Serial.println (n);
   

}
if ((digitalRead(2)==HIGH)&&(digitalRead(3)==LOW)){

 
   Serial.println (o);

   Serial.println(sensorValue);
}
if ((digitalRead(2)==LOW)&&(digitalRead(3)==HIGH)){



   Serial.println (p);

   Serial.println(sensorValue);
}

}
}
