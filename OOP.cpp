// https://www.youtube.com/watch?v=wN0x9eZLix4&t=1000s
#include <iostream>
#include <stdlib.h>
using std::string;


class Employee {
public:
     string Name; 
     string Company;
     int Age;
     void IntroduceYourself() {
         std::cout<<"Name: "<< Name << std::endl;
         std::cout << "Company: " << Company << std::endl;
         std::cout << "Age: " << Age << std::endl;
     }
     Employee(string name, string company, int age){
         Name = name;
         Company = company;
         Age = age;
     }
};

int main()
{
    Employee employee1 = Employee("Art", "TSA", 54); 
    employee1.IntroduceYourself();

    Employee employee2 = Employee("Chris", "TSA", 52); 
    employee2.IntroduceYourself();
   
}



