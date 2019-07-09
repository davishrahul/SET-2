#include <iostream>
using namespace std;
int main()
{
    int number,interval1,number1,interval2,r,sum=0;
    cin>>interval1;
    cin>>interval2;
    for(int i=interval1;i<interval2-1;i++)
    {
        //cout<<i;    
        number=i+1;
        number1=number;
        while(number>0)
        {
            r=number%10;
            sum=sum+(r*r*r);
            number=number/10;
        }
         if(number1==sum)
         {
             cout<<sum<<" ";
         }
         sum=0;                  
        }
             
    return 0;
}
