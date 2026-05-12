#include <iostream>
#include <fstream>

using namespace std;

struct Student {
    int id;
    char name[20];
    float scores[3];
    float total;
    float average;
};

void calculateStudentInfo(Student *stu,int n) {
    for(int i = 0; i < n; i++)
    {
        stu[i].total = 0;
        for(int j = 0; j < 3; j++)
        {
            stu[i].total += stu[i].scores[j];
        }
        stu[i].average = stu[i].total / 3;
    }
   
}

void input(Student *stu,int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << "请输入第 " << i + 1 << " 个学生的信息：" << endl;
        cout << "学号: ";
        cin >> stu[i].id;
        cout << "姓名: ";
        cin >> stu[i].name;
        cout << "请输入3门课程的成绩: ";
        for(int j = 0; j < 3; j++)
        {
            cin >> stu[i].scores[j];
        }
    }
}

void display(Student *stu,int n)
{
    cout << "学生成绩报告：" << endl;
    for(int i = 0; i < n; i++)
    {
        cout << "学号: " << stu[i].id << ", 姓名: " << stu[i].name 
             << ", 总分: " << stu[i].total << ", 平均分: " << stu[i].average << endl;
    }
 	
 	
}
 
void save_to_file(const char *s, Student *stud, int n) 
{ 
    ofstream outFile(s, ios::binary);//以二进制方式打开文件
    if(!outFile)
    {
        cerr << "无法打开文件进行写入。" << endl;
    }
    outFile.write((char*) stud, n * sizeof(Student));
    outFile.close();
  return;
}
void save_to_file2(const char *s, Student *stu, int n)
{ 
     ofstream outFile(s , ios::out);//以文本方式打开文件,注意到report.txt是文本文件
    if(!outFile)
    {
        cerr << "无法打开文件进行写入。" << endl;
    }
    for(int i = 0; i < n; i++)
    {
        outFile << "学号: " << stu[i].id << ", 姓名: " << stu[i].name 
                << ", 总分: " << stu[i].total << ", 平均分: " << stu[i].average << endl;
    }
    outFile.close();
    cout << "文件写入完毕" << endl;
}

void get_from_file(const char *s, Student *stud, int n)
{
    ifstream inFile(s, ios::binary);//以二进制方式打开文件
    if(!inFile)
    {
        cerr << "无法打开文件进行读取。" << endl;
    }
    inFile.read((char*) stud, n * sizeof(Student));
    inFile.close();
}

int main()
{
    int n; 
    cout << "请输入学生人数: ";
    cin >> n;
    Student* stud = new Student[n];
    input(stud,n);  
    save_to_file("stud.dat", stud,  n); 
    Student* stu = new Student[n];
    get_from_file("stud.dat", stu,  n);
    calculateStudentInfo(stu,n);
    save_to_file2("report.txt", stu,  n);
    display(stu,n);
    delete[] stud;
    delete[] stu;
    system("pause");
    return 0;
}