#include <iostream>
//input , output
#include <iomanip>
// fixed , setprecision
#include <cmath>
//pow , sqrt ....
#include <string>
// string
#include <algorithm>
//functions
#include <cstdlib>
//rand()
#include <ctime>
//time
using namespace std;
//std::
void InsertionSort(int arr[],int n)
{
    int key,j;
    for(int i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while ( j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
void print(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
    cout << endl;
}
int main()
{
    int arr[] = { 31 , 41 , 59 , 26 , 41 , 58 };
    int n = sizeof(arr) / sizeof(arr[0]);
    InsertionSort(arr, n);
    print(arr,n);
return 0 ;
}