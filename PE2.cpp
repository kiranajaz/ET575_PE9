#include <iostream>
using namespace std;

void printStars(int n) {
    if (n == 0) {   // Base case: if n is 0, return and stop the recursion
        return;
    }
    cout << '*';
    printStars(n - 1);   // Recursive call: subtract 1 from n and call the function again
}

int main() {
    printStars(10);  // Output will be *****
    return 0;
}