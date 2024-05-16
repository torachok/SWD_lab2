#include "CsharpFactory.h"

std::shared_ptr<AbstractClass> CsharpFactory::createClass(const std::string &name)
{
    return std::make_shared<CsharpClassUnit>(name);
}

std::shared_ptr<AbstractMethod> CsharpFactory::createMethod(const std::string &name, const std::string &returnType, unsigned int flags)
{
    return std::make_shared<CsharpMethodUnit>(name, returnType, flags);
}

std::shared_ptr<AbstractPrintOperator> CsharpFactory::createPrintOperator(const std::string &text)
{
    return std::make_shared<CsharpPrintOperatorUnit>(text);
}
