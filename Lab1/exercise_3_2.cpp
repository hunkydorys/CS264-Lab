#include <iostream>
using namespace std;

int main()
{
int in1, in2;
cout << "please enter an integer";
cin >> in1;
cout << "please enter another integer";
cin >> in2;

if(in1%in2==0)
{
cout << "the first number was a multiple of the second";
}
else
{
cout << "the first number was not a multiple of the second";
}

}
