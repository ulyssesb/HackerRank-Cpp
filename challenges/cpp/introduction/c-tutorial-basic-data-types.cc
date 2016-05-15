/**
* HackerRank
* Created by Ulysses Bonfim on 15/05/16
* 
* https://www.hackerrank.com/challenges/c-tutorial-basic-data-types
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
    cout << "Hello, World";

    /**
    * End of Main Program
    **/
    return cout.str();
}

/** 
* Test Section
**/
TEST_CASE("c-tutorial-basic-data-types", "[]" ) {
    
    SECTION( "Sample Test Case" ) {
        std::stringstream inputSample("");
        REQUIRE( challengeSolver(inputSample) == "Hello, World" );
    }
    
}