#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void sor_babel()
{
    int n,schowek,f=1;
    cout << "Podaj rozmiar tablicy do wypelnienia losowymi liczbami od 1 do 100: ";
    cin >> n;
    int * tab=new int[n];
    srand(time(NULL));
    for(int i=0; i<=n;i++){tab[i]=rand()%100+1;}
    cout << endl << "Przed sortowaniem: " << endl;
    int w=0;
    while(w<n){cout << tab[w] << endl;w++;}
    while(f>0)
    {
        f=0;
        for(int z=n-1;z>0;z--)
        {
            if(tab[z]<tab[z-1])
            {
                schowek=tab[z];
                tab[z]=tab[z-1];
                tab[z-1]=schowek;
                f++;
            }
        }
    }
    cout << endl << endl << "Po sortowaniu: " << endl;
    w=0;
    while(w<n)
    {
        cout << tab[w] << endl;
        w++;
    }
    delete [] tab;
}

int main()
{
    sor_babel();
    return 0;
}
