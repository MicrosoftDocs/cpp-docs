---
description: "Learn more about the /Zc:gotoScope (Enforce conformance in goto scope) compiler option."
title: "/Zc:gotoScope (Enforce conformance in goto scope)"
ms.date: 11/11/2022
f1_keywords: ["/Zc:gotoScope"]
helpviewer_keywords: ["-Zc:gotoScope compiler option (C++)", "/Zc:gotoScope compiler option (C++)"]
---
# `/Zc:gotoScope` (Enforce conformance in goto scope)

The **`/Zc:gotoScope`** compiler option enables checks for Standard C++ behavior around **`goto`** statements that jump over the initialization of local variables.

## Syntax

> **`/Zc:gotoScope`**\[**`-`**]

## Remarks

The **`/Zc:gotoScope`** compiler option enforces C++ Standard behavior around **`goto`** statements that jump over the initialization of one or more local variables. The compiler emits error [C2362](../../error-messages/compiler-errors-1/compiler-error-c2362.md) in all such cases when **`/Zc:gotoScope`** is specified. The **`/Zc:gotoScope-`** relaxes this check, but the compiler still emits an error if a **`goto`** skips initialization of a local variable that has a non-trivial destructor.

The intent of the **`/Zc:gotoScope-`** option is to help ease the migration of older code bases to more conformant code. You may use it to suppress certain errors until you've updated the non-conforming code.

The **`/Zc:gotoScope`** compiler option is new in Visual Studio 2022 version 17.4. The option is off by default. It's enabled automatically by the **`/permissive-`** option (or an option that implies **`/permissive-`**, such as **`/std:c++20`** or **`/std:c++latest`**). To enable the error check explicitly, add **`/Zc:gotoScope`** to the compiler command line. To explicitly disable the check, use the **`/Zc:gotoScope-`** option. The **`/Zc:gotoScope-`** must appear after the **`/permissive-`** option or any option that implies **`/permissive-`**.

### Example

This sample generates an error message when compiled using **`/Zc:gotoScope`**:

```cpp
int g(int*);
bool failed(int);

int f() {
    int v1;
    auto result = g(&v1);
    if (failed(result))
        goto OnError;
    int v2 = v1 + 2;
    return v2;
OnError:
    return -1;
}

/* Output:
t.cpp(9): error C2362: initialization of 'v2' is skipped by 'goto OnError'
*/
```

If the code is compiled with **`/Zc:gotoScope-`**, the compiler doesn't emit the error.

Even when **`/Zc:gotoScope-`** is specified, the compiler still emits an error if the local variable has a non-trivial destructor. For example:

```cpp
int g(int*);
bool failed(int);

class S {
public:
    S(int);
    ~S();
    int mf() const;
};

int f()
{
    int v1;
    auto result = g(&v1);
    if (failed(result))
        goto OnError;
    S s(v1);
    return s.mf();

OnError:
    return -1;
}

/* Output:
t.cpp(17): error C2362: initialization of 's' is skipped by 'goto OnError'
*/
```

### To set this compiler option in Visual Studio

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. In **Additional options**, add *`/Zc:gotoScope`* or  *`/Zc:gotoScope-`*. Choose **OK** or **Apply** to save your changes.

## See also

[`/Zc` (Conformance)](zc-conformance.md)\
[`/permissive-`](./permissive-standards-conformance.md)\
[`/std` (Specify language standard version)](std-specify-language-standard-version.md)
