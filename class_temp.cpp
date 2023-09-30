#include<iostream>
using namespace std;

template<typename T>          
class stack                     
{
       int size;
       T *arr;        //previously  return type is char*
       int top;
public:
       stack();
       stack(int);
       void push(T);
       T pop();             //previously return type is int
       bool isfull();
       bool isempty();
       int getSize();
};

template<typename T>
stack<T>::stack()
{
       size=6;
       arr=new T[size];     //previously it was int for  all integers
       top=-1;
}

template<typename T>
stack<T>::stack(int s)       //s is the size of stack/class
{
       size=s;
       arr=new T[size];
       top=-1;
}

template<typename T>
void stack<T>::push(T val)
{
      if(!isfull())
      {
           //arr[++top]=val;        //we can write this also
           top++;
           arr[top] = val;
      }
      else
      {
           cout<<"overflow..."<<endl;
      }
}

template<typename T>
T stack<T>::pop()            //previosly it was int for all integers values now we are using both int and char
{
      if(!isempty())
      {
           return arr[top--];
      }
      else
      {
           cout<<"underflow..."<<endl;
           return 0;       // to avoid returning garbez value
      }
}

template<typename T>
bool stack<T>::isfull()        //it will return only boolen values 0/1 hence return type is bool
{
      return size==top-1;      //if size is equal to size then  it will return true
}

template<typename T>
bool stack<T>::isempty()        //it will return true or false
{
      return top==-1;       //if top is equal to -1 then fun return true
}

template<typename T>
int stack<T>::getSize(){
    return top + 1;
}

int main()
{
      stack<int> s1(8);
      
      s1.push(1);
      s1.push(2);
      s1.push(3);
      s1.push(4);
      cout<<s1.getSize()<<endl; 
      cout<<s1.pop()<<endl;
      cout<<s1.pop()<<endl;
      cout<<s1.pop()<<endl;
      cout<<s1.pop()<<endl;
      
      stack<const char*> S2;
      
      S2.push("Akshay");
      S2.push("ketan");
      S2.push("siddhant");
      S2.push("gondya");
      
      cout<<S2.pop()<<endl;
      cout<<S2.pop()<<endl;
      cout<<S2.pop()<<endl;
      cout<<S2.pop()<<endl;
      
      return 0;
}




