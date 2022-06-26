#include <iostream>

using namespace std;


int *deleteFromEnd(int arr[],int len)
{
    int *ptr1Arr = new int(len-1);

    for(int i = 0; i<len-1; i++)
    {
        ptr1Arr[i] = arr[i];
    }

    return ptr1Arr;
}

void print(int arr[],int len)
{
    for(int i = 0; i<len; i++)
    {
        cout<<arr[i]<<endl;
    }
}
int main()
{
    int arr[] = {55,22,66,44,88,99};
    int len = sizeof(arr)/sizeof(arr[0]);
    int *newArr = deleteFromEnd(arr,len);
    len--;
    print(arr,len);


    delete[] newArr;
    return 0;
}
