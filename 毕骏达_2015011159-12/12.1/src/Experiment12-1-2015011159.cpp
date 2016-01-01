#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstring>

using namespace std;

typedef struct student{
	unsigned long ID;
	char name[10];
	char sex;
	char birth[10];
	float score;
	};

void output(struct student stu[])
{
    ofstream   outf("student.txt");
    streambuf   *strm_buf   =   cout.rdbuf();
    cout.rdbuf(outf.rdbuf());
    for(int i=0;i<10;i++)
    {
        cout<<"StudentID:";
        cout<<stu[i].ID;
        cout<<"\nName:";
        cout<<stu[i].name;
        cout<<"\nSex:";
        cout<<stu[i].sex;
        cout<<"\nBirthday:";
        cout<<stu[i].birth;
        cout<<"\nScore:";
        cout<<stu[i].score;
        cout<<endl;
    }
    outf.close();
    cout.rdbuf(strm_buf);   //recover
}

void lookup(int id)
{
    struct student stu;
    bool found=false;
    char temp[20];
    ifstream inf("student.txt");
    streambuf   *strm_buf   =   cin.rdbuf();
    cin.rdbuf(inf.rdbuf());
    if (!inf) {cout<<"Open failed!";return;}
    while(cin>>temp){
        if (strstr(temp,"ID")!=NULL)
        if (atoi(temp+10)-id==0)
        {
            for(int i=0;i<4;i++)
            {
                cout<<temp<<endl;
                cin>>temp;
            }
            cout<<temp<<endl;
            found=true;
   //         break;
        }
    }
    if (!found) cout<<"Not found!\n";
    inf.close();
    cin.rdbuf(strm_buf);
}

int Bubble_Sort(struct student stu[])
{
	int i,j;
	int temp;
    for (i = 1; i < 10; ++i)
    {
    	for (j = i-1; j >= 0; --j)
    	{
    		if ((stu[j].score) > (stu[j+1].score))
    		{
    			temp=stu[j].score;
    			stu[j].score=stu[j+1].score;
                stu[j+1].score=temp;
    		}
    	}
    }
}

float average(struct student stu[])
{
    float sum=0;
    for (int i=0;i<10;i++)
        sum+=stu[i].score;
    return sum/10;
}

int main()
{
    int** a;
    int i=0,j=0,id=0;

    struct student stu[10];
    for (i=0;i<10;i++)
    {
        cout<<"Student"<<i+1<<":\nEnter ID:";
        cin>>stu[i].ID;
        cout<<"\nEnter name:";
        cin>>stu[i].name;
        cout<<"\nEnter sex(M/F):";
        cin>>stu[i].sex;
        cout<<"\nEnter birthday:";
        cin>>stu[i].birth;
        cout<<"\nEnter score:";
        cin>>stu[i].score;
        cout<<endl;
    }
    cout<<"After sorting,students' list:"<<endl;
    Bubble_Sort(stu);
    for(int i=0;i<10;i++)
    {
        cout<<"StudentID:";
        cout<<stu[i].ID;
        cout<<"\nName:";
        cout<<stu[i].name;
        cout<<"\nSex:";
        cout<<stu[i].sex;
        cout<<"\nBirthday:";
        cout<<stu[i].birth;
        cout<<"\nScore:";
        cout<<stu[i].score;
        cout<<endl<<endl;
    }
        cout<<"Average score:"<<average(stu)<<endl;
        output(stu);
    while(1){
        cout<<"Please enter student ID to search, enter -1 to quit:";
        cin>>id;
        if (id==-1) break;
        lookup(id);
    }
    return 0;
}
