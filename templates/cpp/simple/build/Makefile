
CXX = g++

CXXFLAGS = -g3 -O0 -Wall -Werror -std=c++11

SRC = ../src

LD_LIBS = 

OBJ = main.o

EXECUTABLE = main

$(EXECUTABLE): $(OBJ)
	$(CXX) $(OBJ) -o $(EXECUTABLE) $(LD_LIBS)

main.o: $(SRC)/main.cpp
	$(CXX) -c $(CXXFLAGS) $(SRC)/main.cpp

.PHONY: clean run

clean:
	rm *.o $(EXECUTABLE)

run: $(EXECUTABLE)
	./$(EXECUTABLE)