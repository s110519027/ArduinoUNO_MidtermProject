/*設置每個按鍵的輸入端口號*/
int inputPinC = 13;
int inputPinD = 12;
int inputPinE = 11;
int inputPinF = 10;
int inputPinG = 9;
int inputPinA = 7;
int inputPinS = 6;
/*只用6了個按鈕,所以只定義了7個inputPin可以添加*/
/*設置蜂鳴器輸出端口號*/
int BuzzerPin = 3;

void setup() {
  // put your setup code here, to run once:
   /*設置輸入輸出*/
  pinMode(inputPinC, INPUT);
  pinMode(inputPinD, INPUT);
  pinMode(inputPinE, INPUT);
  pinMode(inputPinF, INPUT);
  pinMode(inputPinG, INPUT);
  pinMode(inputPinA, INPUT);
  pinMode(inputPinS, INPUT);
  pinMode(BuzzerPin, OUTPUT);
}


void loop() {
  // put your main code here, to run repeatedly:
 /*讀取端口值到val* */
  int valC = digitalRead(inputPinC);
  int valD = digitalRead(inputPinD);
  int valE = digitalRead(inputPinE);
  int valF = digitalRead(inputPinF);
  int valG = digitalRead(inputPinG);
  int valA = digitalRead(inputPinA);
  int valS = digitalRead(inputPinS);
    digitalWrite(BuzzerPin, LOW);
/*按鍵是否按下 val*,若按下發聲*/
      if (valC == HIGH){
/*發出C音*/
        digitalWrite(BuzzerPin, HIGH);
        delayMicroseconds(1915);
        digitalWrite(BuzzerPin, LOW);
        delayMicroseconds(1915);
  }
      else if (valD == HIGH){
/*發出D音*/
        digitalWrite(BuzzerPin, HIGH);
        delayMicroseconds(1700);
        digitalWrite(BuzzerPin, LOW);
        delayMicroseconds(1700);
  }
      else if (valE == HIGH){
/*發出E音*/
        digitalWrite(BuzzerPin, HIGH);
        delayMicroseconds(1519);
        digitalWrite(BuzzerPin, LOW);
        delayMicroseconds(1519);
  }

      else if (valF == HIGH){
/*發出F音*/
        digitalWrite(BuzzerPin, HIGH);
        delayMicroseconds(1432);
        digitalWrite(BuzzerPin, LOW);
        delayMicroseconds(1432);
  }
      else if (valG == HIGH){
/*發出G音*/
        digitalWrite(BuzzerPin, HIGH);
        delayMicroseconds(1275);
        digitalWrite(BuzzerPin, LOW);
        delayMicroseconds(1275);
  }

      else if (valA == HIGH){
/*發出A音*/
        digitalWrite(BuzzerPin, HIGH);
        delayMicroseconds(1136);
        digitalWrite(BuzzerPin, LOW);
        delayMicroseconds(1136);
  }
      else if (valS == HIGH){
/*發出S音*/
        digitalWrite(BuzzerPin, HIGH);
        delayMicroseconds(1025);
        digitalWrite(BuzzerPin, LOW);
        delayMicroseconds(1025);
  }
  
/*不發音*/
else digitalWrite(BuzzerPin, LOW);
}
