---
description: "Learn more about the /Zc:templateScope (Check template parameter shadowing) compiler option."
title: "/Zc:templateScope (Check template parameter shadowing)"
ms.date: 11/11/2022
f1_keywords: ["/Zc:templateScope"]
helpviewer_keywords: ["-Zc:templateScope compiler option (C++)", "/Zc:templateScope compiler option (C++)"]
---
# `/Zc:templateScope` (Check template parameter shadowing)

The **`/Zc:templateScope`** compiler option enables checks for Standard C++ behavior around shadowing of template parameters.

## Syntax

> **`/Zc:templateScope`**\[**`-`**]

## Remarks

The C++ Standard doesn't allow the reuse of a template parameter's name (or *shadowing*) for another declaration within the scope of the template. The **`/Zc:templateScope`** compiler option enables an error check for such shadowing.

The **`/Zc:templateScope`** option is new in Visual Studio 2022 version 17.5 preview 1. The option is off by default even when the code is compiled using the **`/permissive-`** option (or an option that implies **`/permissive-`**, such as **`/std:c++20`** or **`/std:c++latest`**). To enable the error check, you must explicitly add **`/Zc:templateScope`** to the compiler command line. To explicitly disable the check, use the **`/Zc:templateScope-`** option.

### Example

Under **`/Zc:templateScope`**, this sample code produces an error:

```cpp
template<typename T>
void f(T&& t) {
    int T = 13;
}

/* Output:
t.cpp(3): error C7527: 'T': a template parameter name cannot be reused within its scope
*/
```

### To set this compiler option in Visual Studio

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. In **Additional options**, add *`/Zc:templateScope`* or  *`/Zc:templateScope-`*. Choose **OK** or **Apply** to save your changes.

## See also

[`/Zc` (Conformance)](zc-conformance.md)\
[`/permissive-`](./permissive-standards-conformance.md)\
[`/std` (Specify language standard version)](std-specify-language-standard-version.md)
