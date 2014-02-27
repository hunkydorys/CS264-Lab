#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main ()
{
  int roll1, roll2, noOfRolls, sumOfDice;

  srand ( time(NULL) );
  cout <<"Please enter how many times you would like to roll the dice"<< endl;
  cin >> noOfRolls;
  int  percenOfRolls [11];
  for(int i=0;i<11;i++)
  {
     percenOfRolls[i] =0;
  }
  for(int i=0;i<noOfRolls;i++)
  {
    roll1 = rand() % 6 + 1;
    roll2 = rand() % 6 + 1;
    sumOfDice = roll1 + roll2;
    percenOfRolls[sumOfDice-2] +=1; 
  }
  for(int j=0;j<11;j++)
  {
    cout << 2+j << " was rolled " <<percenOfRolls[j] << " times "<< endl;
  }


  



  
  return 0;
}
