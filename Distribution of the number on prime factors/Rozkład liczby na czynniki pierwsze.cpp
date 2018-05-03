#include <iostream>
#include <cmath>
#include <cstdlib>

int liczbap,liczba,d=2,b;
int t[99999999];
int i=0,s=2,a,z=2,x;

using namespace std;

int main()
{
    cout << "Podaj liczbe: ";
    cin >> liczba;
    liczbap=liczba;
    while(liczba>z)
    {
        a=z;
        x=0;
        while(s*s<=a)
        {
            if(a%s==0)
            {
                s=s+a;
                x++;
            }
            s++;
        }
        if(x!=1)
        {
            t[i]=a;
            i++;
        }
        z++;
    }
    i=0;
    if(liczba>1)
    {
        while(d*d<=liczba)
        {
            if(liczba%d==0)
            {
                d=d+liczba;
                b++;
            }
            d++;
        }
        if(b!=1){cout << endl << "Liczba jest pierwsza";}
        if(b==1)
        {
            cout << liczbap << " = ";
            while(liczba>1)
            {
                if(liczba%t[i]==0)
                {
                    cout << t[i] << " * ";
                    liczba=liczba/t[i];
                }
                else{i++;}
            }
        }
    }
    else{cout << endl << "Podaj liczbe wieksza od 1!";}
    return 0;
}
