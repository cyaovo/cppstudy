#include <iostream>
using namespace std;
class sell{
    private:
        int num;
        int goodnum;//销售员销售的商品数量
        float price;
        static int n;//销售总件数
        static float sum;
        static float discount;

    public:
        sell(int a,int b,float c):num(a),goodnum(b),price(c)
        {}
        void change(int n,int g,float p)
        {
            num=n;
            goodnum=g;
            price=p;
        }
        static void statistic(sell* s,int size)
        {
            for(int i=0;i<size;i++)
            {
                n+=s[i].goodnum;
                float temp;
                if(s[i].goodnum>10)
                    temp=0.98;
                else
                    temp=1;

                sum+=s[i].goodnum*s[i].price*discount*temp;
            }
        }
        static float average()
        {
            float avg=sum/n;
            return avg;
        }
        static void display()
        {
            cout << "销售总件数为：" << n << endl;
            cout << "销售总金额为：" << sum << endl;
            cout << "销售平均价格为：" << average() << endl;
        }
};
float sell::discount=0.9;
int sell::n=0;
float sell::sum=0;
int main(){
    sell sells[3]={
        sell(101,5,23.5),
        sell(102,12,24.56),
        sell(103,100,21.5)
    };
    sell::statistic(sells,3);
    sell::display();
    system("pause");
    return 0;
}
