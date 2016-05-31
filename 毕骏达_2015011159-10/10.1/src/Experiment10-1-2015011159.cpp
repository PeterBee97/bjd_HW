#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int Bubble_Sort(int *aa)
{
	int i,j;
	int temp;
    for (i = 1; i < 10; ++i)
    {
    	for (j = i-1; j >= 0; --j)
    	{
    		if (*(aa+j) > *(aa+j+1))
    		{
    			temp=*(aa+j);
    			*(aa+j)=*(aa+j+1);
    			*(aa+j+1)=temp;
    		}
    	}
    }
}

int main()
{
    int** a;
    int i=0,j=0;
    srand(time(NULL));
    a=(int**)malloc(sizeof(int*)<<1);
    *a=(int*)malloc(sizeof(int)*10);
    *(a+1)=(int*)malloc(sizeof(int)*10);
    while (i<10)
    {
    	*(*a+i)=rand();
    	*(*(a+1)+i)=rand();
    	i++;
    }
    for (i=0;i<10;i++) cout<<*(*a+i)<<" "; cout<<"--array a\n\n";
    for (j=0;j<10;j++) cout<<*(*(a+1)+j)<<" "; cout<<"--array b\n\n";
    Bubble_Sort(*a);
    Bubble_Sort(*(a+1));
    for (i=0;i<10;i++) cout<<*(*a+i)<<" "; cout<<"--array a rearranged\n\n";
    for (j=0;j<10;j++) cout<<*(*(a+1)+j)<<" "; cout<<"--array b rearranged\n\n";
    i=0;j=0;
    while(i+j<20)
    {
        if ((i<10) && (j<10) && *(*a+i)>*(*(a+1)+j)){
            cout<<*(*(a+1)+j)<<" ";
            j++;
        }
        else if (i==10){
            cout<<*(*(a+1)+j)<<" ";
            j++;
        }
        else
        {
            cout<<*(*a+i)<<" ";
            i++;
        }
    }
    cout<<"--combined array\n";
}
