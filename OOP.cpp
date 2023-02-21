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

};

int main()
{
    Employee employee1; 
    employee1.Name = "Art";
    employee1.Company = "TSA";
    employee1.Age = 54;
    employee1.IntroduceYourself();
    employee1.IntroduceYourself();
    employee1.IntroduceYourself();
    employee1.IntroduceYourself();
}



