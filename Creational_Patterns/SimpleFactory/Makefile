#

CXX = g++

SRCS = $(wildcard *.cpp)
OBJS = $(patsubst %.cpp, %.o, $(SRCS))

TARGET = main

all:$(TARGET)

$(TARGET):$(OBJS)
	$(CXX) -o $@ $(OBJS)
    
.PHONY:clean

clean:
	rm *.o main