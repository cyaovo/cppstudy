#include <iostream>
using namespace std;
class student{
    public:
        student(int a,int b):num(a),score(b)
        {}
        void change(int n,float s) 
        {
            num=n;
            score=s;
        }
        void display() const
        {
            cout << num <<" "<< score <<endl;
        }
        void fun(student& s)
        {
            s.change(102,90.5);
            s.display();

        }
    private:
        int num;
        float score;
};
int main() {
    student stud(101,78.5);
    student* const p=&stud;
    p->display();
    p->change(101,80.5);
    p->display();
    p->fun(*p);
    system("pause");
    return 0;
    
}