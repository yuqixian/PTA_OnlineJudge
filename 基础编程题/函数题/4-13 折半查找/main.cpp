#include <iostream>

using namespace std;

#define MAXLEN 50
typedef int KeyType;

typedef  struct                     
{ KeyType  key;                                             
} elementType;  

typedef  struct
{ elementType   data[MAXLEN+1]; 
  int   len;
} SeqList;                      

void creat(SeqList &L)
{ int i;
  cin>>L.len;
  for(i=1;i<=L.len;i++)
     cin>>L.data[i].key;   
}

int  binSearch(SeqList T, KeyType k);

int main () 
{  SeqList L;  KeyType k;
   creat(L);
   cin>>k;
   int pos=binSearch(L,k);
   if(pos==0) cout<<"NOT FOUND"<<endl;
   else cout<<pos<<endl;
   return 0;
}

int  binSearch(SeqList T, KeyType k)
{
	int i = 1;
	int j = T.len;
	int mid;
	int loc = 0;
	while( i<j)
	{
		mid = ( i+j)/2;
		if( T.data[mid].key == k)
		{
			loc = mid;
			break;
		}
		else if( T.data[mid].key > k)
			j = mid-1;
		else 
			i = mid+1;
	}
	
	return loc;
}
