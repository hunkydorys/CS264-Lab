#include <iostream>
using namespace std;

int main()
{
int lengthOfArray;
cout << "How many numbers will the sequence contain"<< endl;
cin >> lengthOfArray;
double arrayOfSequence[lengthOfArray]; 
cout << "Please enter your sequence of numbers now"<<endl;

for(int i =0;i<lengthOfArray;i++)
{
   cin >> arrayOfSequence[i];

}

cout<< "The sequnce in reverse is ...."

for(int i =lengthOfArray-1;i>=0; i--)
{
   cout << arrayOfSequence[i] << endl;

}
cout <<"It is done"<<endl;

}

