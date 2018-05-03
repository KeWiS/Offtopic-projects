#include <iostream>
#include <cmath>

using namespace std;

int a;
int b=2,c=0,c2=0,d=1,d2=1,s=0,s2=0;

int main()
{
    cin >> a;
    if(a>1)
    {
        while(c<1)
        {
            if(a/2>=d)
            {
                if(a%d==0)
                {
                    s=s+d;
                    d++;
                }
                else{d++;}
            }
            else{c=c+10;}
        }

        b=s-1;
        while(c2<1)
        {
            if(b/2>=d2)
            {
                if(b%d2==0)
                {
                    s2=s2+d2;
                    d2++;
                }
                else{d2++;}
            }
            else{c2=c2+10;}
        }
        if(s2-1==a){cout << b;}
        else{cout << "Nie";}
    }
    else{cout << "Nieprawidlowa liczba.";}

    return 0;
}
