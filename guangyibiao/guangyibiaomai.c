#include "guangyibiao.h"

int main(){
  GenList gl;
  init(&gl);
  
  char* a = "(1,2,3)";
  char* b = "(1,(2,3))";
  char* c = "(1,(2),3)";
  char* d = "((1,2),3)";
  char* e = "((1,2,3))";
  char* f = "((),1)";
  char* g = "(1,(2,(3,4)),5)";
  char* h = "((),1,(2,(3,(),4)),5)";
  char* i = "(())";
  
  createGenList(&gl, d);
  show(gl);


  printf("length:%d\n", length(gl));

  GLNode* head = getHead(gl);
  //show(head);
  GLNode* tail = getTail(gl);
  //show(tail);

  GLNode* n1;
  init(&n1);
  char* n1a = "(1)";  
  createGenList(&n1, n1a);
  show(n1);
  push_head(&gl, n1);
  show(gl);

  GLNode* n2;
  init(&n2);
  char* n2a = "(4,(5,6))";  
  createGenList(&n2, n2a);
  show(n2);
  push_tail(gl, n2);
  show(gl);

  pop_head(&gl);
  show(gl);

  pop_tail(&gl);
  show(gl);

  pop_head(&gl);
  show(gl);

  //destroy(gl);
  //gl = NULL;
  
  return 0;
}
