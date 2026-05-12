#include <iostream>
using namespace std;
struct example
{
    int a;
    example *next;
};

example* create(int n)
{
    example *head;
    example *p;
    example *q;
    int i=1;
    head=new example;
    p=head;
    while(i<=n)
    {
        cout<<"请输入第"<<i<<"个节点的值："<<endl;
        cin>>p->a;
        if(i<n)
        {
            q=new example;//生成下一个节点的地址
            p->next=q;
            p=q;//让p指向下一个节点
        }
        else p->next=NULL;//最后一个节点的next域置为空
        i++;
    }
    return head;
}
 
void chain_print(example* head)
{
    example* p=head;
    cout<<"链表中的节点值为："<<endl;
    while(p!=NULL)
    {
        cout<<p->a<<" ";
        p=p->next;
    }
    cout<<endl;
}
int main()
{
    int n;
    cout<<"请输入节点个数："<<endl;
    cin>>n;
    example *head;
    head=create(n);
    chain_print(head);
    example* deleter;
    deleter=head;
    while(head!=NULL)
    {
        head=head->next;
        delete deleter;
        deleter=head;
    }
    system("pause");
    return 0;
}