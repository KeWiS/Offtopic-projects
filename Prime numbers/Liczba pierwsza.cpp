#include <iostream>

using namespace std;

int main()
{
    int b=0;
    int s=2;
    int a;
    cin >> a;
    if(a<2)
    {
        cout << "Nieprawidlowa liczba, wprowadz liczbe wieksza od 1" << endl;
    }
    else
    {
        while(s*s<=a)
        {
            if(a%s==0)
            {
                cout << "Liczba nie jest pierwsza" << endl;
                s=s+a;
                b++;
            }
            s++;
        }
        if(b!=1)
        {
            cout << "Liczba jest pierwsza" << endl;
        }
    }
    return 0;
}
