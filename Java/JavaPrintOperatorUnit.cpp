#include "JavaPrintOperatorUnit.h"

JavaPrintOperatorUnit::JavaPrintOperatorUnit(const std::string &text)
    : AbstractPrintOperator(text){}

std::string JavaPrintOperatorUnit::compile(unsigned int level) const
{
    return generateShift( level ) + "System.WriteLine( \"" + m_text + "\" );\n";
}
