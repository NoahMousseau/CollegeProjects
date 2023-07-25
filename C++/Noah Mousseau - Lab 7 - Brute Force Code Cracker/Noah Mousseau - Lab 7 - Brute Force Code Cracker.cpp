#include <iostream>

using namespace std;

void decoder(string n);

int main()
{
    decoder("Whvwlqj wkh Vbvwhp");
    decoder("Wkh qljkw lv orqj dqg zh doo suhwhqg wr vohhs");
    decoder("F xrfqq hnyd mfx gjjs inxhtajwji zsijw ymj gtbqnsl fqqjd");
    decoder("Yx Drebcnki dro vslbkbi gsvv lo exuxygklvo");
    decoder("Epht bsf opu bmmpxfe jo uif eph qbsl");
    decoder("Jrypbzr gb Avtug Inyr");
    decoder("ESPCP LCP YZE PYZFRS DPNCPED EZ DLETDQJ XP");
}

void decoder(string n) {
    int size = n.length();
    //For loop to cycle through every possible shift value
    for (int i = 1; i <= 26; i++) {
        //For loop to go through each char in input string
        for (int j = 0; j < size; j++) {
            if (n[j] == ' ') { //Checks for spaces
                cout << ' ';
            }
            else if (isupper(n[j])) {
                cout << char((n[j] + i - 65) % 26 + 65);
            }
            else {
                cout << char((n[j] + i - 97) % 26 + 97);
            }
        }
        cout << endl;
    }
};