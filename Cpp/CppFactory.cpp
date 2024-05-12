#include "CppFactory.h"



std::shared_ptr<AbstractClass> CppFactory::createClass(const std::string &name)
{
    return std::make_shared<ClassUnit>(name);
}

std::shared_ptr<AbstractMethod> CppFactory::createMethod(const std::string &name, const std::string &returnType, unsigned int flags)
{
    return std::make_shared<MethodUnit>(name, returnType, flags);
}

std::shared_ptr<AbstractPrintOperator> CppFactory::createPrintOperator(const std::string &text)
{
    return std::make_shared<PrintOperatorUnit>(text);
}
