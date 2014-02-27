#include <iostream>
using namespace std;

struct person{
       string name;
       int age;
};

int main()
{
int lengthOfArray;
cout << "How many numbers will the sequence contain"<< endl;
cin >> lengthOfArray;
 person *arrayOfSequence = new person[lengthOfArray];


for(int i =0;i<lengthOfArray;i++)
{
   cout << "Please enter your name "<<endl;
   cin >> arrayOfSequence[i].name;
   cout << "Please enter your age "<<endl;
   cin >> arrayOfSequence[i].age;

}

cout<< "The sequnce in reverse is ...."<< endl;

for(int i =lengthOfArray-1;i>=0; i--)
{
   cout << arrayOfSequence[i].name << "   "<< arrayOfSequence[i].age << endl;

}
cout <<"It is done"<<endl;

}

