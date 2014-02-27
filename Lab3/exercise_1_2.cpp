#include <iostream>

using namespace std;

double * myCopier(double * ptr, int & curSize);

int main(){
    int curSize = 2;
    double * userList = new double[curSize];
    double input;
    int amount = 0;
    cout << "Enter in a number or -1 to quit: ";
    cin >> input;
    while(input != -1.0)
    {
        userList[amount++] = input;
        if(amount == curSize) 
        {
           userList = myCopier(userList, curSize);
        }
        cout << "Current size is: " << curSize << endl;
        cout << "Enter in a number or -1 to quit: ";
        cin >> input;
    }
    for(int i = amount - 1; i >=0; i--)
    { 
       cout << userList[i] << endl;
    }
    return 0;
}

double * myCopier(double *ptr, int & curSize){
    curSize = curSize * 2;
    double * newArray = new double[curSize];
    for(int i = 0; i < curSize; i++)
    {      
       newArray[i] = ptr[i];
    }
    delete[] ptr;
    return newArray;
}
