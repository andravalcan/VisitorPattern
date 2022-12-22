#ifndef COMPONENT_B_H
#define COMPONENT_B_H
#include "Component.h"
#include "Visitor.h"
#include <iostream>
#include <string>
class ComponentB : public Component
{
public:
	ComponentB();
	void Accept(Visitor* comp) const override;
	std::string ComponentBFunc() const;
};

#endif