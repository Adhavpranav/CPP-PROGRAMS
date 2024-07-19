/*
Accept n emp records and display it.
*/
using namespace std; 
#include<iostream>
class emp
{
    public:
    int eno;
    char ename[20];
    float sal;
    void accept()
    {
        cout<<"Enter emp no:";
        cin>>eno;
        cout<<"Enter emp name:";
        cin>>ename;
        cout<<"Enter emp salary:";
        cin>>sal;
    }
    void disp()
    {
        cout<<"Emp no:"<<eno<<endl;
        cout<<"Emp name:"<<ename<<endl;
        cout<<"Emp salary:"<<sal<<endl;
    }
};
int main()
{
    emp ob[50];
    int limit;
    cout<<"Enter limit:";
    cin>>limit;
    for(int i=0;i<limit;i++)
    ob[i].accept();
    for(int i=0;i<limit;i++)
    ob[i].disp();
    return 0;
}
