---
description: "Learn more about: Cast operator: ()"
title: "Cast operator: ()"
ms.date: 06/30/2022
helpviewer_keywords: ["cast operators [C++]", "() cast operator"]
ms.assetid: 4c99eb92-1b19-4a5d-9840-5d8c29b8453e
---
# Cast operator: `()`

A type cast provides a method for explicit conversion of the type of an object in a specific situation.

## Syntax

*`cast-expression`*:\
&emsp;*`unary-expression`*\
&emsp;**`(`** *`type-name`* **`)`** *`cast-expression`*

## Remarks

Any unary expression is considered a cast expression.

The compiler treats *`cast-expression`* as type *`type-name`* after a type cast has been made. Casts can be used to convert objects of any scalar type to or from any other scalar type. Explicit type casts are constrained by the same rules that determine the effects of implicit conversions. Other restraints on casts may result from the actual sizes or representation of specific types.

## Examples

A standard cast conversion between built-in types:

```cpp
// expre_CastOperator.cpp
// compile with: /EHsc
// Demonstrate cast operator
#include <iostream>

using namespace std;

int main()
{
    double x = 3.1;
    int i;
    cout << "x = " << x << endl;
    i = (int)x;   // assign i the integer part of x
    cout << "i = " << i << endl;
}
```

A cast operator defined in a user-defined type:

```cpp
// expre_CastOperator2.cpp
// The following sample shows how to define and use a cast operator.
#include <string.h>
#include <stdio.h>

class CountedAnsiString
{
public:
    // Assume source is not null terminated
    CountedAnsiString(const char *pStr, size_t nSize) :
                      m_nSize(nSize)
    {
        m_pStr = new char[sizeOfBuffer];

        strncpy_s(m_pStr, sizeOfBuffer, pStr, m_nSize);
        memset(&m_pStr[m_nSize], '!', 9); // for demonstration purposes.
    }

    // Various string-like methods...

    const char *GetRawBytes() const
    {
        return(m_pStr);
    }

    //
    // operator to cast to a const char *
    //
    operator const char *()
    {
        m_pStr[m_nSize] = '\0';
        return(m_pStr);
    }

    enum
    {
        sizeOfBuffer = 20
    } size;

private:
    char *m_pStr;
    const size_t m_nSize;
};

int main()
{
    const char *kStr = "Excitinggg";
    CountedAnsiString myStr(kStr, 8);

    const char *pRaw = myStr.GetRawBytes();
    printf_s("RawBytes truncated to 10 chars:   %.10s\n", pRaw);

    const char *pCast = myStr; // or (const char *)myStr;
    printf_s("Casted Bytes:   %s\n", pCast);

    puts("Note that the cast changed the raw internal string");
    printf_s("Raw Bytes after cast:   %s\n", pRaw);
}
```

```Output
RawBytes truncated to 10 chars:   Exciting!!
Casted Bytes:   Exciting
Note that the cast changed the raw internal string
Raw Bytes after cast:   Exciting
```

## See also

[Expressions with unary operators](../cpp/expressions-with-unary-operators.md)\
[C++ built-in operators, precedence and associativity](../cpp/cpp-built-in-operators-precedence-and-associativity.md)\
[Explicit type conversion operator: `()`](../cpp/explicit-type-conversion-operator-parens.md)\
[Casting operators (C++)](../cpp/casting-operators.md)\
[Cast operators (C)](../c-language/cast-operators.md)
