#ifndef ABSTRACTMETHOD_H
#define ABSTRACTMETHOD_H

#include "Unit.h"

class AbstractMethod : public Unit
{
protected:
    std::string m_name;
    std::string m_returnType;
    Flags m_flags;
    std::vector< std::shared_ptr< Unit > > m_body;
public:
    enum Modifier {
        STATIC = 1,
        CONST = 1 << 1,
        VIRTUAL = 1 << 2
    };
    AbstractMethod(const std::string& name, const std::string& returnType, Flags flags);
};

#endif // ABSTRACTMETHOD_H
