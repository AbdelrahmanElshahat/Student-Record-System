//
// Created by abdel on 1/21/2021.
//
#include "Linkedlist.h"
void CreateList(List *pl){
    pl->head = NULL;
    pl->size = 0;
}
int ListEmpty(List *pl){
    return (pl->size == 0);
}
int ListFull(List *pl){
    return 0;
}

void DestroyList(List *pl){
    Listnode *q=pl->head;
    while(q != NULL){
        q=q->next;
        free(pl->head);
        pl->head=q;
    }
    pl->size = 0;
}
void TraverseList(List *pl,void (*visit)(Listentery)){
    Listnode  *p=pl->head;
    while (p){
        (*visit)(p->entery);
        p=p->next;
    }
}
void Insert(int pos , Listentery e,List *pl){
    Listnode *p,*q;
    int i;
    p=(Listnode *)(malloc(sizeof(Listnode)));
    p->entery=e;
    p->next=NULL;
    if (pos==0){
        p->next=pl->head;
        pl->head=p;
    }
    else{
        for (q=pl->head,i=0;i<pos-1;i++){
            q=q->next;
        }
        p->next=q->next;
        q->next=p;
    }
    pl->size++;
}
void Delete(int pos,Listentery *pe,List *pl){
    int i;
    Listnode *q,*temp;
    if(pos == 0){
        *pe=pl->head->entery;
        temp=pl->head;
        pl->head=pl->head->next;
        free(temp);
    } else{
        for (q=pl->head,i=0;i<pos-1;i++){
            q=q->next;
        }
        *pe=q->next->entery;
        temp=q->next->next;
        free(q->next);
        q->next=temp;
    }
    pl->size--;
}
student_t RetrieveList(int pos,Listentery*pe,List*pl){
    int i;
    Listnode *q;
    for (q=pl->head,i=0;i<pos;i++){
        q=q->next;
    }
    return  *pe=q->entery;
}
void Replace(int pos ,Listentery e,List *pl){
    int i;
    Listnode *q;
    for(q=pl->head,i=0;i<pos;i++){
        q=q->next;
    }
    q->entery=e;
}
int ListSize(List *pl){
    return pl->size;
}