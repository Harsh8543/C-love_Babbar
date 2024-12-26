// #include<iostream>
// using namespace std;

// typedef struct employee
// {
//     /* data */
//     int eId; //4
//     char favChar; //1
//     float salary; //4
// } ep;

// union money
// {
    /* data */
//     int rice; //4
//     char car; //1
//     float pounds; //4
// };


// int main(){
//     enum Meal{ breakfast, lunch, dinner};
//     Meal m1 = lunch;
//     cout<<(m1==2);
    // cout<<breakfast;
    // cout<<lunch;
    // cout<<dinner; 
    // union money m1;
    // m1.rice = 34;
    // m1.car = 'c';
    // cout<<m1.car;

    // ep harry;
    // struct employee shubham;
    // struct employee rohanDas;
    // harry.eId = 1;
    // harry.favChar = 'c';
    // harry.salary = 120000000;
    // cout<<"The value is "<<harry.eId<<endl; 
    // cout<<"The value is "<<harry.favChar<<endl; 
    // cout<<"The value is "<<harry.salary<<endl; 
//     return 0;
// } 



#include<iostream>
using namespace std;
struct employee
{
    int emp_code;
    char emp_name[50];
    char designation[60];
    float salary;
};
int main()
{
struct employee a[10];
int i;
for(i=0;i<10;i++)
{
cout<<"enter the employee code\n";
cin>>a[10].emp_code;
cout<<"enter the employee name";
cin>>a[10].emp_name;
cout<<"\n enter the employee designation";
cin>>a[10].designation;
cout<<"\nenter the amount of the salary";

cin>>a[10].salary;
}
for(i=0;i<10;i++){
cout<<a[10].emp_code<<endl;


cout<<a[10].emp_name<<endl;
cout<<a[10].designation<<endl;
cout<<a[10].salary<<endl;
}
return 0;
}