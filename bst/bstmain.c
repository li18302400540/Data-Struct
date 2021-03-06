#include "bst.h"

int main(){
  BST bst;
  init_bst(&bst);

  //patten1 目标节点是root,root没有右子节点，左子节点中有右子节点
  //T ar[] = {45,12,3,37,24,38};
  //patten2 目标节点是root,root没有右子节点，左子节点中没有右子节点
  //T ar[] = {45,12,3};
  //patten3 目标节点是root,只有root节点
  //T ar[] = {45};
  //patten4 目标节点是root,root有右子节点，右子节点中没有左子节点
  //T ar[] = {45,12,53,3,37,100,24};
  //patten5 目标节点是root,root有右子节点，右子节点中有左子节点
  //T ar[] = {45,12,53,3,37,100,24,61,90,78};

  //patten6 目标节点(8)不是root,目标节点有左子节点，左子节点没有右边
  //T ar[] = {45,12,53,3,27,2,4,24,1,6,5,8,7};
  //patten7 目标节点(12)不是root,目标节点有左子节点，左子节点有右边
  //T ar[] = {45,12,53,3,27,2,4,24,1,6,5,8,7};
  //patten8 目标节点(120)不是root,目标节点没有左子节点，右子节点没有左边
  T ar[] = {45,12,53,3,37,52,100,2,4,24,51,61,120,1,6,90,130,5,8,78,126,140,7,124,127,125};

  //T ar[] = {45,12,53,3,37,100,24,61,90,78};
  //T ar[] = {45,3,4,12,53};
  int n = sizeof(ar) / sizeof(T);
  for(int i = 0; i < n; ++i){
    insert_bst_tree(&bst, ar[i]);
  }

  sort(&bst);
  printf("\n");

  //删除节点
  remove_bst(&bst, 45);
  sort(&bst);
  printf("\n");
  
  clear_bst(&bst);
}
