#include<iostream>
using namespace std;
inline bool check(int number)
{
   return number>0?true:false;
}
int main()
{
    int number;
    cout<<"ENTER A NUMBER:";
    cin>>number;
    if(number==0)
    cout<<"NUMBER IS ZERO WHICH IS NIGTHER POSITIVE NOR NEGATIVE";
    else
    {
        if(check(number))
        cout<<"GIVEN NUMBER IS POSITIVE";
        else
        cout<<"GIVEN NUMBER IS NEGATIVE";
    }
}
