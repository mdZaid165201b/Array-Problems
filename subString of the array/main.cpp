#include <iostream>

using namespace std;

int *subString(int arr[],int arrayLen,int pos,int subStringLen)
{
    if(subStringLen<=arrayLen)
    {
        int *newArray = new int(subStringLen);
        int j = 0;
        for(int i = 0; i<subStringLen; i++)
        {
            newArray[j] = arr[pos];
            pos++;
            j++;
        }

        return newArray;
    }
    else
    {
        cout<<"subString length must be less than the Array Length!!!";
        return 0;
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
    int arr[] = {1,2,5,6,8,9,10,2,33,44};
    int len = sizeof(arr)/sizeof(arr[0]);
    int *newArray = subString(arr,len,2,4);
    print(newArray,4);
    return 0;
}
