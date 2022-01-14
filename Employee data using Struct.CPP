#include <iostream.h>
#include <conio.h>
#include <stdio.h>


struct Employee{
int id;
char name[20];
float salary;
};

Employee fillEmp();
void printEmp(Employee e);


int main(){
	clrscr();

	Employee omar;

	omar = fillEmp();
	printEmp(omar);

	cout<<endl<<"press any key to exit!";
	getch();

return 0;}







Employee fillEmp(){
Employee e;
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

cout<<"*********Employee Data*********"<<endl;
cout<<"The Employee name is "<<e.name<<endl;

cout<<"The Employee ID. is = "<<e.id<<endl;

cout<<"The Employee salary is ="<<e.salary<<endl;

}