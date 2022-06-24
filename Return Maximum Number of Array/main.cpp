#include <iostream>

using namespace std;


// Sorting Method
int maximumElement(int arr[],int length)
{
    for(int i =0; i<length-1; i++)
    {
        for(int j = 0; j<length-1; j++)
        {
            if(arr[j]<arr[j+1])
            {
                // NO SWAP
                continue;
            }
            else
            {
                int temp1;
                temp1 = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp1;
            }
        }
    }
    return arr[0];
}
void printArray(int arr[],int length)
{
    for(int i = 0; i<length; i++)
    {
        cout<<arr[i]<<endl;
    }
}

// Without Sorting

int secondMethodMaximumElement(int arr[],int length)
{
    int maximum = arr[0];
    for(int i = 0; i<length; i++)
    {
        if(maximum<arr[i])
        {
            maximum = arr[i];
        }

    }
     return maximum;
}



int main()
{
    int arr[] = {2,5,4,400,0,800};
    int length = sizeof(arr)/sizeof(arr[0]);
    //cout<<maximumElement(arr,length);
    cout<<secondMethodMaximumElement(arr,length);
    //printArray(arr,length);
    return 0;
}



