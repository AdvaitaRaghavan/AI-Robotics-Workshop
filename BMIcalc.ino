
int weight = 0;
int height = 0;
int chkwt = 0;
void setup() 
  { Serial.begin(115200); 
   delay(1000);
   Serial.println("What is your height?");
   }
void loop(){
 while (Serial.available() == 0) {     // Wait for User to Input Data   
  }   
  height = Serial.parseInt(); //Read the data the user has input
    Serial.print(height);
     delay(3000);
  Serial.println("What is your weight?");
  Serial.read();
 while (Serial.available() == 0) {     // Wait for User to Input Data   
    }   
    weight = Serial.parseInt(); //Read the data the user has input
    Serial.print(weight);
    int BMI= weight/(height^2);
    Serial.println("Your BMI is "); 
    Serial.print(BMI);
      

      if (BMI < 16) {
        Serial.println("You are severely underweight!");
      }
      else if (16< BMI < 18.4) {
        Serial.println("You are underweight!");
      }
      else if (18.5< BMI < 24.9) {
        Serial.println("Your weight is normal!!");
      }
      else if (25.0< BMI< 29.9) {
        Serial.println("You are overweight");
      }
      else if (30.0< BMI< 34.9) {
        Serial.println("You are moderately obese");
      }
      else if (35.0< BMI< 39.9) {
        Serial.println("You are severley obese");
      }
      else if (BMI > 40) {
        Serial.println("You are morbidly obese");
      }
      
      Serial.println("");
      Serial.println("What is your height?");
}



                    
                
