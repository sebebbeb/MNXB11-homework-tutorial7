CXX := g++
CXXWARNINGS := -Wall -Wextra -Werror
CXXOPT := -O3
CXXSTD := -std=c++17
INCLUDES := -Iinclude -Iexternal/include -I$(shell root-config --incdir)
CXXFLAGS := $(CXXWARNINGS) $(CXXSTD) $(CXXOPT) $(INCLUDES)
LDFLAGS := -Lexternal/lib64 -lfmt $(shell root-config --glibs)

.PHONY: all clean

all: main

main: main.cxx
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

clean:
	rm -v main
