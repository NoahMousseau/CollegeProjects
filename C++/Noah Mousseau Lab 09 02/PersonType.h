#pragma once
#include "Pet.h"

class PersonType {
private:
	std::string firstname;
	std::string lastname;
	PetType* pet;
public:
	void setFirstName(std::string firstname);
	void setLastName(std::string lastname);
	void setPet(PetType* pet);
	std::string getFirstName() const;
	std::string getLastName() const;
	PetType* getPet() const;
	PersonType getShallowCopy() const;
	PersonType getDeepCopy() const;
};