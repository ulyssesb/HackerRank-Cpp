//
//  main.cpp
//  Flipping Bits
//
//  Created by Ulysses Bonfim on 18/2/15.
//  Copyright (c) 2015 Ulysses Bonfim. All rights reserved.
//

#include <iostream>
using namespace std;


unsigned int flipBits (unsigned int to_be_flipped ){
  return ~to_be_flipped;
}

int main(int argc, const char * argv[]) {
  
  int list_size;
  cin >> list_size;

  unsigned int to_be_flipped, flipped;
  for ( int i=0 ; i < list_size ; i++ ){
    cin >> to_be_flipped;
    flipped = flipBits( to_be_flipped );
    cout << flipped << endl;
  }
  
  return 0;
}