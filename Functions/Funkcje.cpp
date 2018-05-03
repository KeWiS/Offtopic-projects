#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

unsigned int pole(int a=0)
{
    cout << "Podaj a: ";
    cin >> a;
    cout << endl;
    if(a>0){cout << "Pole wynosi: " << a*a << endl;}
    else{cout << "Podaj prawidlowa liczbe!" << endl;}
    return a*a;
}

int kalkulator(int a=0,int b=1)
{
    int w;
    cout << "Podaj a: ";
    cin >> a;
    cout << endl << "Podaj b: ";
    cin >> b;
    system("cls");
    cout << "Co chcesz zrobic?" << endl;
    cout << "1. Dodawanie\n2. Odejmowanie\n3. Mnozenie\n4. Dzielenie\n4. Modulo\n5. Potega\n6. Wyjscie" << endl;
    cout << endl << "Twoj wybor: ";
    cin >> w;
    cout << endl;
    switch(w)
    {
        case 1:
            cout << a+b << endl;
            break;
        case 2:
            cout << a-b << endl;
            break;
        case 3:
            cout << a*b << endl;
            break;
        case 4:
            cout << (float)a/b << endl;
            break;
        case 5:
            cout << pow(a,b) << endl;
            break;
        case 6:
            return 0;
            break;
        default:
            return 0;
            break;
    }
}

void przedzial(int a=0)
{
    cin >> a;
    cout << endl;
    if(a>=0&&a<=20){cout << "Liczba nalezy do przedzialu" << endl;}
    else{cout << "Liczba nie nalezy do przedzialu" << endl;}
}

int suma_przedzial(int a=0,int b=0)
{
    int z=0;
    cin >> a >> b;
    if(a>b)
    {
        while(a>=b)
        {
            z+=b;
            b++;
        }
    }
    else if(b>a)
    {
        while(b>=a)
        {
            z+=a;
            a++;
        }
    }
    cout << endl << "Suma wynosi: " << z << endl;
    return z;
}

int main()
{
    //pole();
    //for(;;)
    //{
        //kalkulator();
    //}
    //przedzial();
    suma_przedzial();
    return 0;
}
