#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //Initializes vectors for use of removing cards, and empty hand
    vector<string> suit = { "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A" };
    vector<string> hand;
    vector<int> keys = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10, 11 };
    vector<int> appendedKeys1;
    vector<int> appendedKeys2;
    vector<string> appendedSuit1;
    vector<string> appendedSuit2;
    //Seed random value generator
    srand(time(0));
    //Adds 1st card to hand
    int randNum = (rand() % 13);
    hand.push_back(suit[randNum]);
    int handVal1 = keys[randNum];
    //Creates 1st new vectors while ignoring 1st card
    for (int i = 0; i < suit.size(); i++) {
        if (keys[i] != handVal1) {
            appendedSuit1.push_back(suit[i]);
        }
    }
    for (int i = 0; i < keys.size(); i++) {
        if (keys[i] != handVal1) {
            appendedKeys1.push_back(keys[i]);
        }
    }
    //Adds 2nd card to hand
    randNum = (rand() % 12);
    hand.push_back(suit[randNum]);
    int handVal2 = keys[randNum];
    //Creates 2nd new vectors while ignoring 2nd card
    for (int i = 0; i < appendedSuit1.size(); i++) {
        if (appendedKeys1[i] != handVal2) {
            appendedSuit2.push_back(appendedSuit1[i]);
        }
    }
    for (int i = 0; i < appendedKeys1.size(); i++) {
        if (appendedKeys1[i] != handVal2) {
            appendedKeys2.push_back(appendedKeys1[i]);
        }
    }
    //Tests hand value
    bool recommendedAction;
    int cardToDraw = 21 - (handVal1 + handVal2);
    cout << "Current hand: " << hand[0] << " " << hand[1] << endl;
    cout << "Want to get a draw for cards that equal or total: " << cardToDraw << endl;
    double chance = cardToDraw / 21.00;
    int totalValue = handVal1 + handVal2;
    cout << "Total value of hand: " << totalValue << endl;
    if (chance > 0.5) {
        recommendedAction = true;
    }
    else if (chance <= 0.5) {
        recommendedAction = false;
    }
    //Outputs computer recommendation
    cout << "Compute recommends to draw new card: ";
    if (recommendedAction == true) {
        cout << "true\n";
    }
    else {
        cout << "false\n";
    }
    //For drawing new card
    int drawCardInstruction;
    cout << "Type 0 for no draw, type 1 for new draw: ";
    cin >> drawCardInstruction;
    if (drawCardInstruction == 1) {
        randNum = (rand() % 11);
        int handVal3 = appendedKeys2[randNum];
        hand.push_back(appendedSuit2[randNum]);
        cout << "New hand: " << hand[0] << " " << hand[1] << " " << hand[2] << endl;
    }
}