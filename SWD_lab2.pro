SQT = core

CONFIG += c++17 cmdline

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        AbstractClass.cpp \
        AbstractFactory.cpp \
        AbstractMethod.cpp \
        AbstractPrintOperator.cpp \
        Cpp/ClassUnit.cpp \
        Cpp/CppFactory.cpp \
        Cpp/MethodUnit.cpp \
        Cpp/PrintOperatorUnit.cpp \
        Csharp/CsharpClassUnit.cpp \
        Csharp/CsharpFactory.cpp \
        Csharp/CsharpMethodUnit.cpp \
        Csharp/CsharpPrintOperatorUnit.cpp \
        Java/JavaClassUnit.cpp \
        Java/JavaFactory.cpp \
        Java/JavaMethodUnit.cpp \
        Java/JavaPrintOperatorUnit.cpp \
        Unit.cpp \
        main.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    AbstractClass.h \
    AbstractFactory.h \
    AbstractMethod.h \
    AbstractPrintOperator.h \
    Cpp/ClassUnit.h \
    Cpp/CppFactory.h \
    Cpp/MethodUnit.h \
    Cpp/PrintOperatorUnit.h \
    Csharp/CsharpClassUnit.h \
    Csharp/CsharpFactory.h \
    Csharp/CsharpMethodUnit.h \
    Csharp/CsharpPrintOperatorUnit.h \
    Java/JavaClassUnit.h \
    Java/JavaFactory.h \
    Java/JavaMethodUnit.h \
    Java/JavaPrintOperatorUnit.h \
    Unit.h
