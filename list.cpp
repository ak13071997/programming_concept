#include<iostream>
#include<list>          //array substitute is a vector
using namespace std;

int main()
{    
     list<int> L1;         //creating object of outer class    // syntax to access element only with vector
     
     cout<<"size  "<<L1.size()<<endl;
     
     L1.push_back(10);
     L1.push_back(20);
     L1.push_back(30);
     L1.push_front(40);
     cout<<"size  "<<L1.size()<<endl;
     L1.push_front(50);
     cout<<"size  "<<L1.size()<<endl;
     
     list<int>::iterator iter;  //list<int>::iterator iter;     //creating object of inner class //syntax to access elements of vector
         for(iter=L1.begin(); iter!=L1.end(); iter++)
     {
         cout<<*iter<<" "; 
     }
     cout<<endl;
     
    
    
    L1.pop_front();
     for(iter=L1.begin(); iter!=L1.end(); iter++)
     {
         cout<<*iter<<" "; 
     }
     cout<<endl;
     
        L1.pop_back();
           for(iter=L1.begin(); iter!=L1.end(); iter++)
     {
         cout<<*iter<<" "; 
     }
     cout<<endl;
     
 return 0;    

}
