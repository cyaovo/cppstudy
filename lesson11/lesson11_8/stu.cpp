#include "stu.h"
void stu::input()
{
    cout << "请输入学号：";
    cin >> num;
    cout << "请输入姓名：";
    cin >> name;
    cout << "请输入语文、数学、英语成绩：";
    for(int i=0; i < 3; i++) {
        cin >> score[i];
    }
}

void stu::infprint()
{
    cout << "学号：" << num << "\t姓名：" << name << "\t语文：" << score[0] << "\t数学：" << score[1] << "\t英语：" << score[2] <<"\t平均分:"<< (score[0]+score[1]+score[2])/3<< endl;
}

void scorestatistics(stu* p,int n)
{
    float average[3]={0};
    for(int i=0;i<3;i++){
        for(int j=0;j<n;j++){
            average[i]=average[i]+(p+j)->score[i];
        }
    }
    average[0]=average[0]/n;
    average[1]=average[1]/n;    
    average[2]=average[2]/n;
    cout<<endl;
    cout<<"语文平均分："<<average[0]<<endl;
    cout<<"数学平均分："<<average[1]<<endl;
    cout<<"英语平均分："<<average[2]<<endl;
    float* totalscore=new float[n];//统计最高分
    for(int i=0;i<n;i++){
        totalscore[i]=(p+i)->score[0]+(p+i)->score[1]+(p+i)->score[2];
    }
    float max=totalscore[0];
    int temp=0;//纪录最高分是谁
    for(int i=0;i<n;i++){
        if(totalscore[i]>max){
            max=totalscore[i];
            temp=i;
        }
    }//纪录最高分是谁
    cout<<endl;
    cout<<"总分最高的学生信息为："<<endl;
    (p+temp)->infprint();
    for(int i=0;i<n;i++){
        if(totalscore[i]==max && i!=temp){
            cout<<"总分最高的学生信息为："<<endl;
            (p+i)->infprint();
        }
    }//记录同分情况
    delete[] totalscore;
}