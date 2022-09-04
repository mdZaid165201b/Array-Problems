#include <iostream>

using namespace std;

void sumOfArray(int *arr,int length,int sumNumber){
    int i = 0;
    int j = 0;
    int num = 0;
    while(i<length){
        num+=arr[i];
        if(num<sumNumber){ i++; }
        else if(num>sumNumber){
            j++;
            i = j;
            num = 0;
        }
        else if(num == sumNumber){
            cout<<"Equal Found at positions"<<j+1<<"-"<<i+1<<endl;
            return;
        }
        else{
            cout<<"Not Found!!!"<<endl;
            return;
        }
    }
    cout<<num<<endl;
    cout<<"Not Found!!!"<<endl;
    
}

int main()
{
    int arr[5] = {1,2,3,5,7};
    int length = sizeof(arr)/sizeof(arr[0]);
    sumOfArray(arr,length,15);

    return 0;
}
