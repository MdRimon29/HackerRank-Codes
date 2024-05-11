#include<iostream>
#include<iomanip>
#include<cstdio>
using namespace std;
int main ()
{
    int i;
    long l;
    char a;
    float f;
    double d;

    cin >>i>>l>>a>>f>>d;

    cout<<i<<endl;
    cout<<l<<endl;
    cout<<a<<endl;
    cout.precision(3);
    cout<<fixed;
    cout<<f<<endl;
    cout.precision(9);
    cout<<fixed;
    cout<<d<<endl;
    

    return 0;
}
