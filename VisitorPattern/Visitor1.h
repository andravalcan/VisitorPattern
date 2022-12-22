#ifndef VISITOR1_H
#define VISITOR1_H

//#include "ComponentA.h"
#include  "Visitor.h"
#include <iostream>

class Visitor1 : public Visitor
{
public:
	virtual void VisitComponentA(const ComponentA* comp) const {
		std::cout << "compA\n";
	}
	virtual void VisitComponentB(const ComponentB* comp) const {
		std::cout << "compB\n";
	}
	virtual void VisitComponentC(const ComponentC* comp) const {
		std::cout << "compC\n";
	}
};

#endif
