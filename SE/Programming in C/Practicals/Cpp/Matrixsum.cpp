#include <iostream>
using namespace std;
int main()
{
    int size, sum = 0;
    cout << "enter size of array";
    cin >> size;
    int arr[size][size], i, j;

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {   
            cout << "enter elements of matrix";
            cin >> arr[i][j];
        }
    }
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            cout << "\t" << arr[i][j];
        }
        cout << endl;
    }
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            sum = arr[i][j] + sum;
        }
    }
    cout << "sum of matrix is " << sum;
}