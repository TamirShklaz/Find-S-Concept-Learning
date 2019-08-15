PROG = bin/*

OBJS = obj/*
INCLUDE = -ITools
.PHONY: clean As3 run
all:    clean As3 run

CC = g++

As3:
	$(CC) -c main.cpp -o ./bin/main.o
	$(CC) -c Instance.cpp -o ./bin/Instance.o
	$(CC) -o bin/As3 bin/main.o bin/Instance.o

run:
	bin/As3