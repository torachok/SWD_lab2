#ifndef CLASSUNIT_H
#define CLASSUNIT_H

#include "AbstractClass.h"

class ClassUnit : public AbstractClass
{
public:
    static const std::vector< std::string > ACCESS_MODIFIERS;
public:
    explicit ClassUnit( const std::string& name );
    void add( const std::shared_ptr< Unit >& unit, Flags flags );
    std::string compile( unsigned int level = 0 ) const;
private:

};

#endif // CLASSUNIT_H
