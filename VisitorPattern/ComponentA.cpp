#include "ComponentA.h"



ComponentA::ComponentA()
{
}

void ComponentA::Accept(Visitor* visitor) const
{
	visitor->VisitComponentA(this);
}

std::string ComponentA::ComponentAFunc() const
{
	return "ComponentA";
}