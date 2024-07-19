/*
Write a C++ program to sort integer and float array elements in ascending order by using function overloading.
*/

#include <iostream>
using namespace std;
class ascending {
    int pass, i, temp;
    int limit;   
public:
    void sort(int array[], int limit) {
        for (pass = 1; pass < limit; pass++) {
            for (i = 0; i < limit - pass; i++) {
                if (array[i] > array[i + 1]) {
                    temp = array[i];
                    array[i] = array[i + 1];
                    array[i + 1] = temp;
                }
            }
        }
        cout <<"sorted int array:";
        for (i = 0; i < limit; i++) {
            cout<<" "<<array[i];
        }
        cout<<endl;
    }
    void sort(float array[], int limit) {
        for (pass = 1; pass < limit; pass++) {
            for (i = 0; i < limit - pass; i++) {
                if (array[i] > array[i + 1]) {
                    float temp = array[i];
                    array[i] = array[i + 1];
                    array[i + 1] = temp;
                }
            }
        }
        cout <<"sorted float array:";
        for (i = 0; i < limit; i++) {
            cout << " " << array[i];
        }
        cout<<endl;
    }   
};
int main() {
    ascending ob;
    int array[] = {10, 30, 80, 90, 50, 40, 60, 20, 70, 100};
    float array_Values[] = {10.12f, 50.8f, 4.2f, 8.9f, 81.15f, 10.6f, 84.9f, 72.6f, 71.9f, 41.7f};   
    int limit = 10;
    ob.sort(array, limit);
    ob.sort(array_Values, limit);
    return 0;
}
