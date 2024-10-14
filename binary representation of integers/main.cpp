//
//  main.cpp
//  binary representation of integers
//
//  Created by maya nachiappan on 9/25/24.
//

#include <iostream>
#include <string>
using namespace std;

int convertBinary(int num) // creates function to convert number to binary code
{
    if (num==0)
    {
        cout << "the binary representation is 0" << endl;
        
    }
    string binary="";
    
    while (num > 0)
    {
        // divides num by 2 and adds remainder to string using concatenation
        binary=to_string(num % 2)+binary;
        num=num/2; // keeps dividing num by 2
    }
    cout <<"the binary representation is "<< binary<<endl; // prints the binary value
    return 0;
}

int main()
{
    int num;
    cout << "enter a positive number: " << endl;
    cin >> num; // takes num from user
    
    // checks if the number is actually positive
    if (num<0)
    {
        cout <<"you did not enter a positive number. please try again." <<endl;
        return 1;
    }
    cout << convertBinary(num) <<endl; // converts and prints the binary value using convertBinary function
}
