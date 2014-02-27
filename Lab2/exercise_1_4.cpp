#include <iostream>
using namespace std;

int my_string_len(char str[]);
void my_string_cat(char dest[], char src[], int dest_size);

int main ()
{
    const int arraySize = 10;
    // So the array has space for 10 chars. Enough to fit 6 more in. 
    char array[arraySize] = "C++";
    char name[] = "Myles";
    char fullname[] = "Myles Cullen";

    cout << "The length of name is: " << my_string_len(name) << endl;
    cout << "The length of array is: " << my_string_len(array) << endl;
    cout << "The length of fullname is: " << my_string_len(fullname) << endl;

    // This should not work
    my_string_cat(array, fullname, arraySize);
    cout << "The new combined length is: " << my_string_len(array) << endl;

    // Should concatenate it to the end of the other other array
    my_string_cat(array, name, arraySize);
    cout << "The new combined length is: " << my_string_len(array) << endl;
    cout << array << endl;
    return 0;
  return 0;
}


int my_string_len(char str[]){
    int length = 0;
    while(str[length] != '\0'){
        length++;
     }
    return length;
}

void my_string_cat(char dest[], char src[], int dest_size){
    int src_length = my_string_len(src);
    int dest_length = my_string_len(dest);
    if(src_length + dest_length < dest_size){
        for(int i = dest_length; i < src_length + dest_length; i++) 
	{
           dest[i] = src[i - dest_length];
	}
    }
    else{ cout << "Error, There is not enough room" << endl;
      }

}




