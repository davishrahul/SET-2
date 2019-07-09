#include<iostream>
using namespace std;
int main()
{   
    int number,r,sum=0;
    cin>>number;
    int number2=number;
    while(number>0)
    {
        r=number%10;
        sum=(sum*10)+r;
        number=number/10;
    }
    if(number2==sum)
    {
        cout <<"yes";
    }
    else
    {
        cout<<"no";
    }
    
    return 0;
}
