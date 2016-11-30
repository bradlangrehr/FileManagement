#include "BagNode.h"
#include <cstddef>
#ifndef BBST_H
#define BBST_H
using namespace std;

class BBST{
 private:
  BagNode* root = NULL;
  BagNode* current = NULL;
  int data, tally;
  void doInsert(int data);
  void doTraverse(BagNode* b);
  bool isBalanced(BagNode* b);
  int getHeight(BagNode* b);
  int max(int a, int b);
  void rotateLeft(BagNode *b);
  void rotateRight(BagNode *b);
  void doubleRotateLeft(BagNode *b);
  void doubleRotateRight(BagNode *b);

  /*int randomNumber();
  const int min = 1;
  const int max = 10000;*/
  
 public:
  BBST();
  BBST(int data, int tally);
  void insert(int data);
  void traverse();
  bool balance();
};
#endif
