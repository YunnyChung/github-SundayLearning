#include <iostream>

using namespace std; 
int main() {
    
    int numberOfCents {0}; 
    cout << "Enter the number of cents: "; 
    cin >> numberOfCents; 
    
    const int oneDollar {100}; // in cents. 
    const int oneQuarter {25}; 
    const int oneDime {10}; 
    const int oneNickel {5}; 
    const int onePenny {1}; 
    
    int numOfDollars {0}; 
    int numOfQuarters {0}; 
    int numOfDimes {0}; 
    int numOfNickels {0}; 
    int numOfPennies {0}; 
    
    numOfDollars = numberOfCents / oneDollar; 
    numOfQuarters = (numberOfCents % oneDollar) / oneQuarter; 
    numOfDimes = ((numberOfCents % oneDollar) % oneQuarter) / oneDime; 
    numOfNickels = (((numberOfCents % oneDollar) % oneQuarter) % oneDime) / oneNickel; 
    numOfPennies =  (((numberOfCents % oneDollar) % oneQuarter) % oneDime) % oneNickel/ onePenny; 
    
    int sum {0};
    sum = numOfDollars * oneDollar + numOfQuarters * oneQuarter 
    + numOfDimes * oneDime + numOfNickels * oneNickel +  numOfPennies * onePenny; 
    
    cout << "The # of input cents and the calculated # of cents are equal: " << (sum == numberOfCents) << endl; 
    cout << "dollars     : " << numOfDollars  << endl; 
    cout << "quarters  : " << numOfQuarters  << endl; 
    cout << "dimes     : " << numOfDimes << endl; 
    cout << "Nickels   : " << numOfNickels << endl; 
    cout << "pennies  : " << numOfPennies << endl; 
    
    return 0; 
}