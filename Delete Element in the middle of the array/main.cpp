#include <iostream>

using namespace std;

int *deleteFromMiddle(int arr[],int len)
{
    if(len%2 == 0)
    {
        // For Even Array
        cout<<"For Even Array there will be two middle elements"<<endl;
        int size = len/2;
        int* ptr1 = new int(len-1);
        for(int i =0; i<=size; i++)
        {
            ptr1[i] = arr[i];
        }

        for(int i = len; i>size; i--)
        {
            ptr1[i-1] = arr[i];
        }

        return ptr1;
    }
    else
    {
        int *ptr1 = new int(len-1);
        int size = len/2;
        for(int i =0; i<size; i++)
        {
            ptr1[i] = arr[i];
        }
        for(int i = len; i>size; i--)
        {
            ptr1[i-1] = arr[i];
        }
        return ptr1;
    }



}



int main()
{
    int arr[] = {1,2,4,5,2,7,6};
    int len = sizeof(arr)/sizeof(arr[0]);
    int *ptr1 = deleteFromMiddle(arr,len);

    for(int i= 0; i<len-1; i++)
    {
        cout<<ptr1[i]<<endl;
    }

    delete[] ptr1;
    return 0;
}
