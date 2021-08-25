#include<iostream>
#include<cmath>
using namespace std;
//////////////////////STRUCTURE///////////////////////////
union info
{
    char ch;
    float num;
};
struct node{
info data;
node *link;
node(info x){
    data=x;
    link= NULL;
}
}*st;

struct rst{
    float data;
    rst *link;
    rst(float x){
        data=x;
        link= NULL;
    }
}*rs;

//////////////////////Fuctions///////////////////////////

void insertxp(info num,struct node *head){
    node *new_node;
    new_node=new node(num);
    new_node->link=head->link;
    head->link=new_node;
}

void insertrst(float x,rst *head){
    rst *new_p;
    new_p = new rst(x);
    new_p->link=head->link;
    head->link=new_p;
}

void del(rst *head){
    rst *temp;
    temp = head;
    head = head->link;
    delete temp;
}

bool checkop(info ch){
    
    
    if (ch.ch == '+' ||ch.ch=='-'||ch.ch=='*'||ch.ch=='/'||ch.ch=='^')
        return true;
    else
        return false;
    
}

float eval(float a,float b,char ch){
switch (ch)
    {
    case '+':
        return a+b ;
        break;
    case '-':
        return a-b;
        break;
    case '*':
        return a*b;
        break;
    case '/':
        return a/b;
        break;
    case '^':
        double c,d;
        c=(int)a;
        d=(int)b;
        return pow(c,d);
        break;
    default:
        break;
    }
}

float calc(node *head,rst *rsthead){
info x;
x.ch=')';
insertxp(x,head);
node *ptr = head;
info curr;
float a=0,b=0,num=0;
    for (int i = 0;; i++)
    {   curr = ptr->data;
        
        
        if(checkop(curr)==true)
        {   if (curr.ch == ')')
            {
                break;
            }
        
            a=rsthead->data;
            b=rsthead->link->data;
            num=eval(a,b,curr.ch);
            del(rsthead);
            del(rsthead);
            insertrst(num,rsthead);  
        }
        else
        {
            insertrst(curr.num,rs);
        }
    }
    if (rsthead->link->data=!NULL)
    {
        cout << "Invalid Polish Expression!!!\n";
    }
    return rsthead->data;
}

int main(){
info x;
cout << "Enter your Exoression and press B when you completly entred your post fix expression \n";
    for (int i = 0; i < 100; i++)
    {
        
        cin >> x.ch >> x.num;
        if (x.ch == 'B')
        {
            break;
        }
        insertxp(x,st);
    
    }

cout << "Expression Succfully Entred \n";
cout << "Answer to the expression is \n";
cout << calc(st,rs);

}
