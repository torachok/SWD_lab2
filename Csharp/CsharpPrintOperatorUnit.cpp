#include "CsharpPrintOperatorUnit.h"

CsharpPrintOperatorUnit::CsharpPrintOperatorUnit(const std::string &text)
    : AbstractPrintOperator(text){}

std::string CsharpPrintOperatorUnit::compile(unsigned int level) const
{
    return generateShift( level ) + "Console.WriteLine( \"" + m_text + "\" );\n";
}
