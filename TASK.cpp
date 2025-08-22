#include"Tasky.h"
void Task::setas(string t) {
	mytask = t;
}
void Task::addpioraty(string task) {
	pioratytask = task;
}
string Task::getpioraty() {
	cout << "this is your important task:\n";
	return pioratytask;

}
string Task::gettas() {
	cout << "ur normal task is:\n";
	return mytask;
}

void Task::display() {
	char choice;
	string piortaytask, task;
	cout << "welcome to task app:\n1.add task.\n 2.display the tasks\n ";
}	
	/*do {
 cin >> choice;
 Task j;
		if (choice == 1) {
			
			cout << "what type is your task:\n1.pioraty \n2.less piorate\n";
			char choi;
			cin >> choi;
			if (choi == 1) {
				cin >> pioratytask;
				j.addpioraty(piortaytask);
			}
			else if (choi == 2) {
				cin >> task;
				j.setas(task);
			}
			else cout << "error\n";
		}

		if (choice == 2) {
			cout << j.getpioraty() << j.gettas();
		}
	} while (choice != 0);*/

