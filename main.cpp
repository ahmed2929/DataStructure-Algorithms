#include <iostream>
#include<stdio.h>
using namespace std;
struct qnode{
int entry;
qnode *next;

};
struct cqueue{
qnode *front,*rear;
int size;

};
void inti(cqueue *pq){
pq->front=NULL;
pq->rear=NULL;
pq->size=0;


}
void append(cqueue *pq,int a){
qnode *pn=new qnode;
pn->entry=a;
pn->next=NULL;
if(!pq->rear)
    pq->front=pn;
else
    pq->rear->next=pn;

pq->rear=pn;
pq->size++;

}
void deque(cqueue *pq){
int pe =pq->front->entry;
qnode *pn=pq->front;
if(pq->front)
pq->front=pq->front->next;
delete(pn);
if(!pq->front)
    pq->rear=NULL;
pq->size--;

}
void clearq(cqueue *pq){
while(pq->front){
    pq->rear=pq->front->next;
    delete(pq->front);
    pq->front=pq->rear;
}

pq->size=0;

}
int main()
{


    return 0;
}
