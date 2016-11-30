#include "BBST.h"
#include "BagNode.h"
#include <cstddef>
#include <iostream>
#include <stdlib.h>
#include <openssl/md5.h>

using namespace std;

//Constructors
BBST::BBST(){

}

BBST::BBST(int data, int tally){
  this -> data = data;
  this -> tally = tally;
  insert(data);
}

//public functions
void BBST::insert(int data){
  current = root;
  doInsert(data);
}

void BBST::traverse(){
  current = root;
  doTraverse(current);
}

bool BBST::balance(){
  current = root;
  return isBalanced(current);
}

//private functions
void BBST::doTraverse(BagNode* b){
  if(b -> getLeft() != NULL) doTraverse(b -> getLeft());
    cout << "The value is: " << b -> getDataItem() << "\n";
  if(b -> getRight() != NULL) doTraverse (b -> getRight());
}

void BBST::doInsert(int data){
  if(root == NULL){
    root = new BagNode(data, 1);
  }//end create root
  else if(data < (current -> getDataItem())){
    if(current -> getLeft() == NULL){
      current -> setLeft(new BagNode(data, 1));
    }//end create new left node
    else{
     current = current -> getLeft();
     doInsert(data);
    }
  }//end move to next left node
  else if(data > (current -> getDataItem())){
    if(current -> getRight() == NULL){
      current -> setRight(new BagNode(data, 1));
    }//end create new right node
    else{
      current = current -> getRight();
      doInsert(data);
    }///end move to next right node
  }//end right node loop
  else if(data == current -> getDataItem()){
    current -> setCount(current -> getCount() + 1);
    }//end incrementor*/
}

int BBST::getHeight(BagNode* b){
  if(b == NULL)
    return 0;
  return 1 + max(getHeight(b -> getLeft()), getHeight(b -> getRight()));
}

int BBST::max(int a, int b){
  return (a <= b) ? b: a; 
    return b;
}

bool BBST::isBalanced(BagNode* b){
  int getLeftCount;
  int getRightCount;
  if(b == NULL)
    return  true;
  getLeftCount = getHeight(b -> getLeft());
  getRightCount = getHeight(b -> getRight());
  if(abs(getLeftCount - getRightCount) <=1 && isBalanced(b -> getLeft()) && isBalanced(b -> getRight()))
    return true;
  return false;
}

void BBST::rotateLeft(BagNode *b){
}

void BBST::rotateRight(BagNode *b){
}

void BBST::doubleRotateLeft(BagNode *b){
}

void BBST::doubleRotateRight(BagNode *b){
}
