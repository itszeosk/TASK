#include "Tasky.h"
int main() {
	
	Task r;
	string l,k,u;
	
	char choice;
	r.display();
	do {
		cin >> choice;
		Task j;
		
		if (choice == '1') {

			cout << "what type is your task:\n1.pioraty \n2.less piorate\n";
			char choi;
			string pioratytask , task;
			cin >> choi;
			for(int i=0;i<2;i++){
			if (choi == '1') {
				cin >> pioratytask;
				j.addpioraty(pioratytask);
			}
			else if (choi == '2') {
				cin >> task;
				j.setas(task);
			}
			else cout << "error\n";
		}}

		if (choice == '2') {
			cout << j.getpioraty() << j.gettas();
		}
	} while (choice != '0');


	return 0;
}