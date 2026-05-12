#include <iostream>
using namespace std;
class Matrix
{
private:
    int data[2][3];
public:
    Matrix(){
        for (int i=0;i<2;i++)
            for (int j=0;j<3;j++)
                data[i][j]=0;
    };
    Matrix(int d[][3]){
        for (int i=0;i<2;i++)
            for (int j=0;j<3;j++)
                data[i][j]=d[i][j];
    };
    void show_value() const
    {
        for (int i=0;i<2;i++)
        {
            for (int j=0;j<3;j++)
                cout<<data[i][j]<<" ";
            cout<<endl;
        }
    };
    friend istream& operator>>(istream& input, Matrix& m);
    friend ostream& operator<<(ostream& output, const Matrix& m);
    friend Matrix operator+(const Matrix& a, const Matrix& b);
}; 
Matrix operator+(const Matrix& a, const Matrix& b)
{
 Matrix temp;
    for (int i=0;i<2;i++)
        for (int j=0;j<3;j++)
            temp.data[i][j]=a.data[i][j]+b.data[i][j];
    return temp;
}
istream& operator>>(istream& intput, Matrix& m)
{
    cout<<"请输入矩阵的元素值："<<endl;
    int d[2][3];
    for(int i=0;i<2;i++)
        for(int j=0;j<3;j++)
            intput>>d[i][j];
    m=Matrix(d);
    return intput;
}
ostream& operator<<(ostream& output, const Matrix& m)
{
    for (int i=0;i<2;i++)
        for (int j=0;j<3;j++)
        {
            output<<m.data[i][j]<<" ";
            if (j==2)
                output<<endl;
        }
    return output;
}
int main()
{
    int d1[2][3]={{1,2,3},{4,5,6}};
    int d2[2][3]={{6,5,4},{3,2,1}};
    Matrix m1(d1);
    Matrix m2(d2);
    Matrix m3;
    m3=m1+m2;
    cout<<"m1:"<<endl; m1.show_value(); cout<<endl;
    cout<<"m2:"<<endl; m2.show_value(); cout<<endl;
    cout<<"m1+m2:"<<endl; m3.show_value(); cout<<endl;
    Matrix m4;
    cin>>m4;
    cout<<"你输入的矩阵是："<<endl;
    cout<<m4<<endl;
    system("pause");
    return 0;
}   
