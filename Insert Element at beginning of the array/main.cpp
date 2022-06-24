#include <iostream>

using namespace std;

int *insertAtBegin(int arr[],int len,int elem)
{
    int *ptr1 = new int(len+1);
    ptr1[0] = elem;
    for(int i = 1; i<=len; i++)
    {
        ptr1[i] = arr[i-1];
    }
    return ptr1;
}

int main()
{
    int arr[] = {5,2,6,4};
    int len = sizeof(arr)/sizeof(arr[0]);
    int *ptr1 =  insertAtBegin(arr,len,8);
    len++;
    for(int i = 0; i<len; i++)
    {
        cout<<ptr1[i]<<endl;
    }


    delete [] ptr1;
    return 0;
}
