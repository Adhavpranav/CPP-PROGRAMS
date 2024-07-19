/*
Create a class College containing data members as College Id, College Name, Establishment_year, University_Name. 
Write a C++ program with following member functions:
i. To accept 'n' College details
ii. To display College details of a specified University
iii. To display College details according to a specified establishment year (Use Array of Object and Function overloading)
*/
using namespace std;
#include<iostream>
#include<string.h>
class college
{
    public: 
    int college_Id;
    char college_Name[20];
    int establishment_Year;
    char university_Name[20];
    void accept()
    {
        cout<<"Enter college_Id:";
        cin>>college_Id;
        cout<<"Enter college_Name:";
        cin>>college_Name;
        cout<<"Enter establishment_Year:";
        cin>>establishment_Year;
        cout<<"Enter university_Name:";
        cin>>university_Name;
    }
    void disp(college*ob,int limit,const char* university_Name)
    {
       int i;
        for(i=0;i<limit;i++)
        if(strcmp(university_Name,ob[i].university_Name)==0)
        {
            cout<<"college_Id:"<<ob[i].college_Id<<endl;
            cout<<"college_Name:"<<ob[i].college_Name<<endl;
            cout<<"Establishment_year:"<<ob[i].establishment_Year<<endl;
            cout<<"university_Name:"<<ob[i].university_Name<<endl;
        }
    }
    void disp(college*ob,int limit,int e_Year)
    {
        int i;
        for(i=0;i<limit;i++)
        if(e_Year==ob[i].establishment_Year)
        {
            cout<<"college_Id:"<<ob[i].college_Id<<endl;
            cout<<"college_Name:"<<ob[i].college_Name<<endl;
            cout<<"Establishment_year:"<<ob[i].establishment_Year<<endl;
            cout<<"university_Name:"<<ob[i].university_Name<<endl;
        }
    }
    void menudriven(college*ob,int limit)
    {
     int choice;
     do{
     cout<<"1:College details of specified university."<<endl<<"2:College details of specified establishment_Year."<<endl;
     cout<<"Enter choice:";
     cin>>choice;
     switch (choice)
     {
     case 1:
     {
        char university_Name[20];
        cout<<"Enter university_Name:";
        cin>>university_Name;
        disp(ob,limit,university_Name);break;
     }
     case 2:
     {
        int e_Year;
        cout<<"Enter establishment_Year:";
        cin>>e_Year;
        disp(ob,limit,e_Year);break;
     }
     default:cout<<"Invalid choice ..exit..!";
        break;
     }
     }while(choice>=1&&choice<=2);
    }   
};
int main()
{
    college ob[100];
    int limit;
    cout<<"Enter limit:";
    cin>>limit;
    int i;
    for(i=0;i<limit;i++)
    {
        ob[i].accept();
    }
    ob->menudriven(ob,limit);  
    return 0;
}
