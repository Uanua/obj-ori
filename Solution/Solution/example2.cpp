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
		cout << "��֪����ô�����˵����ԣ��������Ѿ�����ˣ�" << endl;
	}
	void print()
	{
		cout << "����һ���ˣ��ҵ�����ֵΪ:" << name << "," << sex << "," << age << "," << height << "," << weight << endl;
	}

	void eat(const char obj[])
	{
		cout << "����" << name << ","<<"�����һ�û��ѧ����ô��" << obj << endl;
	}
	void sleep(void)
	{
		cout << "����" << name << "," << "�һ�˯�����ǲ�֪������ô˯��" << endl;
	}
};
Person p1;
void main()
{
	p1.setValue("����", 1, 18, 180.5, 65.3);
	p1.eat("����");
	p1.sleep();
	p1.print();

	cout << endl;
	Person p2;
	p2.setValue("����", 0, 16, 165, 46.5);
	p2.print();
}
