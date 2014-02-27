#include <iostream>
using namespace std;

int main()
{
double input_1, input_2, input_3;
cout << "enter the first number";
cin >> input_1;
cout << "enter the second number";
cin >> input_2;
cout << "enter the third number";
cin >> input_3;
cout <<"the sum is " << input_1+input_2+input_3<< endl<<" the average is " <<(input_1+input_2+input_3)/3 << endl << " the product is " <<input_1*input_2*input_3 << endl; 
double smallest, largest;
 if(input_1 < input_2 && input_1<input_3 )
   {
     smallest=input_1;

   }
else if(input_2<input_1 && input_2<input_3)
{
	smallest=input_2;
}
else
{
	smallest=input_3;
}
cout <<"the smallest number is " << smallest << endl;
if(input_1 > input_2 && input_1 > input_3 )
   {
     largest=input_1;

   }
else if(input_2 >input_1 && input_2 > input_3)
{
	largest=input_2;
}
else
{
	largest=input_3;
}
cout <<"the largest number is " << largest << endl;
}
