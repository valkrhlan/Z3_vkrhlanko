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

struct qu {
	tosoba osoba[10000];
	int front,rear;
};

typedef qu queue;
typedef int element;

int AddOne(int n) {
	return((n+1)%10000);
}

tosoba FrontQ(queue *Q){
	return Q->osoba[Q->front];	
}

void EnQueueQ(tosoba x,queue *Q){
	 	Q->rear=AddOne(Q->rear);
		Q->osoba[Q->rear]=x;
}

bool IsEmptyQ(queue *Q){
	if (AddOne(Q->rear)==Q->front) return 1;
	else return 0;
}

void DeQueueQ(queue*Q){
 Q->front=AddOne(Q->front);	
}

void InitQ(queue *Q){
	Q->front=0;
	Q->rear=9999;
}
