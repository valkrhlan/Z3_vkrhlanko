#include <iostream>
using namespace std;
 
 struct dat{
	int dan;
	int mjesec;
	int godina;
};
struct tosoba{
	char ime[20];
	char prezime[20];
	char spol;
	dat datum;
	int ai,bi,ci,di;
};

struct telement{
	tosoba osoba;
	telement *next;
};

struct qu {
	telement *front,*rear;
};
 
typedef qu queue;
typedef telement* element;


tosoba FrontQ(queue *Q){
	return Q->front->next->osoba;
}

void EnQueueQ(tosoba x,queue *Q){
	Q->rear->next=new telement;
	Q->rear=Q->rear->next;
	Q->rear->next=NULL;
	Q->rear->osoba=x;	
}

bool IsEmptyQ(queue *Q){
	if (Q->rear==Q->front) return 1;
		else return 0;
}

void DeQueueQ(queue *Q){
	if(!IsEmptyQ(Q)){
		element brisanje=Q->front;
		Q->front=Q->front->next;
		delete brisanje;
	}
}

void InitQ(queue *Q){
	Q->front=new telement;
	Q->rear=Q->front;	
}
