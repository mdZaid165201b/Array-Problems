#include<iostream>

using namespace std;


int getLength(int arr[]){
    int count = 0;
    int i = 0;
    while(i > 0){

        count++;
        i--;
    }
    cout<<count;
}


int main(){
    int arr[] = {5,10,2,3};
    getLength(arr);
return 0;
}
