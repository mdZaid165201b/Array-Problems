#include <iostream>

using namespace std;



void print(int arr[],int len)
{
    for(int i = 0; i<len; i++)
    {
        cout<<arr[i]<<endl;
    }
}

int *deleteFromBegin(int arr[],int len)
{
    int *ptr1 = new int(len-1);
    for(int i = 0; i<len; i++)
    {

        ptr1[i] = arr[i+1];
    }
    return ptr1;
}

int main()
{
    int arr[] = {5,1,45,55,2};
    int len = sizeof(arr)/sizeof(arr[0]);
    // cout<<len;

    int *ptr1 = deleteFromBegin(arr,len);
    len--;
    print(ptr1,len);

    return 0;
}
