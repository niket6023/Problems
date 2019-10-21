#include <iostream> 
using namespace std; 

int myXOR(int x, int y) 
{ 
return (x | y) & (~x | ~y); 
} 

int main() 
{ 
int x = 3, y = 5; 
cout << "XOR is " << myXOR(x, y); 
return 0; 
} 
