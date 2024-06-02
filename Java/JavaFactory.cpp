#include "JavaFactory.h"

std::shared_ptr<AbstractClass> JavaFactory::createClass(const std::string &name)
{
    return std::make_shared<JavaClassUnit>(name);
}

std::shared_ptr<AbstractMethod> JavaFactory::createMethod(const std::string &name, const std::string &returnType, unsigned int flags)
{
    return std::make_shared<JavaMethodUnit>(name, returnType, flags);
}

std::shared_ptr<AbstractPrintOperator> JavaFactory::createPrintOperator(const std::string &text)
{
    return std::make_shared<JavaPrintOperatorUnit>(text);
}
