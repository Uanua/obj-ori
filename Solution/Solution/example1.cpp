#include<stdio.h>
#include<iomanip>
#include<iostream>
#include<string>
using namespace std;
class Person
{
public:
	void eat(char obj[]) {};
	void sleep(void) {};

	char name[20];
	bool sex;
	int age;
	float height;
	float weight;
};
Person p1;
void main()
{
	strncpy_s(p1.name, "张三", sizeof(p1.name));
	p1.sex = 1;
	p1.age = 18;
	p1.height = 180.5;
	p1.weight = 65.3;

	Person p2;
	strncpy_s(p2.name, "李四", sizeof(p2.name));
	p2.sex = 0;
	p2.age = 16;
	p2.height = 165;
	p2.weight = 46.5;
}