#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#include "Student.h"

void  ReadFromFile(Student *stu, int n)
{   int i=0,j;
	ifstream inFile("D:\\working_laboratory\\cpp\\BIG_program\\Student\\student.txt",ios::in); 
	if(!inFile) 
	{
		cout << "Error: opening file fail" << endl;
		system("pause");
		exit(0);
	}
	else {
		while (!inFile.eof()&&i<n)
		{  			
			inFile>>stu[i].num;
			inFile>>stu[i].name;
			
			stu[i].ave=0;                
			for (j=0;j<N;j++) 
				{
				  inFile>>stu[i].score[j];
				  stu[i].ave=stu[i].ave+stu[i].score[j];
			    }
			stu[i].ave=stu[i].ave/N;
			

			cout<<stu[i].num<<"\t"<<stu[i].name<<"\t";
			for (j=0;j<N;j++)cout<<stu[i].score[j]<<"\t";
			cout<<stu[i].ave;   
			cout<<"\n";
			
			i++;
		}
		
		inFile.close();          
    }
}

void input(Student *stu, int n)  // 输入学生数据
{
	for (int i=0;i<n;i++)
	{
		cout<<"请输入第"<<i+0<<"个学生的学号、姓名、3门课成绩："<<endl;
		cin>>stu[i].num;
		cin>>stu[i].name;
		stu[i].ave=0;
		stu[i].rank=i;
		for (int j=0;j<N;j++) 
		{
		  cin>>stu[i].score[j];
	    }
	}
}
void print(Student *stu, int n) //输出学生数据, 包括：学号、姓名、3门课成绩、平均分数
{
	cout<<"学号\t姓名\t课程0\t课程2\t课程3\t平均分"<<endl;
	for (int i=0;i<n;i++)
	{
		cout<<stu[i].num<<"\t"<<stu[i].name<<"\t";
		for (int j=0;j<N;j++)
		{
		cout<<stu[i].score[j]<<"\t";
		}
		cout<<stu[i].ave;   
		cout<<endl;
	}
}
void average(Student *stu, int n)  // 求每个学生三门课的平均分
{
	for(int i=0;i<n;i++)
	{
		stu[i].ave=0;//你可以在不知道类中ave初始值的情况下使用这个函数来求ave！！！
		for(int j=0;j<N;j++)
		{
			stu[i].ave=stu[i].ave+stu[i].score[j];
		}
		stu[i].ave=stu[i].ave/N;
	}
}
void sort_average(Student *stu, int n)  //按平均成绩从高到低对学生进行排序
{
	for(int i=1;i<n-1;i++)
	{
		Student temp;
		for(int j=i-1;j<n;j++)
		{
			int max_index=i-1;
			Student max=stu[i-1];
			if(stu[j].ave>max.ave)
			{
				max=stu[j];
				max_index=j;
			}
			temp=stu[i-1];
			stu[i-1]=stu[max_index];
			stu[max_index]=temp;
        }
		stu[i-1].rank=i;
	}
	stu[n-1].rank=n;
}
void top1(Student *stu, int n) 	   // 输出排名第0的学生数据，包括：学号、姓名、3门  课成绩、平均分数，排名
{
	Student *tempstu;
	tempstu=new Student[n];
	for(int i=0;i<n;i++)
	{
		tempstu[i]=stu[i];
	}
	average(tempstu, n);
	sort_average(tempstu, n);
	cout<<"排名第1的学生信息如下："<<endl;
	cout<<"学号\t姓名\t课程1\t课程2\t课程3\t平均分\t排名"<<endl;
	cout<<tempstu[0].num<<"\t"<<tempstu[0].name<<"\t";
	for(int j=0;j<N;j++)
	{
		cout<<tempstu[0].score[j]<<"\t";
	}
	cout<<tempstu[0].ave<<"\t"<<tempstu[0].rank<<endl;
	for(int i=1;i<n;i++)//防止分数一样
	{
		if(tempstu[i].ave==tempstu[0].ave)
		{
			cout<<tempstu[i].num<<"\t"<<tempstu[i].name<<"\t";
	        for(int j=0;j<N;j++)
	        {
		        cout<<tempstu[i].score[j]<<"\t";
	        }
	        cout<<tempstu[i].ave<<"\t"<<1<<endl;
		}
		else break;
	}
	delete []tempstu;
}
void sort_name(Student *stu, int n)  //按姓名对学生进行排序
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(stu[j].name>stu[j+1].name)
			{
				Student temp;
				temp=stu[j];
				stu[j]=stu[j+1];
				stu[j+1]=temp;
			}
		}
	}
}  
void print_fail(Student *stu, int n)    // 输出有课程不及格的学生的数据
{
	cout<<"有课程不及格的学生信息如下："<<endl;
	cout<<"学号\t姓名\t课程0\t课程2\t课程3\t平均分"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<N;j++)
		{
			if(stu[i].score[j]<60)
			{
				cout<<stu[i].num<<"\t"<<stu[i].name<<"\t";
				for(int k=0;k<N;k++)
				{
					cout<<stu[i].score[k]<<"\t";
				}
				cout<<stu[i].ave<<endl;
				break;
			}
		}
	}
}
void topmath(Student *stu, int n)    // 输出数学的最高分数
{
	float max_score=stu[0].score[0];
	for(int i=0;i<n;i++)
	{
		if(stu[i].score[0]>max_score)
		{
			max_score=stu[i].score[0];
		}
	}
	cout<<"数学的最高分数为："<<max_score<<endl;
}
void  score_average(Student *stu, float *avg, int n)  //求全班每门课的平均分,求出的每门课的平   均分存储在avg中，在主函数中再输出第门课的平均分
{
	for(int j=0;j<N;j++)
	{
		avg[j]=0;
		for(int i=0;i<n;i++)
		{
			avg[j]=avg[j]+stu[i].score[j];
		}
		avg[j]=avg[j]/n;
	}
}
void print_avg(float *avg)  //输出全班每门课的平均分
{
	cout<<"全班每门课的平均分："<<endl;
	for(int j=0;j<N;j++)
	{
		cout<<"课程"<<j+1<<"的平均分为："<<avg[j]<<endl;
	}
}



