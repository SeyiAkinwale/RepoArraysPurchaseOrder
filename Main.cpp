//Author: Seyi Akinwale
//Purpose: Store information in database of purchase orders for plastics
//Nov 22, 2022 

#include <iostream>
#include <string>
using namespace std;

//Prototype section: 3 functions
//void getVals(int[], int, int&); //get 2 to 5 values from user

//find the min, max and average from the user
//void processVals(int[], int, int&, int&, double&);

//output the original values, min, max and average
//void showVals(int[], int, int&, int&, double&);

void initializeNamesArray(string[], int);
void initializePoundPrices(int[], int);
//Main function: Tells user directions,
//Calls the 3 program functions
//Then allows user to repeat program
int main() {

	//Introduction and Directions for user:
	cout << "***************************************************************\n";
	//cout << "*Use this applet to compare scores to the average score     *\n";
	//cout << "*You will start by entering the number of contestants.      *\n";
	//cout << "*Then you will enter each contestant's score as an integer. *\n";
	//cout << "*************************************************************\n";

	//char repeatProgram;//user choice to run the program again
	const int MAX_COUNT = 6; //maximum possible values for the array
	string nameOfPlastic[MAX_COUNT];
	initializeNamesArray(nameOfPlastic, MAX_COUNT);


	int priceRateOfPlastic[MAX_COUNT];  //cents to dollars
	initializePoundPrices(priceRateOfPlastic, MAX_COUNT);

	double weightOfPlastic[MAX_COUNT]; 
	double costOfPlastic[MAX_COUNT];

	//do
	//{
	//	int numOfEntries = 0;
	//	int arrayOfEntries[maxCount];

	//	getVals(arrayOfEntries, maxCount, numOfEntries);
	//	cout << endl << "numOfEntries" << numOfEntries << endl;
	//	int highestVal = 0; //highest entry from user
	//	int lowestVal = 0; //lowest entry from user
	//	double average = 0; //average of user entries

	//	processVals(arrayOfEntries, numOfEntries, highestVal, lowestVal, average);
	//	showVals(arrayOfEntries, numOfEntries, highestVal, lowestVal, average);

	//	cout << "Would you like to do it again? Y/N: ";
	//	cin >> repeatProgram;
	//	cout << endl << repeatProgram << endl;
	//} while ((repeatProgram == 'Y') || (repeatProgram == 'y'));

	for (int i = 0; i < MAX_COUNT; i++)
	{
		cout << endl << nameOfPlastic[i];
	}


	for (int i = 0; i < MAX_COUNT; i++)
	{
		cout << endl << priceRateOfPlastic[i];
	}
	return 0;
}

void initializeNamesArray(string namesArray[], int maxCount)
{
	namesArray[0] = "PET beverage bottles and jars";
	namesArray[1] = "Natural high-density polyethylene";
	namesArray[2] = "Color HDPE";
	namesArray[3] = "Grade A film";
	namesArray[4] = "Grade B film";
	namesArray[5] = "Grade C film";
}

void initializePoundPrices(int pricesArray[], int maxCount)
{
	pricesArray[0] = 8;
	pricesArray[1] = 34;
	pricesArray[2] = 4;
	pricesArray[3] = 8;
	pricesArray[4] = 5;
	pricesArray[5] = 2;
}

void getVals(int entryArray[], int arrayCapacity, int& currSize) {
	cout << "After you enter each number, press enter\n";
	cout << "When done, type in a letter\n";

	int currElement = 0; //Consider value of current element to be zero to start.
	int minEntries = 2; //User must enter at least twoValues
	bool userFinished = false; //At start, user has not finished entering values
	currSize = 0; //count of entries

	//loop gets 2 user values
	for (currSize; currSize < minEntries; currSize++) {

		cout << "Enter number " << (currSize + 1) << ": ";

		//reads in (ith+1) number to ith index
		cin >> currElement;

		entryArray[currSize] = currElement;
	}

}