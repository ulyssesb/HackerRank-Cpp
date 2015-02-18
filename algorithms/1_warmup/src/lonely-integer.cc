//
//  lonely-integer.cc
//  HackerRankC++
//
//  Created by Ulysses Bonfim on 16/2/15.
//  Copyright (c) 2015 Ulysses Bonfim. All rights reserved.
//

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

#define MAX_DIGITS 10

vector<int> GroupDigitOccurencies( const vector<int>& integers ) {
  vector<int> occurrencies(10);
  
  for (auto i: integers) {
    occurrencies[i]++;
  }
  return occurrencies;
}

int FindLonelyDigit( const vector<int> occurrencies){
  int lonely_digit{0};
  
  for ( int i=0; i < MAX_DIGITS ; i++ ){
    if ( occurrencies[i] == 1 )
      lonely_digit = i;
  }
  return lonely_digit;
}

int LonelyInteger( const vector<int>& integers ) {
  auto occurrencies = GroupDigitOccurencies( integers );
  return FindLonelyDigit(occurrencies);
};

int main ( void ){
  
  auto num_integers=0;
  cin >> num_integers;
  cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
  
  vector<int> integers;
  int integer;
  for (int i; i< num_integers ; i++) {
    cin >> integer;
    integers.push_back(integer);
  }
  
  auto resp = LonelyInteger( integers );
  cout << resp;
  
  return 0;
}