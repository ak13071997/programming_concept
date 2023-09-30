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
      throw stack(__LINE__,__TOP__);
         // cout<<"overflow....."<<endl;
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
      throw stack(__LINE__,__TOP__);
          //cout<<"underflow....."<<endl;
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
   for(int i=0; i<size; i++)
      cout<<ptr[i]<<"  ";
    cout<<endl;
}

int main()
{
     
     stack<int> S2;
    try
    {
     S2.push(100);
     S2.push(150);
     S2.push(200);
     }
     catch(stack e)
     {
     e.show();
     }
     try
     {
     cout<<S2.pop()<<endl;
     }
     catch(stack e)
     {
     e.show();
     }
     stack<const char*> S3;
     
     S3.push("akshay");
     S3.push("siddhant");
     S3.push("ketan");
     S3.push("gondya");
     
     S3.show();
     
     cout<<S3.pop()<<endl;
     
     S3.show();
     
     
     return 0;
}

