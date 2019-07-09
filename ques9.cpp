//factorial program
#include<iostream>
using namespace std;
int main()
{
    int number,fact=1; 
    cin>>number;
    for(int i=1;i<=number;i++)
    {
        fact=fact*i;
    }
    cout<<fact;
     return 0;
}
