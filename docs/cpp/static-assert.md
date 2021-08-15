---
description: "Learn more about: static_assert"
title: "static_assert"
ms.date: "07/29/2019"
f1_keywords: ["static_assert_cpp"]
helpviewer_keywords: ["assertions [C++], static_assert", "static_assert"]
ms.assetid: 28dd3668-e78c-4de8-ba68-552084743426
---
# static_assert

Tests a software assertion at compile time. If the specified constant expression is **`false`**, the compiler displays the specified message, if one is provided, and the compilation fails with error C2338; otherwise, the declaration has no effect.

## Syntax

```
static_assert( constant-expression, string-literal );

static_assert( constant-expression ); // C++17 (Visual Studio 2017 and later)
```

### Parameters

*constant-expression*\
An integral constant expression that can be converted to a Boolean. If the evaluated expression is zero (false), the *string-literal* parameter is displayed and the compilation fails with an error. If the expression is nonzero (true), the **`static_assert`** declaration has no effect.

*string-literal*\
An message that is displayed if the *constant-expression* parameter is zero. The message is a string of characters in the [base character set](../c-language/ascii-character-set.md) of the compiler; that is, not [multibyte or wide characters](../c-language/multibyte-and-wide-characters.md).

## Remarks

The *constant-expression* parameter of a **`static_assert`** declaration represents a *software assertion*. A software assertion specifies a condition that you expect to be true at a particular point in your program. If the condition is true, the **`static_assert`** declaration has no effect. If the condition is false, the assertion fails, the compiler displays the message in *string-literal* parameter, and the compilation fails with an error. In Visual Studio 2017 and later, the string-literal parameter is optional.

The **`static_assert`** declaration tests a software assertion at compile time. In contrast, the [assert Macro and _assert and _wassert functions](../c-runtime-library/reference/assert-macro-assert-wassert.md) test a software assertion at run time and incur a run time cost in space or time. The **`static_assert`** declaration is especially useful for debugging templates because template arguments can be included in the *constant-expression* parameter.

The compiler examines the **`static_assert`** declaration for syntax errors when the declaration is encountered. The compiler evaluates the *constant-expression* parameter immediately if it does not depend on a template parameter. Otherwise, the compiler evaluates the *constant-expression* parameter when the template is instantiated. Consequently, the compiler might issue a diagnostic message once when the declaration is encountered, and again when the template is instantiated.

You can use the **`static_assert`** keyword at namespace, class, or block scope. (The **`static_assert`** keyword is technically a declaration, even though it does not introduce new name into your program, because it can be used at namespace scope.)

## Description of `static_assert` with namespace scope

In the following example, the **`static_assert`** declaration has namespace scope. Because the compiler knows the size of type `void *`, the expression is evaluated immediately.

## Example: `static_assert` with namespace scope

```cpp
static_assert(sizeof(void *) == 4, "64-bit code generation is not supported.");
```

## Description of `static_assert` with class scope

In the following example, the **`static_assert`** declaration has class scope. The **`static_assert`** verifies that a template parameter is a *plain old data* (POD) type. The compiler examines the **`static_assert`** declaration when it is declared, but does not evaluate the *constant-expression* parameter until the `basic_string` class template is instantiated in `main()`.

## Example: `static_assert` with class scope

```cpp
#include <type_traits>
#include <iosfwd>
namespace std {
template <class CharT, class Traits = std::char_traits<CharT> >
class basic_string {
    static_assert(std::is_pod<CharT>::value,
                  "Template argument CharT must be a POD type in class template basic_string");
    // ...
    };
}

struct NonPOD {
    NonPOD(const NonPOD &) {}
    virtual ~NonPOD() {}
};

int main()
{
    std::basic_string<char> bs;
}
```

## Description of `static_assert` with block scope

In the following example, the **`static_assert`** declaration has block scope. The **`static_assert`** verifies that the size of the VMPage structure is equal to the virtual memory pagesize of the system.

## Example: `static_assert` at block scope

```cpp
#include <sys/param.h> // defines PAGESIZE
class VMMClient {
public:
    struct VMPage { // ...
           };
    int check_pagesize() {
    static_assert(sizeof(VMPage) == PAGESIZE,
        "Struct VMPage must be the same size as a system virtual memory page.");
    // ...
    }
// ...
};
```

## See also

[Assertion and User-Supplied Messages (C++)](../cpp/assertion-and-user-supplied-messages-cpp.md)<br/>
[#error Directive (C/C++)](../preprocessor/hash-error-directive-c-cpp.md)<br/>
[assert Macro, _assert, _wassert](../c-runtime-library/reference/assert-macro-assert-wassert.md)<br/>
[Templates](../cpp/templates-cpp.md)<br/>
[ASCII Character Set](../c-language/ascii-character-set.md)<br/>
[Declarations and Definitions](declarations-and-definitions-cpp.md)
