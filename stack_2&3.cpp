// 2 & 3
#include <iostream>

using namespace std;

class stack{

public:
stack();
int empty();
int full();
void push(int x);
int pop();
void prints();
void tops();

private:
    int top;
    int items[5];
    };

    stack::stack(){
        top=-1;
    }

    int stack::empty(){
    if(top==-1)
        return 1;
    return 0;
    }

    int stack::full(){
    if(top==4)
        return 1;
    return 0;
    }

    void stack::push(int x){
    if(full()){
        cout<<"stack is full"<<endl;
       
    }
    else
       items[++top]=x;
    }
    
    void stack::prints()
 {
   if(top>=0)
   {
       cout<<"displays all the elements in the stack"<<endl;
      for(int i=top+1; i>=0; i--)
      cout<<items[i]<<" ";
      cout<<endl;
   }
   else
   cout<<"Stack is empty";
}

void stack:: tops()
{
   if(top<=-1)
   cout<<"Stack Underflow"<<endl;
   else {
       cout<<"the topmost value of the stack"<<endl;
      cout<< items[top] <<endl;
      top--;
   }
}

int main()
{
   stack s;
   s.push(0);
     s.push(1);
       s.push(2);
        s.push(3);
          s.push(4);
           
            s.tops();
         
            s.prints();
            
            
   
}