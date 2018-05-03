#include <iostream>
#include <string>
#include <stdio.h>
#include <fstream>

using namespace std;

string Przestepny;
int Dzien;
int Praca;
int i;

int main()
{
    fstream Plik;
    Plik.open("Rozpiska.txt", ios::out | ios::app);

    cout << "Przyklad: 1 stycznia = 1, 5 stycznia = 5." << endl;
    cout << endl;

    cout << "Prosze o podanie pierwszego dnia w roku, w ktorym uzytkownik idzie do pracy: ";
    cin >> Dzien;
    cout << endl;

    Praca = Dzien;

    cout << "Czy jest to rok przestepny? (TAK/NIE): ";
    cin >> Przestepny;
    cout << endl;

    if(Przestepny == "TAK" || Przestepny == "Tak" || Przestepny == "tak")
    {
        cout << "Dni, w ktore uzytkownik idzie do pracy:" << endl;
        Plik << "Dni pracy:" << endl;

        for(Dzien; Dzien <= 31; Dzien = Dzien + 3)
        {
            cout << Dzien << ". Stycznia" << endl;
            Plik << Dzien << ". Stycznia" << endl;
            Plik << endl;
        }
        cout << endl;

        Praca = 31 - Dzien + 3;

        if(Praca == 2)
        {
            for(Dzien = 1; Dzien <= 29; Dzien = Dzien + 3)
            {
                cout << Dzien << ". Lutego" << endl;
                Plik << Dzien << ". Lutego" << endl;
                Plik << endl;
            }
        }
        else if(Praca == 1)
        {
            for(Dzien = 2; Dzien <= 29; Dzien = Dzien + 3)
            {
                cout << Dzien << ". Lutego" << endl;
                Plik << Dzien << ". Lutego" << endl;
                Plik << endl;
            }
        }
        else
        {
            for(Dzien = 3; Dzien <= 29; Dzien = Dzien + 3)
            {
                cout << Dzien << ". Lutego" << endl;
                Plik << Dzien << ". Lutego" << endl;
                Plik << endl;
            }
        }
        cout << endl;

        Praca = 29 - Dzien + 3;

        if(Praca == 2)
        {
            for(Dzien = 1;Dzien <= 31; Dzien = Dzien + 3)
            {
                cout << Dzien << ". Marca" << endl;
                Plik << Dzien << ". Marca" << endl;
                Plik << endl;
            }
        }
        else if(Praca == 1)
        {
            for(Dzien = 2; Dzien <= 31; Dzien = Dzien + 3)
            {
                cout << Dzien << ". Marca" << endl;
                Plik << Dzien << ". Marca" << endl;
                Plik << endl;
            }
        }
        else
        {
            for(Dzien = 3; Dzien <= 31; Dzien = Dzien + 3)
            {
                cout << Dzien << ". Marca" << endl;
                Plik << Dzien << ". Marca" << endl;
                Plik << endl;
            }
        }
        cout << endl;

        Praca = 31 - Dzien + 3;

        if(Praca == 2)
        {
            for(Dzien = 1; Dzien <= 30; Dzien = Dzien + 3)
            {
                cout << Dzien << ". Kwietnia" << endl;
                Plik << Dzien << ". Kwietnia" << endl;
                Plik << endl;
            }
        }
        else if(Praca == 1)
        {
            for(Dzien = 2; Dzien <= 30; Dzien = Dzien + 3)
            {
                cout << Dzien << ". Kwietnia" << endl;
                Plik << Dzien << ". Kwietnia" << endl;
                Plik << endl;
            }
        }
        else
        {
            for(Dzien = 3; Dzien <= 30; Dzien = Dzien + 3)
            {
                cout << Dzien << ". Kwietnia" << endl;
                Plik << Dzien << ". Kwietnia" << endl;
                Plik << endl;
            }
        }
        cout << endl;

        Praca = 30 - Dzien + 3;

        if(Praca == 2)
        {
            for(Dzien = 1; Dzien <= 31; Dzien = Dzien + 3)
            {
                cout << Dzien << ". Maja" << endl;
                Plik << Dzien << ". Maja" << endl;
                Plik << endl;
            }
        }
        else if(Praca == 1)
        {
            for(Dzien = 2; Dzien <= 31; Dzien = Dzien + 3)
            {
                cout << Dzien << ". Maja" << endl;
                Plik << Dzien << ". Maja" << endl;
                Plik << endl;
                }
            }
        else
        {
            for(Dzien = 3; Dzien <= 31; Dzien = Dzien + 3)
            {
                cout << Dzien << ". Maja" << endl;
                Plik << Dzien << ". Maja" << endl;
                Plik << endl;
            }
        }
        cout << endl;

        Praca = 31 - Dzien + 3;

        if(Praca == 2)
        {
            for(Dzien = 1; Dzien <= 30; Dzien = Dzien + 3)
            {
                cout << Dzien << ". Czerwca" << endl;
                Plik << Dzien << ". Czerwca" << endl;
                Plik << endl;
            }
        }
        else if(Praca == 1)
        {
            for(Dzien = 2; Dzien <= 30; Dzien = Dzien + 3)
            {
                cout << Dzien << ". Czerwca" << endl;
                Plik << Dzien << ". Czerwca" << endl;
                Plik << endl;
            }
        }
        else
        {
            for(Dzien = 3; Dzien <= 30; Dzien = Dzien + 3)
            {
                cout << Dzien << ". Czerwca" << endl;
                Plik << Dzien << ". Czerwca" << endl;
                Plik << endl;
            }
        }
        cout << endl;

        Praca = 30 - Dzien + 3;

        if(Praca == 2)
        {
            for(Dzien = 1; Dzien <= 31; Dzien = Dzien + 3)
            {
                cout << Dzien << ". Lipca" << endl;
                Plik << Dzien << ". Lipca" << endl;
                Plik << endl;
            }
        }
        else if(Praca == 1)
        {
            for(Dzien = 2; Dzien <= 31; Dzien = Dzien + 3)
            {
                cout << Dzien << ". Lipca" << endl;
                Plik << Dzien << ". Lipca" << endl;
                Plik << endl;
            }
        }
        else
        {
            for(Dzien = 3; Dzien <= 31; Dzien = Dzien + 3)
            {
                cout << Dzien << ". Lipca" << endl;
                Plik << Dzien << ". Lipca" << endl;
                Plik << endl;
            }
        }
        cout << endl;

        Praca = 31 - Dzien + 3;

        if(Praca == 2)
        {
            for(Dzien = 1; Dzien <= 31; Dzien = Dzien + 3)
            {
                cout << Dzien << ". Sierpnia" << endl;
                Plik << Dzien << ". Sierpnia" << endl;
                Plik << endl;
            }
        }
        else if(Praca == 1)
        {
            for(Dzien = 2; Dzien <= 31; Dzien = Dzien + 3)
            {
                cout << Dzien << ". Sierpnia" << endl;
                Plik << Dzien << ". Sierpnia" << endl;
                Plik << endl;
            }
        }
        else
        {
            for(Dzien = 3; Dzien <= 31; Dzien = Dzien + 3)
            {
                cout << Dzien << ". Sierpnia" << endl;
                Plik << Dzien << ". Sierpnia" << endl;
                Plik << endl;
            }
        }
        cout << endl;

        Praca = 31 - Dzien + 3;

        if(Praca == 2)
        {
            for(Dzien = 1; Dzien <= 30; Dzien = Dzien + 3)
            {
                cout << Dzien << ". Wrzesnia" << endl;
                Plik << Dzien << ". Wrzesnia" << endl;
                Plik << endl;
            }
        }
        else if(Praca == 1)
        {
            for(Dzien = 2; Dzien <= 30; Dzien = Dzien + 3)
            {
                cout << Dzien << ". Wrzesnia" << endl;
                Plik << Dzien << ". Wrzesnia" << endl;
                Plik << endl;
            }
        }
        else
        {
            for(Dzien = 3; Dzien <= 30; Dzien = Dzien + 3)
            {
                cout << Dzien << ". Wrzesnia" << endl;
                Plik << Dzien << ". Wrzesnia" << endl;
                Plik << endl;
            }
        }
        cout << endl;

        Praca = 30 - Dzien + 3;

        if(Praca == 2)
        {
            for(Dzien = 1; Dzien <= 31; Dzien = Dzien + 3)
            {
                cout << Dzien << ". Pazdziernika" << endl;
                Plik << Dzien << ". Pazdziernika" << endl;
                Plik << endl;
            }
        }
        else if(Praca == 1)
        {
            for(Dzien = 2; Dzien <= 31; Dzien = Dzien + 3)
            {
                cout << Dzien << ". Pazdziernika" << endl;
                Plik << Dzien << ". Pazdziernika" << endl;
                Plik << endl;
            }
        }
        else
        {
            for(Dzien = 3; Dzien <= 31; Dzien = Dzien + 3)
            {
                cout << Dzien << ". Pazdziernika" << endl;
                Plik << Dzien << ". Pazdziernika" << endl;
                Plik << endl;
            }
        }
        cout << endl;

        Praca = 31 - Dzien + 3;

        if(Praca == 2)
        {
            for(Dzien = 1; Dzien <= 30; Dzien = Dzien + 3)
            {
                cout << Dzien << ". Listopada" << endl;
                Plik << Dzien << ". Listopada" << endl;
                Plik << endl;
            }
        }
        else if(Praca == 1)
        {
            for(Dzien = 2; Dzien <= 30; Dzien = Dzien + 3)
            {
                cout << Dzien << ". Listopada" << endl;
                Plik << Dzien << ". Listopada" << endl;
                Plik << endl;
            }
        }
        else
        {
            for(Dzien = 3; Dzien <= 30; Dzien = Dzien + 3)
            {
                cout << Dzien << ". Listopada" << endl;
                Plik << Dzien << ". Listopada" << endl;
                Plik << endl;
            }
        }
        cout << endl;

        Praca = 30 - Dzien + 3;

        if(Praca == 2)
        {
            for(Dzien = 1; Dzien <= 31; Dzien = Dzien + 3)
            {
                cout << Dzien << ". Grudnia" << endl;
                Plik << Dzien << ". Grudnia" << endl;
                Plik << endl;
            }
        }
        else if(Praca == 1)
        {
            for(Dzien = 2; Dzien <= 31; Dzien = Dzien + 3)
            {
                cout << Dzien << ". Grudnia" << endl;
                Plik << Dzien << ". Grudnia" << endl;
                Plik << endl;
            }
        }
        else
        {
            for(Dzien = 3; Dzien <= 31; Dzien = Dzien + 3)
            {
                cout << Dzien << ". Grudnia" << endl;
                Plik << Dzien << ". Grudnia" << endl;
                Plik << endl;
            }
        }
        cout << endl;

        Praca = 31 - Dzien + 3;
    }
    else if(Przestepny == "NIE" || Przestepny == "Nie" || Przestepny == "nie")
    {
        cout << "Dni, w ktore uzytkownik idzie do pracy:" << endl;
        Plik << "Dni pracy:" << endl;

        for(Dzien; Dzien <= 31; Dzien = Dzien + 3)
        {
            cout << Dzien << ". Stycznia" << endl;
            Plik << Dzien << ". Stycznia" << endl;
            Plik << endl;
        }
        cout << endl;

        Praca = 31 - Dzien + 3;

        if(Praca == 2)
        {
            for(Dzien = 1; Dzien <= 28; Dzien = Dzien + 3)
            {
                cout << Dzien << ". Lutego" << endl;
                Plik << Dzien << ". Lutego" << endl;
                Plik << endl;
            }
        }
        else if(Praca == 1)
        {
            for(Dzien = 2; Dzien <= 28; Dzien = Dzien + 3)
            {
                cout << Dzien << ". Lutego" << endl;
                Plik << Dzien << ". Lutego" << endl;
                Plik << endl;
            }
        }
        else
        {
            for(Dzien = 3; Dzien <= 28; Dzien = Dzien + 3)
            {
                cout << Dzien << ". Lutego" << endl;
                Plik << Dzien << ". Lutego" << endl;
                Plik << endl;
            }
        }
        cout << endl;

        Praca = 28 - Dzien + 3;

        if(Praca == 2)
        {
            for(Dzien = 1; Dzien <= 31; Dzien = Dzien + 3)
            {
                cout << Dzien << ". Marca" << endl;
                Plik << Dzien << ". Marca" << endl;
                Plik << endl;
            }
        }
        else if(Praca == 1)
        {
            for(Dzien = 2; Dzien <= 31; Dzien = Dzien + 3)
            {
                cout << Dzien << ". Marca" << endl;
                Plik << Dzien << ". Marca" << endl;
                Plik << endl;
            }
        }
        else
        {
            for(Dzien = 3; Dzien <= 31; Dzien = Dzien + 3)
            {
                cout << Dzien << ". Marca" << endl;
                Plik << Dzien << ". Marca" << endl;
                Plik << endl;
            }
        }
        cout << endl;

        Praca = 31 - Dzien + 3;

        if(Praca == 2)
        {
            for(Dzien = 1; Dzien <= 30; Dzien = Dzien + 3)
            {
                cout << Dzien << ". Kwietnia" << endl;
                Plik << Dzien << ". Kwietnia" << endl;
                Plik << endl;
            }
        }
        else if(Praca == 1)
        {
            for(Dzien = 2; Dzien <= 30; Dzien = Dzien + 3)
            {
                cout << Dzien << ". Kwietnia" << endl;
                Plik << Dzien << ". Kwietnia" << endl;
                Plik << endl;
            }
        }
        else
        {
            for(Dzien = 3; Dzien <= 30; Dzien = Dzien + 3)
            {
                cout << Dzien << ". Kwietnia" << endl;
                Plik << Dzien << ". Kwietnia" << endl;
                Plik << endl;
            }
        }
        cout << endl;

        Praca = 30 - Dzien + 3;

        if(Praca == 2)
        {
            for(Dzien = 1; Dzien <= 31; Dzien = Dzien + 3)
            {
                cout << Dzien << ". Maja" << endl;
                Plik << Dzien << ". Maja" << endl;
                Plik << endl;
            }
        }
        else if(Praca == 1)
        {
            for(Dzien = 2; Dzien <= 31; Dzien = Dzien + 3)
            {
                cout << Dzien << ". Maja" << endl;
                Plik << Dzien << ". Maja" << endl;
                Plik << endl;
            }
        }
        else
        {
            for(Dzien = 3; Dzien <= 31; Dzien = Dzien + 3)
            {
                cout << Dzien << ". Maja" << endl;
                Plik << Dzien << ". Maja" << endl;
                Plik << endl;
            }
        }
        cout << endl;

        Praca = 31 - Dzien + 3;

        if(Praca == 2)
        {
            for(Dzien = 1; Dzien <= 30; Dzien = Dzien + 3)
            {
                cout << Dzien << ". Czerwca" << endl;
                Plik << Dzien << ". Czerwca" << endl;
                Plik << endl;
            }
        }
        else if(Praca == 1)
        {
            for(Dzien = 2; Dzien <= 30; Dzien = Dzien + 3)
            {
                cout << Dzien << ". Czerwca" << endl;
                Plik << Dzien << ". Czerwca" << endl;
                Plik << endl;
            }
        }
        else
        {
            for(Dzien = 3; Dzien <= 30; Dzien = Dzien + 3)
            {
                cout << Dzien << ". Czerwca" << endl;
                Plik << Dzien << ". Czerwca" << endl;
                Plik << endl;
            }
        }
        cout << endl;

        Praca = 30 - Dzien + 3;

        if(Praca == 2)
        {
            for(Dzien = 1; Dzien <= 31; Dzien = Dzien + 3)
            {
                cout << Dzien << ". Lipca" << endl;
                Plik << Dzien << ". Lipca" << endl;
                Plik << endl;
            }
        }
        else if(Praca == 1)
        {
            for(Dzien = 2; Dzien <= 31; Dzien = Dzien + 3)
            {
                cout << Dzien << ". Lipca" << endl;
                Plik << Dzien << ". Lipca" << endl;
                Plik << endl;
            }
        }
        else
        {
            for(Dzien = 3; Dzien <= 31; Dzien = Dzien + 3)
            {
                cout << Dzien << ". Lipca" << endl;
                Plik << Dzien << ". Lipca" << endl;
                Plik << endl;
            }
        }
        cout << endl;

        Praca = 31 - Dzien + 3;

        if(Praca == 2)
        {
            for(Dzien = 1; Dzien <= 31; Dzien = Dzien + 3)
            {
                cout << Dzien << ". Sierpnia" << endl;
                Plik << Dzien << ". Sierpnia" << endl;
                Plik << endl;
            }
        }
        else if(Praca == 1)
        {
            for(Dzien = 2; Dzien <= 31; Dzien = Dzien + 3)
            {
                cout << Dzien << ". Sierpnia" << endl;
                Plik << Dzien << ". Sierpnia" << endl;
                Plik << endl;
            }
        }
        else
        {
            for(Dzien = 3; Dzien <= 31; Dzien = Dzien + 3)
            {
                cout << Dzien << ". Sierpnia" << endl;
                Plik << Dzien << ". Sierpnia" << endl;
                Plik << endl;
            }
        }
        cout << endl;

        Praca = 31 - Dzien + 3;

        if(Praca == 2)
        {
            for(Dzien = 1; Dzien <= 30; Dzien = Dzien + 3)
            {
                cout << Dzien << ". Wrzesnia" << endl;
                Plik << Dzien << ". Wrzesnia" << endl;
                Plik << endl;
            }
        }
        else if(Praca == 1)
        {
            for(Dzien = 2; Dzien <= 30; Dzien = Dzien + 3)
            {
                cout << Dzien << ". Wrzesnia" << endl;
                Plik << Dzien << ". Wrzesnia" << endl;
                Plik << endl;
            }
        }
        else
        {
            for(Dzien = 3; Dzien <= 30; Dzien = Dzien + 3)
            {
                cout << Dzien << ". Wrzesnia" << endl;
                Plik << Dzien << ". Wrzesnia" << endl;
                Plik << endl;
            }
        }
        cout << endl;

        Praca = 30 - Dzien + 3;

        if(Praca == 2)
        {
            for(Dzien = 1; Dzien <= 31; Dzien = Dzien + 3)
            {
                cout << Dzien << ". Pazdziernika" << endl;
                Plik << Dzien << ". Pazdziernika" << endl;
                Plik << endl;
            }
        }
        else if(Praca == 1)
        {
            for(Dzien = 2; Dzien <= 31; Dzien = Dzien + 3)
            {
                cout << Dzien << ". Pazdziernika" << endl;
                Plik << Dzien << ". Pazdziernika" << endl;
                Plik << endl;
            }
        }
        else
        {
            for(Dzien = 3; Dzien <= 31; Dzien = Dzien + 3)
            {
                cout << Dzien << ". Pazdziernika" << endl;
                Plik << Dzien << ". Pazdziernika" << endl;
                Plik << endl;
            }
        }
        cout << endl;

        Praca = 31 - Dzien + 3;

        if(Praca == 2)
        {
            for(Dzien = 1; Dzien <= 30; Dzien = Dzien + 3)
            {
                cout << Dzien << ". Listopada" << endl;
                Plik << Dzien << ". Listopada" << endl;
                Plik << endl;
            }
        }
        else if(Praca == 1)
        {
            for(Dzien = 2; Dzien <= 30; Dzien = Dzien + 3)
            {
                cout << Dzien << ". Listopada" << endl;
                Plik << Dzien << ". Listopada" << endl;
                Plik << endl;
            }
        }
        else
        {
            for(Dzien = 3; Dzien <= 30; Dzien = Dzien + 3)
            {
                cout << Dzien << ". Listopada" << endl;
                Plik << Dzien << ". Listopada" << endl;
                Plik << endl;
            }
        }
        cout << endl;

        Praca = 30 - Dzien + 3;

        if(Praca == 2)
        {
            for(Dzien = 1; Dzien <= 31; Dzien = Dzien + 3)
            {
                cout << Dzien << ". Grudnia" << endl;
                Plik << Dzien << ". Grudnia" << endl;
                Plik << endl;
            }
        }
        else if(Praca == 1)
        {
            for(Dzien = 2; Dzien <= 31; Dzien = Dzien + 3)
            {
                cout << Dzien << ". Grudnia" << endl;
                Plik << Dzien << ". Grudnia" << endl;
                Plik << endl;
            }
        }
        else
        {
            for(Dzien = 3; Dzien <= 31; Dzien = Dzien + 3)
            {
                cout << Dzien << ". Grudnia" << endl;
                Plik << Dzien << ". Grudnia" << endl;
                Plik << endl;
            }
        }
        cout << endl;

        Praca = 31 - Dzien + 3;
    }

    Plik.close();
    Plik.clear();

    getchar();
    getchar();

    return 0;
}
