#include <iostream>
#include <cmath>
#include <cstdlib>

int a,z=2,s=2,x,i=0,d=2,b,ktora;
int liczba=1000,it=0,sf=0;
int * t=new int[1000];
int * sfd=new int[99999999];

using namespace std;

int main()
{
    cout << "Ktora liczbe sfeniczna chcesz wyznaczyc: ";
    cin >> ktora;
    cout << endl;
    while(1000>z)
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
    int ii=0,liczbap=30;
    while(ii<ktora)
    {
        liczba=liczbap;
        it=0;
        i=0;
        b=0;
        d=2;
        sf=0;
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
        }
        if(b==1)
        {
            while(liczba>1)
            {
                if(liczba%t[i]==0)
                {
                    liczba=liczba/t[i];
                    sfd[it]=t[i];
                    it++;
                    sf++;
                }
                else{i++;}
            }
            it=0;
            if(sfd[it]!=sfd[it+1]&&sfd[it+1]!=sfd[it+2])
            {
                if(sf==3)
                {
                    ii++;
                    sf=0;
                }
            }
        }
        liczbap++;
    }
    cout << ktora << " liczba sfeniczna to: " << liczbap-1 << endl;
    delete [] t;
    delete [] sfd;
    return 0;
}
