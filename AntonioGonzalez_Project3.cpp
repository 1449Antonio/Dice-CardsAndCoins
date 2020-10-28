// AntonioGonzalez_Project3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "aCoin.h"
#include "Print.h"
#include "aDie.h"
#include "aDeckOfCards.h"
#include "GameBase.h"
#include <string>
#include <vector>
using namespace std;


int main()
{
    GameBase base;
    int seed;
    cout << "Before we begin, what would you like to be the seed value?" << endl;
    cin >> seed;

    base.SetSeed(seed);

    cout << "The following is the dice roll game" << endl;
    int num, i;
    /*Here, three dices were created, D, d1 and d2, that will be used in subsequent operations. Each one has a
    constructor with a seed parameter. */
    aDie D;
    aDie d1;
    aDie d2;
    cout << "How many times would you like to roll the dice?" << endl;
    cin >> num;

    /*A die contains 6 sides, the highest sum would be 12, and the highest product would be 36. However, because a
    vector starts at index 0, the size needed to be one more than 6, 12 and 36 respectively, in order to accurately
    represent the values (and therefore, index 0 will never be used).*/
    vector<int>die(7, 0);
    vector<int>sumOfDice(13, 0);
    vector<int>productOfDice(37, 0);


    /* int rolled = D calls a specific conversion function in the aDie class that was created. The same thing is done with
        rolled = d1 + d2 and rolled = d1 * d2. Whatever value is obtained by these operations, all randomly, would then
        cause the respective index in the vector(s) to be incremented. */
    for (i = 0; i < num; i++)
    {
        int rolled = D;
        die.at(rolled) = die.at(rolled) + 1;

        rolled = d1 + d2;
        sumOfDice.at(rolled) = sumOfDice.at(rolled) + 1;

        rolled = d1 * d2;
        productOfDice.at(rolled) = productOfDice.at(rolled) + 1;
    }

    /*In the following, a print object was created. This print object's purpose is to print the histograms for the dice,
    and the frequency chart and histograms for the coin. A print object was made in order to minimize the amount of
    code in the main file, as well as the aDie files and aCoin files*/
    Print print;

    cout << "Histogram for one die: " << endl;
    print.PrintHist(die);
    cout << endl << endl;

    cout << "Histogram for sum of die: " << endl;
    print.PrintHist(sumOfDice);
    cout << endl << endl;

    cout << "Histogram for product of die: " << endl;
    print.PrintHist(productOfDice);
    cout << endl << endl;


    /* The seed that was determined in the beginning is used throughout. A aCoin object, for a coin, was created with a
    seed parameter. */
    cout << "The following is the coin flip game, using the same number of rolls" << endl;
    aCoin coin;


    string results = "";

    /*Like the conversion operator with the dice game, a similar conversion operator occurs here. The values that are
      returned to z are then added to results, which will be used later*/
    for (i = 0; i < num; i++)
    {
        string z = coin;
        results += z;
    }



    print.PrintCounts(results);
    cout << endl;
    print.PrintHist(results);

    cout << endl << endl;


    cout << "The following is the deck of cards game" << endl;

    /* Here, the seed was once again used as a parameter for the aDeckOfCards constructor. A conversion operator is once
    more called, this time converting between two classes. */
    aDeckOfCards deck;
    aCard c = deck;
    cout << "A random card from the deck: " << endl;
    cout << c.GetCard() << endl << endl;

    /* This game is supposed to simulate 5 hands of 5 cards. Therefore, 5 separate vectors needed to be created that calls
    the function draw in the aDeckOfCards class, passing 5 as a parameter.*/
    vector<aCard>hand = deck.draw(5);
    vector<aCard>hand2 = deck.draw(5);
    vector<aCard>hand3 = deck.draw(5);
    vector<aCard>hand4 = deck.draw(5);
    vector<aCard>hand5 = deck.draw(5);

    /*The following's sole purpose is to call the GetCard function in order to print all the cards of each individual hand
    that was drawn*/
    cout << "First hand" << endl;
    for (i = 0; i < hand.size(); i++)
        cout << hand.at(i).GetCard() << endl;

    cout << endl << "Second hand" << endl;
    for (i = 0; i < hand.size(); i++)
        cout << hand2.at(i).GetCard() << endl;

    cout << endl << "Third hand" << endl;
    for (i = 0; i < hand.size(); i++)
        cout << hand3.at(i).GetCard() << endl;

    cout << endl << "Fourth hand" << endl;
    for (i = 0; i < hand.size(); i++)
        cout << hand4.at(i).GetCard() << endl;

    cout << endl << "Fifth hand" << endl;
    for (i = 0; i < hand.size(); i++)
        cout << hand5.at(i).GetCard() << endl;

    cout << endl;

    cout << endl;

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file