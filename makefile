OBJS = BBST.o BagNode.o TestBBST.o
CC = g++
CFLAGS = -std=c++11 -g -Wall

FileTrav: $(OBJS)
	$(CC) $^ $(CFLAGS) -o BBST.exe
