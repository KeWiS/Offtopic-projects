#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int liczba;
int wynik;
string czworkowa, str;

int main()
{
    cout << "Wprowadz liczbe: ";
    cin >> liczba;

    while(liczba>0)
    {
        wynik=liczba%4;
        liczba=liczba/4;
        itoa(wynik, (char*)czworkowa.c_str(), 10);
        str+=czworkowa.c_str();
    }
    size_t size=str.size();
    string nowy;
    for(size_t i=0; i<size; ++i)
    {
        nowy+=str[size-i-1];
    }

    cout << nowy;
    return 0;
}
