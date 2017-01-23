#include "BBST.h"
#include "BagNode.h"
#include <cstddef>
#include <iostream>
#include <stdlib.h>
#include <string.h>
//#include <openssl/md5.h>

using namespace std;

//Constructors
BBST::BBST(){
  //no tools created
}

BBST::BBST(char* filePath, char* fileName){
  this ->  filePath = filePath;
  this -> fileName = fileName;
  insert(filePath, fileName);
}

//public functions
void BBST::insert(char* filePath, char* fileName){
  current = root;
  doInsert(filePath, fileName);
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
    cout << "The file path is: " << b -> getFilePath() << "\n";
    cout << "The filename is: " << b -> getFileName() << "\n";
  if(b -> getRight() != NULL) doTraverse(b -> getRight());
}

void BBST::doInsert(char* filePath,char* fileName){
  if(root == NULL){
    root = new BagNode(filePath, fileName);
    cout << "Root created at address :" << &root << "\n";
    cout << "File: " << root -> getFileName() << "\n";
    cout << "Path: " << root -> getFilePath() << "\n";
  }//end create root;
  else if(strcmp(fileName, current -> getFileName()) < 0){
    cout << "Comparing left nodes" << "\n";
    if(current -> getLeft() == NULL){
      current -> setLeft(new BagNode(filePath, fileName));
      cout << "New left node created at address: " << &current << "\n";
    }//end create new left node
    else{
     current = current -> getLeft();
     doInsert(filePath, fileName);
    }
  }//end move to next left node
  else if(strcmp(fileName, current -> getFileName()) > 0){
    cout << "Comparing right nodes" << "\n";
    if(current -> getRight() == NULL){
      current -> setRight(new BagNode(filePath, fileName));
      cout << "New right node created at address: " << &current << "\n";
    }//end create new right node
    else{
      current = current -> getRight();
      doInsert(filePath, fileName);
    }///end move to next right node
  }//end right node loop
  else if(strcmp(filePath, current -> getFilePath()) == 0){
    cout << "Paths are the same." << "\n";
  }
} 

bool  BBST::isBalanced(BagNode* b){
  bool balance;
  if(getHeight(b) <= 1)
    balance =  1;
  else if(getHeight(b) >= 2)
    balance = 0;
  return balance;
}

int BBST::max(int a, int b){
  return a > b ? a:b;
}

int BBST::getHeight(BagNode* b){
  if(b == NULL)
    return 1;
  else
    return max(1 + getHeight(b -> getLeft()), 1 + getHeight(b -> getRight()));
}

void BBST::rotateLeft(BagNode *b){
  b -> setLeft(b -> getParent());
}

void BBST::rotateRight(BagNode *b){
  b -> setRight(b -> getParent());
}

void BBST::doubleRotateLeft(BagNode *b){
}

void BBST::doubleRotateRight(BagNode *b){
}
