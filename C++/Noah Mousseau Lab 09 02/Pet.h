#pragma once
#include <string>

class PetType {
private:
	std::string name;
	std::string kind;
public:
	void setName(std::string name);
	void setKind(std::string kind);
	std::string getName() const;
	std::string getKind() const;
};