#include<iostream>
using namespace std;
void display_arguments(int SIZE, int array[], int n);//function prototypes
void greater_than_n(int array[], int SIZE, int n);
int main()
{
    const int SIZE = 14;//constant for size of array
    int array[SIZE] = {50, 20, -57, -77, 1, 87, 30, 29, -540, 25, 33, -45, -2, -99}, n = 0;//creating array with 14 elements then
    display_arguments(SIZE, array, n);// calling function to display the arguments         //initializing each element, also setting n as 0
    greater_than_n(array, SIZE, n);// calling function to determine which array elements are greater than n 
    return 0;
}
void display_arguments(int SIZE, int array[], int n)//function that uses a loop to display each item of the array
{
    cout << "SIZE OF ARRAY: " << SIZE << endl;
    cout << "CONTENTS OF ARRAY: ";
    for(int i = 0; i < SIZE; i++)
    {   cout << array[i] << " ";
    }
    cout << endl;
    cout << "VALUE OF N: " << n << endl;//displaying value of n
}
void greater_than_n(int array[], int SIZE, int n)//function that uses a loop to determine whether an array element is greater than n
{                                                //and display it if so
    cout << "ARRAY ELEMENTS GREATER THAN N: ";
    for(int i = 0; i < SIZE; i++)
    {   if(array[i] > n)
        {   cout << array[i] << " ";
        }
    }
}