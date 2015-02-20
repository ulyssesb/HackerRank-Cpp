//
//  main.cpp
//  Alternating Characters
//
//  Created by Ulysses Bonfim on 18/2/15.
//  Copyright (c) 2015 Ulysses Bonfim. All rights reserved.
//

#include <iostream>
using namespace std;

int CountNotAlternatingTuples( const string &input ){
  auto not_alternating_tuples=0;
  auto last_char = ' ';
  
  for( auto c: input) {
    if (last_char == c)
      not_alternating_tuples++;
    last_char = c;
  }
  return not_alternating_tuples;
}

int DeletionsNeededToAlternatingString( const string &input ){
  return CountNotAlternatingTuples( input );
}

int main(int argc, const char * argv[]) {
  auto nof_inputs=0;
  cin >> nof_inputs;
  
  string test_case;
  for (auto i=0; i<nof_inputs; i++) {
    cin >> test_case;
    auto resp = DeletionsNeededToAlternatingString( test_case );
    cout << resp << endl;
  }

  return 0;
}
