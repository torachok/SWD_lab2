#ifndef JAVAPRINTOPERATORUNIT_H
#define JAVAPRINTOPERATORUNIT_H

#include "AbstractPrintOperator.h"

class JavaPrintOperatorUnit : public AbstractPrintOperator
{
public:
    JavaPrintOperatorUnit(const std::string& text);
    std::string compile(unsigned int level) const;
};

#endif // JAVAPRINTOPERATORUNIT_H
