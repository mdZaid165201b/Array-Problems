#include <iostream>

using namespace std;

int *removeDuplicate(int arr[],int len){
    int smaeCount = 0;
    for(int i =0;i<len;i++){
        for(int j =i;j<len-1;j++){
            if(arr[i] == arr[j+1]){
                smaeCount++;
            }
        }
    }
    cout<<smaeCount;
}

int main()
{
    int arr[] = {2,4,2,5,7,8,8,2};
    int len = sizeof(arr)/sizeof(arr[0]);
    removeDuplicate(arr,len);
    return 0;
}
