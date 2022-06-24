#include <iostream>

using namespace std;

int *insertElementAtTheEnd(int arr[],int len,int elem)
{
    int *ptr1 = new int(len+1);
    ptr1[len] = elem;
    for(int i = 0; i<len; i++)
    {
        ptr1[i] = arr[i];
    }
    return ptr1;
}

int main()
{
    int arr[] = {5,2,4,7,8};
    int len = sizeof(arr)/sizeof(arr[0]);
    int *ptr1 = insertElementAtTheEnd(arr,len,10);
    len++;
    for(int i = 0; i<len; i++)
    {
        cout<<ptr1[i]<<endl;
    }
    delete [] ptr1;
    return 0;
}
