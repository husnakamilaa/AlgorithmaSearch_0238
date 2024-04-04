// AlgorithmaSearch_0238.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int arr[20]; //Array to be searched
int n; //Number of elements in the array
int i; //index of array element

void input()
{
	while (true)
	{
		cout << "Enter the number of elements in the array : ";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;
		else
			cout << "\nArray shoould have minimum 1 and maximum 20 elements.\n\n";
	}

	//Accept array elements
	cout << "\n------------------\n";
	cout << "Enter array elements \n";
	cout << "\n------------------\n";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}
}

void LinearSearch()
{
	char ch;
	int ctr; //Number of comparison
	int item;

	do
	{
		//Accept the number to be searched
		cout << "\nEnter the elemnt you want to search : "; //step 1
		cin >> item;

		ctr = 0;
		i = 0;
		while (i < n) //step 3
		{
			ctr++;
			if (arr[i] == item)
			{
				cout << "\n" << item << " found at position " << (i + 1) << endl; //step 6
				break;
			}
			i++; //step 4
		}
		if (i == n) //step 5
			cout << "\n" << item << " not found in the array\n";
		cout << "\nNumber of comparison : " << ctr << endl;

		cout << "\nContinue search (y/n) : ";
		cin >> ch;
	} while ((ch == 'y') || (ch == 'Y'));
}