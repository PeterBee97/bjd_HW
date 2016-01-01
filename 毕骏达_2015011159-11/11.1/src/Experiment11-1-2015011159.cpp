#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int Bubble_Sort(char** a,int n)
{
	int i,j,k;
	char* temp;
    for (i = 1; i < n; ++i)
    {
    	for (j = i-1; j >= 0; --j)
    	{
    	    k=0;
    	    while(*(*(a+j)+k)!='\0' && *(*(a+j+1)+k)!='\0')
            {
                if (*(*(a+j)+k) > *(*(a+j+1)+k))
                {
                    temp=*(a+j);
                    *(a+j)=*(a+j+1);
                    *(a+j+1)=temp;
                    break;
                }
                if (*(*(a+j)+k) == *(*(a+j+1)+k)) k++;
                else break;
            }

    	}
    }
}

int main()
{
    char** a;
    char temp[80];
    int i=0,j=0,n=0;
    cin>>n;
    a=(char**)malloc(sizeof(char*)*n);
    for(i=0;i<n;i++)
    {
        cin>>temp;
        j=0;
        while(temp[j]!='\0')j++;
        *(a+i)=(char*)malloc(sizeof(char)*(j+1));
        while(j>=0){
                *(*(a+i)+j)=*(temp+j);
                j--;
        }
    }
    Bubble_Sort(a,n);
    for(i=0;i<n;i++) cout<<*(a+i)<<endl;
}
