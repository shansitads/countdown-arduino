
String time = "";
#define touchSensor 13

void setup() {
  pinMode(touchSensor, INPUT);//enter pin number for touch sensor
}


void time_calc(){
  
  String mind="0", secd="";
        
        for(int i=25;i>=0;i--){
            if(i<10)
                    mind="0";
                else
                    mind="";
                mind+=i;
            for(int j=59;j>=0;j--){
                if(j<10)
                    secd="0";
                else
                    secd="";
                secd+=j;
                time = mind+":"+secd;
                func_call();
                delay(1000);
            }
        }
  
}

void func_call(){
  char ch;
  
  for(int i=4;i>=0;i--){
    if(i==2){
      continue;
    }
    else if(i==4){
      ch=time.charAt(i);
      timedisplay(ch, , , , , , , , );//fill up the pin numbers -------------
    }
    else if(i==3){
      ch=time.charAt(i);
      timedisplay(ch, , , , , , , , );//fill up the pin numbers -------------
    }
    else if(i==1){
      ch=time.charAt(i);
      timedisplay(ch, , , , , , , , );//fill up the pin numbers -------------
    }
    else if(i==0){
      ch=time.charAt(i);
      timedisplay(ch, , , , , , , , );//fill up the pin numbers -------------
    }
    
  }
}


void time_display(char t, int p1, int p2, int p3, int p4, int p5, int p6, int p7){
  if(t == '0'){
    digitalWrite(p1, HIGH); //do NOT replace p1, p2, p3... over here
    digitalWrite(p2, HIGH);
    digitalWrite(p3, HIGH);
    digitalWrite(p4, LOW);
    digitalWrite(p5, HIGH);
    digitalWrite(p6, HIGH);
    digitalWrite(p7, HIGH);
  }
  //do it for all digits 0-9---------------
  
}

void loop() {
  
  int touch = digitalRead(touchSensor);
  boolean onoff = false; //false=off
  if (touch == HIGH){
    if(!onoff){
      time_calc();
      onoff= true;
    }
    else{
      digitalWrite(p2, LOW); // make sure that you are replacing p1, p2,p3... with the pin numbers in your circuit in this section
      digitalWrite(p3, LOW);
      digitalWrite(p3, LOW); //do this for all of the segments of each LED
      onoff=false;
    }
  }
}
