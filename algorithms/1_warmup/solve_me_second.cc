//
//  main.cpp
//  Solve Me Second
//
//  Created by Ulysses Bonfim on 18/2/15.
//  Copyright (c) 2015 Ulysses Bonfim. All rights reserved.
//

#include <iostream>
using namespace std;

int sumTwoIntegers ( const int& num1, const int& num2 ) {
  return num1 + num2;
}

int main(int argc, const char * argv[]) {
  auto number_of_inputs=0;
  cin >> number_of_inputs;

  int num1, num2, sum;
  for ( int i=0; i<number_of_inputs; i++ ) {
    cin >> num1 >> num2;
    sum = sumTwoIntegers( num1, num2 );
    cout << sum << endl;
  }
}