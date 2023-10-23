#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void readfile(int s, string filename)
{
	ifstream input(filename);
	string line;
	while (getline(input, line, '\n')) {
		cout << line<<"\n";
	}
}

void printmatrix()
{
	
}

int main() 
{
	cout << "Enter the name of the file.\n";
	string filename;
	cin >> filename;
	ifstream input(filename);
	string line;
	getline(input, line, '\n');
	string getsize = line;
	const int size = stoi(getsize);
	readfile(size, filename);
	return 0;
}

