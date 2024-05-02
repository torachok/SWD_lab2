#include "AbstractMethod.h"

AbstractMethod::AbstractMethod(const std::string &name, const std::string &returnType, Flags flags)
{
    m_name = name;
    m_returnType = returnType;
    m_flags = flags;
}
