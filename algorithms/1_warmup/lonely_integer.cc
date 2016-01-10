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

typedef unordered_map<int,int> IntegerMap;

IntegerMap GroupIntegerOccurrencies( const vector<int>& integers ) {
  IntegerMap occurrencies = {};
  
  for (auto i: integers)
    occurrencies[i]++;
  
  return occurrencies;
}

int FindLonelyDigit( IntegerMap occurrencies){
  int lonely_digit{0};
  
  for ( auto integer_occurrencies: occurrencies)
    if ( integer_occurrencies.second == 1 )
      lonely_digit = integer_occurrencies.first;
  
  return lonely_digit;
}

int LonelyInteger( const vector<int>& integers ) {
  auto occurrencies = GroupIntegerOccurrencies( integers );
  return FindLonelyDigit( occurrencies );
};

int main ( void ){
  
  auto num_integers=0;
  cin >> num_integers;
  
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