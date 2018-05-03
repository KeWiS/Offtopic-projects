#include <iostream>
#include <iomanip>

using namespace std;

long double rekurencja(int z)
{
    if(z==0 || z==1)
    {
        return 1;
    }
    return rekurencja(z-1)*z;
}

long double iteracja(int i)
{
    long double w=1;
    if(i!=1 || i!=0)
    {
        for(int it=1;it<=i;it++)
        {
            w=w*it;
        }
        return w;
    }
    else{return 1;}
}

int main()
{
    int x;
    cin >> x;
    rekurencja(x);
    iteracja(x);
    cout << setprecision(10000);
    cout << endl << x << "! = " << rekurencja(x) << endl; //recursion
    cout << "Poprzez iteracje: "; //iteration
    cout << endl << x << "! = " << iteracja(x);
    return 0;
}
