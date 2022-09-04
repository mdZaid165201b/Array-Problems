#include <iostream>

using namespace std;

int *moveNegativeOneSide(int arr[],int length){
    int *newArr = new int[length];
    int j = 0;
    for(int i = 0;i < length; i++){
        if(arr[i] >= 0){
            newArr[j] = arr[i];
            j++;
        }
    }
    for(int  i = 0;i < length; i++){
        if(arr[i] < 0){
            newArr[j] = arr[i];
            j++;
        }
    }
    return newArr;
}

void print(int *arr,int length){
    for(int i = 0;i < length; i++){ cout<<arr[i]<<endl; }
}


int main()
{
    int arr[8] = {1,-1,3,2,-7,-5,11,6};
    int length = sizeof(arr)/sizeof(arr[0]);
    int *newArr = moveNegativeOneSide(arr,length);
    print(newArr,length);
    return 0;
}
