int ledred1 = 13; 
int ledyellow1 = 12; 
int ledgreen1 = 11; 
int ledred2 = 7; 
int ledyellow2 = 6; 
int ledgreen2 = 5; 
int crosswalk = 2; 
void setup() 
{ 
pinMode(ledred1, OUTPUT); 
pinMode(ledyellow1, OUTPUT); 
pinMode(ledgreen1, OUTPUT); 
pinMode(ledred2, OUTPUT); 
pinMode(ledyellow2, OUTPUT); 
pinMode(ledgreen2, OUTPUT); 
pinMode(crosswalk, OUTPUT); 
} 
void loop() 
{ 
digitalWrite(7, HIGH); 
digitalWrite(11, HIGH); 
delay(1500); // Wait for 1000 millisecond(s) digitalWrite(11, LOW); 
delay(1000); // Wait for 1000 millisecond(s) digitalWrite(12, HIGH); 
delay(1000); // Wait for 1000 millisecond(s) digitalWrite(12, LOW); 
delay(1000); // Wait for 1000 millisecond(s) digitalWrite(13, HIGH); 
delay(1500); // Wait for 1000 millisecond(s) digitalWrite(13, LOW); 
delay(0000); // Wait for 1000 millisecond(s) digitalWrite(7, LOW); 
digitalWrite(13, HIGH); 
digitalWrite(5, HIGH);
delay(1500); // Wait for 1000 millisecond(s) digitalWrite(5, LOW); 
delay(1000); // Wait for 1000 millisecond(s) digitalWrite(6, HIGH); 
delay(1000); // Wait for 1000 millisecond(s) digitalWrite(6, LOW); 
delay(1000); // Wait for 1000 millisecond(s) digitalWrite(7, HIGH); 
digitalWrite(2, HIGH); 
delay(30000); 
digitalWrite(2, LOW); 
digitalWrite(7, LOW); 
delay(0000); // Wait for 1000 millisecond(s) digitalWrite(13, LOW); 
}
