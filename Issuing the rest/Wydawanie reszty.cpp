#include <iostream>
#include <cmath>

using namespace std;

int cena,wplata,reszta,s[9],p[9],i=0,c=0;

int main()
{
    cout << "Podaj cene: ";
    cin >> cena;
    cout << "Podaj kwote wplaty: ";
    cin >> wplata;
    if(wplata>cena)
    {
        reszta=wplata-cena;
        cout << "Reszta wynosi: " << reszta << " zl" << endl;

        s[0]=500;
        s[1]=200;
        s[2]=100;
        s[3]=50;
        s[4]=20;
        s[5]=10;
        s[6]=5;
        s[7]=2;
        s[8]=1;

        //*DWIE PÊTLE (two loops)

        //while(c<9)
        //{
            //while(reszta>=s[i])
            //{
                //p[i]=p[i]+1;
                //reszta=reszta-s[i];
            //}
            //c++;
            //i++;
        //}

        //*JEDNA PÊTLA (one loop)

         while(c<1)
        {
            if(reszta>0)
            {
                if(reszta>=s[i])
                {
                    p[i]=p[i]+1;
                    reszta=reszta-s[i];
                }
                else
                {
                    i++;
                }
            }
            else
            {
                break;
            }
        }

        cout << "Banknoty 500zl: " << p[0] << endl;
        cout << "Banknoty 200zl: " << p[1] << endl;
        cout << "Banknoty 100zl: " << p[2] << endl;
        cout << "Banknoty 50zl: " << p[3] << endl;
        cout << "Banknoty 20zl: " << p[4] << endl;
        cout << "Banknoty 10zl: " << p[5] << endl;
        cout << "Monety 5zl: " << p[6] << endl;
        cout << "Monety 2zl: " << p[7] << endl;
        cout << "Monety 1zl: " << p[8];
    }
    else if(wplata==cena){cout << "Reszta wynosi: 0 zl";}
    else if(wplata<cena){cout << "Wplata nie pokryla ceny!";}
    return 0;
}
