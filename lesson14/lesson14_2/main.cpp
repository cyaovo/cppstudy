#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    float score;
    int age;
    static float averageScore;
    static float totalScore;
    static float maxScore;
    static float minScore;

    
public:
    Student() {}  // 默认构造函数
    Student(string n, float s, int a) : name(n), score(s), age(a){}
    friend void scorestatistics(Student*,int n); // 友元函数用于统计成绩
    friend void showstatistics(); // 友元函数用于显示统计结果
    // 获取成绩
    float getScore() {
        return score;
    }
    
    // 设置成绩
    void setScore(float s) {
        score = s;
    }
    
    // 显示信息
    void show() {
        cout << name << "的成绩是：" << getScore() << endl;
        cout << name << "的年龄是：" << age << endl;
    }
};



void scorestatistics(Student* student,int n) {
    float total = 0;
    Student::maxScore = student[0].score;
    Student::minScore = student[0].score;
    
    for (int i = 0; i < 5; ++i) {
        float score = student[i].score;
        total += score;
        if (score > Student::maxScore) {
            Student::maxScore = score;
        }
        if (score < Student::minScore) {
            Student::minScore = score;
        }
    }
    
    Student::averageScore = total / 5;
    Student::totalScore = total;

}

void showstatistics() {
    cout << "平均成绩: " << Student::averageScore << endl;
    cout << "最高成绩: " << Student::maxScore << endl;
    cout << "最低成绩: " << Student::minScore << endl;
}

float Student::averageScore = 0;
float Student::totalScore = 0;
float Student::maxScore = 0;
float Student::minScore = 0;


int main() {
    const int n = 5;
    Student* students=new Student[n];
    for(int i = 0; i < n; i++) {
        string name;
        float score;
        int age;
        cout << "请输入第" << i + 1 << "个学生的姓名、成绩和年龄：" << endl;
        cin >> name >> score >> age;
        students[i] = Student(name, score, age);
    }
    for(int i = 0; i < n; i++) {
        students[i].show();
    }
    scorestatistics(students, n);
    showstatistics();
    system("pause");
    delete[] students;


    return 0;
}