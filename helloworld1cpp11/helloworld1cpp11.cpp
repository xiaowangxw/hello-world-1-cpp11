// helloworld1cpp11.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	map<string, string> namedStrList{
		{ "begStr", "*** Program startting ***" },
		{ "dividingStr", "==============================" },
		{ "endStr", "*** The end. press enter to exit. ***" },
		{ "helloStr", "Hello, World! Written in CPP11." }
	};

	cout << namedStrList["begStr"] << endl;
	cout << namedStrList["dividingStr"] << endl;
	cout << namedStrList["helloStr"] << endl;
	cout << namedStrList["dividingStr"] << endl;
	cout << namedStrList["endStr"] << endl;

	cin.clear();
	while (cin.rdbuf()->in_avail()) getline(cin, namedStrList["helloStr"]);
	getline(cin, namedStrList["helloStr"]);
	return 0;
}

