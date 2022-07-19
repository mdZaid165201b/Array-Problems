#include <iostream>

using namespace std;


/*
    halfParamidOne
        **********
         *********
          ********
           *******
            ******
             *****
              ****
               ***
                **
                 *

        halfParamidTwo
        *
        **
        ***
        ****
        *****

        halfParamidThree
               *
              **
             ***
            ****
           *****
    */


class Triangle
{
private:
public:

    void spacePrint(int size,int i)
    {
        // cout<<"spacePrint";
        int j = size; // j = 10
        j = j - i;      // j = 10 - 1 = 9
        for(; j>0; j--)   //this loop for columns
        {
            cout<<" ";  // it will print spaces for j times
        }
    }
    void starPrint(int i)
    {
        for(int k = 1; k<=i; k++)  // this loop for printing "*"
        {
            // it will print "*" for "i" times ex: i = 2; it will print "*" for two times
            cout<<"*";
        }
    }

    void halfParamidOne(int size)
    {
        for(int i = size; i >= 1; i--)  // this loop for rows
        {
            // cout<<"For Loop";
            spacePrint(size,i);// for columns
            starPrint(i);// for printing stars
            cout<<endl;
        }
    }
    void halfParamidTwo(int size)
    {
        for(int i = 1; i <= size; i++)
        {
            for(int j = 1; j<=i; j++)
            {
                cout<<"*"<<" ";
            }
            cout<<endl;
        }
    }

    halfParamidThree(int size)
    {
        for(int i = 1; i <= size; i++)  // this loop for rows
        {

            spacePrint(size,i);// for columns
            starPrint(i);// for printing stars
            cout<<endl;
        }
    }
};


int main()
{
    Triangle t1;
    t1.halfParamidThree(10);
    cout<<endl<<endl;
    t1.halfParamidOne(10);
    cout<<endl<<endl;
    t1.halfParamidTwo(10);
    return 0;
}
