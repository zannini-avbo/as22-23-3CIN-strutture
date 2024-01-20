#include <iostream>

using namespace std;

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
