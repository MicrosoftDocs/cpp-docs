---
description: "Learn more about: Compiler Error C2666"
title: "Compiler Error C2666"
ms.date: "11/04/2016"
f1_keywords: ["C2666"]
helpviewer_keywords: ["C2666"]
ms.assetid: 78364d15-c6eb-439a-9088-e04a0176692b
---
# Compiler Error C2666

'identifier' : number overloads have similar conversions

An overloaded function or operator is ambiguous.   Formal parameter lists may be too similar for the compiler to resolve the ambiguity.  To resolve this error, explicitly cast one or more of the actual parameters.

## Examples

The following sample generates C2666:

```cpp
// C2666.cpp
struct complex {
   complex(double);
};

void h(int,complex);
void h(double, double);

int main() {
   h(3,4);   // C2666
}
```

This error can also be generated as a result of compiler conformance work that was done for Visual Studio .NET 2003:

- binary operators and user-defined conversions to pointer types

- qualification conversion is not the same as identity conversion

For the binary operators \<, >, \<=, and >=, a passed parameter is now implicitly converted to the type of the operand if the parameter's type defines a user-defined conversion operator to convert to the type of the operand. There is now potential for ambiguity.

For code that is valid in both the Visual Studio .NET 2003 and Visual Studio .NET versions of Visual C++, call the class operator explicitly using function syntax.

```cpp
// C2666b.cpp
#include <string.h>
#include <stdio.h>

struct T
{
    T( const T& copy )
    {
        m_str = copy.m_str;
    }

    T( const char* str )
    {
        int iSize = (strlen( str )+ 1);
        m_str = new char[ iSize ];
        if (m_str)
            strcpy_s( m_str, iSize, str );
    }

    bool operator<( const T& RHS )
    {
        return m_str < RHS.m_str;
    }

    operator char*() const
    {
        return m_str;
    }

    char* m_str;
};

int main()
{
    T str1( "ABCD" );
    const char* str2 = "DEFG";

    // Error - Ambiguous call to operator<()
    // Trying to convert str1 to char* and then call
    // operator<( const char*, const char* )?
    //  OR
    // trying to convert str2 to T and then call
    // T::operator<( const T& )?

    if( str1 < str2 )   // C2666

    if ( str1.operator < ( str2 ) )   // Treat str2 as type T
        printf_s("str1.operator < ( str2 )\n");

    if ( str1.operator char*() < str2 )   // Treat str1 as type char*
        printf_s("str1.operator char*() < str2\n");
}
```

The following sample generates C2666

```cpp
// C2666c.cpp
// compile with: /c

enum E
{
    E_A,   E_B
};

class A
{
    int h(const E e) const {return 0; }
    int h(const int i) { return 1; }
    // Uncomment the following line to resolve.
    // int h(const E e) { return 0; }

    void Test()
    {
        h(E_A);   // C2666
        h((const int) E_A);
        h((int) E_A);
    }
};
```
