#include <iostream>
using namespace std;


bool IsPrime(int num)
{
 bool  isItPrime = true;

 for(int j=2;j<num;j++)
 {
     if(num%j==0)
     {
	isItPrime = false;
        break;
     }	
    
 }

return isItPrime;

}

int main()
{
   for(int i=2;i<=500;i++)
   {
      if(IsPrime(i))
	{
          cout<< i<< " is prime"<< endl; 
        }
   }
	
}



