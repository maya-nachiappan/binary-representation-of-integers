//
//  main.cpp
//  binary representation of integers
//
//  Created by maya nachiappan on 9/25/24.
//

#include <iostream>
#include <string>
using namespace std;

int convertBinary(int num)
{
if (num==0)
 {
    cout << "the binary representation is 0" << endl;
    return 0;
  }
    string binary="";
    
    while (number>0)
    {
        binary=to_string(num % 2)+binary;
        num=num/2;
    }
    cout <<"the binary representation is "<< binary<<endl;
}

int main()
{
    int num;
    cout << "enter a positive number: " << endl;
    cin >> num;
    
    // checks if the number is actually positive
    if (num<0)
    {
        cout <<"you did not enter a positive number. please try again." <<endl;
        return 1;
    }
    cout << covertBinary(num) <<endl;
    return 0;
}
