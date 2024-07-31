#include<iostream>
using namespace std;
class MyDate
{
    private:
    int date,year;
    string month;
    public:
    void disp()
    {
        cout<<endl<<date<<"-"<<month<<"-"<<year;
    }
    string month_Word(int month)
    {
        switch(month)
        {
            case 1:return "JAN";
            case 2:return "FEB";
            case 3:return "MAR";
            case 4:return "APR";
            case 5:return "MAY";
            case 6:return "JUN";
            case 7:return "JUL";
            case 8:return "AUG";
            case 9:return "SEP";
            case 10:return "OCT";
            case 11:return "NOV";
            case 12:return "DEC";
        }
    }
    MyDate(int date,int month,int year)
    { 
        string Month_in_word;
        this->date=date;
        this->year=year;
        Month_in_word=month_Word( month);
        this->month=Month_in_word;
        disp();
    }
};
int main()
{
    int date,month,year;
    cout<<"ENTER A DATE:";
    cin>>date;
    repeat:
    cout<<"ENTER A MONTH:";
    cin>>month;
    if(month<=0||month>=13)
    {
    cout<<"PLZ ENTER A VALID MONTH..!"<<endl;
    goto repeat;
    }
    cout<<"ENTER A YEAR:";
    cin>>year;
    MyDate ob(date,month,year);
}
