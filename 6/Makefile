CC  = g++
CXX = g++

INCLUDES = -I../utils

CFLAGS   = -g -Wall $(INCLUDES)
CXXFLAGS = -g -Wall $(INCLUDES)

LDFLAGS = 
LDLIBS  = 

executables = 6
objects = 6.o util.o

.PHONY: default
default: $(executables)

$(executables): 6.o

$(objects): ../utils/util.h

.PHONY: clean
clean:
		rm -f *~ a.out core $(objects) $(executables)

.PHONY: all
all: clean default