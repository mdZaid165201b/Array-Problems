#include <iostream>

using namespace std;

int *insertElementInTheMiddle(int arr[],int len,int elem)
{
    //for Even Length
    if(len%2 == 0)
    {
        int middle = len/2;
        int *ptr1 = new int(len+1);
        for(int i = 0; i<middle; i++)
        {
            ptr1[i] = arr[i];
        }
        for(int i = len; i>middle; i--)
        {
            ptr1[i] = arr[i-1];
        }
        ptr1[middle] = elem;
        return ptr1;
    }
    else
    {
        int middle = len/2;
        middle++;
        int *ptr1 = new int(len+1);

        for(int i = 0; i<middle; i++)
        {
            ptr1[i] = arr[i];
        }
        for(int i = len; i>middle; i--)
        {
            ptr1[i] = arr[i-1];
        }
        ptr1[middle] = elem;
        return ptr1;

    }
}

int main()
{
    int arr[] = {2,1,0,5,3,7,6};
    int len = sizeof(arr)/sizeof(arr[0]);
    int *ptr1 = insertElementInTheMiddle(arr,len,8);

    for(int i = 0; i<len+1; i++)
    {
        cout<<ptr1[i]<<endl;
    }

    delete [] ptr1;
    return 0;
}
