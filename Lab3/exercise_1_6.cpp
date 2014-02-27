#include <iostream>
#include <string>
#include "customers.h"
using namespace std;



int main()
{
 string  input;
 int counter =0;
 while(input != "end")
 {
    cout <<"Please enter a name \n";
    cin >> input;
    
    customer* ptr ;
    if(counter ==0)
    {
       ptr = create_list( input);
       counter++;
    }
    else
    {
       insert_name(ptr, input);
       
    }
       
     
     
 }
}
