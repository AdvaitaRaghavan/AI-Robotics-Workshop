

void setup(void) {
char *token;
char *mystring = "A,B,C";
const char *delimiter =",";

   Serial.begin(115200);

   token = strtok(mystring, delimiter);

   while (token != NULL) {
    if (token== "A"){
      token== "F";};
    if  (token== "B"){
      token== "G";};
    if (token== "C"){
      token== "H";};
    Serial.println(token);
    token=strtok(NULL, delimiter);
   }

}

void loop(void) {

}
