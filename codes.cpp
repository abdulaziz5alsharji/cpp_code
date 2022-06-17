#include<iostream>
#include<string>
#include <numbers>
#include <stdio.h>
#include <cmath>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <tuple>
#include <map>
#include <vector>
#include <stack>
#include <assert.h>
using namespace std;

/*int main()
{
	string name;
	int age;
	const double salary = 10000;
	cout << "what is your name??";
	cin >> name;
	cout << "what is your age??";
	cin >> age;
	cout << "your name is : " << name << " and your age is: " << age << " and your salary is: " << salary<<endl;
	cout << age;




	return 0;

}*/
/*int main()
{
	int n1, n2;
	char op;
	cout << "Enter the first number :";
	cin >> n1;
	cout << "Enter the opritir :";
	cin >> op;
	cout << "Enter the second number :";
	cin >> n2;
	if (op == '+') {
		cout << "The sum is :" << n1 + n2;
	}
	else if (op == '-') {
		cout << "The sub is :" << n1 - n2;
	}
	else if (op == 'x') {
		cout << "The pow is :" << n1 * n2;
	}
	else if (op == '/') {
		cout << "The dev is :" << n1 / n2;
	}
	else {
		cout << "Error";
	}



	return 0;

}*/

/*int main()
{
	char letter;
	cout << "Type the letter :";
	cin >> letter;
	switch (letter)
	{
	case 'A':
		cout << "very Good!";
		break;
	case 'B':
		cout << "Quite Good";
		break;
	case 'C':
		cout << "Bad(:";
		break;
	default:
		cout << "Error";
	}


	return 0;

}*/

/*int main() {
	int num;
	cout << "Enter the number :";
	cin >> num;
	if (num % 2 == 0) {
		cout << "even";

	}
	else {
		cout << "odd";
	}
	return 0;
}*/
/*int main() {
	int x,y;
	char letter;

	do {
		cout <<"Enter two numbers:"<<endl;
		cin >> x >> y;
		cout << "The sum is :" << x + y<<endl;
		cout << "Entr y or n:\n";
		cin >> letter;


		
	} while (letter=='y');
	
	
	return 0;
}*/
/*int main() {
	int x, y = 1, i = 1;
	cout << "Enter the number :";
	cin >> x;
	while (i <= x) {
		y *= i;
		i++;

	}
	cout << y;

	
	
	return 0;
}*/
/*int main() {
	int x, y = 0, i = 1;
	cout << "Enter the number :";
	cin >> x;
	while (i <= x) {
		y += i;
		i++;

	}
	cout << y;



	return 0;
}*/
/*int main() {
	int m1, m2, m3, m4, per, sum;
	cout << "How many get in m1:";
	cin >> m1;
	cout << "How many get in m2:";
	cin >> m2;
	cout << "How many get in m3:";
	cin >> m3;
	cout << "How many get in m4:";
	cin >> m4;
	sum = m1 + m2 + m3 + m4;
	per = sum / 4;
	cout << "The total grade :" << sum << endl;
	cout << "The persent is :" << per<<"%"<<endl;
	if (per >= 50 && per <= 65) {
		cout << "accept ..." << endl;
	}
	else if (per >= 65 && per < 80) {
		cout << "NOT Bad";
	}
	else if (per >= 80 && per < 90) {
		cout << "Good";
	}
	else if (per >= 90 && per <= 100) {
		cout << "very Good";
	}
	else if (per >= 0 && per < 50) {
		cout << "NOt pass";
	}
	else {
		cout << "Error";
	}


	
	
	
	
	return 0;
}*/
/*int add(int x1, int x2);
void say_hello(string name);
int main() {
	string your_name;
	cout << "Enter your name :";
	cin >> your_name;
	say_hello(your_name);
	cout << endl;
	int num1, num2;
	cout << "Enter two numbers:"<<endl;
	cin >> num1>> num2;
	cout << "the sum is :" << add(num1, num2);

	return 0;
}





int add(int x1,int x2) {
	return x1 + x2;
	
}
void say_hello(string name) {
	cout << "hello ," << name;
}*/
/*int main() {
	char letter;
	cout << "Enter the letter :";
	cin >> letter;
	switch (letter) {
	case 'A':
		cout << "Very goood...";
		break;
	case 'B':
		cout << "Good";
		break;
	case 'C':
		cout << "Not bad";
		break;
	default:
		cout << "Failed";
	}
}*/
/*int main() {
	int x;
	cout << "Enter the number :";
	cin >> x;
	if (x % 2 == 0) {
		if (x == 8) {
			cout << "num=8";
		}
		else {
			cout << "num!=8";
		}

	}
	else {
		if (x == 5) {
			cout << "num=5";
		}
		else {
			cout << "num!=5";
		}
	}
}*/

/*double add(double n1, double n2) {
	return n1 + n2;

}
double sub(double n1, double n2) {
	return n1 - n2;
}
double beating(double n1, double n2) {
	return n1 * n2;
}
double division(double n1, double n2) {
	return n1 / n2;
}
int main() {
	double number_one, number_two;
	char preporty;
	cout << "Enter the first number :";
	cin >> number_one;
	cout << "Enter the preporty :";
	cin >> preporty;
	cout << "Enter the second number :";
	cin >> number_two;
	switch (preporty)
	{
	case '+':
		cout << "The Sum is :" << add(number_one, number_two);
		break;
	case '-':
		cout << "The sub is :" << sub(number_one, number_two);
		break;
	case 'x':
		cout << "The beating is :" << beating(number_one, number_two);
		break;
	case '÷':
		cout << "The division is :" << division(number_one, number_two);
		break;
	default:
		cout << "Enter +,-,x,÷ plz ..";
		break;
		
	
	}
}*/
/*int main() {
	const int size = 5;
	string names[size];
	for (int j = 0; j < size; j++) {
		cout << "write name :";
		cin >> names[j];
	}

	for (int i = 0; i < size; i++) {
		cout << names[i];
		cout << endl;
	}




	return 0;


}*/
/*int main() {
	int numbers[2][3] = { {1,2,3},{4,5,6} };
	for (int i = 0; i < 2; i++) {
		for (int j = 0; i < 3; i++) {
			cout << numbers[j][i]<<endl;
		}
	}

	return 0;
}*/
/*struct student
{
	string name;
	int age;

};
int main() {
	student s1;
	s1.name = "Ali";
	s1.age = 18;
	cout << s1.age;
}*/
/*struct Distance {
	float fe;
	float in;
};*/
/*int main() {
	Distance d1, d2 = {12,45.5}, d3;
	d1.fe = 12.5;
	d1.in = 46;
	d3.fe = d1.fe + d2.fe;
	d3.in = d1.in + d2.in;
	cout << "the feet is :" << d3.fe << endl;
	cout << "the in is :" << d3.in << endl;
	
	return 0;
}*/
/*start practice*/
//1
/*int main() {
	int numbers[2][3] = {{1,2,3},
						{4,5,6}};
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << numbers[i][j];
		}
		cout << endl;
	}
	
	return 0;
}*/
//end
//2
//int main() {
//	int FirstNumber = 0, SecondNumber = 1, Sum = 0, Limit;
//	cout << "Welcome To My Program -_-" << endl;
//	cout << "Enter the number >>";
//	cin >> Limit;
//	for (int i = 0; i < Limit; i++) {
//		Sum = FirstNumber + SecondNumber;
//		FirstNumber = SecondNumber;
//		SecondNumber = Sum;
//		cout << Sum <<",";
//	}
//	
//	
//	return 0;
//}
/*
int main() {

	int age = 18;
	auto letter = 'H';
	const float degree{ 88.4 };
	string name;
	cout << "What is your name ??";
	getline(cin, name);
	cout << "Your name is>>" << name << " and your age is>>" << age <<" your degree is>>"<<degree <<endl;


	return 0;
}
*/
/*void print(string name);
int main() {

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < i; j++) {
			cout << "*";

		}
		cout << "\n";
	}
	

	return 0;
}

void print(string name) {
	cout << "Your name is >>" << name;
}*/
/*#define swap(x,y){x=x+y;y=x-y;x=x-y;}
int main() {
	int x = 5, y = 7;
	cout << "before swap: x="<<x<<"y="<<y<<endl;
	swap(x, y);
	cout << "after swap: x=" << x << "y=" << y << endl;

}*/

/*int main() {
	double total, mark_1, mark_2, mark_3, avarage;
	cout << "Enter first mark >>";
	cin >> mark_1;
	cout << "Enter second mark >>";
	cin >> mark_2;
	cout << "Enter the third mark >>";
	cin >> mark_3;
	total = mark_1 + mark_2 + mark_3;
	avarage = total / 3;
	cout << "The total mark is : " << total << ". And the Avarage is >" << avarage <<"%"<< endl;

	return 0;

}*/
//int main() {
//	int x = 5;
//	if (x > 4) cout<< true;
//	else cout<< false;
//	return 0;
//}
//int main() {
//	for (int i = 0; i < 10; i++) {
//		for (int j = 0; j < i; j++) {
//			cout << "*";
//		}
//		cout << endl;
//	}
//	
//	
//	return 0;
//}
//struct Student
//{
//	string name;
//	int age;
//
//};
//int main() {
//	Student student_1;
//	cout <<"Enter your name >>";
//	cin >> student_1.age;
//	cout << "Enter your age >>";
//	cin >> student_1.age;
//	cout << "your name is " << student_1.name << " and your age is" << student_1.age;
//	
//	
//	
//	return 0;
//
//}

//class Student {
//public:
//	int id;
//	string name;
//	int age;
//	void get_your_name() {
//		cout << "Your name is :" << name << endl;
//	}
//private:
//	string gender;
//};
//
//int main() {
//	Student first_student;
//	first_student.age = 15;
//	first_student.name = "Ali";
//	first_student.get_your_name();
//
//}

//class Student {
//private:
//	int id;
//	string name;
//	int age;
//public:
//	void set_id(int idd) {
//		id = idd;
//	}
//	void set_name(string new_name) {
//		name = new_name;
//	}
//	void set_age(int new_age) {
//		age = new_age;
//	}
//	string get_name() {
//		return name;
//	}
//	int get_age() {
//		return age;
//	}
//
//};
//
//int main() {
//	Student first_student;
//	first_student.set_name("Ali");
//	first_student.set_age(13);
//	first_student.set_id(1);
//	cout << first_student.get_name() << endl;
//
//	return 0;
//
//}


//class Student {
//
//	int id;
//	string name;
//	int age;
//
//	string get_name() {
//		return name;
//	}
//	int get_age() {
//		return age;
//	}
//
//};
//int main() {
//	printf("hello world\n");
//	cout << "hello world"<< endl;
//
//
//	return 0;
//}

//class Student {
//private:
//	string name;
//	int age;
//public:
//	Student() {
//		name = "Faisal";
//		age = 18;
//	}
//	void set_name(string new_name) {
//		name = new_name;
//	}
//	void set_age(int new_age) {
//		age = new_age;
//	}
//	string get_name() {
//		return name;
//	}
//	int get_age() {
//		return age;
//	}
//
//};
//
//int main() {
//	Student first_student;
//	cout << first_student.get_name() << endl;
//
//	return 0;
//
//}
//class Calculator {
//private:
//	int FirstNumber;
//	int SecondNumber;
//public:
//	Calculator(int num_1, int num_2) {
//		FirstNumber = num_1;
//		SecondNumber = num_2;
//	}
//
//	int sum() {
//		return FirstNumber + SecondNumber;
//	}
//	int sub() {
//		return FirstNumber - SecondNumber;
//	}
//};
//int main() {
//	Calculator one(6, 4);
//	cout<<one.sum()<<endl;
//	return 0;
//}
//int main() {
//	int number{ 40 };
//	if (1 == 1 && ! (2==2)) cout<<true;
//	else cout<<false;
//	cout <<"\n"<<number;
//	return 0;
//}

//class Student {
//private:
//	string name;
//	int age;
//public:
//	Student() {
//		name = "Ali";
//		age = 13;
//	}
//	Student(string your_name, int your_age) {
//		name = your_name;
//		age = your_age;
//	}
//
//	void discribe() {
//		cout << "your name is " << name << " and your age is " << age <<endl;
//	}
//};
//int main() {
//	Student first_student("Faisal", 15);
//	Student second_student;
//	first_student.discribe();
//	cout << "\n";
//	second_student.discribe();
//	
//	return 0;
//}


//class Student {
//private:
//	string name;
//	int age;
//public:
//	Student():name("Ali"),age(13){}
//
//	Student(string your_name,int your_age):name(your_name),age(your_age){}
//
//	void discribe() {
//		cout << "your name is " << name << " and your age is " << age << endl;
//	}
//	~Student() { discribe(); }
//};
//int main() {
//	Student first_student("Faisal", 15);
//	Student second_student;
//	first_student.discribe();
//	cout << "\n";
//	second_student.discribe();
//
//	return 0;
//}

//class Nothings {
//private:
//	int FirstNumber;
//	int SecondNumber;
//public:
//	Nothings(int num_1,int num_2):FirstNumber(num_1),SecondNumber(num_2){}
//	Nothings() :FirstNumber(0), SecondNumber(0) {}
//
//	void add(Nothings one, Nothings two) {
//		FirstNumber = one.FirstNumber + two.FirstNumber;
//		SecondNumber = one.SecondNumber + two.SecondNumber;
//
//}
//	void show() {
//		cout << FirstNumber << endl;
//		cout << SecondNumber << endl;
//		
//	}
//};
//
//int main() {
//	Nothings first(30, 40), second(30, 40), third;
//	third.add(first,second);
//	third.show();
//	return 0;
//}

//class Student {
//private:
//	string name;
//	int age;
//public:
//	Student() {
//		name = "Ali";
//		age = 13;
//	}
//	Student(string new_name, int new_age):name(new_name), age(new_age){}
//	void set_name(string new_name) {
//		name = new_name;
//	}
//	string get_name() {
//		return name;
//	}
//	void all_info() {
//		cout << "your name is " << name << endl;
//		cout << "your age is " << age << endl;
//	}
//};
//int main() {
//	Student FirstStudent("Faisal", 12);
//	FirstStudent.all_info();
//	return 0;
//}
//class Rectangle {
//private:
//	int width;
//	int length;
//public:
//	void setLength(int new_length) {
//		length = new_length;
//	}
//	void setWidth(int new_width) {
//		width = new_width;	
//	}
//	int getLength() {
//		return length;
//	}
//	int getWidth() {
//		return width;
//	}
//	int getArea() {
//		return width * length;
//	}
//};
//int main() {
//	Rectangle rec;
//	rec.setLength(20);
//	rec.setWidth(50);
//	cout << rec.getArea() << endl;
//	if (rec.getArea() == 600)
//		cout << "Yes";
//	else cout << "No";
//	
//	return 0;
//}
//class Car {
//private:
//	string Make;
//	int yearModel;
//public:
//	void setMake(string maker) {
//		Make = maker;
//	}
//	string getMake() {
//		return Make;
//	}
//	void setYearModel(int year_model) {
//		yearModel = year_model;
//	}
//	int getYearModel() {
//		return yearModel;
//	}
//
//};
//int main() {
//	Car BM;
//	BM.setMake("Honda");
//	cout << BM.getMake() << endl;
//
//	return 0;
//}
#include "Car.h"
#include "Calculator.h"
//int main() {
//	Car car_one("Honda", 2020);
//	car_one.setMaker("Honda");
//	car_one.setYearModel(2018);
//	cout << "Car Maker : " << car_one.getMaker() << " And the model is : " << car_one.getYearModel() << endl;
//	Calculator c1;
//	cout << c1.add("Hello", "World") << endl;
//	return 0;
//}
//int main() {
//	Car car_one("Honda", 2020);
//	Car car_two(car_one);
//	Car car_three = car_one;
//	cout << car_two.getMaker() << endl;
//	cout << car_three.getYearModel() << endl;
//	
//	return 0;
//}
//typedef long long myType;
//int main() {
	//int age;
	//string name;
	//puts("What is your name ?");
	//cin >> name;
	//puts("What is your age ?");
	//cin >> age;
	//printf("Your age is %d\n", age);
	//cout << "Your age is " << name << endl;
	//puts("end the program");
	//return 0;
	//int x, y, b;
	//cin >> x >> y >> b;
	//int result = x + y + b;
	//cout << result << endl;
	//string name;
	//cout << &name << endl;
	//const int size{ 3 };
	//int arr[size] = {1, 2, 3};
	//printf("%d", arr[0]);
	//auto number{ 13 };
	//myType x = 1300;
//	return 0;
//}
//class Rectangle {
//private:
//	int width;
//	int length;
//public:
//	Rectangle addRectangles(Rectangle rec) {
//		Rectangle result;
//		result.width = rec.width + width;
//		result.length = rec.length + length;
//		return result;
//	}
//	void setLength(int new_length) {
//		length = new_length;
//	}
//	void setWidth(int new_width) {
//		width = new_width;	
//	}
//	int getLength() {
//		return length;
//	}
//	int getWidth() {
//		return width;
//	}
//	int getArea() {
//		return width * length;
//	}
//};
//int main() {
//	Rectangle objOne, objTwo;
//	objOne.setWidth(12);
//	objOne.setLength(5);
//	objTwo.setWidth(2);
//	objTwo.setLength(5);
//	Rectangle objThree = objOne.addRectangles(objTwo);
//	cout << "Width:,\nLength:" << objThree.getWidth() << "\t" << objThree.getLength() << endl;
//	return 0;
//}
//int main() {
//	cout << "The Sum is :" << Calculator::add(4, 5) << endl;
//	return 0;
//}
//int main() {
//	Car c1("honda", 2020);
//	Car c2("honda", 2020);
//	Car c3("honda", 2020);
//	cout << c1.getCounter() << endl;
//	return 0;
//}
//class Counter {
//private:
//	unsigned int count;
//public:
//	Counter(): count(0) {}
//	Counter(unsigned int c): count(c) {}
//	unsigned int getCount() {
//		return count;
//	}
//	Counter operator ++() {
//		++count;
//		return Counter(count);
//	}
//	Counter operator ++(int) {
//		count++;
//		return Counter(count);
//	}
//};
//int main() {
//	Counter fisrtCount();
//	Counter secondCount(1);
//	Counter thirdCount = ++secondCount;
//	cout << thirdCount.getCount();
//	return 0;
//}
//class Person {
//private:
//	string name;
//	int age;
//public:
//	Person(): name("Unkown"), age(0) {}
//	Person(string new_name, int new_age): name(new_name), age(new_age) {}
//	string getName() {
//		return name;
//	}
//	int getAge() {
//		return age;
//	}
//	void display() {
//		cout << "Name: " << name << "\n" << "age: " << age << "\n" << endl;
//	}
//
//};
//class Student : public Person {
//private:
//	int level;
//	float GPA;
//public:
//	Student(string new_name, int new_age, int l, float gp) : Person(new_name, new_age) {
//		level = l;
//		GPA = gp;
//	}
//	void display() {
//		Person::display();
//		cout << "Level: " << level << "\n" << "GPA: " << GPA << "\n" << endl;
//	}
//};
//int main() {
//	Student firstStudent("Ali", 12, 3, 4.5);
//	firstStudent.display();
//	return 0;
//}
//int main() {
//	char name[20];
//	int age, weight;
//	scanf_s("%s %d %d", name, &age, &weight);
//	printf("Your name %s \nYour age %d \nYour weight %d", name, age, weight);
//
//	return 0;
//}
//int main() {
//	int firstNumber, secondNumber, result;
//	cout << "First Number: ";
//	cin >> firstNumber;
//	cout << "Second Number: ";
//	cin >> secondNumber;
//	result = firstNumber + secondNumber;
//	cout << "\n";
//	printf("result: %d",  result);
//	return 0;
//}
//class Employee {
//protected:
//	string name;
//	int empId;
//	double salary;
//public:
//	Employee():name("nukowns"), empId(0), salary(0.0){}
//	Employee(string new_name, int id, double sal): name(new_name), empId(id), salary(sal)
//	{}
//	virtual float getTotalSalary() = 0;
//	virtual void print() {
//		cout <<"ID:"<< empId <<" Your name is "<< name <<" and your salary is "<< salary <<endl;
//	}
//
//};
//class Sales : public Employee {
//private:
//	float gossSales;
//	float commissionRate;
//public:
//	Sales(string new_name, int id, double sal, float gs, float cr) : Employee(new_name, id, sal) {
//		gossSales = gs;
//		commissionRate = cr;
//	}
//	float getTotalSalary() {
//		return salary + (gossSales * commissionRate);
//	}
//	void print() {
//		Employee::print();
//		cout << "Goss sales:" << gossSales << "Commission rate: " << commissionRate << endl;
//	}
//
//};
//class Engineer : public Employee {
//private:
//	string specialty;
//	int experience;
//	int overtimeHours;
//	float overtimeHourRate;
//public:
//	Engineer(string new_name, int id, double sal, string sp, int ex, int ov, float ovr) : Employee(new_name, id, sal) {
//		specialty = sp;
//		experience = ex;
//		overtimeHours = ov;
//		overtimeHourRate = ovr;
//	}
//	float getTotalSalary() {
//		return salary + (overtimeHours * overtimeHourRate);
//	}
//	void print() {
//		Employee::print();
//		cout << "Specialty:" << specialty << "Experience: " << experience << endl;
//		cout << "Overtime Hours:" << overtimeHours << "Overtime Hours Rate: " << overtimeHourRate << endl;
//	}
//};
//
//
//int main() {
//	Employee* emp_ptr;
//	Sales sale("Ali", 120, 5000, 50000, 0.10);
//	Engineer engineer("Hassen", 150, 7000, "SoftWare", 5, 3, 50);
//	emp_ptr = &sale;
//	emp_ptr->getTotalSalary();
//	emp_ptr->print();
//	return 0;
//}
//int main() {
//	int x = 0, y = 0;
//	cout << "Enter the First Number: ";
//	cin >> x;
//	cout << "Enter the Second Number: ";
//	cin >> y;
//	try {
//		if (x > 10) throw "x ERORR";
//		if (y == 0) throw exception();
//		cout << x / y << endl;
//	}
//	catch (exception e) {
//		cout << "Error" << endl;
//	}
//	catch (const char *msg) {
//		cout << msg << endl;
//	}
//	catch (...) {
//		cout << "Error" << endl;
//	}
//	return 0;
//}
//int main() {
//	int x = 5;
//	int* ptr;
//	ptr = &x;
//	*ptr += 5;
//	cout << *ptr << endl;
//	//cout << &x << endl;
//	return 0;
//}
//int main() {
//	int numbers[5] = { 1, 2, 3, 4, 5 };
//	for (int i = 0; i < 5; i++) {
//		cout << numbers[i] << endl;
//	}
//	cout << "---------------------------------" << endl;
//	for (int j = 0; j < 5; j++) {
//		cout << *(numbers + j) << endl;
//	}
//	return 0;
//}
//int main() {
//	char msg[] = "Hello";
//	char* ptr;
//	ptr = msg;
//	*ptr = 'A';
//	cout << *ptr << endl;
//	ptr++;
//	cout << *ptr << endl;
//	return 0;
//}
//int main() {
//	int numbers[5] = { 1, 2, 3, 4, 5 };
//	cout << *numbers << endl;
//	return 0;
//}
//int main() {
//	const char msg[] = "Hello World";
//	cout << msg << endl;
//	return 0;
//}
//void swap(int& x, int& y) {
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
//void swapPtr(int* ptr1, int *ptr2) {
//	int tmp = *ptr1;
//	*ptr1 = *ptr2;
//	*ptr2 = tmp;
//}
//int main() {
//	int first = 5, second = 10;
//	swap(first, second);
//	cout << first << endl;
//	cout << second << endl;
//	cout << "----------------------" << endl;
//	swapPtr(&first, &second);
//	cout << first << endl;
//	cout << second << endl;
//	return 0;
//}
//int main() {
//	int number = -5;
//	double x{ 5.0 }, y{ 2.0 };
//	cout << pow(y, x) << endl;
//	cout << abs(number) << endl;
//	return 0;
//}
//int larger(int x, int y);
//int main() {
//	int firstNumber = 5, secondNumber = 10;
//	cout << larger(firstNumber, secondNumber) << endl;
//	return 0;
//}
//int larger(int x, int y) {
//	if (x > y) return x;
//	else return y;
//}
//int sum(int n1, int n2, int n3);
//float average(int n1, int n2, int n3);
//int main() {
//	int x = 5, y = 10, z = 30;
//	cout << average(x, y, z) << endl;
//
//	return 0;
//}
//int sum(int n1, int n2, int n3) {
//	return n1 + n2 + n3;
//}
//float average(int n1, int n2, int n3) {
//	return sum(n1, n2, n3) / 3;
//}

//int main() {
//	ofstream file;
//	file.open("C:\\Users\\Dell\\Desktop\\test.txt");
//	file << "Ali" << endl;
//	file << 12 << endl;
//	file.close();
//	return 0;
//}
//int main() {
//	ofstream file;
//	file.open("C:\\Users\\Dell\\Desktop\\test.txt");
//	string names[3] = { "Ali", "Faisal", "Osama" };
//	int ages[3] = { 12, 13, 14 };
//	for (int index = 0; index < 3; index++) {
//		file << names[index] << "|" << ages[index] << endl;
//	}
//	file.close();
//	return 0;
//}
//int main() {
//	int numbers[]{ 1, 2, 3, 4, 5 };
//	for (int var : numbers) {
//		printf("%d\n", var);
//	}
//	return 0;
//}
//end
//int main(int argc, char* argv[]) {
//	cout << argc << endl;
//	for (int index = 0; index < argc; index++)
//		cout << argv[index] << endl;
//	return 0;
//}
//void fun() {
//	static int x = 0;
//	x++;
//	cout << x << endl;
//}
//int main(int argc, char* argv[]) {
//	fun();
//	fun();
//	return 0;
//}
//int add(int numbers[]) {
//	int total{ 0 };
//	for (int i = 0; i < 5; i++) {
//		total += numbers[i];
//	}
//	return total;
//}
//int main(int argc, char *argv[]) {
//	int numbers[5]{ 1, 2, 3, 4 ,5 };
//	cout << add(numbers) << endl;
//	return 0;
//}
//int main(int argc, char* argv[]) {
//	system("echo Hello World");
//	return 0;
//}
//int main(int argc, char* argv[]) {
//	ifstream file;
//	string message[10];
//	file.open("C:\\Users\\Dell\\Desktop\\test.txt");
//	if (file.fail()) cout << "Fail";
//	for (int i = 0; i < 20; i++) {
//		file >> message[i];
//	}
//	for (int i = 0; i < 20; i++) {
//		cout << message[i] << endl;
//	}
//	file.close();
//	return 0;
//}
//template <class first, class second>
//
//first sum(first x, second y) {
//	return x + y;
//}
//int main(int argc, char* argv[]) {
//	int firstNumber = 15, secondNumber = 25;
//	double x = 3.5, y = 1.5;
//
//	int total = sum(firstNumber, y);
//	printf("The Sum Is: %d", total);
//	return 0;
//}

//int smaller(int a, int b) {
//	return (a < b ? a : b);
//}
//int main(int argc, char* argv[]) {
//	int x = 5, y = 10;
//	printf("Smaller is: %d", smaller(x, y));
//	return 0;
//}
//string isGood(int age) {
//	return (age >= 18 ? "Yes" : "No");
//}
//
//int main(int argc, char* argv[]) {
//	int age = 0;
//	printf("Enter your age: ");
//	cin >> age;
//	cout << isGood(age) << endl;
//	return 0;
//}
//template <class T>
//class Number {
//	T first, second;
//public:
//	Number(T f, T s):first(f), second(s) {}
//	T max();
//};
//template <class T>
//T Number<T>::max() {
//	return (first > second ? first : second);
//}
//int main(int argc, char* argv[]) {
//	Number<int> objOne(3, 5);
//	cout << objOne.max() << endl;
//	return 0;
//}
//template <class T>
//class A_char {
//public:
//	A_char(T x) {
//		cout << x << " is not character" << endl;
//	}
//};
//template <>
//class A_char<char> {
//public:
//	A_char(char x) {
//		cout << x << " is character" << endl;
//	}
//};
//
//int main(int argc, char* argv[]) {
//	A_char<int> obj1(10);
//	A_char<double> obj2(10.5);
//	A_char<char> obj3('A');
//	return 0;
//}
//int main(int argc, char* argv[]) {
//	char letter;
//	printf("Enter The Letter: ");
//	cin >> letter;
//	switch (letter) {
//	case 'A':
//		printf("Good");
//		break;
//	case 'C':
//		printf("Bad");
//		break;
//	default:
//		printf("Not Found");
//	}
//	return 0;
//}
//bool isGood(int age) {
//	return (age >= 18 ? true : false);
//}
//int main(int argc, char* argv[]) {
//	int yourAge;
//	cout << "Enter Your Age: ";
//	cin >> yourAge;
//	cout << isGood(yourAge) << endl;
//	return 0;
//}
//int main(int argc, char* argv[]) {
//	int x = 10, y = 20;
//	int z = y > x || y++;
//	printf("%d\t%d", z, y);
//	return 0;
//}

//int main(int argc, char* argv[]) {
//	int Numbers[3] = { 1, 2, 3 };
//	for (auto number : Numbers) {
//		printf("%d\n", number);
//	}
//	return 0;
//}

//int main(int argc, char* argv[]) {
//	string msg = "Hello World";
//	cout << msg.length() << endl;
//	cout << max(4, 5) << endl;
//	cout << min(1, 100) << endl;
//	return 0;
//}

//int main(int argc, char* argv[]) {
//	cout << abs(-5) << endl;
//	int x = 6;
//	int* ptr;
//	ptr = &x;
//	(*ptr)++;
//	cout << *ptr << endl;
//	cout << x << endl;
//	return 0;
//}
//void PrintMessage(void) {
//	cout << "Hello World" << endl;
//}
//int main(int argc, char* argv[]) {
//	PrintMessage();
//	return 0;
//}
//auto add = [](int x, int y) -> int {
//	return x + y;
//};
//int main(int argc, char* argv[]) {
//	int a = 5, b = 6;
//	cout << add(a, b) << endl;
//	return 0;
//}
//auto add = [](int x, int y){
//	return x + y;
//};
//int main(int argc, char* argv[]) {
//	int a = 8, b = 10;
//	printf("The sum is: %d", add(a, b));
//	return 0;
//}
//auto printMessage = [] {
//	cout << "Hello World\n";
//};
//int main(int argc, char* argv[]) {
//	printMessage();
//	return 0;
//}
//int x = 5;
//auto addOne = [&] () -> void {x++;};
//int main(int argc, char* argv[]) {
//	addOne();
//	cout << x << endl;
//	return 0;
//}
//int main(int argc, char* argv[]) {
	//while(true){
	//	cout << "Hello World\n";
	//}
	//int counter = 0;
	//while (counter < 5) {
	//	printf("%d\n", counter);
	//	counter++;
	//}
	//int i = 0;
	//do {
	//	cout << i << endl;
	//	i++;
	//} while (i > 5);
	//for (int i = 0; i < 5; i++) {
	//	printf("%d\n", i);
	//}
	//int numbers[5] = { 1, 2, 3, 4, 5 };
	//for (int index = 0; index < 5; index++) {
	//	cout << numbers[index] << endl;
	//}
	//for (int number : numbers) {
	//	printf("%d\t", number);
	//}
	//int counter = 0;
	//while (true) {
	//	if (counter == 3)
	//		break;
	//	cout << counter << endl;
	//	counter ++;
	//	
	//}
	//int counter = 0;
	//while (true) {
	//	if (counter == 3)
	//		continue;
	//	cout << counter << endl;
	//	counter++;

	//}
	//char name[] = "Hello World";
	//string names[] = { "Ali", "Faisal", "Ahmed" };
	//cout << names[0] << endl;
//	return 0;
//}
//struct Student
//{
//	int age;
//	string name;
//	string gender;
//
//};
//int main(int argc, char* argv[]) {
//	Student firstStudent, secondStudent = {12, "Faisal", "male"};
//	firstStudent.age = 12;
//	firstStudent.name = "Ali";
//	firstStudent.gender = "male";
//	cout << firstStudent.name << endl;
//	cout << secondStudent.age << endl;
//	return 0;
//}
//int main(int argc, char* argv[]) {
//	string name = "Ali";
//	cout << name.length() << endl;
//	cout << name.size() << endl;
//	cout << name[0] << endl;
//	return 0;
//}

//int main(int argc, char* argv[]) {
//	cout << NULL << endl;
//	return 0;
//}
//int main(int agrc, char* argv[]) {
//	for (size_t i = 0; i < 1000; i++)
//	{
//		//cout << rand()%10 << endl;
//		cout << (rand() % 10) + 1 << endl;
//	}
//	return 0;
//}

//int main(int agrc, char* argv[]) {
//	srand(time(NULL));
//	for (size_t i = 0; i < 100; i++)
//	{
//		cout << rand() % (30 - 20 + 1) + 20 << endl;
//	}
//	return 0;
//}
//int add(int x, int y) {
//	return x + y;
//}
//string add(string one, string two) {
//	return one + two;
//}
//float add(float x, float y) {
//	return x + y;
//}
//int main(int argc, char* argv[]) {
//	float a = 10.5, b = 15.4;
//	cout << add(5, 9) << endl;
//	cout << add("Hello", " World") << endl;
//	cout << add(a, b) << endl;
//	return 0;
//}
//int main(int argc, char* argv[]) {
//	int x = 10;
//	long long number{ 10000 };
//	cout << sizeof(number) << endl;
//	return 0;
//}
//void swap(int &x, int &y) {
//	int m = x;
//	x = y;
//	y = m;
//}
//int main(int argc, char* argv[]) {
//	int x = 10;
//	int& y = x;
//	y = 20;
//	cout << &x << "\n" << &y << endl;
//	cout << x << endl;
//	return 0;
//}
//int main(int argc, char* argv[]) {
//	int a, b;
//	a = 10;
//	b = 11;
//	swap(a, b);
//	cout << a << "\t" << b << endl;
//	return 0;
//}
//int main(int argc, char* argv[]) {
	//string name = "Ali";
	//char msg[] = "How Are You??";
	//name.push_back('A');
	//name.pop_back();
	//name.clear();
	//cout << name.capacity() << endl;
	//cout << name.size() << endl;
	//cout << name.length() << endl;
	//string yourName;
	//getline(cin, yourName, '!');
	//cout << yourName << endl;
	/*cout << msg << "\t" << name << endl;*/
//	return 0;
//}
//int main(int argc, char* argv[]) {
//	string x;
//	string n;
//	getline(cin, x);
//	for (int m = 0; m < x.length(); m++) {
//		n = x.at(m);
//		cout << n;
//	}
//	return 0;
//}
//int main(int argc, char* argv[]) {
//	short x = 5;
//	cout << sizeof(x) << endl;
//	return 0;
//}
//namespace test {
//	void print() {
//		printf("Hello World\n");
//	}
//}
//using namespace test;
//int main(int argc, char* argv[]) {
//	print();
//	return 0;
//}
//int main(int argc, char* argv[]) {
	//string name = "Ali";
	//printf("%c\n", name[0]);
	//string newName = "";
	//for (auto letter : name) {
	//	newName += letter;
	//}
	//for (int index = 0; index < name.length(); index++) {
	//	newName += name[index];
	//}
	//cout << newName << endl;
	//return 0;
//}

//int main(int argc, char* argv[]) {
	//auto result = (5 > 10 ? "Good" : "Bad");
	//cout << result << endl;
//	return 0;
//}

//int main(int argc, char* argv[]) {
	//ofstream file;
	//file.open("C:/Users/Dell/Desktop/test.txt");
	//file << "Hello World" << endl;
	//file << "How are you??" << endl;
	//file.close();

	//ifstream file;
	//string data[5];
	//file.open("C:/Users/Dell/Desktop/test.txt");
	//for (int i = 0; i < 4; i++) {
	//	file >> data[i];
	//}
	//for (int i = 0; i < 4; i++) {
	//	cout << data[i] << endl;
	//}
	//
	//file.close();

	//fstream file;
	//file.open("C:/Users/Dell/Desktop/test.txt", ios::out);
	//file << "HI" << endl;
	//file << "Hello" << endl;
	//file.close();
	//return 0;
//}
//typedef long long LONG;
//typedef unsigned int UINT;
//int main(int argc, char* argv[]) {
//	LONG x = 1000;
//	UINT age = 12;
//	cout << sizeof(x) << endl;
//	return 0;
//}

//int main(int argc, char* argv[]) {
//	int x = 5;
//	int y;
//	y = 10;
//	int b{ 10 };
//	int c(100);
//	decltype(c) f = 1000;
//	cout << typeid(f).name() << endl;
//	unsigned long long largNumber = 1000ull;
//	cout << largNumber << endl;
//	return 0;
//}


//const int MAX_SIZE = 100;
//template <class t>
//class stack {
//	int top;
//	t item[MAX_SIZE];
//public:
//	stack(): top(-1){}
//	bool isEmpty() {
//		return top < 0;
//	}
//	void push(t val) {
//		if (top >= MAX_SIZE - 1) cout << "STACK FULL ON PUSH" << endl;
//		else {
//			top++;
//			item[top] = val;
//		}
//	}
//	void pop(t& Element) {
//		if (isEmpty()) cout << "STACK EMPTY ON POP" << endl;
//		else {
//			Element = item[top];
//			top--;
//		}
//	}
//
//	void pop() {
//		if (isEmpty()) cout << "STACK EMPTY ON POP" << endl;
//		else {
//			top--;
//		}
//	}
//
//	void getTop(t& stack_top) {
//		if (isEmpty()) cout << "STACK EMPTY ON GET TOP" << endl;
//		else {
//			stack_top = item[top];
//			cout << stack_top << endl;
//		}
//	}
//	void print() {
//		cout << "[";
//		for (int i = top; i >= 0; i--) {
//			cout << item[i] << ",";
//		}
//		cout << "]" << endl;
//	}
//};
//
//
//
//int main(int argc, char* argv[]) {
//	stack<int> numbers;
//	int top;
//	cout << numbers.isEmpty() << endl;
//	numbers.push(5);
//	numbers.push(4);
//	numbers.push(3);
//	numbers.push(2);
//	//numbers.pop();
//	numbers.push(1);
//	numbers.getTop(top);
//	cout << numbers.isEmpty() << endl;
//	numbers.print();
//	return 0;
//}
//typedef struct 
//{
//	string name;
//	int age;
//	float GPA;
//} Info;
//
//int main(int argc, char* argv[]) {
//	//struct Info aliInfo;
//	Info aliInfo;
//	Info fahadInfo = { "Fahad", 12, 3.5 };
//	Info usersInfo[2] = { {"Faisal", 15, 4.0},
//		{"Osama", 19, 3.7} };
//	cout << usersInfo[0].name << endl;
//	aliInfo.name = "Ali";
//	aliInfo.age = 12;
//	aliInfo.GPA = 3.8;
//	cout << "Your name is: " << aliInfo.name << endl;
//	return 0;
//}
//class Student {
//private:
//	string Name;
//	int Age;
//	float GPA;
//public:
//	Student(string name, int age, float gpa) : Name(name), Age(age), GPA(gpa) {
//		cout << "~ Welcome To My Class ~" << endl;
//	}
//	void display();
//};
//void Student::display() {
//	cout << "Your name is " << Name << "And your age is " << Age << endl;
//}
//int main(int argc, char* argv[]) {
//	Student AliStudent("Ali", 12, 4.0);
//	//AliStudent.display();
//	return 0;
//}
//int main(int argc, char* argv[]) {
	//int number;
	//cout << "Enter the number: ";
	//cin >> number;
	//if (number >= 0) cout << "Positive" << endl;
	//else cout << "Nigtive" << endl;
	//string name;
	//getline(cin, name);
	//cout << "Your name is: " << name << endl;
	//for (int i = 0; i < 101; i++) {
	//	if (i % 2 == 0) cout << "Even" << endl;
	//	else cout << "Odd" << endl;
	//}
//	return 0;
//}
//int isNigtive(int number) {
//	return number > 0 ? -number : number;
//}
//int main(int argc, char* argv) {
//	cout << isNigtive(0) << endl;
//	return 0;
//}
//class Part {
//	int number_1, number_2;
//public:
//	Part(): number_1(0), number_2(0){}
//	Part(int x, int y): number_1(x), number_2(y){}
//	void show() {
//		printf("%d\t%d", number_1, number_2);
//	}
//	void add(Part p1, Part p2) {
//		number_1 = p1.number_1 + p2.number_1;
//		number_2 = p1.number_2 + p2.number_2;
//	}
//};
//int main(int argc, char* argv[]) {
//	Part p1(5, 5), p2(10, 10), p3;
//	p3.add(p1, p2);
//	p3.show();
//	return 0;
//}
//typedef const int CINT;
//int main(int argc, char* argv[]) {
	//CINT SIZE = 5;
	//int numbers[SIZE] = {1, 2, 3, 4, 5};
	//for (int i = 0; i < SIZE; i++) {
	//	cout << numbers[i] << endl;
	//}
	//for (auto number : numbers) {
	//	cout << number << endl;
	//}
	//for (int i = 0; i < SIZE; i++) {
	//	cout << *(numbers + i) << endl;
	//}
	//string name = "Ali";
	//cout << name[0] << endl;
	//for (auto letter : name) {
	//	cout << letter << endl;
	//}
	//char msg[4] = { 'A', 'l', 'i', '\0'};
	//for (int i = 0; i < 3; i++) {
	//	cout << msg[i] << endl;
	//}
	//int numbers[2][2] = { {1, 2}, {3, 4} };
	//for (int i = 0; i < 2; i++) {
	//	for (int j = 0; j < 2; j++) {
	//		cout << numbers[i][j] << endl;
	//	}
	//}
//	for (int i = 0; i < 2; i++) {
//		cout << numbers[i][i] << endl;
//	}
//	return 0;
//}
//#define SIZE 5
//int main(int argc, char* argv[]) {
//	int numbers[SIZE];
//	for (int index = 0; index < SIZE; index++) {
//		cin >> numbers[index];
//	}
//	for (int number : numbers) {
//		cout << number << endl;
//	}
//	return 0;
//}

//TUPLE
//int main(int argc, char* argv[]) {
	//tuple<int, string> info(12, "Ali");
	//get<0>(info) = 13;
	//cout << get<0>(info) << endl;
	//tuple<int, int> t1 = make_tuple(1, 2);
	//tuple<int, int> t2 = make_tuple(3, 4);
	//int x = 0, y = 0;
	//t1.swap(t2);
	//cout << get<0>(t1) << endl << get<1>(t2) << endl;
	//tie(x, y) = t1;
	//cout << x << endl;
	//cout << y << endl;
	//auto t3 = tuple_cat(t1, t2);
	//cout << get<3>(t3) << endl;
	//return 0;
//}

//int main(int argc, char* argv[]) {
//	int number = 10;
//	cout << "Size: " << sizeof(number) << " Address " << &number << " The value is " << number << endl;
//	int* ptrNumber = &number;
//	cout << ptrNumber << endl << *ptrNumber << endl << &ptrNumber << endl;
//	int numbers[3] = { 1, 2, 3 };
//	for (int i = 0; i < 3; i++)cout << &numbers[i] << endl;
//	return 0;
//}

//MAP
//int main(int argc, char* argv[]) {
//	map<char, int> mp = {
//		{'A', 1},
//		{'B', 2},
//		{'C', 3},
//	};
//	cout << mp['A'] << endl;
//	mp['A'] = 5;
//	cout << mp['A'] << endl;
//	mp['D'] = 4;
//	cout << mp['D'] << endl;
//	pair<char, int> p1('J', 10);
//	mp.insert(p1); // Add
//	cout << mp['J'] << endl;
//	cout << p1.first << "\t" << p1.second << endl;
//	mp.erase('B'); // Delete
//	cout << mp['B'] << endl;
//	cout << mp.size() << endl;
//	mp.clear();
//	cout << mp.empty() << endl;
//
//	return 0;
//}

//#define NAME "Ali"
//#define SALARY 5000
//#define add(x, y) x+y
//#define SAYHELLO() printf("Hello World");cout << "HI" << endl
//#define SAYHELLO() int x = 8;printf("Hello World");cout << "HI" << endl;printf("%d", x);
//#define SAYHELLO() printf("Hello World"),cout << "HI" << endl
//int main(int argc, char* argv[]) {
	//SAYHELLO();
	//printf("YOUR NAME IS %s, AND YOUR SALARY %d\n", NAME, SALARY);
	//cout << add(5, 5) << endl;
	//return 0;
//}
//#if 5 < 10 || false
//#define DONE "YES"
//#endif
//#define is_active 0
//#if is_active
//#define YES 1
//#else
//#define YES 0
//#endif 
//#define NAME "Ali"
//int main(int argc, char* argv[]) {
//	//printf("%s\n", DONE);
//	//cout << YES << endl;
//#ifdef NAME
//	cout << NAME << endl;
//#else
//	cout << "NOT DEFINE" << endl;
//#endif
//	return 0;
//}
//#define TEST ("Hello World")
//int main(int argc, char* argv[]) {
//	cout << TEST << endl;
//#undef TEST
//#ifndef TEST
//	cout << "Undefine" << endl;
//#error
//#endif
//	return 0;
//}
//int main(int argc, char* argv[]) {
////#ifdef __linux__
////	cout << "Linux" << endl;
////#else
////	cout << "Windows" << endl;
////#endif // __linux__
//#ifdef _WIN32
//	cout << "Windows" << endl;
//#endif // _WIN64_
//
//
//	return 0;
//}
//void printNumber(void) {
	//	static int couter = 0;
	//	couter++;
	//	printf("%d\n", couter);
	//}
	//int main(int argc, char* argv[]) {
	//	printNumber();
	//	printNumber();
	//	printNumber();
	//	printNumber();
	//	return 0;
	//}

//class Student {
//public:
//	string name;
//	static int numberOfStudent; 
//	Student() {
//		numberOfStudent++;
//	}
//};
//int Student::numberOfStudent = 0;
//int main(int argc, char* argv[]) {
//	Student s1;
//	Student s2;
//	Student s3;
//	cout << s3.numberOfStudent << endl;
//	return 0;
//}
//class Calc {
	//public:
	//	static int add(int x, int y) {
	//		return x + y;
	//	}
	//	static float add(float a, float b) {
	//		return a + b;
	//	}
	//	static string add(string f, string l) {
	//		return f + l;
	//	}
	//};
	//int main(int argc, char* argv[]) {
	//	cout << Calc::add(4, 4) << endl;
	//	cout << Calc::add(4.4f, 4.4f) << endl;
	//	cout << Calc::add("ALI ","ALSHARJI") << endl;
	//	return 0;
	//}
//int main(int argc, char* argv[]) {
//	vector<int> v1 = { 1, 2, 3, 4, 5 };
	//cout << v1[0] << endl;
	//cout << v1.front() << endl;
	//cout << v1.back() << endl;
	//cout << v1.size() << endl;
	//v1.push_back(6);
	//cout << v1.back() << endl;
	//v1.pop_back();
	//cout << v1.back() << endl;
	//v1.insert(v1.begin(), 0);
	//v1.insert(v1.end(), 6);
	//v1.insert(v1.begin() + 1, 100);
	//cout << v1.front() << endl;
	//cout << v1.back() << endl;
	//cout << v1[1] << endl;
	//v1.clear();
	//cout << v1.empty() << endl;
	//v1.erase(v1.begin());
	//cout << v1[0] << endl;
	//for (int i = 0; i < v1.size(); i++) {
	//	cout << v1[i] << endl;
	//}
	//puts("========================================");
	//for (auto itr = v1.begin(); itr != v1.end(); itr++) {
	//	cout << *itr << endl;
	//}
//	return 0;
//}
//int main(int argc, char* argv[]) {
	//int* ptrNumber = (int*) malloc(sizeof(int));
	//*ptrNumber = 10;
	//cout << *ptrNumber << endl << ptrNumber[0];
	//free(ptrNumber);
//	int* ptrNumber = new int(4);
//	int* ptrArrary = new int[3];
//	cout << *ptrNumber << endl;
//	*ptrNumber = 20;
//	cout << *ptrNumber << endl;
//	ptrArrary[0] = 1;
//	ptrArrary[1] = 2;
//	ptrArrary[2] = 3;
//	for (int i = 0; i < 3; i++) {
//		cout << *(ptrArrary + i) << endl;
//	}
//	delete ptrNumber;
//	delete[] ptrArrary;
//	return 0;
//}
//int sum(int x, int y) {
//	return x + y;
//}
//int sub(int x, int y) {
//	return x - y;
//}
//typedef int(*ptrFunction) (int, int);
//int main(int argc, char* argv[]) {
//	//int* ptrNumber = (int*) malloc(sizeof(int));
//	ptrFunction sumFunction = &sum;
//	ptrFunction subFunction = &sub;
//	cout << sumFunction(4, 4) << endl;
//	cout << subFunction(10, 4) << endl;
//	return 0;
//}

//int main(int argc, char* argv[]) {
	//	int n, a, b, c, counter = 0;
	//	cin >> n;
	//	while (n--)
	//	{
	//		cin >> a >> b >> c;
	//		//if (a == 1 && b == 1) counter++;
	//		//else if (a == 1 && c == 1) counter++;
	//		//else if (b == 1 && c == 1) counter++;
	//		counter += (a + b + c >= 2);
	//	}
	//	printf("%d", counter);
	//	return 0;
	//}

//struct Node
//{
//	int data;
//	Node* next;
//};
//Node* head = NULL;
//void insert(int value) {
//	Node* new_node, *last;
//	new_node = new Node;
//	new_node->data = value;
//	if (head == NULL) {
//		head = new_node;
//		new_node->next = NULL;
//	}
//	else {
//		last = head;
//		while (last->next != NULL)
//		{
//			last = last->next;
//		}
//		last->next = new_node;
//		new_node->next = NULL;
//	}
//}
//void insert_beg(int value) {
//	Node* new_node = new Node;
//	new_node->data = value;
//	new_node->next = head;
//	head = new_node;
//}
//void print(void) {
//	Node* current;
//	if (head == NULL) cout << "Linked List Is Empty." << endl;
//	else {
//		current = head;
//		cout << "[";
//		while (current != NULL)
//		{
//			cout << current->data << "\t";
//			current = current->next;
//		}
//		cout << "]";
//	}
//}
//void deleteNode(int val) {
//	Node* current, * previous;
//	current = head;
//	previous = head;
//	if (current->data == val) {
//		head = current->next;
//		free(current);
//		return;
//	}
//	while (current->data != val) {
//		previous = current;
//		current = current->next;
//	}
//	previous->next = current->next;
//	free(current);
//}
//void delete_beg() {
//	if (head == NULL) cout << "The Linked List Is Empty..\n";
//	else {
//		Node* first = head;
//		head = first->next;
//		delete first;
//	}
//}
//void delete_end() {
//	if (head == NULL) cout << "The Linked List Is Empty..\n";
//	else if (head->next == NULL) {
//		delete head;
//		head = NULL;
//	}
//	else {
//		Node* last = head;
//		while (last->next->next != NULL) {
//			last = last->next;
//		}
//		delete last->next;
//		last->next = NULL;
//	}
//}
//int main(int argc, char* argv[]) {
//	insert(5);
//	insert(10);
//	insert(15);
//	insert_beg(1);
//	delete_end();
//	print();
//	return 0;
//}
//class Student {
//private:
//	string name;
//	int age;
//public:
//	Student() {
//		name = "NONE";
//		age = 0;
//	}
//	Student(string n, int g) : name(n), age(g) {
//		cout << "Welcome !!" << endl;
//	}
//	string getName(void) {
//		return name;
//	}
//	int getAge(void) {
//		return age;
//	}
//	~Student() { cout << "Good Bye !!" << endl; }
//};
//class Part {
//private:
//	int x, y;
//public:
//	Part(): x(0), y(0){}
//	Part(int a, int b): x(a), y(b){}
//	void show() {
//		cout << x << "\t" << y << endl;
//	}
//	void add(Part c1, Part c2) {
//		x = c1.x + c2.x;
//		y = c1.y + c2.y;
//	}
//};
//class AddClass {
//public:
//	static int add(int x, int y) {
//		return x + y;
//	}
//	static int add(int x, int y, int c) {
//		return x + y + c;
//	}
//	static float add(float x, float y) {
//		return x + y;
//	}
//};
//int main(int argc, char* argv[]) {
//	//Student std("Ali", 12);
//	////Student std2 = std;
//	//Student std2 (std);
//	//cout << std2.getName() << endl;
//	//cout << std2.getAge() << endl;
//	//Part p1(4, 4), p2(5, 5);
//	//Part p3;
//	//p3.add(p1, p2);
//	//p3.show();
//	cout << AddClass::add(4, 4) << endl;
//	cout << AddClass::add(4, 4, 4) << endl;
//	cout << AddClass::add(4,5, 4.3) << endl;
//	return 0;
//}
//template <class T>
//class LindedList {
//	struct Node {
//		T data;
//		Node* next;
//	};
//	Node* head;
//public:
//	LindedList() {
//		head = NULL;
//	}
//	bool isEmpty() { 
//		return head == NULL;
//	}
//	void addNode(T value) {
//		Node* newNode = new Node;
//		newNode->data = value;
//		if (head == NULL) {
//			head = newNode;
//			newNode->next = NULL;
//		}
//		else {
//			Node* first = head;
//			while (first->next != NULL)
//			{
//				first = first->next;
//			}
//			first->next = newNode;
//			newNode->next = NULL;
//		}
//	}
//	void deleteNode(T value) {
//		if (isEmpty()) cout << "The LinkedList Is Empty" << endl;
//		else {
//			Node* current, * previous;
//			current = head;
//			previous = head;
//			if (current->data == value) {
//				head = current->next;
//				delete(current);
//				return;
//			}
//			else {
//				while (current->data != value) {
//					previous = current;
//					current = current->next;
//					}
//				previous->next = current->next;
//				delete(current);
//			}
//		}
//	}
//	void insert_beg(T value) {
//		Node* new_node = new Node;
//		new_node->data = value;
//		new_node->next = head;
//		head = new_node;
//	}
//	void delete_beg() {
//		if (isEmpty()) cout << "The Linked List Is Empty" << endl;
//		else {
//			Node* first = head;
//			head = first->next;
//			delete(first);
//		}
//	}
//	void delete_end() {
//		if (isEmpty()) cout << "The Linked List Is Empty" << endl;
//		else if (head->next == NULL) {
//			delete(head);
//			head = NULL;
//		}
//		else {
//			Node* current = head;
//			while (current->next->next != NULL)
//			{
//				current = current->next;
//			}
//			delete(current->next);
//			current->next = NULL;
//		}
//	}
//	void display() {
//		Node* first = head;
//		cout << "[\t";
//		while (first != NULL)
//		{
//			cout << first->data << "\t";
//			first = first->next;
//		}
//		cout << "]" << endl;
//	}
//
//};
//int main(int argc, char* argv[]) {
//	LindedList<int> list;
//	list.addNode(1);
//	list.addNode(2);
//	list.addNode(3);
//	list.addNode(4);
//	list.deleteNode(4);
//	list.insert_beg(10);
//	list.delete_beg();
//	list.delete_end();
//	list.display();
//	return 0;
//}

//class Student {
//private:
//	string name;
//	int age;
//public:
//	Student(string n, int g) : name(n), age(g) {
//		cout << "Object is created\n";
//	}
//	~Student();
//	void setName(string new_name);
//	void setAge(int new_age);
//	string getName();
//	int getAge();
//};
//void Student::setName(string new_name) {
//	name = new_name;
//}
//void Student::setAge(int new_age) {
//	this->age = new_age;
//}
//string Student::getName() {
//	return this->name;
//}
//int Student::getAge() {
//	return age;
//}
//Student::~Student() {
//	cout << "Object is deleted" << endl;
//}
//int main(int argc, char* argv[]) {
//	Student std1("Ali", 12);
//	cout << "Your name is " << std1.getName() << " And Your Age Is " << std1.getAge() << endl;
//
//	return 0;
//}
//class Rectangle {
//private:
//	int width;
//	int height;
//public:
//	Rectangle(int width, int height) {
//		this->width = width;
//		this->height = height;
//	}
//	Rectangle(): width(0), height(0){}
//	int area() {
//		return width * height;
//	}
//	Rectangle operator + (Rectangle rect) {
//		width = rect.width + this->width;
//		height = rect.height + this->height;
//		return Rectangle(width, height);
//	}
//};
//
//int main(int argc, char* argv[]) {
//	Rectangle rect1(5, 4);
//	Rectangle rect2(5, 5);
//	Rectangle rect3 = rect1 + rect2;
//	cout << rect3.area() << endl;
//	return 0;
//}
//bool ArePair(char open, char close) {
//	if (open == '(' && close == ')') return true;
//	else if (open == '{' && close == '}') return true;
//	else if (open == '[' && close == ']') return true;
//	return false;
//}
//bool AreBalanced(string exp) {
//	stack<char> s;
//	for (int i = 0; i < exp.length(); i++) {
//		if (exp[i] == '(' || exp[i] == '[' || exp[i] == '{') s.push(exp[i]);
//		else if (exp[i] == ')' || exp[i] == ']' || exp[i] == '}') {
//			if (s.empty() || !ArePair(s.top(), exp[i])) return false;
//			else s.pop();
//		}
//	}
//	return s.empty();
//}
//
//int main(int argc, char argv[]) {
//	string expression = "(5 + 7)";
//	if (AreBalanced(expression)) cout << "Balanced !!\n";
//	else cout << "Not Balanced\n";
//	return 0;
//}

//int main(int argc, char* argv[]) {
//	int arr[5][5];
//	int row, column;
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 5; j++) {
//			cin >> arr[i][j];
//			if (arr[i][j] == 1) {
//				row = i;
//				column = j;
//			}
//		}
//	}
//	int result = abs((row - 2)) + abs((column - 2));
//	cout << result << endl;
//	//for (int i = 0; i < 5; i++) {
//	//	for (int j = 0; j < 5; j++) {
//	//		cout << arr[i][j] << "\t";
//	//	}
//	//	puts("\n");
//	//}
//	return 0;
//}

//int main(int argc, char* argv[]) {
//	int size = 0;
//	printf("Eneter the size of array: ");
//	cin >> size;
//	int* arrOfNumber = new int[size];
//	for (int i = 0; i < size; i++)
//		cin >> arrOfNumber[i];
//	for (int i = 0; i < size; i++)
//		cout << arrOfNumber[i] << "\t";
//	return 0;
//}

//int main(int argc, char* argv[]) {
//	int size = 0;
//	printf("Eneter the size of array: ");
//	cin >> size;
//	int* arrOfNumber = (int*)malloc(size * sizeof(int));
//	for (int i = 0; i < size; i++)
//		cin >> arrOfNumber[i];
//	for (int i = 0; i < size; i++)
//		cout << arrOfNumber[i] << "\t";
//	return 0;
//}
//class Base {
//	string name;
//	int age;
//public:
//	Base(string name, int age) {
//		this->name = name;
//		this->age = age;
//	}
//	void display() {
//		cout << "Your name is: " << this->name << " ,and you age is " << age << endl;
//	}
//};
//class Student : public Base {
//	float GPA;
//	string gender;
//public:
//	Student(string name, int age, float gpa, string gender) : Base(name, age) {
//		this->GPA = gpa;
//		this->gender = gender;
//	}
//	void display(void) {
//		Base::display();
//		cout << "GPA: " << GPA << "\t" << "Gender: " << gender << endl;
//	}
//};
//int main(int argc, char* argv[]) {
//	//Base* bse1 = new Base("Ali", 12);
//	//bse1->display();
//	Student std1("Ali", 12, 3.4f, "Male");
//	std1.display();
//	return 0;
//}
//class Shape {
//	string color;
//public:
//	Shape(string color) {
//		this->color = color;
//	}
//	virtual int area() {
//		cout << "Parent Class Area " << endl;
//		return 0;
//	}
//};
//class Rectangle : public Shape {
//private:
//	int length;
//	int width;
//public:
//	Rectangle(int w, int l, string c) : Shape(c) {
//		length = l;
//		width = w;
//	}
//	int area() {
//		return this->width * this->length;
//	}
//};
//int main(int argc, char* argv[]) {
//	Shape* shape;
//	Rectangle rec1(4, 4, "Blue");
//	shape = &rec1;
//	cout << shape->area() << endl;
//	return 0;
//}
//bool check(char arr[4][4]) {
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			if (arr[i][j] == arr[i][j + 1] && arr[i][j] == arr[i + 1][j] && arr[i + 1][j] == arr[i + 1][j + 1]) {
//				return true;
//			}
//		}
//	}
//	return false;
//}
//int main(int argc, char* argv[]) {
//	const int size = 4;
//	char arr[size][size];
//	for (int i = 0; i < size; i++) {
//		for (int j = 0; j < size; j++) {
//			cin >> arr[i][j];
//		}
//	}
//	if (check(arr)) {
//		cout << "YES" << endl;
//		return 0;
//	}
//	for (int i = 0; i < size; i++) {
//		for (int j = 0; j < size; j++) {
//			char c = arr[i][j];
//			if (c == '#') arr[i][j] = '.';
//			else arr[i][j] = '#';
//			if (check(arr)) {
//				cout << "YES" << endl;
//				return 0;
//			}
//			arr[i][j] = c;
//		}
//	}
//	cout << "NO" << endl;
//
//	return 0;
//}
//struct Student
//{
//	string name;
//	int age;
//};
//typedef struct {
//	int phone_number;
//} info;
//typedef struct test {
//
//};
//int main(int argc, char* argv[]) {
//	Student std1 = { "Ali", 12 };
//	Student std2{ "Faisal", 13 };
//	Student std3;
//	std3.name = "Ahmed";
//	std3.age = 14;
//	cout << std1.name << endl;
//	Student students[2] = { { "Ali", 12 }, {"Faisal", 15} };
//	cout << students[0].name << endl;
//	return 0;
//}
//class Print {
//public:
//	void operator << (string text) {
//		cout << text << endl;
//	}
//};
//int main(int argc, char* argv[]) {
//	Print print;
//	print << "Hello World";
//	return 0;
//}
//template <class t>
//t input(string text) {
//	t value;
//	cout << text;
//	cin >> value;
//	return value;
//}
//int main(int argc, char* argv[]) {
//	int result = input<int>("First Number: ");
//	cout << result << endl;
//	return 0;
//}

//class Student {
//private:
//	string name;
//	int age;
//public:
//	Student(string n, int g) : name(n), age(g) {
//
//	}
//	string getName() { return this->name; }
//	int getAge() { return this->age; }
//};
//struct Info {
//private:
//	string name;
//	int age;
//public:
//	Info(string n, int g) : name(n), age(g) {
//
//	}
//	string getName() { return this->name; }
//	int getAge() { return this->age; }
//};
//int main(int argc, char* argv[]) {
//	Info info1("Ali", 12);
//	cout << info1.getName() << endl;
//	return 0;
//}
//typedef enum Gender {
//	Male=1, Female=2
//}Gender;
//int main(int argc, char* argv[]) {
//	Gender gender = Male;
//	cout << gender << endl;
//	return 0;
//}
//union Name {
//	char fullName[50];
//	char firstLetter;
//};
//int main(int argc, char* argv[]) {
//	Name name;
//	cout << "Full Name: ";
//	cin >> name.fullName;
//	cout << name.fullName << endl;
//	printf("%c\n", name.firstLetter);
//	return 0;
//}
//class Base {
//private:
//	int age;
//	string name;
//public:
//	Base(string name, int age) {
//		this->name = name;
//		this->age = age;
//	}
//	void display(void) {
//		cout << "Your name: " << this->name << " Age: " << this->age << endl;
//	}
//};
//class Student : public Base {
//public:
//	Student(string name, int age) : Base(name, age) {
//
//	}
//};
//int main(int argc, char* argv[]) {
//	Student std1("Ali", 12);
//	std1.display();
//	return 0;
//}

//class Shape {
//protected:
//	int width, heigth;
//public:
//	void setValue(int width, int heigth) {
//		this->width = width;
//		this->heigth = heigth;
//	}
//	virtual int area() = 0;
//};
//
//class Rectangle : public Shape {
//public:
//	int area(void){
//		return this->width * this->heigth;
//	}
//};
//
//int main(int argc, char* argv) {
//	Rectangle* rec1 = new Rectangle;
//	rec1->setValue(4, 4);
//	printf("The Area Is: %d\n", rec1->area());
//	return 0;
//}

//int main(int argc, char* argv[]) {
//	int s[4];
//	int result = 0;
//	for (int i = 0; i < 4; i++)
//		cin >> s[i];
//	for (int j = 0; j < 4; j++) {
//		for (int n = j; n < 3; n++) {
//			if (s[j] == s[n + 1]) {
//				result++;
//			}
//			if (j == 1) {
//				if (result == 2) {
//					cout << result << endl;
//					return 0;
//				}
//			}
//		}
//		if (result == 3) {
//			cout << result << endl;
//			return 0;
//		}
//	}
//	cout << result << endl;
//	return 0;
//}

//int main(int argc, char* argv[]) {
//	set<int> numbers;
//	int s[4];
//	int result = 0;
//	for (int i = 0; i < 4; i++)
//		cin >> s[i];
//	for (int i = 0; i < 4; i++) {
//		numbers.insert(s[i]);
//	}
//	cout << 4 - numbers.size() << endl;
//	return 0;
//}
//int main(int argc, char* argv[]) {
//	int n, counter = 0;
//	cin >> n;
//	char* colors = new char[n];
//	for (int i = 0; i < n; i++) {
//		cin >> colors[i];
//	}
//
//	for (int j = 0; j < n - 1; j++) {
//		if (colors[j] == colors[j + 1])
//			counter++;
//	}
//	cout << counter << endl;
//	return 0;
//}

//class Shape {
//protected:
//	int width, height;
//public:
//	Shape(int w, int h) {
//		this->width = w;
//		this->height = h;
//	}
//	virtual int area() = 0;
//};
//class Rectangle : public Shape {
//public:
//	Rectangle(int w, int h): Shape(w, h) {	}
//	int area(void){
//		return this->width * this->height;
//	}
//};
//
//class Triangle : public Shape {
//public:
//	Triangle(int w, int h) : Shape(w, h) {	}
//	int area(void) {
//		return (this->width * this->height) / 2;
//	}
//};
//enum class ShapeDraw {
//	rectangle=1, triangle=2
//};
//class ShapeFactory {
//public:
//	Shape* getShape(ShapeDraw shapeDraw, int width, int height) {
//		Shape* shape = nullptr;
//		switch (shapeDraw)
//		{
//		case ShapeDraw::rectangle:
//			shape = new Rectangle(width, height);
//			break;
//		case ShapeDraw::triangle:
//			shape = new Triangle(width, height);
//			break;
//		default:
//			shape = nullptr;
//			break;
//		}
//		return shape;
//	}
//};
//int main(int argc, char* argv[]) {
//	ShapeFactory shapeFactory;
//	int drawIndex = 0;
//	int width = 0, height = 0;
//	do {
//		cout << "Enter Option: \n1- Rectangle\n2- Triangle\n0- Exit\n>>";
//		cin >> drawIndex;
//		if (drawIndex == 1 || drawIndex == 2) {
//			cout << "Enter Width: ";
//			cin >> width;
//			cout << "Enter Height: ";
//			cin >> height;
//		}
//		Shape* shape = shapeFactory.getShape((ShapeDraw)drawIndex, width, height);
//		if (shape == nullptr) {
//			break;
//		}
//		cout <<"The Area Is: "<< shape->area() << endl;
//		delete shape;
//	} while (drawIndex);
//	return 0;
//}

//int main(int argc, char* argv[]) {
//	cout << (ShapeDraw)1 << endl; // Rectangle
//	ShapeDraw shape = rectangle;
//	cout << shape << endl;
//	return 0;
//}
//template <class T>
//class Queue {
//	int rear;
//	int front;
//	T* arr;
//	int length;
//	int MAX_LENGTH;
//public:
//	Queue(int size) {
//		if (size <= 0) MAX_LENGTH = 100;
//		else MAX_LENGTH = size;
//		arr = new T[size];
//		front = 0;
//		rear = MAX_LENGTH - 1;
//		length = 0;
//	}
//	bool isEmpty() { return length == 0; }
//	bool isFull() { return length == MAX_LENGTH; }
//	void put(T value) {
//		if (isFull()) {
//			cout << "The Queue Is Full !!" << endl;
//		}
//		else {
//			rear = (rear + 1) % MAX_LENGTH;
//			arr[rear] = value;
//			length++;
//
//		}
//	}
//	void pop() {
//		if (isEmpty()) {
//			cout << "The Queue Is Empty !!" << endl;
//		}
//		else {
//			front = (front + 1) % MAX_LENGTH;
//			length++;
//		}
//	}
//	int getFront() {
//		assert(!isEmpty());
//		return arr[front];
//	}
//	int getRear() {
//		assert(!isEmpty());
//		return arr[rear];
//	}
//	void print() {
//		if (isEmpty()) {
//			cout << "The Queue Is Empty !!" << endl;
//		}
//		else {
//			cout << "[";
//			for (size_t i = front; i != rear; i = (i + 1) % MAX_LENGTH) {
//				cout << arr[i] << " ";
//			}
//			cout << arr[rear] <<  "]\n";
//		}
//
//	}
//};
//int main(int argc, char* argv[]) {
//	Queue<int> q1(3);
//	q1.put(1);
//	q1.put(2);
//	q1.put(3);
//	q1.print();
//	q1.pop();
//	cout << q1.getFront() << endl;
//	cout << q1.getRear() << endl;
//	return 0;
//}
//template <class T>
//class LindedListQueue {
//private:
//	struct Node {
//		T items;
//		Node* next;
//	};
//	Node* front;
//	Node* rear;
//	int lenght;
//public:
//	LindedListQueue() : front(NULL), rear(NULL), lenght(0) {}
//	bool isEmpty(void) { return lenght == 0; }
//	
//	void enqueue(T element) {
//		Node* new_node = new Node;
//		new_node->items = element;
//		new_node->next = NULL;
//		if (isEmpty()) {
//			front = rear = new_node;
//		}
//		else {
//			rear->next = new_node;
//			rear = new_node;
//		}
//		lenght++;
//	}
//	void dequeue() {
//		if (isEmpty()) cout << "[!!] Empty Queue, Cannot Dequeue !!\n";
//		else if (lenght == 1) {
//			delete front;
//			rear = NULL;
//			lenght = 0;
//		}
//		else {
//			Node* temptr = front;
//			front = temptr->next;
//			delete temptr;
//			lenght--;
//		}
//	}
//	T getFront(void) {
//		assert(!isEmpty());
//		return front->items;
//	}
//	void clear(void) {
//		Node* current;
//		while (front != NULL) {
//			current = front;
//			front = front->next;
//			delete current;
//		}
//		rear = NULL;
//		lenght = 0;
//	}
//	void display(void) {
//		Node* current = front;
//		cout << "Itmes in the queue is: [ ";
//		while (current != NULL)
//		{
//			cout << current->items << " ";
//			current = current->next;
//		}
//		cout << "]\n";
//	}
//	int size() {
//		return this->lenght;
//	}
//};
//int main(int argc, char** argv) {
//	LindedListQueue<int> qu;
//	qu.enqueue(1);
//	qu.enqueue(2);
//	qu.enqueue(3);
//	qu.enqueue(4);
//	qu.enqueue(5);
//	qu.dequeue();
//	printf("The Front Value Is: %d\n", qu.getFront());
//	qu.clear();
//	cout << qu.size() << endl;
//	qu.display();
//	return 0;
//}

//namespace myfunc {
//	void print(void) {
//		cout << "Welcome to my first c++ program.\n";
//	}
//}
//int main(int argc, char* argv[]) {
//	return 0;
//}
//namespace ds {
//	template <class T>
//	struct DoubleNode {
//		T value;
//		DoubleNode* left;
//		DoubleNode* right;
//		DoubleNode(T data) {
//			value = data;
//			left = nullptr;
//			right = nullptr;
//		}
//	};
//	template <class T2>
//	class DoubleLinkedList {
//	protected:
//		DoubleNode<T2>* front;
//		DoubleNode<T2>* rear;
//	public:
//		DoubleLinkedList();
//		~DoubleLinkedList();
//		void addFront(T2 val);
//		void addRear(T2 val);
//		DoubleNode<T2>* getFront();
//		DoubleNode<T2>* getRear();
//		
//	};
//	template <class T2>
//	DoubleLinkedList<T2>::DoubleLinkedList(): front(nullptr), rear(nullptr) {}
//	template <class T2>
//	DoubleLinkedList<T2>::~DoubleLinkedList() {
//		while (rear != nullptr) {
//			DoubleNode<T2>* temp_node = rear;
//			rear = rear->right;
//			if(rear != nullptr)
//				rear->left = nullptr;
//			delete temp_node;
//		}
//		
//	}
//	template <class T2>
//	void DoubleLinkedList<T2>::addFront(T2 val) {
//		DoubleNode<T2>* new_node = new DoubleNode<T2>(val);
//		if (rear == nullptr && front == nullptr) {
//			front = new_node;
//			rear = new_node;
//		}
//		else {
//			new_node->left = front;
//			front->right = new_node;
//			front = new_node;
//		}
//	}
//	template <class T2>
//	void DoubleLinkedList<T2>::addRear(T2 val) {
//		DoubleNode<T2>* new_node = new DoubleNode<T2>(val);
//		if (rear == nullptr && front == nullptr) {
//			front = new_node;
//			rear = new_node;
//		}
//		else {
//			new_node->right = rear;
//			rear->left = new_node;
//			rear = new_node;
//		}
//	}
//	template <class T2>
//	DoubleNode<T2>* DoubleLinkedList<T2>::getFront() {
//		return front;
//	}
//	template <class T2>
//	DoubleNode<T2>* DoubleLinkedList<T2>::getRear() {
//		return rear;
//	}
//	template <class T3>
//	class Queue2 : protected DoubleLinkedList<T3> {
//	public:
//		void push(T3 value);
//		T3 pull();
//	};
//	template<class T3>
//	void Queue2<T3>::push(T3 value) {
//		this->addFront(value);
//	}
//	template <class T3>
//	T3 Queue2<T3>::pull() {
//		DoubleNode<T3>* node = this->getRear();
//		if (node == nullptr) {
//			return NULL;
//		}
//		T3 value = node->value;
//		this->rear = this->rear->right;
//		if (this->rear == nullptr) {
//			this->rear = nullptr;
//			this->front = nullptr;
//		}
//		else {
//			this->rear->left = nullptr;
//		}
//		delete node;
//		return value;
//	}
//}
//
//
//using namespace ds;
//int main(int argc, char* argv[]) {
//	DoubleLinkedList<int> DLList;
//	DLList.addFront(1);
//	DLList.addFront(2);
//	DLList.addFront(3);
//	DLList.addRear(0);
//	DLList.addFront(4);
//	DoubleNode<int>* back = DLList.getRear();
//	while (back != nullptr) {
//		cout << back->value << endl;
//		back = back->right;
//	}
//	return 0;
//}
//template <class T>
//class arrayList {
//	T* arr;
//	int max_size;
//	int lenght;
//public:
//	arrayList(int s = 10) {
//		if (s < 0)
//			max_size = 10;
//		else
//			max_size = s;
//		lenght = 0;
//		arr = new T[max_size];
//	}
//	bool isEmpty(void) {
//		return lenght == 0;
//	}
//	bool isFull() {
//		return lenght == max_size;
//	}
//	int getSize() {
//		return lenght;
//	}
//	void print() { 
//		cout << "[ ";
//		for (int i = 0; i < lenght; i++) {
//			cout << arr[i] << " ";
//		}
//		cout << "]\n";
//	}
//	void insertAtpos(int pos, T element) {
//		if (isFull())
//			cout << "List Full....!" << endl;
//		else if (pos < 0 || pos > lenght)
//			cout << "Out Of Range...!" << endl;
//		else {
//			for (int i = lenght; i > pos; i--)
//				arr[i] = arr[i - 1];
//
//			arr[pos] = element;
//			lenght++;
//		}
//	}
//	void insertAtEnd(T element) {
//		if (isFull())
//			cout << "List Full....!" << endl;
//		else
//			arr[lenght] = element;
//		lenght++;
//	}
//	int search(T element) {
//		for (int i = 0; i < lenght; i++) {
//			if (arr[i] == element)
//				return i;
//			return -1;
//		}
//	}
//	void insertNoDuplicate(T element) {
//		if (search(element) == -1)
//			insertAtEnd(element);
//		else
//			cout << "The Element Is There...!\n";
//	}
//	void updateAt(int pos, T element) {
//		if (pos < 0 || pos >= lenght)
//			cout << "Out Of Range...!\n";
//		else
//			arr[pos] = element;
//	}
//	T getElement(int pos) {
//		if (pos < 0 || pos >= lenght)
//			cout << "Out Of Range...!\n";
//		else
//			return arr[pos];
//	}
//	~arrayList() {
//		delete[] arr;
//	}
//	void removeAtPos(int pos) {
//		if (isEmpty())
//			cout << "List Is Empyt...!\n";
//		else if (pos < 0 || pos > lenght)
//			cout << "Out Of Range...!\n";
//		else {
//			for (int i = pos; i < lenght; i++) {
//				arr[i] = arr[i + 1];
//			}
//		}
//		lenght--;
//	}
//};
//int main(int argc, char** argv) {
//	arrayList<int> list(10);
//	list.insertAtEnd(1);
//	list.insertAtEnd(2);
//	list.insertAtEnd(3);
//	list.insertAtEnd(4);
//	list.insertAtEnd(5);
//	list.insertAtpos(0, 0);
//	list.removeAtPos(1);
//	list.print();
//	return 0;
//}

//#line __LINE__ "TEST"
//
//int main(int argc, char** argv) {
//	cout << __LINE__ << endl;
//	cout << __cplusplus << endl;
//	cout << __DATE__ << endl;
//	cout << __TIME__ << endl;
//	cout << __FILE__ << endl;
//	return 0;
//}

//class Rectangle {
//public:
//	Rectangle() {
//		cout << "Rectangle\n";
//	}
//	int area(int w, int h) {
//		return w * h;
//	}
//	~Rectangle() {
//		cout << "~Rectangle" << endl;
//	}
//};
//template <class T>
//class SmartPtr {
//private:
//	T* ptr;
//public:
//	SmartPtr(T* p = NULL) {
//		ptr = p;
//	}
//	~SmartPtr() {
//		delete ptr;
//	}
//	T& operator*() { return *ptr; }
//	T* operator->() { return ptr; }
//};
//
//int main(int argc, char** argv) {
//	//Rectangle rect;
//	//cout << rect.area(4, 4) << endl;
//	//Rectangle* rect = new Rectangle;
//	//cout << rect->area(4, 4) << endl;
//	//delete rect;
//	//shared_ptr<Rectangle> rect(new Rectangle);
//	//cout << rect->area(4, 4) << endl;
//
//	SmartPtr<Rectangle> rect(new Rectangle);
//	cout << rect->area(4, 4) << endl;
//	return 0;
//}
// C:\Users\Dell\Desktop | fstream

//#define FILE_PATH "C:/Users/Dell/Desktop/data.txt"
//
//enum class Options {Add=1, View=2};
//
//void addTextToFile(string text, string path) {
//	try
//	{
//		ofstream file;
//		file.open(path, ios::out | ios::app);
//		file << text + "\n";
//		file.close();
//	}
//	catch (exception& error)
//	{
//		cout << error.what() << endl;
//	}
//
//}
//vector<string> readFromTextFile(string path) {
//	vector<string> fileLines;
//	string line;
//	try {
//		ifstream file(path);
//		if (file.is_open()) {
//			while (getline(file, line))
//			{
//				fileLines.push_back(line);
//			}
//		}
//		else
//		{
//			printf("[!!]Unable to open file..\n");
//		}
//	}
//	catch (exception& e) {
//		cout << e.what() << endl;
//	}
//
//	return fileLines;
//}
//int main(int argc, char** argv) {
//	string text;
//	while (true)
//	{	
//		printf("[-]Write: ");
//		getline(cin, text);
//		if (text == "read") {
//			vector<string> lines = readFromTextFile(FILE_PATH);
//			puts("");
//			for (auto i = lines.begin(); i != lines.end(); i++) {
//				
//				cout << *i << endl;
//			}
//			puts("");
//		}
//		else if (text == "exit") {
//			break;
//		}
//		else {
//			addTextToFile(text, FILE_PATH);
//		}
//	}
//	return 0;
//}

//int main(int argc, char** argv) {
//	int numbers[] = { 1, 2, 3, 4 };
//	for (int number : numbers) {
//		cout << number << endl;
//	}
//	return 0;
//}


//class LinkedList {
//private:
//	struct Node
//	{
//		int item;
//		Node* next;
//	};
//	Node* first;
//	Node* last;
//	int lenght;
//public:
//	LinkedList() {
//		first = last = NULL;
//		lenght = 0;
//	}
//	bool isEmpty() {
//		return lenght == 0;
//	}
//	void insertFirst(int element) {
//		Node* newNode = new Node;
//		newNode->item = element;
//		if (isEmpty()) {
//			first = last = newNode;
//			newNode->next = NULL;
//		}
//		else {
//			newNode->next = first;
//			first = newNode;
//		}
//		lenght++;
//	}
//	void insertLast(int element) {
//		Node* newNode = new Node;
//		newNode->item = element;
//		if (isEmpty()) {
//			first = last = newNode;
//			newNode->next = NULL;
//		}
//		else {
//			last->next = newNode;
//			newNode->next = NULL;
//			last = newNode;
//		}
//		lenght++;
//	}
//	void insertAtPos(int pos, int element) {
//		if (pos < 0 || pos > lenght) cout << "Out Of The Range!!\n";
//		else {
//			if (pos == 0) {
//				insertFirst(element);
//			}
//			else if (pos == lenght) {
//				insertLast(element);
//			}
//			else {
//				Node* newNode = new Node;
//				newNode->item = element;
//				Node* current = first;
//				for (int i = 1; i < pos; i++) {
//					current = current->next;
//				}
//				newNode->next = current->next;
//				current->next = newNode;
//				lenght++;
//			}
//		}
//
//	}
//
//
//	void print() {
//		Node* current = first;
//		cout << "[";
//		while (current != NULL)
//		{
//			cout << current->item << " ";
//			current = current->next;
//		}
//		cout << "]";
//	}
//};
//
//
//int main(int argc, char** argv) {
//	LinkedList lst;
//	lst.insertLast(1);
//	lst.insertLast(2);
//	lst.insertFirst(0);
//	lst.insertLast(3);
//	lst.insertAtPos(0, -1);
//	lst.print();
//	return 0;
//}

//int add(int nums[], int size) {
//	int total = 0;
//	for (int i = 0; i < size; i++) {
//		total += nums[i];
//	}
//	return total;
//}
//int main(int argc, char* argv[]) {
//	int numbers[5] = { 1, 2, 3, 4, 5 };
//	cout << add(numbers, 5) << endl;
//	return 0;
//}



//struct Student {
//	string name;
//	int age;
//	string getName() {
//		return name;
//	}
//	void setAge(int new_age) {
//		age = new_age;
//	}
//};
//int main(int argc, char* argv[]) {
//	Student std1[2] = { {"Ali", 12}, {"Fahad", 16} };
//	cout << std1[1].getName() << endl;
//	std1[1].setAge(100);
//	cout << "Your name is: " << std1[0].name << " ,And Your Age is: " << std1[1].age << endl;
//	return 0;
//};

//class Student {
//private:
//	int age;
//	string name;
//public:
//	Student() {
//		this->age = 0;
//		this->name = "Unkown";
//	}
//	Student(string N_name, int N_age):name(N_name), age(N_age) {}
//	void setName(string new_name) {
//		this->name = new_name;
//	}
//	void setAge(int new_age) {
//		this->age = new_age;
//	}
//	string getName() {
//		return this->name;
//	}
//	int getAge() {
//		return this->age;
//	}
//	void show() {
//		cout << "Your Name is: " << this->name << " Your Age is: " << this->age << endl;
//	}
//};
//class Calculator_ {
//private:
//	int fNumber;
//	int sNumber;
//public:
//	Calculator_(int x, int y):fNumber(x), sNumber(y){}
//	int add() {
//		return fNumber + sNumber;
//	}
//	int sub() {
//		return fNumber - sNumber;
//	}
//	int div() {
//		return fNumber / sNumber;
//	}
//	int malt() {
//		return fNumber * sNumber;
//	}
//};
//class Addition {
//public:
//	int add(int x, int y);
//	float add(float x, float y);
//	string add(string s1, string s2);
//};
//
//int Addition::add(int x, int y) {
//	return x + y;
//}
//float Addition::add(float x, float y) {
//	return x + y;
//}
//string Addition::add(string s1, string s2) {
//	return s1 + s2;
//}
//class Calc {
//public:
//	static int add(int x, int y) {
//		return x + y;
//	}
//	static int sub(int x, int y) {
//		return x - y;
//	}
//	static int div(int x, int y) {
//		return x / y;
//	}
//	static int malt(int x, int y) {
//		return x * y;
//	}
//};
//class Car_ {
//private:
//	static int counter;
//	string maker;
//public:
//	Car_(string maker) {
//		this->maker = maker;
//		this->counter++;
//	}
//	int getCounter() {
//		return this->counter;
//	}
//};
//int Car_::counter = 0;
//
//class COUNTER {
//	int counter = 0;
//public:
//	void operator++ () {
//		counter++;
//	}
//	int getCounter() {
//		return counter;
//	}
//};
//class Number {
//private:
//	int num;
//public:
//	Number(int n): num(n) {}
//	Number operator+ (Number number) {
//		return Number(number.num + this->num);
//	}
//	int getNumber() {
//		return num;
//	}
//};
//int main(int argc, char* argv[]) {
	//Number num1(10), num2(20);
	//Number num3 = num1 + num2;
	//cout << num3.getNumber() << endl;
	//COUNTER count;
	//++count;
	//cout << count.getCounter() << endl;
	//Car_ car1("BM");
	//Car_ car2("MG");
	//cout << car1.getCounter() << endl;
	/*Student std1("Ali", 12);
	std1.show();*/
	//Calculator_ calc(3, 3);
	//cout << calc.add() << endl;
	//cout << calc.sub() << endl;
	//cout << calc.div() << endl;
	//cout << calc.malt() << endl;
	//Addition sum;
	//cout << sum.add(3, 3) << endl;
	//cout << sum.add(3.3f, 3.3f) << endl;
	//cout << sum.add("Hello ", "World") << endl;
	//cout << Calc::add(4, 4) << endl;
	//return 0;
//};

//class Person {
//protected:
//	string name;
//	int age;
//public:
//	Person(string s_name, int s_age) {
//		name = s_name;
//		age = s_age;
//	}
//	void setName(string new_name) {
//		this->name = new_name;
//	}
//	void setAge(int new_age) {
//		this->age = new_age;
//	}
//	string getName() {
//		return this->name;
//	}
//	int getAge() {
//		return this->age;
//	}
//	void showInfo() {
//		cout << "[+]Your Name: " << this->name << endl;
//		cout << "[+]Your Age: " << this->age << endl;
//	}
//};
//
//class Student : public Person {
//private:
//	float GPA;
//	int level;
//	string idStudent;
//public:
//	Student(string s_name, int s_age, float gpa, int level, string id_std) : Person(s_name, s_age) {
//		this->GPA = gpa;
//		this->level = level;
//		this->idStudent = id_std;
//	}
//	void showInfo() {
//		Person::showInfo();
//		cout << "[+]Your GPA: " << this->GPA << endl;
//		cout << "[+]Your Level: " << this->level << endl;
//		cout << "[+]Id Student: " << this->idStudent << endl;
//	}
//};
//class Shape {
//protected:
//	string color;
//public:
//	Shape(string c) {
//		this->color = c;
//	}
//	virtual int area() = 0;
//	virtual void display() final {
//		cout << "!!CLASS INFORMATION!!" << endl;
//	}
//};
//class Rectangle: public Shape {
//	int length;
//	int width;
//public:
//	Rectangle(int len, int wid, string color) : Shape(color) {
//		length = len;
//		width = wid;
//	}
//	int area() {
//		return length * width;
//	}
//};
//int main(int argc, char** argv) {
//	//Student std1("Abdulaziz", 12, 3.1, 2, "RAD204958");
//	//std1.showInfo();
//	Rectangle rect1(5, 19, "Blue");
//	cout << rect1.area() << endl;
//	rect1.display();
//	return 0;
//}


//int main(int argc, char** argv) {
//	int fNumber = 12, sNumber = 0;
//	try {
//		if (sNumber == 0) {
//			//throw "Fuck!";
//			//throw int(4); // throw 4 
//			throw exception("Fuck!"); // exception(message)
//		}
//		else {
//			cout << fNumber / sNumber << endl;
//		}
//		
//	}
//	catch (const char* e) {
//		cout << e << endl;
//	}
//	catch (int e) {
//		cout << e << endl;
//	}
//	catch (exception e) {
//		cout << e.what() << endl;
//	}
//	catch (...) {
//		cout << "Unkown Error" << endl;
//	}
//	return 0;
//}
//int main(int argc, char** argv) {
//	ofstream file;
//	file.open("C:\\Users\\Dell\\Desktop\\data.txt");
//	if (file.good()) {
//		file << "Ali" << endl;
//		file << "Ahmed" << endl; 
//		file << "Fahad" << endl;
//		file << "Faisal" << endl;
//		file << "Osama" << endl;
//	}
//	file.close();
//	ifstream file;
//	string names[5];
//	file.open("C:\\Users\\Dell\\Desktop\\data.txt");
//	if (file.is_open()) {
//		for (int i = 0; i < 5; i++) {
//			file >> names[i];
//		}
//	}
//	for (int i = 0; i < 5; i++) {
//		cout << "[" << i + 1 << "]" << names[i] << endl;
//	}
//	file.close();
//	return 0;
//}

//template<class T1, class T2>
//T1 sum(T1 x, T2 y) {
//	return x + y;
//}
//template <class t>
//class Add {
//private:
//	t fNumber;
//	t sNumber;
//public:
//	Add(t f, t s) : fNumber(f), sNumber(s) {
//	}
//	t sum() {
//		return this->fNumber + this->sNumber;
//	}
//};
//int main(int argc, char** argv) {
//	//printf("The Sum Is: %.2f", sum<float, int>(4.4, 3));
//	Add<int> addition(3, 10);
//	cout << "The Sum Is: " << addition.sum();
//	return 0;
//}
//auto add = [](int x, int y) -> int {
//	return x + y;
//};
//auto msg = [] {
//	cout << "Hello World\n";
//};
//int main(int argc, char** argv) {
//	msg();
//	cout << add(4, 4) << endl;
//	return 0;
//}
//int add(int x, int y) {
//	return x + y;
//}
//namespace func {
//	int add(int x, int y) {
//		return x + y;
//	}
//}
//int main(int argc, char** argv) {
//	cout << func::add(4, 4) << endl;
//	return 0;
//}
//typedef long long LOING;
//typedef unsigned int UNSIGNED_INT;
//int main(int argc, char** argv) {
	//UNSIGNED_INT x = 100, y = 100;
	//cout << x << endl << &y << endl;
	//decltype(y) c{ 20 };
	//cout << typeid(c).name() << endl;
	//cout << sizeof(int) << endl << sizeof(LOING);
	//int numbers[] = { 1, 2, 3, 4, 5, 6 };
	//cout << sizeof(numbers) / sizeof(numbers[0]) << endl;
	//int* ptr = (int*)malloc(3 * sizeof(int));
//	int* ptr = (int*)calloc(3, sizeof(int));
//	*(ptr) = 1;
//	*(ptr + 1) = 2;
//	*(ptr + 2) = 3;
//	for (int i = 0; i < 3; i++) {
//		cout << *(ptr + i) << endl;
//	}
//	free(ptr);
//	return 0;
//}