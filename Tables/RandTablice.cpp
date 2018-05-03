#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace std;

int * tab=new int[10];
int maks,mini;
int s;

int main()
{
    srand(time(NULL));
    for(int i=0; i<10;i++)
    {
        tab[i]=rand()%30+1;
        cout << tab[i] << endl;
        s+=tab[i];
        if(i==0){maks=mini=tab[0];}
        if(i>0)
        {
            if(tab[i]>maks){maks=tab[i];}
            if(tab[i]<mini){mini=tab[i];}
        }
    }
    cout << endl << "Pierwsza liczba: " << tab[0] << endl;
    cout << "Ostatnia liczba: " << tab[9] << endl;
    cout << "Suma wszystkich elementow tablicy: " << s << endl;
    cout << "Maksymalny element: " << maks << endl;
    cout << "Minimalny element: " << mini << endl;

    delete [] tab;
    return 0;
}
