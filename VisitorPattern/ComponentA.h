#ifndef COMPONENT_A_H
#define COMPONENT_A_H

#include "Visitor.h"
#include "Component.h"
#include <iostream>

class ComponentA : public Component
{
public:
	ComponentA();
	void Accept(Visitor* comp)  const override;
	std::string ComponentAFunc() const;
};



#endif // !COMPONENT_A_H


