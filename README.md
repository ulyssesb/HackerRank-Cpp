# HackerRank-Cpp
[HackerRank]("https://www.hackerrank.com) problems coded in C++.

## Purpose
Mostly have fun. They're no way suppose to be seriously structured code,
but the overall solutions should be the best response that I got.

## About the code
Source files are written to be a automated tested using [Catch]("https://github.com/philsquared/Catch"),
therefore not all code should be pasted on HackerRank. Usually whatever is inside
`problemSolver()` and any other helping function used would be the solution's code.

## Class STDINStringStream
A problem that arises with the usage of an automated testing tool
is that reading and parsing the standard input is largely abstracted,
which can lead to not testing how the input is parsed and also limiting
the answer's architecture.

STDINStrinStream class allows to write on `STDIN` as if it were sortof `stringstream`,
which also makes the response code easier to paste on HackerRank.

## Challenge files
Challenge solution files are store in directory hierarchy as in
[HackerRank]("https://www.hackerrank.com) and the file name's derived
from problem's URL.

For example: "All Domains > C++ > Introduction > [Basic Data Types]("https://www.hackerrank.com/challenges/c-tutorial-basic-data-types")
with the URL ``https://www.hackerrank.com/challenges/c-tutorial-basic-data-types``
can be found at `challenge/cpp/introduction/c-tutorial-basic-data-types.cc` .
So, ``c-tutorial-basic-data-types`` is the `CHALLENGE_NAME`.

## Compiling
``./make build challenge="CHALLENGE_NAME"``