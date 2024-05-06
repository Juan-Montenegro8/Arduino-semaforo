
int ledV =6;
int ledA =13;
int ledR =12;


void setup() {
  pinMode (ledV,OUTPUT);
  pinMode (ledA,OUTPUT);
  pinMode (ledR,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite (ledV, HIGH);
  delay (3000);
  digitalWrite (ledV, LOW);
  digitalWrite (ledA, HIGH);
  delay (1000);
  digitalWrite (ledA, LOW);
  digitalWrite (ledR, HIGH);
  delay (3000);
  digitalWrite (ledR, LOW);
  digitalWrite (ledR, HIGH);
  delay (4000);
  digitalWrite (ledR, LOW);
  digitalWrite (ledA, HIGH);
  delay (1000);
  digitalWrite (ledA, LOW);
  
}
