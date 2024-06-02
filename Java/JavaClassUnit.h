#ifndef JAVACLASSUNIT_H
#define JAVACLASSUNIT_H

#include "AbstractClass.h"

class JavaClassUnit : public AbstractClass
{
public:
    static const std::vector< std::string > ACCESS_MODIFIERS;
    JavaClassUnit(const std::string &name);
    void add(const std::shared_ptr<Unit> & unit, Flags flags);
    std::string compile(unsigned int level) const;
};

#endif // JAVACLASSUNIT_H
