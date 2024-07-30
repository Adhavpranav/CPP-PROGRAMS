//ACCEPT ONE EMP DETAIL & DISPLAY IT USING DEFAULT CONSTRUCTOR.
#include<iostream>
using namespace std;
    class Emp
    {
        public:
            int eno;
            char ename[20];
            float sal;
        Emp()
        {
            accept();
            disp();
        }
        void accept()  
        {
            cout<<"ENTER EMP NO:";
            cin>>eno;
            cout<<"ENTER EMP NAME:";
            cin>>ename;
            cout<<"ENTER EMP SAL:";
            cin>>sal;
        }
        void disp()
        {
        cout<<"EMP NO :"<<eno<<endl;
        cout<<"EMP NAME"<<ename<<endl;
        cout<<"EMP SAL:"<<sal<<endl;	
        }
    };
int main()
{
 Emp ob;
}
