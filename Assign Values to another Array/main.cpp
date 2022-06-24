#include <iostream>

using namespace std;
void copyArray(int arr1[],int arr2[],int length)
{
    for(int i = 0; i<length; i++)
    {
        arr2[i] = arr1[i];
    }
}
void printArray(int arr[],int length)
{

    for(int i = 0; i <length; i++)
    {
        cout<<arr[i]<<endl;
    }
}
int main()
{
    int arr1[] = {100,500,200,400,300};
    int length = sizeof(arr1)/sizeof(arr1[0]);
    int arr2[] = {};
    copyArray(arr1,arr2,length);
    printArray(arr2,length);

    return 0;
}
