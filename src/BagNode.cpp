#include <string>
#include "BagNode.h"
using namespace std;

BagNode *parent, *left, *right;
char *filePath, *fileName;
//Constructors
BagNode::BagNode(){

}

BagNode::BagNode(char* filePath, char* fileName){
  this -> filePath = filePath;
  this -> fileName = fileName;
}

//Mutators
void BagNode::setFilePath(char* filePath){
  this -> filePath = filePath;
}

void BagNode::setFileName(char* fileName){
  this -> fileName = fileName;
}

void BagNode::setLeft(BagNode* left){
  this -> left = left;
}

void BagNode::setRight(BagNode* right){
  this -> right = right;
}

void BagNode::setParent(BagNode* parent){
  this -> parent = parent;
}

//Accessors
char* BagNode::getFilePath(){
  return this -> filePath;
}

char* BagNode::getFileName(){
  return this -> fileName;
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
