#include <iostream.h>
#include <conio.h>
#include <stdio.h>

// to create a struct use the word struct then the name of tyhe struct
struct Employee{
int id;
char name[20];
float salary;
}; // after finish the struct use ; after the curly brackets

//global functionts to fill the employee and display its data
Employee fillEmp();
void printEmp(Employee e);


int main(){
	clrscr();
	//create an object from employee
	Employee emp1;

	emp1 = fillEmp(); // call the function to fill the data of the object
	printEmp(emp1); //call the function todisplay the data of the object

	cout<<endl<<"press any key to exit!";
	getch();

return 0;}

Employee fillEmp(){
Employee e; // //create an object from employee to return it
cout<<"Enter the Employee first name: ";
cin>>e.name;
cout<<"Enter the Employee ID= ";
cin>>e.id;
cout<<"Enter the Employee salary: ";
cin>>e.salary;

return e;
}


void printEmp(Employee e){
clrscr();
//display the data of the employee that been passed to function as parameter
cout<<"*********Employee Data*********"<<endl;
cout<<"The Employee name is "<<e.name<<endl;

cout<<"The Employee ID. is = "<<e.id<<endl;

cout<<"The Employee salary is ="<<e.salary<<endl;

}
