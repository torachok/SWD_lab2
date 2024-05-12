#ifndef ABSTRACTFACTORY_H
#define ABSTRACTFACTORY_H

#include "Unit.h"
#include "AbstractClass.h"
#include "AbstractMethod.h"
#include "AbstractPrintOperator.h"
#include <memory>

class AbstractFactory
{
public:
    AbstractFactory() = default;

    virtual ~AbstractFactory() = default;

    virtual std::shared_ptr<AbstractClass> createClass(const std::string& name) = 0;
    virtual std::shared_ptr<AbstractMethod> createMethod(const std::string& name, const std::string& returnType, unsigned int flags) = 0;
    virtual std::shared_ptr<AbstractPrintOperator> createPrintOperator(const std::string& text) = 0;
};

#endif // ABSTRACTFACTORY_H
