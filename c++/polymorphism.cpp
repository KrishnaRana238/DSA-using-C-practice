/*
Polymorphism
in simple term poly means many, morphism means form, it means maany form, a father can be brother of elder brother, son  of mother son in law of mother in law
when the member function behaves in different manner under certain cercumtances;
it divide into two 
compile time polymorphism and runtin poly morphism
compile time divided into two types function overloading operator over loading 
function overload mean same name but diffirent data 
operator overloading is when we use operators like + - * / etc on objects of class.
function overiding means different definition in parent class and child class
virtual function 

#include<iostream>

using namespace std;
class  ADD{
    public:
    void add(int a, int b){
        cout<<a+b<<endl;
    }
    void add(int a, int b, int c, int d, int e){
        cout<<(a*b*c*d*e)<<endl;
    }
};
int main()
{
    ADD pg;
    pg.add(40,50);
    pg.add(10,20,30,40,50);
    return 0;
}
*/
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int a = 4;
    int *ptr = &a;
    cout << "Value at address :" << *ptr << endl;
    int *p = new int(50);
    cout<<"The second value address is"<< *(p)<<endl;

    int* arr = new int[4];
    arr[0]= 10;
    arr[1]=20;
    arr[2]=30;
    arr[3] = 40;
    delete[] arr;
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;
    cout<<arr[3]<<endl;
    return 0;
}