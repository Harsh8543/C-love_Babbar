#include<iostream>
using namespace std;
//there are the two types of the access modifiers
// 1.public
// 2.private
// 3.protected
// by default class ke andar likha huaa properties private hota hai private hone 
// ka matlab hai ki uss properties ko ham class ke bahar use nahi kar sakte hai class ke bahar use karne par wah error show karega
// public ka matlab hota hai ki use ham function kr=e andar ya function ke bahar kahi bhi use kar sakte hai kahi bhi 
class Hero {
    //properties
    // private:  //eska matlab hai ki health hamara private ho gaya hai matlab ki health properties komham class ke baharr use nahi kar sakte hai use karne par wah error show karega

    int health;
     public://eska matlab hai ki level hamara public ho gaya hai matlab ki public properties ko ham class ke baharr bhi use  kar sakte hai
     char *name;
      char level;

      //static memory aisa data member ko creat karta hai jo class se belong karta hai usee access karne ke liye object ki jarurat nahi hoti hai jo es line ke niche likha hai 
static int timeToComplete;

Hero(){
cout<<"simply constructor called"<<endl;
name=new char[100];
}






//there is the constructor called
// Hero(){
//     cout<<"Constructor called"<<endl;
// }
//parameterised constructor
//use of the "this"-> keyword to store the address of the current object which is our this time is (ramesh)
Hero(int heath){
    cout<<"this->"<<this<<endl;
this-> health=health;
}
Hero(int heath,char level){
    this-> health=health;
    //yaha bhi ek health jo hai int health wale ko point kar raha hai dusara jo hai wah private ke andar jo health likha hai usko point kar raha hai
    // object wale health ka address ko niche wale address me copy kar diya hai 
    this->level=level;
    //esame pahala level jo hai wah public wale object ke pass likhe level ko point kar raha hai aur dusara level char level ko point kar raha hai
    // matlab ham obl=ject wale lw=evel ke andar inpuct wale level ke address ko copy kar diya
}
    
//copy constructor
//copy constructor bhi by defsult creat ho jata hai when we define the class lekin jab ham copy constri=uctor ko bana lete hai to by default wala copy contructor remove ho jata hai
Hero(Hero& temp){
this->health=temp.health;
this->level=temp.level;
}
void print(){
    cout<<level<<endl;
}
// agar koi bhi properties hamari class ke andar pdi huee hai to ham jante hai ki wah by default wah private me hai lekin hamfir bhi use class ke bahar use karna chahate hai to use use karne ke liye kuchh function defined hai
// 1.getter(get function)
// 2.setter(set function)
int getHealth() {
    return health;
}
char getlevel() {
return level;
}
void setHealth(int h){
    health=h;
}
void setlevel(char ch){
    level=ch;
}
void setName(char name[]){
    (this->name,name);
}
static int random(){
    // cout<<this->health<<endl;// es line ko run karne par error aayega bcause as we already know static function do not containes the this keyword
    // cout<<health<<endl;//again as we already know that the static function sifr static member ko hi access karta hai so, yaha bhi error aayega kyuki health ek static member nahi hai
    // cout<<name<<endl;again as we already know that the static function sifr static member ko hi access karta hai so, yaha bhi error aayega kyuki name  bhi ek static member nahi hai
    // cout<<level<<endl;again as we already know that the static function sifr static member ko hi access karta hai so, yaha bhi error aayega kyuki level bhi  ek static member nahi hai
      return timeToComplete;//again as we already know that the static function sifr static member ko hi access karta hai so, yaha bhi error nahi aayega kyuki level bhi  ek static member  hai
}
// //distructor
// ~Hero (){
//     cout<<"distructor bhai called"<<endl;
// }
};

//static data member

//line number 20 initilisation of the static member aur eska initilisation eska ham class ke bahar karege
//initilisation formate
//datatype classname:: fieldname=value;

// int Hero::timeToComplete=5;


//static Function
// in the static function no need to creat the object so,that'swhy static function donit have the this function because as we already know the use of the this keyword pointer to the current object
//static function only access the static member
int main(){
//     //creato=ion of the object
//     Hero ramesh;
//     //use of the get function
// cout<<"ramesh health is"<<ramesh.getHealth()<<endl;
// //use of the setter function
// ramesh.setHealth(70);
  
//     ramesh.level='A';

//     cout<<"health is:"<<ramesh.getHealth()<<endl;
// cout<<"level is:"<<ramesh.level<<endl;




//static allocation
// static allocation ke dwara ham kaise object creat kar sakta hu

// Hero a;
// a.setHealth(80);
// a.setlevel('B');
// cout<<"level is"<<a.level<<endl;
// cout<<"health is"<<a.getHealth()<<endl;

// //dynimically allocation
// dynamic allocation ke dwara ham kaise object creat kar sakta hu

// Hero *b =new Hero;
// b->setlevel('A');
// b->setHealth(70);
// cout<<"level is"<<(*b).level<<endl;
// cout<<"health is"<<(*b).getHealth()<<endl;

// cout<<"level is"<<b->level<<endl;
// cout<<"health is"<<b->getHealth()<<endl;


// cout<<"hi"<<endl;
//object creat statically

// Hero ramesh(10);
// cout<<"Address of the ramesh"<<&ramesh<<endl;

// ramesh.getHealth();
// // cout << "hello"<<endl;

// // static allocation ke dwara ham kaise object creat kar sakta hu
// //jab bhi ham object ko creat karte hai to us object ke nam se constructor call hota hai
// // jo ki visualise nahi hota hai

// //dynimically creat the object
// Hero *h = new Hero;
// h->print();

// Hero temp(22,'B');
// temp.print();



// Hero S(70,'C');
// S.print();
// //copy constructor
// Hero R(S);
// R.print();

//line number 46 and line number 134 dono ke bich pass by valur=e ho rahi thi esi liye we have to use the & taki yaha par pass by reference ho jaye agar pass by reference nahi kiya to to infine game chalta rahega

// Hero hero1;

// hero1.setHealth(12);
// hero1.setlevel('D');
// char name[7]="Babbar";
// hero1.setName(name);

// hero1.print();
// //use default copy constructor
// Hero hero2(hero1);
// hero2.print();
// //Hero hero2=hero1;
// hero1.name[0]='G';
// hero1.print();
// hero2.print();



// destructor

// the use of the distructor to free the memory or deallocate the memory

// //static
// Hero a;
// //dynamically
// Hero *b = new Hero();
// return 0;

//static member

//yaha line number 88 ka bina koi object creat kiye ham use use kar rahe hai
// cout<<Hero::timeToComplete<<endl;
cout<<Hero::random()<<endl;
//chahe to object creat kar ke bhi static data member ka use kar saktw jaise niche dekhiye dikhiye wo chal to jayega but satic member object se belong nahi karta hai wah class se belong karta hai

// Hero a;
// cout<<a.timeToComplete<<endl;

}