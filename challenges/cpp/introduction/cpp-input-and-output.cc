/**
* HackerRank
* Created by Ulysses Bonfim on 15/05/16
* 
* https://www.hackerrank.com/challenges/cpp-input-and-output
**/

#define CATCH_CONFIG_MAIN
#include "../../../lib/catch.hpp"

std::string challengeSolver(std::stringstream &cin){
    std::stringstream cout;

    /** 
    * Main program 
    * Everything from here until the last line of this function 
    * should be pasted inside HackerRank's main function
    **/
    int n, result = 0;

    while(cin >> n) {
        result += n;
    }
    cout << result;

    /**
    * End of Main Program
    **/
    return cout.str();
}

/** 
* Test Section
**/
TEST_CASE("cpp-input-and-output", "[]" ) {
    
    SECTION( "Sample Test Case" ) {
        std::stringstream inputSample("1 2 7\n");
        REQUIRE( challengeSolver(inputSample) == "10" );
    }

    SECTION("Negative numbers"){
        std::stringstream inputSample("-1 -2 3\n");
        REQUIRE( challengeSolver(inputSample) == "0" );
    }

    SECTION("Big ones"){
        std::stringstream inputSample("1111 2222 3333\n");
        REQUIRE( challengeSolver(inputSample) == "6666" );
    }
    
}