#ifndef JAVAMETHODUNIT_H
#define JAVAMETHODUNIT_H

#include "AbstractMethod.h"

class JavaMethodUnit : public AbstractMethod
{
public:
    JavaMethodUnit(const std::string& name, const std::string& returnType, Flags flags);
    void add(const std::shared_ptr<Unit> & unit, Flags flags);
    std::string compile(unsigned int level) const;
};

#endif // JAVAMETHODUNIT_H
