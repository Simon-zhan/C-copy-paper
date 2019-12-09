#include<iostream>
using namespace std;

struct Node
{
	int code;
	Node *next;
};

Node *Create(int);
void out(Node *,int);

int main()
{
	Node *head;
	int m, n;
	cin>>m;
	cin>>n;
	head=Create(m);
	out(head,n);
}

Node *Create(int n)
{
	Node *h, *p;
	int i;
	h= new Node;
	p=h;
	for(i=1;i<=n;i++)
	{
		p->code=i;
		if(i<n)
		{
			p->next=new Node;
			p=p->next;
		}
	}
	p->next=h;
	return h;
}

void out(Node *h, int d)
{
	Node *p, *q;
	int k;
	p=h;
	while(p!=p->next)
	{
		for(k=1;k<d;k++)
		{
			q=p;
			p=p->next;
		}
		q->next=p->next;
		delete p;
		p=NULL;
		p=q->next;
	}
	cout<<p->code<<endl;
	delete p;
	p=NULL;
}

