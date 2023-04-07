// this code is writen in c++ by tushar 
// stack using array list

#include<iostream>
using namespace std;

int stack[5],top=-1;
void push();
void pop();
void show();

int main(){
    int choice;
    cout<<"this program is made by c++ \n"<<endl;
    cout<<"1.push"<<endl;
    cout<<"2.pop"<<endl;
    cout<<"3.show"<<endl;
    cout<<"4.exit"<<endl;
    
while (1)
{
    cout<<"\nenter choice \n";
    cin>>choice;


    switch (choice)
    {
    case 1:push();
        break;
    case 2:pop();
        break;
    case 3:show();
        break;
    case 4:exit(0);
        break;
    
    default:
        cout<<"invalid choice ";
        break;
    }

}
}

void push(){
    int item;
    if(top==5-1){
        cout<<"stack  is full \n";
    }
    else{
        cout<<"enter item in the stack :";
        cin>>item;
        top=top+1;
        stack[top]=item;
    }
    
}

void pop(){
    if(top==-1){
        cout<<"stack is empty...";
    }
    else{
        cout<<stack[top]<<" item poped ";
        stack[top];
    }
}

void show(){
    int i;
    if(top>=0){
        cout<<"elements are \n";
        for(i=top;i>0;i--){
            cout<<"\n" <<stack[i];           
        }
    }
    else{
        cout<<"stack is empty ";
    }
}