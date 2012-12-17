CC  = g++
CXX = g++

INCLUDES = -I../

CFLAGS   = -g -Wall $(INCLUDES)
CXXFLAGS = -g -Wall $(INCLUDES)

LDFLAGS = 
LDLIBS  = 

executables = 15
objects = 15.o util.o

.PHONY: default
default: $(executables)

$(executables): 15.o

$(objects): ../util.h

.PHONY: clean
clean:
		rm -f *~ a.out core $(objects) $(executables)

.PHONY: all
all: clean default