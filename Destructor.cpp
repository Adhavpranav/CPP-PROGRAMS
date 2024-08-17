#include<iostream>
#include<iomanip>
using namespace std;

class MyArray
{
    public:
    int *array;
    MyArray(int limit)
    {
        array=new int[limit];
        cout<<endl<<"ENTER ELEMENTS OF ARRAY:";
        for(int i=0;i<limit;i++)
        cin>>array[i];
    }

    void display(int limit)
    {
        cout<<endl<<"ELEMENTS OF AN ARRAY:";
        for(int i=0;i<limit;i++)
        cout<<array[i]<<setw(4);
    }

    ~MyArray()
    {
        delete[]array;
        cout<<endl<<"MEMORY FREE SUS.!";
    }
};

int main()
{
    int limit;
    cout<<endl<<"ENTER LIMIT OF AN ARRAY:";
    cin>>limit;
    MyArray ob(limit);
    ob.display(limit);
}
