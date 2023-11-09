#include <iostream>
using namespace std;


void ite_cheers(int n){
 for(int i = 0;i < n-1;i++)
 cout << "Hip, ";
 cout << "Hurray!" << endl;
}
void rec_cheers(int n) {
  if(n == 1) {        // Base case: if n is 1, print "Hurray!" and return
  cout << "Hurray!" << endl; 
    return;
  }

  cout << "Hip, ";
  rec_cheers(n-1);      // Recursive call to rec_cheers with n-1
}

int main() {
  int n = 3;
  rec_cheers(n);        // Call the rec_cheers function with n as the argument

  return 0;
}