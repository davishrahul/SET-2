#include<iostream>
using namespace std;
int main()
{
    int input1,value=0,input2;
    cin>>input1;
    cin>>input2;
    for(int i=0;i<input2-1;i++)
    {
       value+=input1*input1;
    }
    cout << value;
return 0;
}
