#include<iostream>
using namespace std;

class MyMatrix
{
    private:
    int **array;
    public:
    MyMatrix(int rows,int cols)
    {
        array=new int*[rows];
        for(int i=0;i<rows;i++)
        array[i]=new int[cols];
        cout<<endl<<"ENTER MATRIX:";
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            cin>>array[i][j];
        }
    }

    void display(int rows,int cols)
    {
        int sum=0;
        for(int i=0;i<rows;i++)   
        for(int j=0;j<cols;j++)
        sum=sum+array[i][j];
        cout<<endl<<"SUM OF MATRIX IS:"<<sum;
    }

    ~MyMatrix()
    {
        delete[] array;
        cout<<endl<<"MEMORY IS FREE";
    }

};

int main()
{
    int rows,cols;
    cout<<"ENTER NUMBER OF ROWS:";
    cin>>rows;
    cout<<"ENTER NUMBER OF COLS:";
    cin>>cols;
    MyMatrix ob(rows,cols);
    ob.display(rows,cols);
    return 0;
}
