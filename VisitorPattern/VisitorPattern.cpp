// pereVisitor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <array>
#include "Component.h"
#include "ComponentA.h"
#include "ComponentB.h"
#include "ComponentC.h"
#include "Visitor.h"
#include "Visitor1.h"
int main()
{
    std::array<const Component*, 3> components = {
        new ComponentA, new ComponentB, new ComponentC
    };
    Visitor* v1 = new Visitor1;
    for (const Component* comp : components) {
        comp->Accept(v1);
    }
    for (const Component* comp : components) {
        delete comp;
    }
    delete v1;
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file