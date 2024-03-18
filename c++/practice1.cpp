#include<iostream>

using namespace std;
class newshop{
    int itemId[100];
    int itemPrice[100];
    
    int counter;
    public:
    void ininCounter(void){counter = 0;}
    void setprice(void);
    void getprice(void);
   
};
void newshop :: setprice(void){
    cout<<"Enter item id"<< counter + 1 <<endl;
    cin>>itemId[counter];
    cout<<"Enter the price "<<endl;
    cin>>itemPrice[counter];
}

void newshop::getprice()
{
    for(int i = 0 ; i<counter; i++){
        cout<<"The price of item with id"<<itemId[i]<<" is "<<itemPrice[i]<<" after discount "<<endl;
    }
}
int main()

{
    newshop dukan;
    dukan.setprice();
    
    dukan.getprice();
    return 0;
}