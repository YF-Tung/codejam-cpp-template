CC = g++
CPPFLAGS = -Ofast -std=c++11
SRC = main.cpp
OUT = out
RUN_ARGS = 

.PHONY : build run

default: build

build:	$(SRC)
	$(CC) -o $(OUT) $(CPPFLAGS) $(SRC)
run:	build
	./$(OUT) $(RUN_ARGS)
clean:
	rm -rf $(OUT)

