#include <iostream>
#include "Student.h"
using namespace std;

int main()
{
    Student  *stu;  
    int n;  
    float avg[N];    //全班每门课的平均分
    cout << "请输入学生人数" <<endl;
    cin >> n;
    stu=new Student[n];    //动态分配n个学生的存储空间
	
    ReadFromFile(stu, n) ;     //从文件读入学生数据  //它也会自动把平均分算了    
    //input(stu, n); 		    // 输入n个学生数据 
    //print(stu, n); 		    // 输出n个学生数据
    //average(stu, n);	    // 求每个学生三门课的平均分
    sort_average(stu, n); 	//按平均成绩从高到低对学生进行排序,计算学生排名
    print(stu, n);			// 输出排序后的学生数据
    top1(stu, n); 		// 输出平均分排名第1的学生数据，包括：学号、姓名、3门课成绩、
                        //平均分数，排名,可能有多个学生共同排名第1
    sort_name(stu, n); 		//按姓名对学生进行排序
    print(stu, n);			// 输出排序后的学生数据
    print_fail(stu, n);      // 输出有课程不及格的学生的数据
    topmath(stu, n); 			// 输出数学的最高分数
    score_average(stu, avg, n);   //求全班每门课的平均分,求出的每门课的平均分存储在
                                  //avg中，在主函数中再输出每门课的平均分
    print_avg(avg);         //输出全班每门课的平均分

    delete []stu;		        //撤销分配的存储空间 
    system("pause");
    return 0;
}