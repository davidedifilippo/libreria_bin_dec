#include <string>
#include <cmath>

using namespace std;

//calcolo del valore decimale

unsigned int bin_Dec(string s)
{ int somma = 0;
  
  for (int i = 0; i<8; i++)
  {
   //cout << s[i]-48;
   somma = somma + (s[7-i]-48)*pow(2, i);
 
   }
return somma; 
}
