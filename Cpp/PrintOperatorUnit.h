#ifndef PRINTOPERATORUNIT_H
#define PRINTOPERATORUNIT_H

#include "AbstractPrintOperator.h"

class PrintOperatorUnit : public AbstractPrintOperator {
public:
    explicit PrintOperatorUnit( const std::string& text );
    std::string compile( unsigned int level = 0 ) const;
};

#endif // PRINTOPERATORUNIT_H
