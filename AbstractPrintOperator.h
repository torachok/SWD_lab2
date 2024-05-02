#ifndef ABSTRACTPRINTOPERATOR_H
#define ABSTRACTPRINTOPERATOR_H

#include "Unit.h"

class AbstractPrintOperator : public Unit
{
protected:
    std::string m_text;
public:
    AbstractPrintOperator(const std::string& text);
};

#endif // ABSTRACTPRINTOPERATOR_H
