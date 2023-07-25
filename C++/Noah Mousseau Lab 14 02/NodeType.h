#pragma once
#include "Student.h"

struct NodeType {
public:
	Student data;
	struct NodeType* next;
};