#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int e=max(max(max(a,b),c),d);
    cout<<e<<endl;
    return 0;
}
