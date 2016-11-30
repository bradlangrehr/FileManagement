#include <string>
#include "BagNode.h"
using namespace std;

BagNode *parent, *left, *right;
//Constructors
BagNode::BagNode(){

}

BagNode::BagNode(int dataItem, int count){
  this -> dataItem = dataItem;
  this -> count = count;
}

//Mutators
void BagNode::setDataItem(int dataItem){
  this -> dataItem = dataItem;
}

void BagNode::setCount(int count){
  this -> count = count;
}
void BagNode::setLeft(BagNode* left){
  this -> left = left;
}

void BagNode::setRight(BagNode* right){
  this -> right = right;
}

//Accessors
int BagNode::getDataItem(){
  return this -> dataItem;
}

int BagNode::getCount(){
  return this -> count;
}

BagNode* BagNode::getLeft(){
 return this -> left;
}

BagNode* BagNode::getRight(){
  return this -> right;
}

BagNode* BagNode::getParent(){
  return this -> parent;
}

/*BagNode& BagNode::operator=(const BagNode& B){
  if(this != &B)
    return *this;
}*/
