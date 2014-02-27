#include <iostream>
using namespace std;

int main()
{
int dig1, dig2, dig3, dig4, dig5, input=0;
cout << "Please enter a 5 digit number ";
cin >> input;
if(input<99999 || input>10000)
{
dig1 = (input/10000);
dig2 =(input/1000)%10;
dig3 = (input/100)%10;
dig4 = (input/10)%10;
dig5 = (input%10);
cout << dig1<< "   "<< dig2<<"   "<<dig3<<"   "<<dig4<<"   "<<dig5<< endl;
}	
}
