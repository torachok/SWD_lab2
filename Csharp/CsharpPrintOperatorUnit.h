#ifndef CSHARPPRINTOPERATORUNIT_H
#define CSHARPPRINTOPERATORUNIT_H

#include "AbstractPrintOperator.h"

class CsharpPrintOperatorUnit : public AbstractPrintOperator
{
public:
    CsharpPrintOperatorUnit(const std::string& text);
    std::string compile(unsigned int level) const;
};

#endif // CSHARPPRINTOPERATORUNIT_H
