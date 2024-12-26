#include<iostream>
using namespace std;

class Shop
{
    int itemid[100];
    int itemPrice[100];
    int counter;

    public:
    void initCounter(void){counter=0; }
    void setPrice(void);
    void displayPrice(void);
};
void Shop::setPrice(void)
{
    cout<<"enter id of your item number"<<counter+1<<endl;

}
int main(){
    
    return 0;
}