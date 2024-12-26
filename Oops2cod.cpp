#include<iostream>
using namespace std;
class Human{
    public:
    int height;
    int weight;
    int age;

    public:
    int getAge(){
        return this->age;
    }
    void setWeight(int w){
        this->weight=w;
    }
};
class Male:public Human{    //es line ka matlab hai ki ab male nam ka jo function hai wah apne andar mawjud property ke sath sath human nam ke class ki property ko bhi excess karega kyuki jo public human likha hai wah uska matlab hi ho aya ki human class ke property ko inherite kar liya gaya hai
    public:
    string color;

    void sleep(){
        cout<<"Male sleeping"<<endl;
    
    }
};
int main(){
    Male object1;
    cout<<object1.age<<endl;
    cout<<object1.weight<<endl;
    cout<<object1.height<<endl;
    cout<<object1.color<<endl;


object1.setWeight(85);
cout<<object1.weight<<endl;
object1.sleep();

    return 0;
}