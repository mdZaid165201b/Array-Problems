
#include <iostream>
using namespace std;
// selection Sort
void selectionSort(int arr[],int len)
{
    for(int i = 0; i<len-1; i++)
    {
        for(int j = i+1; j<len; j++)
        {
            if(arr[j]<arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}
// another method for selection Sort
void secondSelectionSort(int arr[],int len)
{
    for(int i = 0; i<len-1; i++)
    {
        for(int j = 0; j<len-1; j++)
        {
            if(arr[j]<arr[j+1])
            {
                // no swap
            }
            else
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
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
    int arr[6] = {2,1,7,8,9,6};
    int len = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr,len);
    print(arr,len);

    return 0;
}
