//this_pointer 
using namespace std;
#include <iostream>
#include <string.h>
class emp
{
    public:
    int eno;
    char ename[20];
    float sal;
    void accept(int eno,const char* ename,float sal)
    {
        this->eno=eno;
        strcpy(this->ename,ename);
        this-> sal=sal;
    }
    void disp()
    {
          cout<<"Eno:"<<eno<<endl;
          cout<<"Ename:"<<ename<<endl;
          cout<<"sal:"<<sal<<endl;
    }
};
int main()
{
    int eno;
    int i;
    char ename[20];
    float sal;
    emp ob[100];
    int limit;
    cout<<"Enter limit:";
    cin>>limit;
    for(i=0;i<limit;i++)
    {
        cout<<"Enter eno:";
        cin>>eno;
        cout<<"Enter Ename:";
        cin>>ename;
        cout<<"Enter sal:";
        cin>>sal;
        ob[i].accept(eno,ename,sal);
    }
    for(i=0;i<limit;i++)
    ob[i].disp();
    return 0;
}
