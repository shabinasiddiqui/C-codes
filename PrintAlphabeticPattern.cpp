/*
output:
Enter number of rows: 4
A
B C 
D E F
G H E F
*/
#include <iostream>

using namespace std;


int main ()
{
  int n;
  cout << "Enter number of rows: ";
  cin >> n;
  char alphabet = 'A';

  for (int i = 0; i < n; i++)
    {
      for (int j = 0; j <= i; j++)
	{
	  cout << alphabet << " ";
	  alphabet++;
	}
	cout<<endl;
    }

  return 0;
}