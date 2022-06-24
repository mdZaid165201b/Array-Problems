#include <iostream>

using namespace std;

void reverseArray(int arr[],int length)
{
    int temp1,temp2;
    if(length%2==0)
    {

        int size = length/2;
        // cout<<size;
        for(int i = 1; i<=size; i++)
        {

            temp1 = arr[i-1];
            temp2 = arr[length-i];
            arr[i-1] = temp2;
            arr[length-i] = temp1;
        }
    }
    else
    {
        // cout<<length/2 +1;
        int size  = length/2;
        size=size + 1;
        // cout<<size;
        for(int i = 1; i<=size; i++)
        {

            temp1 = arr[i-1];
            temp2 = arr[length-i];
            arr[i-1] = temp2;
            arr[length-i] = temp1;
        }
    }


}
void print(int arr[], int length)
{
    for(int i =0; i<length; i++)
    {
        cout<<arr[i]<<endl;
    }
}

int main()
{
    int arr[] = {100,200,300,400,500,600};
    int length = sizeof(arr)/sizeof(arr[0]);
    reverseArray(arr,length);
    print(arr,length);
    return 0;
}
