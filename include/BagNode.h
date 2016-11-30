#ifndef BagNode_H
#define BagNode_H
using namespace std;

class BagNode{
 private:
  int dataItem,count;
  BagNode* parent;
  BagNode* left;
  BagNode* right;
 
 public:
  //Constructors
  BagNode();
  BagNode(int dataItem, int count);

  //Mutators
  void setDataItem(int dataItem);
  void setCount(int count);
  void setLeft(BagNode* left);
  void setRight(BagNode* right);
 
  //Accesors
  int getDataItem();
  int getCount();
  BagNode* getParent();
  BagNode* getLeft();
  BagNode* getRight();
};
#endif
