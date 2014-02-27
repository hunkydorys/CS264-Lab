#include <iostream>
using namespace std;



int main()
{
int account;
while (true)
{

float startBalance, endBalance,allowed, credits, charges;

cout << "Enter account number ";
cin>> account;

if(account ==-1)
{
break;
}

cout << "Enter credits applied to account  ";
cin >> credits;

cout << "Enter credit card charges  ";
cin >> charges;

cout << "Enter starting balance  ";
cin >> startBalance;

cout << "Credit limit  ";
cin >> allowed;

endBalance = startBalance + charges -credits;
if(endBalance> allowed)
{
cout <<"account number ="<<account<< " credit limit = "<<allowed<< " new balance = " <<endBalance   << " Credit limit exceeded"<< endl;

}

}

}


