#pragma once
#include<iostream>
#include<string>
using namespace std;
class Task
{
private:
	string mytask;
	string pioratytask;
public:
	void setas(string t);
	string gettas();
	void display();
	void addpioraty(string task);
	string getpioraty();

};

