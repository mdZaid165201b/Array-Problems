#include <iostream>

using namespace std;
void spacePrint(int size,int i){
    int j = size; // j = 10
        j = j - i;      // j = 10 - 1 = 9
        for(; j>0; j--){  //this loop for columns
            cout<<" ";  // it will print spaces for j times
        }
}
void starPrint(int i){
    for(int k = 1; k<=i; k++){ // this loop for printing "*"
            // it will print "*" for "i" times ex: i = 2; it will print "*" for two times
            cout<<"*";
        }
}

void makeTriangle(int size){
    for(int i = 1; i <= size; i++){ // this loop for rows

        spacePrint(size,i);// for columns
        starPrint(i);// for printing stars
        cout<<endl;
    }
}
int main()
{
    makeTriangle(10);
    return 0;
}
