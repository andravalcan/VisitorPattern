#include "ComponentC.h"

ComponentC::ComponentC()
{
}

void ComponentC::Accept(Visitor* visitor) const
{
	visitor->VisitComponentC(this);
}

std::string ComponentC::ComponentCFunc() const
{
	return "ComponentC";
}