

void setup(void) {
char *token;
char *mystring = "A,B,C";
string1 =""
string2 =""
string3 =""
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
   string1 = "F";
   string2= "G"
   string3= "H"
   string2+= string3
   string1+= string2
   Serial.println(string1)
}

void loop(void) {

}
