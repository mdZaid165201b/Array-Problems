#include <iostream>

using namespace std;

void printArray(int arr[],int length){
    for(int i = 0;i<length;i++){
        cout<<arr[i]<<endl;
    }
}

int main()
{
    int arr[] = {2,10,15,50,2};
    int length = sizeof(arr)/sizeof(arr[0]);
    printArray(arr,length);
    return 0;
}
