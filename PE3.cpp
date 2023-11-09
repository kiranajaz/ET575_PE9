#include <iostream>

using namespace std;

void Stars(int n){
if(n==0) {  // Base case: if n is 0, return
    return;
}  

 Stars(n/10);   // Recursive call to Stars function with n divided by 10
    
for(int i = 0; i < n%10; i++)   // Loop to print stars based on the remainder of n divided by 10
   cout<<"*";
   cout<<endl;

}

int main(){
    int n;
    
    cout<<"Enter a number: ";
    cin>>n;

Stars(n);

}