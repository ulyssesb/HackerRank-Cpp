cc := g++
ccflags := -g -Wall -std=c++0x

# Source file directories
challenge_srcdir := challenges
libdir := lib

# Find source files
challenge_srcfile := $(shell find $(challenge_srcdir) -name $(challenge).cc)
libfiles := $(shell find $(libdir) -name *.cc)
srcfiles := $(libfiles) $(challenge_srcfile)

# Object files
objfiles := $(patsubst %.cc, %.o, $(srcfiles))

# Building rules
build: $(objfiles)
	@echo $(cc)
	@echo $(ccflags)
	@echo $(objfiles)
	$(cc) $(ccflags) -o $(challenge) $(objfiles)

clean :
	rm -rf $(shell find . -name *.o)