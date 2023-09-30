#include<iostream>
using namespace std;

template<typename T>

class stack
{
        int size;
        int top;
        T *ptr;            
public:
        stack();
        stack(T s);
        void push(T);
        T pop();
        void display();
        bool isfull();
        bool isempty();
        void show();
};
template<typename T>
stack<T>::stack(T s)
{
     size=s;
     top=-1;
     ptr=new T[size];
}
template<typename T>
stack<T>::stack()
{
     size=7;
     top=-1;
     ptr=new T[size];
}
template<typename T>
void stack<T>::push(T val)
{
      if(!isfull())
      {
          ptr[++top]=val;
      }
      else
      {
          cout<<"overflow....."<<endl;
      }
}
template<typename T>
T stack<T>::pop()
{
     
      if(!isempty())
      {
        T temp=ptr[top];
        ptr[top]=0;
         top--;
         return temp;
      }
      else
      {
          cout<<"underflow....."<<endl;
          return 0;
      }
}
template<typename T>
bool stack<T>::isfull()
{
    return top==size-1;
}
template<typename T>
bool stack<T>::isempty()
{
    return top==-1;
}
template<typename T>
void stack<T>::show()
{
   //cout<<size<<endl;
   //cout<<ptr<<endl;
   for(int i=0; i<size; i++)
      cout<<ptr[i]<<"  ";
    cout<<endl;
}

int main()
{
     
     stack<int> S2;
    
     S2.push(100);
     S2.push(150);
     S2.push(200);
     
     S2.show();
     
     cout<<S2.pop()<<endl;
     
     S2.show();
     
     stack<const char*> S3;
     
     S3.push("akshay");
     S3.push("siddhant");
     S3.push("ketan");
     S3.push("gondya");
     
     S3.show();
     
     cout<<S3.pop()<<endl;
     
     S3.show();
     
     cout<<endl;
     
    /* S1.push(100);
     S1.push(150);
     S1.push(200);
     
     cout<<S1.pop()<<endl;
     cout<<S1.pop()<<endl;

     stack<const char*>  S2;
     
     S2.push("pakistan");
     S2.push("india");
     S2.push("srilanka");
     S2.push("england");
      
     cout<<S2.pop()<<endl;
     cout<<S2.pop()<<endl;
     cout<<S2.pop()<<endl;*/
     
     return 0;
}




