
#ifndef COMPONENT
#define COMPONENT
#include "Visitor.h"
#include <iostream>

class Component // Element
{
public:

	virtual ~Component() {}
	virtual void Accept(Visitor* visitor)  const = 0;
};


#endif // !COMPONENT


