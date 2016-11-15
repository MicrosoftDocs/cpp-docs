---
title: "#using Directive (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "friend_as_cpp"
  - "#using"
  - "friend_as"
  - "#using_cpp"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "using directive (#using)"
  - "#using directive"
  - "LIBPATH environment variable"
  - "preprocessor, directives"
ms.assetid: 870b15e5-f361-40a8-ba1c-c57d75c8809a
caps.latest.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# #using Directive (C++)
Imports metadata into a program compiled with [/clr](../build/reference/clr-common-language-runtime-compilation.md).  
  
## Syntax  
  
```  
#using file [as_friend]  
```  
  
#### Parameters  
 `file`  
 An MSIL .dll, .exe, .netmodule, or .obj. For example,  
  
 `#using <MyComponent.dll>`  
  
 as_friend  
 Specifies that all types in `file` are accessible.  For more information, see [Friend Assemblies (C++)](../dotnet/friend-assemblies-cpp.md).  
  
## Remarks  
 `file` can be a Microsoft intermediate language (MSIL) file that you import for its managed data and managed constructs. If a .dll file contains an assembly manifest, then all the .dlls referenced in the manifest are imported and the assembly you are building will list *file* in the metadata as an assembly reference.  
  
 If `file` does not contain an assembly (if `file` is a module) and if you do not intend to use type information from the module in the current (assembly) application, you have the option of just indicating that the module is part the assembly; use [/ASSEMBLYMODULE](../build/reference/assemblymodule-add-a-msil-module-to-the-assembly.md). The types in the module would then be available to any application that referenced the assembly.  
  
 An alternative to use `#using` is the [/FU](../build/reference/fu-name-forced-hash-using-file.md) compiler option.  
  
 .exe assemblies passed to `#using` should be compiled with **/clr:safe** or **/clr:pure**, or with any of the other Visual Studio compilers (Visual Basic or Visual C#, for example).  Attempting to import metadata from an .exe assembly compiled with **/clr** will result in a file load exception.  
  
> [!NOTE]
>  A component that is referenced with `#using` can be run with a different version of the file imported at compile time, causing a client application to give unexpected results.  
  
 In order for the compiler to recognize a type in an assembly (not a module), it needs to be forced to resolve the type, which you can do, for example, by defining an instance of the type. There are other ways to resolve type names in an assembly for the compiler, for example, if you inherit from a type in an assembly, the type name will then become known to the compiler.  
  
 When importing metadata built from source code that used [__declspec(thread)](../cpp/thread.md), the thread semantics are not persisted in metadata. For example, a variable declared with **__declspec(thread)**, compiled in a program that is build for the .NET Framework common language runtime, and then imported via `#using`, will no longer have **__declspec(thread)** semantics on the variable.  
  
 All imported types (both managed and native) in a file referenced by `#using` are available, but the compiler treats native types as declarations not definitions.  
  
 mscorlib.dll is automatically referenced when compiling with **/clr**.  
  
 The LIBPATH environment variable specifies the directories that will be searched when the compiler tries to resolve file names passed to `#using`.  
  
 The compiler will search for references along the following path:  
  
-   A path specified in the `#using` statement.  
  
-   The current directory.  
  
-   The .NET Framework system directory.  
  
-   Directories added with the [/AI](../build/reference/ai-specify-metadata-directories.md) compiler option.  
  
-   Directories on LIBPATH environment variable.  
  
## Example  
 If you build an assembly (C) and reference an assembly (B) that itself references another assembly (A), you will not have to explicitly reference assembly A unless you explicitly use one of A's types in C.  
  
```  
// using_assembly_A.cpp  
// compile with: /clr /LD  
public ref class A {};  
```  
  
## Example  
  
```  
// using_assembly_B.cpp  
// compile with: /clr /LD  
#using "using_assembly_A.dll"  
public ref class B {  
public:  
   void Test(A a) {}  
   void Test() {}  
};  
  
```  
  
## Example  
 In the following sample, there is no compiler error for not referencing using_assembly_A.dll because the program does not use any of the types defined in using_assembly_A.cpp.  
  
```  
// using_assembly_C.cpp  
// compile with: /clr  
#using "using_assembly_B.dll"  
int main() {  
   B b;  
   b.Test();  
}  
```  
  
## See Also  
 [Preprocessor Directives](../preprocessor/preprocessor-directives.md)