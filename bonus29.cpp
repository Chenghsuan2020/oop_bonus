#include <iostream>
#include <cstring>

using namespace std; 
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=15288
struct Lnode
{
	int num; 
	struct Lnode *next;
};

struct Lnode *insert(struct Lnode *L,int num)
{
	struct Lnode *p;
	p = new Lnode;	
	p->num = num;
	p->next = L;
	return p;
}


void print(struct Lnode *L)
{
	struct Lnode *p;
	p = L;
	while(p)
		{
			if( p->next == NULL)
				{
					cout << p->num;
					//printf("%d",p->num);
				}
			else
				{
					cout << p->num << " ";
					//printf("%d ",p->num);
				}
			p = p->next;
		}
	cout << endl;
	
}

int main()
{
	int num_temp = 0;
	struct Lnode *termlist =NULL;
	while(cin >> num_temp)	
	{   
			termlist = insert(termlist,num_temp);
	}
	print(termlist);
}