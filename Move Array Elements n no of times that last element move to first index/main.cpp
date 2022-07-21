#include <iostream>

using namespace std;

void shiftElement(int arr[],int len, int no)
{

    int temp = arr[0];
    for(int i = 0; i<len-1; i++)
    {
        int temp2 = arr[i+1];
        arr[i+1] = temp;
        temp = temp2;
    }
    arr[0] = temp;
}

void shiftRight(int arr[],int len, int no)
{


    for(int i = 0; i<no; i++)
    {
        //cout<<i+1<<endl;
        shiftElement(arr,len,no-1);
    }
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
    int arr[] = {6,2,4,5};
    int len = sizeof(arr)/sizeof(arr[0]);
    shiftRight(arr,len,2);
    print(arr,len);
    return 0;
}
