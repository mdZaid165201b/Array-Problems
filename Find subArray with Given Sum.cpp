#include <iostream>

using namespace std;

void sumOfArray(int *arr,int length,int sumNumber){
    int i = 0;
    int j = 0;
    int startPos = 1;
    int endPos = 1;
    int num = 0;
    while(i<length){
        cout<<"iterate"<<i<<endl;
        cout<<"Before Adding Num =>"<<num<<endl;
        num+=arr[i];
        cout<<"After Adding Num =>"<<num<<endl;
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
