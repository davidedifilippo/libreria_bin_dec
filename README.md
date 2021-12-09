# libreria bin_dec

La funzione converte una stringa binaria di 8 bit nel corrispondente valore decimale. Copiare il codice in un file ed eseguire un test con il codice main suggerito

# Programma main

Nel programma main includere la libreria

    #include "bin_dec.h"

Poi utilizzarla per convertire una stringa inserita da utente:

    int main() 
    {
    string s = "10000000";

    cout <<  bin_Dec(s);
    
    return 0;
    }

Effettuare vari test con codici binari 

        11110000 -> 240
     
        00001111 -> 15


