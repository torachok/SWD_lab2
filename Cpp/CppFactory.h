#ifndef CPPFACTORY_H
#define CPPFACTORY_H

#include <AbstractFactory.h>
#include "ClassUnit.h"
#include "MethodUnit.h"
#include "PrintOperatorUnit.h"

class CppFactory : public AbstractFactory
{
public:
    std::shared_ptr<AbstractClass> createClass(const std::string &name);
    std::shared_ptr<AbstractMethod> createMethod(const std::string &name, const std::string &returnType, unsigned int flags);
    std::shared_ptr<AbstractPrintOperator> createPrintOperator(const std::string &text);
};

#endif // CPPFACTORY_H
