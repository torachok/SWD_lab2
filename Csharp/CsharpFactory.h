#ifndef CSHARPFACTORY_H
#define CSHARPFACTORY_H

#include "AbstractFactory.h"
#include "CsharpClassUnit.h"
#include "CsharpMethodUnit.h"
#include "CsharpPrintOperatorUnit.h"

class CsharpFactory : public AbstractFactory
{
public:
    std::shared_ptr<AbstractClass> createClass(const std::string &name);
    std::shared_ptr<AbstractMethod> createMethod(const std::string &name, const std::string &returnType, unsigned int flags);
    std::shared_ptr<AbstractPrintOperator> createPrintOperator(const std::string &text);
};

#endif // CSHARPFACTORY_H
