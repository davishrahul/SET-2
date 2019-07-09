#include <iostream>
using namespace std;
int main()
{
    int number,interval1,interval2,count=0,j=1;
    cin>>interval1;
    cin>>interval2;
    for(int i=interval1;i<interval2;i++)
    {
        //cout<<i;    
        number=i+1;
        for(int k=1;k<=number;k++)
        {
            if(number%k==0)
            {
                count++;
            }
            
        }
        if(count==2)
            {
                cout<<number<<"\t";
            }
        count=0;             
    }
      
    return 0;
}
