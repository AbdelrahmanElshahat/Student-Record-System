//
// Created by abdel on 1/21/2021.
//

#ifndef LINKEDLIST_LINKEDLIST_H
#define LINKEDLIST_LINKEDLIST_H
#include "structstudent.h"
#include <stdlib.h>
typedef student_t Listentery;
typedef struct List_node{
    Listentery entery;
    struct List_node *next;
}Listnode;
typedef struct list{
    Listnode *head;
    int size;
}List;
void CreateList(List *);
int ListEmpty(List *);
int ListFull(List *);
int ListSize(List*);
void DestroyList(List *);
void Insert(int , Listentery,List *);
void Delete(int ,Listentery *,List *);
void TraverseList(List *,void (*visit)(Listentery));
student_t RetrieveList(int ,Listentery*,List*);
void Replace(int ,Listentery,List *);
#endif //LINKEDLIST_LINKEDLIST_H
