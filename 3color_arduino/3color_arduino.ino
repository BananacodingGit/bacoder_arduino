/*
Create by BananaCoding
WebSite: bananacoding.ac
CEO: 최은희
작성자: 김정준, 김용진
e-mail: youngjin.kim@bananacoding.ac
gitHub: https://github.com/BananacodingGit
*/

int green_led = 12;
int yellow_led = 10;
int red_led = 8;

void setup() {
  
  pinMode(red_led, OUTPUT);
  pinMode(yellow_led, OUTPUT);
  pinMode(green_led, OUTPUT);
  
}

void loop() {
  
  digitalWrite(green_led, HIGH);
  delay(2000);
  digitalWrite(green_led, LOW);

  digitalWrite(yellow_led, HIGH);
  delay(400);
  digitalWrite(yellow_led, LOW);

  digitalWrite(red_led, HIGH);
  delay(2000);
  digitalWrite(red_led, LOW);

  digitalWrite(yellow_led, HIGH);
  delay(400);
  digitalWrite(yellow_led, LOW);

}
