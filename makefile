OBJS = BBST.o BagNode.o TestBBST.o
CC = g++
CFLAGS = -std=c++11 -g -Wall
TARGET = BBST.exe

FileTrav: $(OBJS)
	$(CC) $^ $(CFLAGS) -o $(TARGET)
