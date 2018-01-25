#include <iostream>
#include <string>
#include <getopt.h>
#include <assert.h>
using namespace std;

string xyToOutput(int x, int y, bool plusFlag) {
	string s = "";
	for (int i = 1; i < x + 1; i++) {
		for (int j = 1; j < y + 1; j++) {
			int i_j = i * j;
			if (plusFlag) {
				i_j = i + j;
			}
			s += std::to_string(i_j);
			if (i != y) {
				s += " ";
			}
		}
		if (i != x) {
			s += "\n";
		}
	}
	return s;
}

int main(int argc, char *argv[]) {
	bool plusFlag = false;
	int c;
	while ((c = getopt(argc, argv, "pt:")) != -1)
		switch(c) {
			case 'p': {
				plusFlag = true;
				break;
			}
			case 't': {//for test
				string s = xyToOutput(1, 1, false);
				assert(s == "1");
				s = xyToOutput(1, 1, true);
				assert(s == "2");
				break;
			}
			default: 
				break;
		}
	
	if (argc < 2) {
		cout << "no enough arguments" << endl;
		return 0;
	}
	int x = std::stoi(argv[argc - 2]);
	int y = std::stoi(argv[argc - 1]);
	string s = xyToOutput(x, y, plusFlag);
	cout << s << endl;
	return 0;
}
