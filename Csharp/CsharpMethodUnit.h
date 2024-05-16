#ifndef CSHARPMETHODUNIT_H
#define CSHARPMETHODUNIT_H

#include "AbstractMethod.h"

class CsharpMethodUnit : public AbstractMethod
{
public:
    CsharpMethodUnit(const std::string& name, const std::string& returnType, Flags flags);
    void add(const std::shared_ptr<Unit> & unit, Flags flags);
    std::string compile(unsigned int level) const;
};

#endif // CSHARPMETHODUNIT_H
