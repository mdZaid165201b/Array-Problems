#include <iostream>

using namespace std;
void doubleArrayElement(int *arr,int len)
{
    for(int i = 0; i<len; i++)
    {
        arr[i] = arr[i]*2;

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
    int arr[] = {2,4,5,6,10};

    int len = sizeof(arr)/sizeof(arr[0]);
    print(arr,len);
    cout<<endl;

    doubleArrayElement(arr,len);
    print(arr,len);
    return 0;
}
