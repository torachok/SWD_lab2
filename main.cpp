#include <QCoreApplication>
#include <iostream>

#include "Unit.h"
#include "Cpp/ClassUnit.h"
#include "Cpp/MethodUnit.h"
#include "Cpp/PrintOperatorUnit.h"
#include "AbstractFactory.h"
#include "Cpp/CppFactory.h"
#include "Csharp/CsharpFactory.h"
#include "Java/JavaFactory.h"

std::string generateProgram(std::shared_ptr<AbstractFactory> & factory) {
    auto myClass = factory->createClass("MyClass");
    myClass->add(
        factory->createMethod( "testFunc1", "void", 0 ),
        AbstractClass::PUBLIC
        );
    myClass->add(
        factory->createMethod( "testFunc2", "void", AbstractMethod::STATIC ),
        AbstractClass::PRIVATE
        );
    myClass->add(
        factory->createMethod( "testFunc3", "void", AbstractMethod::VIRTUAL | AbstractMethod::CONST ),
        AbstractClass::PUBLIC
        );
    auto method = factory->createMethod( "testFunc4", "void", AbstractMethod::STATIC );
    method->add( factory->createPrintOperator( R"(Hello, world!\n)" ) );
    myClass->add( method, AbstractClass::PROTECTED );
    return myClass->compile();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    std::shared_ptr<AbstractFactory> factory = std::make_shared<JavaFactory>();
    std::cout << generateProgram(factory) << std::endl;

    return a.exec();
}
