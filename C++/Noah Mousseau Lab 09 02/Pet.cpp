#include "Pet.h"

void PetType::setName(std::string name) {
	this->name = name;
};
void PetType::setKind(std::string kind) {
	this->kind = kind;
};
std::string PetType::getName() const {
	return name;
};
std::string PetType::getKind() const {
	return kind;
};