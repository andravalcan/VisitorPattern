#ifndef COMPONENT_C_H
#define COMPONENT_C_H
#include <iostream>
#include <string>
#include "Component.h"
#include "Visitor.h"
class ComponentC : public Component
{
public:
	ComponentC();
	void Accept(Visitor* comp)  const override;
	std::string ComponentCFunc() const;
};

#endif
