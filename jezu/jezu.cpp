#include <iostream>

using namespace std;

int main()
{   
    //tworzy zmienne typu long f, f0 i f1
    unsigned long long f, f0, f1;
    
    // zmienne INT "i oraz "n"
    int i, n;


    // zmienna f0 rowna sie 0
    // zmienna f1 rowna sie 1
    f0 = 0;
    f1 = 1;

    cout << "Ile wyrazow ciagu wypisac: ";


    // cin: tutaj wprowadzamy liczbe ktora oznacza, ile iteracji funkcji for zrobic i ile liczb wypisac
    // liczba ta zapisana jest w zmiennej N
    cin >> n;


    // petla for najpierw sprawdza JEDNORAZOWO czy zmienna i jest rowna zero (wyknane raz na samym poczatku, potem nigdy)
    // potem czy zmienna i jest mniejsza lub rowna n (to jest warunek wykonywania petli 
    // a potem dodaje do zmiennej i jeden przy uzyciu ++ (to jest wykonywane na sam koniec)
    for (i = 0; i <= n; i++) {
        // jezeli zmienna i jest wieksza od 1
        if (i > 1)
        {
            // zmienna f rowna sie suma zmiennych f0 i f1 
            f = f0 + f1;

            // zmienna f0 rowna sie zmienna f1
            f0 = f1;

            // zmienna f1 rowna sie zmienna f
            f1 = f;
        }
        // jezeli warunek nie zostal spelniony, zmienna f rowna sie i
        else f = i;

        // wyswietl zmienna f
        cout << f << endl;
    }

    return(0);
}