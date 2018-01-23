#include <iostream>
#include <string>
#include <getopt.h>
using namespace std;

int main(int argc, char *argv[]) {
	bool plusFlag = false;
	int c;
	while ((c = getopt(argc, argv, "p:")) != -1)
		switch(c) {
			case 'p':
				plusFlag = true;
				break;
			default:
				abort ();
			break;
		}
	
	if (argc < 2) {
		cout << "no enough arguments" << endl;
		return 0;
	}
	int x = stoi(argv[argc - 2]);
	int y = stoi(argv[argc - 1]);
	for (int i = 1; i < x + 1; i++) {
		string s = "";
		for (int j = 1; j < y + 1; j++) {
			int i_j = i * j;
			if (plusFlag) {
				i_j = i + j;
			}
			s += to_string(i_j);
			s += " ";
		}
		cout << s << endl;
	}
	return 0;
}
