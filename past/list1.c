#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<omp.h>
#define rep(i,n) for(int i=0; i <(n); i++)

typedef struct __node{
  int no;
  char name[10];
  struct __node *next;
}Node;

void printlist(Node *list){
  Node *ptr;
  ptr = list;
  while (ptr != NULL){
    printf("no=%d name=%s\n",ptr->no,ptr->name);
    ptr = ptr->next;
  }
  printf("\n");
}

int main(void){
  Node *list;
  Node *node1,*node2,*node3,*node4;
  list = NULL;

  node1 = malloc(sizeof(Node));
  node1->no = 1;
  strcpy(node1->name,"aaa");
  node1->next = NULL;//仮

  node2 = malloc(sizeof(Node));
  node2->no = 2;
  strcpy(node2->name,"bbb");
  node2->next = NULL;//仮

  node3 = malloc(sizeof(Node));
  node3->no = 3;
  strcpy(node3->name,"ccc");
  node3->next = NULL;//仮

  node4 = malloc(sizeof(Node));
  node4->no = 4;
  strcpy(node4->name,"ddd");
  node4->next = NULL;//仮

  //(1)
  list = node1;
  node1->next=NULL;

  printlist(list);

  //(2)
  node1->next=node2;
  node2->next=NULL;

  printlist(list);

  //(3)
  list=node3;
  node3->next=node1;

  printlist(list);

  node1->next=node4;
  node4->next=node2;

  printlist(list);

  return 0;
}
