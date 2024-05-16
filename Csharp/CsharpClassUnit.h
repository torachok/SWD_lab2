#ifndef CSHARPCLASSUNIT_H
#define CSHARPCLASSUNIT_H

#include "AbstractClass.h"

class CsharpClassUnit : public AbstractClass
{
public:
    static const std::vector< std::string > ACCESS_MODIFIERS;
    CsharpClassUnit(const std::string& name);
    void add(const std::shared_ptr<Unit> & unit, Flags flags);
    std::string compile(unsigned int level) const;

};

#endif // CSHARPCLASSUNIT_H
