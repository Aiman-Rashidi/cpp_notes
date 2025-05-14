#include <iostream>
using namespace std;

int main()
{
    // int arr[] = {0, 1, 2, 3, 4, 5, 6, 7};
    // // int size = sizeof(arr) / sizeof(arr[0]);
    // // cout << size;
    // cout << arr[0] << endl;
    // cout << arr[1] << endl;
    // cout << arr[2] << endl;
    // cout << arr[3] << endl;
    // cout << arr[4] << endl;
    // cout << arr[5] << endl;
    // cout << arr[6] << endl;
    // cout << arr[7] << endl;

    // int marks[10];
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << "enter makrs for roll number " << i << " : ";
    //     cin >> marks[i];
    // }
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << "marks for " << i << " is " << marks[i] << endl;
    // }

    int arr2d[2][3] = {{1, 2, 3},
                       {4, 5, 6}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "value at " << i << "," << j << " = " << arr2d[i][j] << endl;
        }
    }
}