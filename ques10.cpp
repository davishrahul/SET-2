#include<iostream>
using namespace std;
int main()
{
    int number,value;
    cin>>number;
    for(int i=1;i<=5;i++)
    {
       value=number*i;
       cout<<value<<" ";
    }
    return 0;
}
