// تعريف المنافذ الخاصة بالمحركات
int IN1 = 5;
int IN2 = 6;
int IN3 = 9;
int IN4 = 10;

void setup() {
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
}

// دوال تجعل التحكم أسهل
void forward() {     // التحرك للأمام
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void backward() {    // للخلف
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

void rightTurn() {   // دوران يمين
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);

  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void leftTurn() {    // دوران يسار
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

void stopCar() {     // توقف
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}

void loop() {
  forward();    // تحرك للأمام
  delay(2000);  // لمدة 2 ثانية

  stopCar();
  delay(500);

  leftTurn();   // التفاف يسار
  delay(1000);

  stopCar();
  delay(500);

  backward();   // العودة للخلف
  delay(2000);

  stopCar();
  delay(1000);
}
