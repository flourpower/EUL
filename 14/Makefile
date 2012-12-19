CC  = g++
CXX = g++

INCLUDES = -I../utils

CFLAGS   = -g -Wall $(INCLUDES)
CXXFLAGS = -g -Wall $(INCLUDES)

LDFLAGS = 
LDLIBS  = 

executables = 14
objects = 14.o util.o

.PHONY: default
default: $(executables)

$(executables): 14.o

$(objects): ../utils/util.h

.PHONY: clean
clean:
		rm -f *~ a.out core $(objects) $(executables)

.PHONY: all
all: clean default