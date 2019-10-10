/*
 *This code is created for running "Intelligent Nightt Light 2080Ti" 
 *Created by Philip, Desmond, Eric, Arthur
 *Code fnished in 2019 Oct, 10
 *Last tested at 19:20 2019 Oct, 10
 *This code worth 100% of the asignment
 *GG~
 */




const int trigPin = 10;                                //output for the sensor
const int echoPin = 9;                                 //recive info from the sencor
int led1 = 2;                                          //out put electricity for led1
int led2 = 3;                                          //out put electricity for led2

boolean ledstate = false;                              //to tell the state of leds (on/off)
int countdown = 0;                                     //30mins (30 sec in test mode) limit for turning on
int limit = 0;                                         //cant turn off in 10 secs after you turn on

long duration;                                         //time for setup the sencor
int distance;                                          //get the distance(info) from sencor

void setup() {
  // put your setup code here, to run once:
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  Serial.begin(1200);

}

void loop() {
  
  //sensor works once between 2 microsec
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);


  duration = pulseIn(echoPin, HIGH);
  distance = duration*0.034/2;
  
  //infor(data) that you can get
  Serial.print("Distance: ");
  Serial.println(distance);
  Serial.print("ledstate: ");
  Serial.println(ledstate);
  Serial.print("countdown: ");
  Serial.println(countdown);
  Serial.print("limit: ");
  Serial.println(limit);

  
  //PROCESS
  if(distance <= 10 & ledstate == false){
    digitalWrite(led1, HIGH);
    ledstate = true;
  }                                                //if the light is off and you are 3cm from the light, it turns on
  
  if (ledstate == true){
    digitalWrite(led2, HIGH);                      //the second led turns on together
    limit = limit+1;                               //start the timer 10 sec for turn off limit
    countdown = countdown+1;                       //start the timer 30 sec for turn off auto
    if (countdown == 30){
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      ledstate = false;                            //lights turn off after 30 sec
      countdown = 0;
      limit = 0;                                   //reset coutdown and limit
   }
  }

    if (distance <= 10 & ledstate == true & limit >= 10){
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);                     //if you are in 10cm after 10 sec, you can turn off the leds
      ledstate = false;
      countdown = 0;
      limit = 0;                                   //reset coutdown and limit 
  }
}
//CODE END
//PLS GIVE US 10000 OUT OF 100 FOR THIS CODE, TY!
