/*
                        PT.1: HOW TO CREATE 'Class and objects' with only public.
*/

/*
#include <iostream>
#include <string>

using namespace std;
//Created a Bank Account Class
class BankAccount
{
public:
    string name; //Name
    int balance; //Balance''

    void withdraw(int amount) //creates a function to call from in main
    {
        balance = balance - amount;
    }

    void print()
    {
        cout << name << " has " << balance << " dollars " <<endl;
    }

};

int main()
{ //calling Class 'BankAccount' to objects 'account1' and 'account2'
    BankAccount account1;
    account1.name = "Eljay"; //Person's name
    account1.balance = 3000; //amount you put for balance

    account1.print();

    BankAccount account2;
    account2.name = "Dave";
    account2.balance = 1000;


    account2.print();
    account2.withdraw(100);
    account2.print();




    return 0;
}
*/

//                           PT.2: Using Private and Public Specifiers

#include <iostream>
#include <string>

using namespace std;

class Employee
{   //making them private is called "information hiding"
    private: //you CAN"T access it directly from 'main' function
        double salary;
//Priavte member function below:
        double calculate_bonus()
        {
            return salary * 0.10;
        }
    //making them public is how the "outside world" (seen throughout the 'main' function) can access our class
    public: //public specifier
        string name; //needed 'string' library

        //setting salary (setter function)
        void set_salary(double potential_salary)//'potential_salary' is the PARAMETER
        {
            if (potential_salary < 0) salary = 0;
            else salary = potential_salary;
        }
        //getting salary (getter function) //These functions DO have access to 'Private:' specifiers, so you can call these functions in the 'main' function!
        double get_salary()
        {
            return salary;
        }

        void print_bonus()//function to call 'calculate_bonus' from PRIVATE
        {
            cout<< name << " bonus: "<< calculate_bonus() <<endl;
        }
};

int main ()
{
    Employee employee1;
    employee1.name = "Eljay";
    cout<< employee1.name <<endl;

    employee1.set_salary(50000);

    cout<< "salary: " <<employee1.get_salary() <<endl;// accessed through the 'public' specifier <- from the 'private' specifier!

    employee1.print_bonus();//calls the function print_bonus' from the 'public' specifier which was called from the private specifier


    return 0;
}


//                          PT.3 - CLASS MEMBER FUNCTIONS!
/*
#include <iostream>

using namespace std;

class Rectangle
{
private:
   
    double length;
    double width;

    double area()//Calculates area of the Rectangle
    {
        return length * width;
    }


public:
//                                     the (double w = 5) is a DEFAULT parameter value!
    void set_dimensions(double l, double w = 5)//you can CALL this function to our RECTANGLE objects!
    {
        length = l;
        width = w;
    }

    double perimeter();//Function Declaration/Prototype:

    void print_area()
    {
        cout<< "Area: " << area() <<endl;
    }
};

double Rectangle::perimeter()
{
    return 2 * (length + width);
}

int main()
{
    Rectangle rectangle1;

    rectangle1.set_dimensions(10, 20); //SETS the PRIVATE member variables (length and width) of this rectangle (rectangle1) to 10 and 20!
    
    cout<< "Perimeter: " << rectangle1.perimeter() <<endl;
    rectangle1.print_area();//called from the PUBLIC specifier

    Rectangle rectangle2;

    rectangle2.set_dimensions(5);

    cout << "Perimeter: " << rectangle2.perimeter() <<endl;
    rectangle2.print_area();


    return 0;
}
*/

//                                           PT.4 - CONSTRUCTOR BASICS
/*
#include <iostream>

using namespace std;

class Cat
{
private:
    string name;
    string color;
    string favorite_toy;

public:

    void print_cat()
    {
        cout<< "Name: " << name <<endl;
        cout<< "Color: " << color <<endl;
        cout<< "Favorite Toy: " << favorite_toy <<endl;
    }

    Cat()// Constructor(Default)
    {
        name = "Unknown";
        color = "Unknown";
        favorite_toy = "Unknown";
    }

    Cat(string n)//this will accept a STRING (n). This is the parameter/ARGUEMENT!!
    {
        name = n;
        color = "Unknown";
        favorite_toy = "Unknown";
    }

    Cat(string n, string c, string ft = "Laser Pointer");// Default parameter values = ft = "Laser Pointer"

};

Cat::Cat(string n, string c, string ft)// this is where you can also declare your FUNCTION OUTSIDE the class Cat by using: Cat::Cat...
{
    name = n;
    color = c;
    favorite_toy = ft;
}



int main()
{
    Cat cat1;

    cout<< "Cat 1 ......" <<endl;
    cat1.print_cat();
    cout<<endl;

    Cat cat2("Spot");// this has an ARGUEMENT ("Spot"), so it will be called from the function: Cat(string n).

    cout<< "Cat 2 ......" <<endl;
    cat2.print_cat();
    cout<<endl;

    Cat cat3("Calliou", "Orange");

    cout<< "Cat 3 ......" <<endl;
    cat3.print_cat();
    cout<<endl;


    return 0;
}
*/