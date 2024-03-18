/*
fxn template:- to writ a style function doe multiple template of similar type
syntax template <class generic data type>
<returntype><functionname>(again!=again)
{

}

*/


#include<iostream>

using namespace std;
template <class p>
class add{
    p a, b, c;
    public:
    void get();
    void dis();
};
template <class p>
void add<p>::get(){
    cout<<"Enter the first number : ";
    cin>>a>>b;
    
}
template <class p>
void add<p>::dis(){
    c=a+b;
    cout<<c;
}
int main(){
    add<int> obj;
    add<float>obj1;
    add<double>obj2;
    obj.get();
    obj.dis();
    
    obj1.get();
    obj1.dis();
    obj2.get();
    obj2.dis();
    
   
    return 0;
}