
#ifndef VISITOR_H
#define VISITOR_H
#include "ComponentB.h"
#include "ComponentC.h"
#include "ComponentA.h"

class Visitor {
public:
	virtual void VisitComponentA(const ComponentA* comp) const = 0;
	virtual void VisitComponentB(const ComponentB* comp) const = 0;
	virtual void VisitComponentC(const ComponentC* comp) const = 0;
};

#endif // !VISITOR_T



