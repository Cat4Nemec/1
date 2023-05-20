#include "LogElement.h"

LogicalElement::LogicalElement() : Value(false) {}

//logelement.h
#ifndef LOG_ELEMENT_H
#define LOG_ELEMENT_H

class LogicalElement {
public:
	bool Value;
	LogicalElement();
};

#endif
