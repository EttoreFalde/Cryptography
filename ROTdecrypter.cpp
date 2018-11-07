// ROT Decrypter 

#include <iostream>
#include <string.h>

using namespace std;
int main(int argc, char *argv[]) {
	string stringa;
	int rot, i;
	
	int mod = 1;
	while (mod) {
		fpurge(stdin);
		cout << "Enter your string: ";
		getline(cin, stringa);	
		cout << "----------------------------" << endl;
		cout << "Enter your rot number: ";
		cin >> rot;
		cout << "\n----------------------------" << endl;
		cout << "----------------------------" << endl;
	
		
		/*
		 * ASCII: 
		 *
		 * 65 = 'A'
		 * 90 = 'Z'
		 * 97 = 'a'
		 * 122 = 'z'
		 * 91 = '['
		 * 123 = '{'
		 */
		
		
		i = 0;
		while (stringa[i] != '\0') {
			if (stringa[i] < 65 || (stringa[i] > 90 && stringa[i] < 97) || stringa[i] > 122) {
				i++;
				continue;
			} else if (stringa[i] >= 65 && stringa[i] <= 90) {
					if(stringa[i] +rot >90){
						int x = (stringa[i] + rot) - 91;
						stringa[i] = 65 + x;
						i++;
					} else {
						stringa[i] = stringa[i] + rot;
						i++;
					}
			} else if (stringa[i] >= 97 && stringa[i] <= 122) {
					if(stringa[i] +rot > 122){
						int x = (stringa[i] + rot) - 123;
						stringa[i] = 97 + x;
						i++;
					} else {
						stringa[i] = stringa[i] + rot;
						i++;
					}
			}
		}
	
		cout << stringa;
		cout << "---------------------" << endl;
		cout << "---------------------" << endl;
		cout << "---------------------" << endl;
		cout << "Do you want to continue with the program? (1 = Y; 0 = N): ";
		cin >> mod;
	}
}
