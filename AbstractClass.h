#ifndef ABSTRACTCLASS_H
#define ABSTRACTCLASS_H

#include "Unit.h"

class AbstractClass : public Unit
{
protected:
    std::string m_name;
    using Fields = std::vector< std::shared_ptr< Unit > >;
    std::vector< Fields > m_fields;
public:
    enum AccessModifier {
        PUBLIC,
        PROTECTED,
        PRIVATE
    };
    AbstractClass(const std::string&);
};

#endif // ABSTRACTCLASS_H
