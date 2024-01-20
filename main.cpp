#include <iostream>

using namespace std;

/*
Creare due array di tipo "string" di 10 elementi: uno chiamato nome e uno cognome
Caricare i vettori con i nomi i cognomi di 10 studenti.
Dare un errore se l'utente prova ad inserire l'undicesimo studente.

Creare un menu con le seguenti opzioni:
    stampare le informazioni degli studenti dal primo al ultimo studente inserito
    stampare le informazioni degli studenti del ultimo al primo studente inserito
*/

int main(int argc, char const *argv[])
{

    string arrayStr[10];


    for (int i = 0; i < 5; i++)
    {
        cout << ": ";
        cin >> arrayStr[i];
    }

    // fortemente sconsigliato l'utilizzo in implementazioni reali (utilizzare l'opzione sopra)
    for (int i = 5; i < 10; i++)
    {
        printf(": ");
        string prova(100, ' ');
        scanf("%99s", &prova[0]);
        arrayStr[i] = prova;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << arrayStr[i] << endl;
    }
    

    return 0;
}
