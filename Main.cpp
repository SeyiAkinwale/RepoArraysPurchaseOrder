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
void getVals(double[], int);
void showVals(string[], int[], double[], double[], int);

const int MAX_COUNT = 6; //maximum possible values for the array
const string BAD_INFO = "Value is too small. Enter a number that is greater than 0. ";
const string GOOD_INFO = "Thank you for entering the information correctly.\n";
//Main function: Tells user directions,
//Calls the 3 program functions
//Then allows user to repeat program
int main() 
{
	//Introduction and Directions for user:
	cout << "*******************************************************************\n";
	cout << "*Use this database to store a purchase order for Plastic products *\n";
	cout << "*Enter weight for each item to create a purcchase order.          *\n";
	cout << "*******************************************************************\n";

	//char repeatProgram;//user choice to run the program again

	string nameOfPlastic[MAX_COUNT];
	initializeNamesArray(nameOfPlastic, MAX_COUNT);

	int priceRateOfPlastic[MAX_COUNT];  //cents to dollars
	initializePoundPrices(priceRateOfPlastic, MAX_COUNT);

	double weightOfPlastic[MAX_COUNT]={1,1,1,1,1,1};
	getVals(weightOfPlastic, MAX_COUNT);

	double costOfPlastic[MAX_COUNT]={1,1,1,1,1,1};


	//	processVals(arrayOfEntries, numOfEntries, highestVal, lowestVal, average);
	showVals(nameOfPlastic, priceRateOfPlastic, weightOfPlastic, costOfPlastic, MAX_COUNT);
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

void getVals(double entryArray[], int arrayCapacity) 
{
	cout << "For the following no negative values allowed.\n";

	cout << "How many pounds of PET beverage bottles and jars?";
	do {
		cin >> entryArray[0];
		(entryArray[0] <= 0) ? (cout << BAD_INFO) : (cout << GOOD_INFO);
	} while (entryArray[0] <= 0);

	cout << endl << "How many pounds of Natural  high-density polyethylene?";
	do {
		cin >> entryArray[1];
		(entryArray[1] <= 0) ? (cout << BAD_INFO) : (cout << GOOD_INFO);
	} while (entryArray[1] <= 0);

	cout << endl << "How many pounds of Color HDPE?";
	do {
		cin >> entryArray[2];
		(entryArray[2] <= 0) ? (cout << BAD_INFO) : (cout << GOOD_INFO);
	} while (entryArray[2] <= 0);

	cout << endl << "How many pounds of Grade A film?";
	do {
		cin >> entryArray[3];
		(entryArray[3] <= 0) ? (cout << BAD_INFO) : (cout << GOOD_INFO);
	} while (entryArray[3] <= 0);

	cout << endl << "How many pounds of Grade B film?";
	do {
		cin >> entryArray[4];
		(entryArray[4] <= 0) ? (cout << BAD_INFO) : (cout << GOOD_INFO);
	} while (entryArray[4] <= 0);

	cout << endl << "How many pounds of Grade C film?";
	do {
		cin >> entryArray[5];
		(entryArray[5] <= 0) ? (cout << BAD_INFO) : (cout << GOOD_INFO);
	} while (entryArray[5] <= 0);
}

void showVals(string namesArray[], int pricesArray[], double entryArray[], double calculationResults[], int arraySize)
{
	cout << "------------------------------ PURCHASE ORDER -------------------------------------\n";
	cout << "            Material               Weight(Pounds)    Cost/Pound         Cost       \n";

	for (int i = 0; i < MAX_COUNT; i++)
	{
		cout << namesArray[i] << " " << entryArray[i]<<" "<<" " << pricesArray[i] <<" " << calculationResults[i] <<endl;
	}
	cout << "-----------------------------------------------------------------------------------\n";
}