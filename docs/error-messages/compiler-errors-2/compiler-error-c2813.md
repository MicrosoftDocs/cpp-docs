---
description: "Learn more about: Compiler Error C2813"
title: "Compiler Error C2813"
ms.date: "11/04/2016"
f1_keywords: ["C2813"]
helpviewer_keywords: ["C2813"]
ms.assetid: 6cf2135f-7b82-42d1-909a-5e864308a09c
---
# Compiler Error C2813

\#import is not supported with /MP

C2813 is emitted if in a compiler command you specify the **/MP** compiler option and two or more files to compile, and one or more of the files contains the[#import](../../preprocessor/hash-import-directive-cpp.md) preprocessor directive. The [#import](../../preprocessor/hash-import-directive-cpp.md) directive generates C++ classes from the types in the specified type library, and then writes those classes to two header files. The [#import](../../preprocessor/hash-import-directive-cpp.md) directive is not supported because if multiple compilation units import the same type library, those units conflict when they try to write the same header files at the same time.

This compiler error and the **/MP** compiler option are new in Visual Studio 2008.

## Example

The following sample generates C2813. The command line in the "compile with:" comment indicates to the compiler to use the **/MP** and **/c** compiler options to compile several files. At least one of the files contains the [#import](../../preprocessor/hash-import-directive-cpp.md) directive. We use the same file twice for the sake of testing this example.

```cpp
// C2813.cpp
// compile with: /MP /c C2813.cpp C2813.cpp
#import "C:\windows\system32\stdole2.tlb"   // C2813
int main()
{
}
```
