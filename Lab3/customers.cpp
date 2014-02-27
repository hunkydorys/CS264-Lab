#include <iostream>
#include "customers.h"
using namespace std;


void print_customers(customer &head)
{
     customer *cur = &head;
     
     while (cur != NULL)
     {
       cout << cur->name << endl;
       cur = cur -> next;
     }
}
customer *create_list(string name)
{
   customer* ptr = new customer;
   ptr->next=NULL;
   ptr->name= name;   
   return ptr;
}
void insert_name(customer *head, string name)
{
   customer *cur = head;
   customer *newCustomer = new customer;
   newCustomer -> name =name;
   while(cur ->next != NULL)
   {
      cur = cur -> next;
       
   }
   cur -> next = newCustomer;
   newCustomer -> next = NULL;
}


int list_length(customer* head)
{
   int length = 1;
   
   while(head != NULL)
   {
      head = head -> next;
      length++; 
   }
   return length;
   
}


