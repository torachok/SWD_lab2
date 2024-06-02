#ifndef JAVAFACTORY_H
#define JAVAFACTORY_H

#include "AbstractFactory.h"
#include "JavaClassUnit.h"
#include "JavaMethodUnit.h"
#include "JavaPrintOperatorUnit.h"

class JavaFactory : public AbstractFactory
{
public:
    std::shared_ptr<AbstractClass> createClass(const std::string &name);
    std::shared_ptr<AbstractMethod> createMethod(const std::string &name, const std::string &returnType, unsigned int flags);
    std::shared_ptr<AbstractPrintOperator> createPrintOperator(const std::string &text);
};

#endif // JAVAFACTORY_H
