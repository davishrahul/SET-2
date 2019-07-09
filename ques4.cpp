#include <iostream>
using namespace std;
int main()
{
    int number,interval1,interval2,count=0,j=1;
    cin>>interval1;
    cin>>interval2;
    for(int i=interval1;i<interval2-1;i++)
    {
        //cout<<i;    
        number=i+1;
        if(number%2!=0)
        {
            cout <<number<<" ";
        }                     
        }     
    return 0;
}
