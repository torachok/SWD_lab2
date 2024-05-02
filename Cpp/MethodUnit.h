#ifndef METHODUNIT_H
#define METHODUNIT_H

#include "AbstractMethod.h"

class MethodUnit : public AbstractMethod {
public:
    MethodUnit( const std::string& name, const std::string& returnType, Flags flags );
    void add( const std::shared_ptr< Unit >& unit, Flags /* flags */ = 0 );
    std::string compile( unsigned int level = 0 ) const;
};

#endif // METHODUNIT_H
