#include <iostream>
#include <cmath>
#include <cstdlib>

int liczbap,liczba,d=2,b,it=0;
int t[99999999],sfd[99999999];
int i=0,s=2,a,z=2,x,sf=0;

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
        s=2;
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
        if(b!=1){cout << endl << "Liczba nie jest sfeniczna";}
        if(b==1)
        {
            cout << liczbap << " = ";
            while(liczba>1)
            {
                if(liczba%t[i]==0)
                {
                    cout << t[i] << " * ";
                    liczba=liczba/t[i];
                    sfd[it]=t[i];
                    it++;
                    sf++;
                }
                else{i++;}
            }
            if(sfd[0]!=sfd[1]&&sfd[1]!=sfd[2])
            {
                if(sf==3)
                {
                    cout << endl << "Liczba jest sfeniczna" << endl;
                    i=1;
                }
            }
            if(i!=1){cout << endl << "Liczba nie jest sfeniczna" << endl;}
        }
    }
    else{cout << endl << "Podaj liczbe wieksza od 1!";}
    return 0;
}
