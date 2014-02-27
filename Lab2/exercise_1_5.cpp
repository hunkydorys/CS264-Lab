#include <iostream>
using namespace std;

void print_string_array(char str[]);
void print_string_ptr(char *str);


int main()
{
  char char_array[] = "This is an array";
  char *char_ptr = "This is a pointer";
  print_string_array(char_array);
  print_string_ptr(char_ptr);
  return 0;
}

void print_string_array(char str[])
{
    int current = 0;
    while(str[current] != '\0')
    {
      cout << str[current++];
    }
    cout << endl;
}
void print_string_ptr(char *str)
{
    int current = 0;
    while(str[current] != '\0') 
    {
    cout << str[current++];
    }
    cout << endl;

}

