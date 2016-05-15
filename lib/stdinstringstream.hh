/**
* Created by Ulysses Bonfim on 15/05/16.
**/

#ifndef HACKERRANK_STDINSTRINGSTREAM_HH
#define HACKERRANK_STDINSTRINGSTREAM_HH
#include <iostream>
#include <string>
#include <sstream>
#include <unistd.h>

class stdinStringStream{
    public:
        stdinStringStream();
        stdinStringStream(const std::string);
        stdinStringStream * operator << (const std::string);
        void close();

    protected:
        FILE * mStdinWriter;
        void writeToStdin(const std::string);
        void init();
};

#endif //HACKERRANK_STDINSTRINGSTREAM_HH
