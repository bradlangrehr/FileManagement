#include "BBST.h"
#include <stdlib.h>
#include <iostream>
#include <cstddef>
#include <fts.h>
#include <cstdio>
#include <errno.h>
using namespace std;


int main(int argc, char** argv){
  char* dot[] = {".", 0};
  char** paths = argc > 1 ? argv + 1 : dot;
  BBST t;
  string response;
  FTS* tree = fts_open(paths, FTS_NOCHDIR, 0);
  if(!tree){
    perror("FTS open");
    return 1;
  }
  FTSENT* node;
  while((node = fts_read(tree))){
    if(node -> fts_level > 0 && node -> fts_name[0] == '.')
      fts_set(tree, node, FTS_SKIP);
    if(node -> fts_info & FTS_F){
      t.insert(node -> fts_path,node -> fts_name);
     }
  }
  if(errno){
    perror("FTS read");
    return 1;
  }
  if(fts_close(tree)){
    perror("fts_close");
    return 1;
  }	
  cout << "Do you want to traverse the tree (Y/n?):";
  cin >> response;
  /*if(response.compare("Y") == 0){
    t -> traverse();
    }*/
  return 0;
}//end main
