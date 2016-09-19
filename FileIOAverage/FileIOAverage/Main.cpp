#include <iostream>
#include <fstream>
using namespace std;

/*
Given a text file containg student ages:
1. Determine how many ages are in the file
2. Determine the average age
3. File location: w:\COFFMAN\ages.txt
*/



int main()
{
	ifstream inputFile;
	ofstream outputFile;
	int iAges;
	int iCounter = 0;
	double dSum = 0, dAverageAge;

	inputFile.open("ages.txt");

	//check to see if the file is open
	//if it isn't, terminate the program
	if (!inputFile.is_open())
	{
		//display error message close program
		cout << "Problem opening program" << endl;

		return 0;
	}

	while (!inputFile.eof())
	{
		//reading whats in ages.txt
		inputFile >> iAges;

		//accumulate to find average
		dSum = dSum + iAges;

		iCounter++; //count each age
	}
	
	//close the file
	inputFile.close();

	//display amout of ages
	cout << "The number of ages is: " << iCounter << endl;
	
	//finish the average
	dAverageAge = dSum / iCounter;

	//display average
	cout << "The average age is: " << dAverageAge << endl;

	return 0;
}