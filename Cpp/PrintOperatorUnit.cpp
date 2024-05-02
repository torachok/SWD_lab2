#include "PrintOperatorUnit.h"

PrintOperatorUnit::PrintOperatorUnit(const std::string &text) : AbstractPrintOperator (text) {}

std::string PrintOperatorUnit::compile(unsigned int level) const {
    return generateShift( level ) + "printf( \"" + m_text + "\" );\n";
}
