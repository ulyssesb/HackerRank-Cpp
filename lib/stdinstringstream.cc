/**
* Created by Ulysses Bonfim on 15/05/16.
**/
#include "stdinstringstream.hh"

void stdinStringStream::init(){
    int p[2];
    pipe(p);
    dup2(p[0], STDIN_FILENO);
    this->mStdinWriter = fdopen(p[1], "w");
};

stdinStringStream::stdinStringStream() {
    this->init();
};

stdinStringStream::stdinStringStream(const std::string istring) {
    this->init();
    writeToStdin(istring);
};

stdinStringStream * stdinStringStream::operator<<( const std::string istring){
    this->writeToStdin(istring);
    return this;
};

void stdinStringStream::writeToStdin(const std::string istring) {
    fputs(istring.c_str(), this->mStdinWriter);
};

void stdinStringStream::close(){
    fclose(this->mStdinWriter);
};