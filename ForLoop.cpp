#include<iostream>

using namespace std;

int main()
{
    int num,num2;
    cin>>num;
    cin>>num2;

    for(int i=num; i<=num2; i++)
    {
        if(i<=9 && i>=1)
        {
            if(i==1)
            {
                cout<<"one"<<endl;
            }
            else if(i==2)
            {
                cout<<"two"<<endl;
            }
            else if(i==3)
            {
                cout<<"three"<<endl;
            }
            else if(i==4)
            {
                cout<<"four"<<endl;
            }
            else if(i==5)
            {
                cout<<"five"<<endl;
            }
            else if(i==6)
            {
                cout<<"six"<<endl;
            }
            else if(i==7)
            {
                cout<<"seven"<<endl;
            }
            else if(i==8)
            {
                cout<<"eight"<<endl;
            }
            else 
            {
                cout<<"nine"<<endl;
            }
        }
        else if(i%2==0 && i>=1)
        {
            cout<<"even"<<endl;
        }
        else
        {
            cout<<"odd"<<endl;
        }
        
    
    }

}