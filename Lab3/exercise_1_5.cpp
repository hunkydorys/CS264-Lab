#include <iostream>
#include <string>
#include "customers.h"
using namespace std;



int main()
{
customer customer1, customer2, customer3;

customer1.next = &customer2;
customer2.next = &customer3;
customer3.next = NULL;

customer1.forename = "Jack";
customer1.surname = "Driscoll";
customer2.forename = "Jill";
customer2.surname = "mcateer";
customer3.forename = "Jane";
customer3.surname = "murphy";

print_customers(customer1);

}
