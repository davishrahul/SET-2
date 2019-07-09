#include <iostream>
using namespace std;
int main()
{
    int r,sum=0,number1;
    int number;
    cin>>number;
    number1=number;
    while(number>0)
    {
        r=number%10;
        sum=sum+(r*r*r);
        number=number/10;
    }
    if(number1==sum){
    cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
    

}
