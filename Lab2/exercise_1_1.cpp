#include  <iostream>
using namespace std;
void swap(int &x, int &y);

int main()
{
int x,y;
cout << "please input two integers" <<endl;
cin >> x >> y;
cout <<"the first value is " << x << endl <<"the second value is "<< y <<endl;
swap(x,y);
cout <<"the swapped values are "<< x << " and " << y <<endl;

}

void swap(int &x, int &y)
{
int temp =x;
x=y;
y=temp;

}
