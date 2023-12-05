#
# BRH
#
# This makefile compiles and runs piTempMonitor
#
# Made at DUNCHA France on the Dec 5th of 2023
#

CC = gcc # Choose your compiler

main:
	${CC} main.c -o main
	./main
	rm -f main
