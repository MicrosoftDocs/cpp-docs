---
description: "Learn more about: Compiler Error C2065"
title: "Compiler Error C2065"
ms.date: "08/19/2019"
f1_keywords: ["C2065"]
helpviewer_keywords: ["C2065"]
ms.assetid: 78093376-acb7-45f5-9323-5ed7e0aab1dc
---
# Compiler Error C2065

> '*identifier*' : undeclared identifier

The compiler can't find the declaration for an identifier. There are many possible causes for this error. The most common causes of C2065 are that the identifier hasn't been declared, the identifier is misspelled, the header where the identifier is declared is not included in the file, or the identifier is missing a scope qualifier, for example, `cout` instead of `std::cout`. For more information on declarations in C++, see [Declarations and Definitions (C++)](../../cpp/declarations-and-definitions-cpp.md).

Here are some common issues and solutions in greater detail.

## The identifier is undeclared

If the identifier is a variable or a function name, you must declare it before it can be used. A function declaration must also include the types of its parameters before the function can be used. If the variable is declared using **`auto`**, the compiler must be able to infer the type from its initializer.

If the identifier is a member of a class or struct, or declared in a namespace, it must be qualified by the class or struct name, or the namespace name, when used outside the struct, class, or namespace scope. Alternatively, the namespace must be brought into scope by a **`using`** directive such as `using namespace std;`, or the member name must be brought into scope by a **`using`** declaration, such as `using std::string;`. Otherwise, the unqualified name is considered to be an undeclared identifier in the current scope.

If the identifier is the tag for a user-defined type, for example, a **`class`** or **`struct`**, the type of the tag must be declared before it can be used. For example, the declaration `struct SomeStruct { /*...*/ };` must exist before you can declare a variable `SomeStruct myStruct;` in your code.

If the identifier is a type alias, the type must be declared by using a **`using`** declaration or **`typedef`** before it can be used. For example, you must declare `using my_flags = std::ios_base::fmtflags;` before you can use `my_flags` as a type alias for `std::ios_base::fmtflags`.

## Example: misspelled identifier

This error commonly occurs when the identifier name is misspelled, or the identifier uses the wrong uppercase and lowercase letters. The name in the declaration must exactly match the name you use.

```cpp
// C2065_spell.cpp
// compile with: cl /EHsc C2065_spell.cpp
#include <iostream>
using namespace std;
int main() {
    int someIdentifier = 42;
    cout << "Some Identifier: " << SomeIdentifier << endl;
    // C2065: 'SomeIdentifier': undeclared identifier
    // To fix, correct the spelling:
    // cout << "Some Identifier: " << someIdentifier << endl;
}
```

## Example: use an unscoped identifier

This error can occur if your identifier is not properly scoped. If you see C2065 when you use `cout`, this is the cause. When C++ Standard Library functions and operators are not fully qualified by namespace, or you have not brought the `std` namespace into the current scope by using a **`using`** directive, the compiler can't find them. To fix this issue, you must either fully qualify the identifier names, or specify the namespace with the **`using`** directive.

This example fails to compile because `cout` and `endl` are defined in the `std` namespace:

```cpp
// C2065_scope.cpp
// compile with: cl /EHsc C2065_scope.cpp
#include <iostream>
// using namespace std;   // Uncomment this line to fix

int main() {
    cout << "Hello" << endl;   // C2065 'cout': undeclared identifier
                               // C2065 'endl': undeclared identifier
    // Or try the following line instead
    std::cout << "Hello" << std::endl;
}
```

Identifiers that are declared inside of **`class`**, **`struct`**, or **`enum class`** types must also be qualified by the name of their enclosing scope when you use them outside of that scope.

## Example: precompiled header isn't first

This error can occur if you put any preprocessor directives, such as #include, #define, or #pragma, before the #include of a precompiled header file. If your source file uses a precompiled header file (that is, if it's compiled by using the **/Yu** compiler option) then all preprocessor directives before the precompiled header file are ignored.

This example fails to compile because `cout` and `endl` are defined in the \<iostream> header, which is ignored because it is included before the precompiled header file. To build this example, create all three files, then compile stdafx.cpp, then compile C2065_pch.cpp.

```cpp
// pch.h (stdafx.h in Visual Studio 2017 and earlier)
#include <stdio.h>
```

```cpp
// pch.cpp (stdafx.cpp in Visual Studio 2017 and earlier)
// Compile by using: cl /EHsc /W4 /c /Ycstdafx.h stdafx.cpp
#include "pch.h"
```

```cpp
// C2065_pch.cpp
// compile with: cl /EHsc /W4 /Yustdafx.h C2065_pch.cpp
#include <iostream>
#include "stdafx.h"
using namespace std;

int main() {
    cout << "Hello" << endl;   // C2065 'cout': undeclared identifier
                               // C2065 'endl': undeclared identifier
}
```

To fix this issue, add the #include of \<iostream> into the precompiled header file, or move it after the precompiled header file is included in your source file.

## Example: missing header file

You have not included the header file that declares the identifier. Make sure the file that contains the declaration for the identifier is included in every source file that uses it.

```cpp
// C2065_header.cpp
// compile with: cl /EHsc C2065_header.cpp

//#include <stdio.h>
int main() {
    fpos_t file_position = 42; // C2065: 'fpos_t': undeclared identifier
    // To fix, uncomment the #include <stdio.h> line
    // to include the header where fpos_t is defined
}
```

Another possible cause is if you use an initializer list without including the \<initializer_list> header.

```cpp
// C2065_initializer.cpp
// compile with: cl /EHsc C2065_initializer.cpp

// #include <initializer_list>
int main() {
    for (auto strList : {"hello", "world"})
        if (strList == "hello") // C2065: 'strList': undeclared identifier
            return 1;
    // To fix, uncomment the #include <initializer_list> line
}
```

You may see this error in Windows Desktop app source files if you define `VC_EXTRALEAN`, `WIN32_LEAN_AND_MEAN`, or `WIN32_EXTRA_LEAN`. These preprocessor macros exclude some header files from windows.h and afxv\_w32.h to speed compiles. Look in windows.h and afxv_w32.h for an up-to-date description of what's excluded.

## Example: missing closing quote

This error can occur if you are missing a closing quote after a string constant. This is an easy way to confuse the compiler. Note that the missing closing quote may be several lines before the reported error location.

```cpp
// C2065_quote.cpp
// compile with: cl /EHsc C2065_quote.cpp
#include <iostream>

int main() {
    // Fix this issue by adding the closing quote to "Aaaa"
    char * first = "Aaaa, * last = "Zeee";
    std::cout << "Name: " << first
        << " " << last << std::endl; // C2065: 'last': undeclared identifier
}
```

## Example: use iterator outside for loop scope

This error can occur if you declare an iterator variable in a **`for`** loop, and then you try to use that iterator variable outside the scope of the **`for`** loop. The compiler enables the [/Zc:forScope](../../build/reference/zc-forscope-force-conformance-in-for-loop-scope.md) compiler option by default. See [Debug Iterator Support](../../standard-library/debug-iterator-support.md) for more information.

```cpp
// C2065_iter.cpp
// compile with: cl /EHsc C2065_iter.cpp
#include <iostream>
#include <string>

int main() {
    // char last = '!';
    std::string letters{ "ABCDEFGHIJKLMNOPQRSTUVWXYZ" };
    for (const char& c : letters) {
        if ('Q' == c) {
            std::cout << "Found Q!" << std::endl;
        }
        // last = c;
    }
    std::cout << "Last letter was " << c << std::endl; // C2065
    // Fix by using a variable declared in an outer scope.
    // Uncomment the lines that declare and use 'last' for an example.
    // std::cout << "Last letter was " << last << std::endl; // C2065
}
```

## Example: preprocessor removed declaration

This error can occur if you refer to a function or variable that is in conditionally compiled code that is not compiled for your current configuration. This can also occur if you call a function in a header file that is currently not supported in your build environment. If certain variables or functions are only available when a particular preprocessor macro is defined, make sure the code that calls those functions can only be compiled when the same preprocessor macro is defined. This issue is easy to spot in the IDE, because the declaration for the function is greyed out if the required preprocessor macros are not defined for the current build configuration.

This is an example of code that works when you build in Debug, but not Retail:

```cpp
// C2065_defined.cpp
// Compile with: cl /EHsc /W4 /MT C2065_defined.cpp
#include <iostream>
#include <crtdbg.h>
#ifdef _DEBUG
    _CrtMemState oldstate;
#endif
int main() {
    _CrtMemDumpStatistics(&oldstate);
    std::cout << "Total count " << oldstate.lTotalCount; // C2065
    // Fix by guarding references the same way as the declaration:
    // #ifdef _DEBUG
    //    std::cout << "Total count " << oldstate.lTotalCount;
    // #endif
}
```

## Example: C++/CLI type deduction failure

This error can occur when calling a generic function, if the intended type argument cannot be deduced from the parameters used. For more information, see [Generic Functions (C++/CLI)](../../extensions/generic-functions-cpp-cli.md).

```cpp
// C2065_b.cpp
// compile with: cl /clr C2065_b.cpp
generic <typename ItemType>
void G(int i) {}

int main() {
   // global generic function call
   G<T>(10);     // C2065
   G<int>(10);   // OK - fix with a specific type argument
}
```

## Example: C++/CLI attribute parameters

This error can also be generated as a result of compiler conformance work that was done for Visual Studio 2005: parameter checking for Visual C++ attributes.

```cpp
// C2065_attributes.cpp
// compile with: cl /c /clr C2065_attributes.cpp
[module(DLL, name=MyLibrary)];   // C2065
// try the following line instead
// [module(dll, name="MyLibrary")];

[export]
struct MyStruct {
   int i;
};
```
