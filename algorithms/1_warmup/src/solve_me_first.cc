//
//  main.cpp
//  Solve Me First
//
//  Created by Ulysses Bonfim on 15/2/15.
//  Copyright (c) 2015 Ulysses Bonfim. All rights reserved.
//

#include <iostream>
using namespace std;

int sumTwoIntegers (const int& num1, const int& num2) {
  return num1 + num2;
}

int main(int argc, const char * argv[]) {
  
  int num1, num2;
  cin >> num1 >> num2;
  
  auto sum = sumTwoIntegers(num1, num2);
  cout << sum;
}