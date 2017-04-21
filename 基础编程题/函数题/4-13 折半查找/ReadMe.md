##4-13 折半查找   
给一个严格递增数列，函数int binSearch(SeqList T, KeyType k)用来二分地查找k在数列中的位置。

***函数接口定义***：
```
int  binSearch(SeqList T, KeyType k);
```
其中`T`是有序表，`k`是查找的值。

***裁判测试程序样例***：

```
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

/* 请在这里填写答案 */
```
***输入格式***：

第一行输入一个整数n，表示有序表的元素个数，接下来一行n个数字，依次为表内元素值。 然后输入一个要查找的值。

***输出格式***：

输出这个值在表内的位置，如果没有找到，输出"NOT FOUND"。

***输入样例：***
```
5
1 3 5 7 9
7
```
***输出样例***：
```
4
```
输入样例：
```
5
1 3 5 7 9
10
```
***输出样例***：
```
NOT FOUND
```

***Code***
```
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
```