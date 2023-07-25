#include "PersonType.h"

void PersonType::setFirstName(std::string firstname) {
	this->firstname = firstname;
};
void PersonType::setLastName(std::string lastname) {
	this->lastname = lastname;
};
void PersonType::setPet(PetType* pet) {
	this->pet = pet;
};
std::string PersonType::getFirstName() const {
	return firstname;
};
std::string PersonType::getLastName() const {
	return lastname;
};
PetType* PersonType::getPet() const {
	return pet;
};
PersonType PersonType::getShallowCopy() const {
	return *this;
};
PersonType PersonType::getDeepCopy() const {
	PersonType deep;
	deep.setFirstName(this->firstname);
	deep.setLastName(this->lastname);
	deep.setPet(this->pet);
	return deep;
};