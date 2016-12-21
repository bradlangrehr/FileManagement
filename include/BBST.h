#include "BagNode.h"
#include <cstddef>
#include <fts.h>
#ifndef BBST_H
#define BBST_H
using namespace std;

class BBST{
 private:
  BagNode* root = NULL;
  BagNode* current = NULL;
  char* filePath;
  char* fileName;;
  void doInsert(char* filePath, char* fileName);
  void doTraverse(BagNode* b);
  bool isBalanced(BagNode* b);
  int getHeight(BagNode* b);
  int max(int a, int b);
  void rotateLeft(BagNode *b);
  void rotateRight(BagNode *b);
  void doubleRotateLeft(BagNode *b);
  void doubleRotateRight(BagNode *b);
  void followFilePath(FTS* f, char** path);
  /*int randomNumber();
  const int min = 1;
  const int max = 10000;*/
  
 public:
  BBST();
  BBST(char* filePath, char* fileName);
  void insert(char* filePath, char* fileName);
  void traverse();
  bool balance();
};
#endif
