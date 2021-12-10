#include <string.h>

std::string dec_bin(int numero)
{
  std::string s = "00000000";
  int resto;
  
  for(int i= 7; i>=0; i--){ 
    resto = numero % 2;
    numero = numero /2;
    s[i] = resto + 48;
    }

return s;
}
