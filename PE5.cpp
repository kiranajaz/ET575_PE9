#include <iostream>
using namespace std;

// Function to calculate the greatest common divisor (GCD) of two integers
int GCD(int a, int b){
    // Base case: if b is not equal to zero
    if (b != 0){
        // Print the current values of a and b
        cout<<a<<" "<<b<<endl;
        
        // Recursively call the GCD function with arguments b and the remainder of a divided by b
        return GCD(b, a % b);
    }
    // Base case: if b is equal to zero
    else {
        // Print the current values of a and b
        cout<<a<<" "<<b<<endl;
        
        // Print the value of a (the GCD)
        cout<<a<<endl;
        
        // Return the value of a (the GCD)
        return a;
    }
}

int main() {
    int a,b;
    
    
    cout<<"Enter two positive integers:";
    cin>>a>>b;
    
    GCD(a,b);
    
    return 0;

}



