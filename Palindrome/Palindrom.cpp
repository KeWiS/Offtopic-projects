#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>

using namespace std;

void sprawdz()
{
    bool z=true;
    int i,j,t,y=0;
    string s;
    cout << "Podaj slowo: ";
    getline(cin,s);
    transform(s.begin(),s.end(),s.begin(),::tolower);
    for(i=0,j=s.length()-1;i<=j;i++,j--)
    {
        if(s[i]==' '){i++;}
        if(s[j]==' '){j--;}
        if(s[i]!=s[j])
        {
            z=false;
            break;
        }
    }
    if(z==true){cout << endl <<  "Palindrom" << endl;}
    else{cout << endl << "Nie palindrom" << endl;}
}

int main()
{
    for(;;)
    {
        sprawdz();
        getchar();
        system("cls");
    }
    return 0;
}
