---
description: "Learn more about: #using directive (C++/CLI)"
title: "#using directive (C++/CLI)"
ms.date: "08/29/2019"
f1_keywords: ["friend_as_cpp", "#using", "friend_as", "#using_cpp"]
helpviewer_keywords: ["using directive (#using)", "#using directive", "LIBPATH environment variable", "preprocessor, directives"]
ms.assetid: 870b15e5-f361-40a8-ba1c-c57d75c8809a
---
# #using directive (C++/CLI)

Imports metadata into a program compiled with [/clr](../build/reference/clr-common-language-runtime-compilation.md).

## Syntax

> **`#using`** *file* [**`as_friend`**]

### Parameters

*file*\
A Microsoft intermediate language (MSIL) *`.dll`*, *`.exe`*, *`.netmodule`*, or *`.obj`* file. For example,

`#using <MyComponent.dll>`

**`as_friend`**\
Specifies that all types in *file* are accessible. For more information, see [Friend Assemblies (C++)](../dotnet/friend-assemblies-cpp.md).

## Remarks

*file* can be a Microsoft intermediate language (MSIL) file that you import for its managed data and managed constructs. If a DLL contains an assembly manifest, then all the DLLs referenced in the manifest are imported. The assembly you're building will list *file* in the metadata as an assembly reference.

Perhaps *file* doesn't contain an assembly (*file* is a module), and you don't intend to use type information from the module in the current (assembly) application. You may indicate the module is part of the assembly by using [/ASSEMBLYMODULE](../build/reference/assemblymodule-add-a-msil-module-to-the-assembly.md). The types in the module would then be available to any application that referenced the assembly.

An alternative to use **`#using`** is the [/FU](../build/reference/fu-name-forced-hash-using-file.md) compiler option.

.exe assemblies passed to **`#using`** should be compiled by using one of the .NET Visual Studio compilers (Visual Basic or Visual C#, for example).  Attempting to import metadata from an .exe assembly compiled with **`/clr`** will result in a file load exception.

> [!NOTE]
> A component that is referenced with **`#using`** can be run with a different version of the file imported at compile time, causing a client application to give unexpected results.

In order for the compiler to recognize a type in an assembly (not a module), it needs to be forced to resolve the type. You can force it, for example, by defining an instance of the type. There are other ways to resolve type names in an assembly for the compiler. For example, if you inherit from a type in an assembly, the type name becomes known to the compiler.

When importing metadata built from source code that used [`__declspec(thread)`](../cpp/thread.md), the thread semantics aren't persisted in metadata. For example, a variable declared with **`__declspec(thread)`**, compiled in a program that is built for the .NET Framework common language runtime, and then imported via **`#using`**, won't have **`__declspec(thread)`** semantics on the variable.

All imported types (both managed and native) in a file referenced by **`#using`** are available, but the compiler treats native types as declarations, not definitions.

mscorlib.dll is automatically referenced when compiling with **`/clr`**.

The LIBPATH environment variable specifies the directories to search when the compiler resolves file names passed to **`#using`**.

The compiler searches for references along the following path:

- A path specified in the **`#using`** statement.

- The current directory.

- The .NET Framework system directory.

- Directories added with the [`/AI`](../build/reference/ai-specify-metadata-directories.md) compiler option.

- Directories on LIBPATH environment variable.

## Examples

You can build an assembly that references a second assembly that itself references a third assembly. You only have to explicitly reference the third assembly from the first one if you explicitly use one of its types.

```cpp
// using_assembly_A.cpp
// compile with: /clr /LD
public ref class A {};
```

```cpp
// using_assembly_B.cpp
// compile with: /clr /LD
#using "using_assembly_A.dll"
public ref class B {
public:
   void Test(A a) {}
   void Test() {}
};
```

In the following sample, there's the compiler doesn't report an error about referencing *using_assembly_A.dll*, because the program doesn't use any of the types defined in *using_assembly_A.cpp*.

```cpp
// using_assembly_C.cpp
// compile with: /clr
#using "using_assembly_B.dll"
int main() {
   B b;
   b.Test();
}
```

## See also

[Preprocessor directives](../preprocessor/preprocessor-directives.md)
