#include<stdio.h>
#include<iomanip>
#include<iostream>
#include<string>
using namespace std;
class Person
{
public:
	char name[20];
	bool sex;
	int age;
	float height;
	float weight;

	void setValue(const char nameV[], bool sexV, int ageV, float heightV, float weightV)
	{
		strncpy_s(name, nameV, sizeof(name));
		sex = sexV;
		age = ageV;
		height = heightV;
		weight = weightV;
		cout << "我知道怎么设置人的属性，并且我已经完成了！" << endl;
	}
	void print()
	{
		cout << "我是一个人，我的属性值为:" << name << "," << sex << "," << age << "," << height << "," << weight << endl;
	}

	void eat(const char obj[])
	{
		cout << "我是" << name << ","<<"但是我还没有学会怎么吃" << obj << endl;
	}
	void sleep(void)
	{
		cout << "我是" << name << "," << "我会睡觉但是不知道是怎么睡的" << endl;
	}
};
Person p1;
void main()
{
	p1.setValue("张三", 1, 18, 180.5, 65.3);
	p1.eat("西瓜");
	p1.sleep();
	p1.print();

	cout << endl;
	Person p2;
	p2.setValue("李四", 0, 16, 165, 46.5);
	p2.print();
}
