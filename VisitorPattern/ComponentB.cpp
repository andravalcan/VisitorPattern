#include "ComponentB.h"

ComponentB::ComponentB()
{
}

void ComponentB::Accept(Visitor* visitor) const
{
	visitor->VisitComponentB(this);
}

std::string ComponentB::ComponentBFunc() const
{
	return "ComponentB";
}