#include <iostream>
#include <iomanip>

using namespace std;

long double f(long double x, long double y)
{
    if(y==0)
    {
        return 1;
    }
    return x*f(x,y-1);
}

long double ff(long double x, long double y)
{
    if(y==1)
    {
        return x*x;
    }
    return ff(x,y-1);
}

int main()
{
    int a, b;
    cin >> a;
    b=2;
    cout << setprecision(10000);
    cout << "Sposob pierwszy (mozliwy dla kazdej potegi):"; //possible for every index
    cout << endl << f(a,b) << endl;
    cout << "Sposob drugi (mozliwy dla potegi o wykladniku 2):"; // possible only for square numbers
    cout << endl << f(a,b);
    return 0;
}
