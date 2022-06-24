#include <iostream>

using namespace std;

int getMiddleElement(int arr[],int len)
{
    int middle = len/2;
    if(len%2 == 0)
    {
        cout<<"there will be two middle Elements of even Array";

        //return arr[middle];
    }
    else
    {
        return arr[middle];
    }
}


int main()
{
    int arr[] = {2,4,5,6};
    int len = sizeof(arr)/sizeof(arr[0]);
    int middleElem = getMiddleElement(arr,len);
    cout<<middleElem;
    return 0;
}
