#ifndef BagNode_H
#define BagNode_H
using namespace std;

class BagNode{
 private:
  char* filePath;
  char* fileName;
  
  BagNode* parent;
  BagNode* left;
  BagNode* right;
 
 public:
  //Constructors
  BagNode();
  BagNode(char* filePath, char* fileName);

  //Mutators
  void setFilePath(char* filePath);
  void setFileName(char* fileName);
  void setLeft(BagNode* left);
  void setRight(BagNode* right);
  void setParent(BagNode *parent);
 
  //Accesors
  char*  getFilePath();
  char*  getFileName();
  BagNode* getParent();
  BagNode* getLeft();
  BagNode* getRight();
};
#endif
