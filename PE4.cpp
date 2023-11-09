#include <iostream>
using namespace std;

// Recursive function 
void countDownR(int n) {
  if(n < 0) 
    return;
  
  cout << n << endl;

  countDownR(n-1);
}

// Iterative function
void countDownI(int n) {
  while(n >= 0) {
    cout << n << endl;
    n--;
  }
}

// Get input
int input() {
  int n;
  cout << "Enter a positive integer: ";
  cin >> n;

  return n;
}

int main() {

  int n = input();

  cout << "\nIteration" << endl;
  countDownI(n);

  cout << "\nRecursion" << endl;  
  countDownR(n);

  return 0;
}