#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream out;
	out.open("ccc.txt");
	out << "dit me m dat";
	out.close();
	return 0;
}