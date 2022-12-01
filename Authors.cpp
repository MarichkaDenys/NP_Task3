#include "Authors.h"
#include <iostream>
#include <fstream>
using namespace std;

void Authors::ShowAuthorList()
{
	ifstream fin("books.txt");

	if (!fin.is_open())
		cout << "File not open.\n";
	else
	{
		
		int counter = 0;
		char trash[100];
		
		while (!fin.eof())
		{
			getline(fin, authorlist[counter], ' ');
			counter++;

			getline(fin, authorlist[counter], ' ');
			fin.getline(trash, 100, '\n');
			counter++;
		}
		fin.close();

	}
}

void Authors::WriteToConsoleAllAuthors()
{
	cout << "\nAll authors:\n";
	ShowAuthorList();
	int i = 0;
	while (!authorlist[i].empty())
	{
		cout << authorlist[i] << " ";
		i++;
	}
	cout << endl;
}