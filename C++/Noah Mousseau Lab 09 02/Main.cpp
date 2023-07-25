#include "PersonType.h"
#include "iostream"
#include "iomanip"

using namespace std;

int main() {
	PersonType TR;
	TR.setFirstName("Tom");
	TR.setLastName("Riddle");
	PetType* AD = new PetType;
	AD->setName("Ace");
	AD->setKind("dog");
	TR.setPet(AD);
	cout << "Shallow and deep copy!\n";
	cout << "------------------------\n";

	cout << "Original: " << TR.getFirstName() << " " << TR.getLastName() << setw(9);
	cout << "Pet: " << AD->getName() << " " << AD->getKind() << endl;

	PersonType HP = TR.getShallowCopy();
	PetType* AD2 = HP.getPet();
	HP.setFirstName("Harry");
	HP.setLastName("Potter");
	cout << "Shallow: " << HP.getFirstName() << " " << HP.getLastName() << setw(8);
	cout << "Pet: " << AD2->getName() << " " << AD2->getKind() << endl;

	PersonType HG = TR.getDeepCopy();
	PetType* KC = HG.getPet();
	HG.setFirstName("Hermione");
	HG.setLastName("Granger");
	KC->setName("Katrina");
	KC->setKind("cat");
	cout << "Deep: " << HG.getFirstName() << " " << HG.getLastName() << setw(7);
	cout << "Pet: " << KC->getName() << " " << KC->getKind() << endl;
}