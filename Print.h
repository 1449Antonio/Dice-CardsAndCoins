#ifndef PRINT_H
#define PRINT_H

#include <string>
#include <vector>

/*Function overloading occurs here. The one with the vector is for the dice, while the one with the string is for the
coin. The two ints are strictly for the coin*/
class Print {
public:
	void PrintCounts(string result);
	void PrintHist(string result);
	void PrintHist(vector<int> roll);
private:
	int heads = 0;
	int tails = 0;
};

#endif

