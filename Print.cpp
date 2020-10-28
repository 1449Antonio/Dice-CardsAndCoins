#include <iostream>
#include <iomanip>
using namespace std;

#include "Print.h"
#include <vector>
#include <cmath>

/*Here, PrintCounts determines how many 'H''s and 'T's were in the string that was passed from main, and therefore
increments as necessary. It then proceeds to print the amount of each. */
void Print::PrintCounts(string result)
{
	int i;

	for (i = 0; i < result.size(); i++)
	{
		if (result.at(i) == 'H')
			heads++;
		else
			tails++;
	}

	cout << "Coin Flip Frequency" << endl;
	cout << "Heads: " << heads << endl;
	cout << "Tails: " << tails << endl;
}

void Print::PrintHist(string result)
{
	int i;
	double maxFrequency;

	cout << fixed << setprecision(2);

	// maxFrequency represents the scale for each '*' in the histogram 
	if (heads > tails)
	{
		maxFrequency = (1.0 * heads) / 60;
	}
	else
		maxFrequency = (1.0 * tails) / 60;

	cout << "Coin Flip Histogram" << endl;
	cout << "Scale: * = " << maxFrequency << endl;

	/* maxFrequency and the round function is then used to determine the total amount of *'s for each value of heads and
	tails, before printing them out, forming a histogram */
	cout << "Heads: ";
	for (i = 0; i < round(heads / maxFrequency); i++)
		cout << "*";

	cout << endl;

	cout << "Tails: ";
	for (i = 0; i < round(tails / maxFrequency); i++)
		cout << "*";

	cout << endl;
}


void Print::PrintHist(vector<int> roll)
{
	int i, max = roll.at(0);
	double maxFrequency;

	cout << fixed << setprecision(2);

	/* Unlike the print histogram function for the coins, this one needs to check each index of the roll vector to
	determine the max.. The scale is then determined the same way as the other histogram function*/
	for (i = 0; i < roll.size(); i++)
	{
		if (max < roll.at(i))
			max = roll.at(i);
	}
	maxFrequency = (1.0 * max) / 60;

	cout << "Scale: * = " << maxFrequency << endl;

	/* The following three if statements act exactly the same. However, since a total of three histograms need to be made,
	there needed to be three statements since each respective for loop would need to end after different times. Any index
	being printed that is less than ten must first have a space, in order to align with indexes >= 10. */
	if (roll.size() == 7)
	{
		for (i = 1; i < 7; i++)
		{
			cout << " " << i << ": ";
			for (int j = 0; j < round(roll.at(i) / maxFrequency); j++)
				cout << "*";
			cout << endl;
		}
	}

	if (roll.size() == 13)
	{
		for (i = 1; i < 13; i++)
		{
			if (i < 10)
				cout << " ";
			cout << i << ": ";
			for (int j = 0; j < round(roll.at(i) / maxFrequency); j++)
				cout << "*";
			cout << endl;
		}
	}

	if (roll.size() == 37)
	{
		for (i = 1; i < 37; i++)
		{
			if (i < 10)
				cout << " ";
			cout << i << ": ";
			for (int j = 0; j < round(roll.at(i) / maxFrequency); j++)
				cout << "*";
			cout << endl;
		}
	}

}