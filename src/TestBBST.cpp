#include "BBST.h"
#include <stdlib.h>
#include <iostream>
#include <cstddef>
using namespace std;

///function declarations
int randomNumber(){
  const int min = 1;
  const int max = 10000;
  return rand()%(max-min+1)+min;
}//end random function

int main(){
  int input = 0;
  int sentinel = 0;
  BBST tree;
  while(sentinel < 10){
    cout << "Please enter a number:";
    cin >> input;
    cout << "Entered: " << input << "\n";
    tree.insert(input);
    sentinel++;
  }
  tree.traverse();
  cout << tree.balance() << "\n";
  return 0;
}//end main
