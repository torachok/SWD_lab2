#include "JavaMethodUnit.h"

JavaMethodUnit::JavaMethodUnit(const std::string &name, const std::string &returnType, Flags flags)
:AbstractMethod(name, returnType, flags) {}

void JavaMethodUnit::add(const std::shared_ptr<Unit> &unit, Flags flags)
{
    m_body.push_back( unit );
}

std::string JavaMethodUnit::compile(unsigned int level) const
{
    std::string result = generateShift( level );
    if( m_flags & STATIC ) {
        result += "static ";
    } else if( m_flags & ABSTRACT ) {
        result += "abstract ";
        result += m_returnType + " ";
        result += m_name + "();";
        return result;
    } else if(m_flags & FINAL) result += "final ";

    result += m_returnType + " ";
    result += m_name + "();";
    if( m_flags & CONST ) {
        result += " const";
        qWarning("Java does not support const methods!\n");
    }
    result += " {\n";
    for( const auto& b : m_body ) {
        result += b->compile( level + 1 );
    }
    result += generateShift( level ) + "}\n";
    return result;
}
