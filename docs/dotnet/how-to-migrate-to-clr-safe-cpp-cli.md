---
title: "How to: Migrate to -clr:safe (C++-CLI) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "migration [C++], verifiable assemblies"
  - "upgrading Visual C++ applications, verifiable assemblies"
  - "verifiable assemblies [C++], migrating to"
  - "/clr compiler option [C++], migrating to /clr:safe"
ms.assetid: 75f9aae9-1dcc-448a-aa11-2d96f972f9d2
caps.latest.revision: 15
author: "mikeblome"
ms.author: "mblome"
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
# How to: Migrate to /clr:safe (C++/CLI)
Visual C++ can generate verifiable components by using **/clr:safe**, which causes the compiler to generate errors for each non-verifiable code construct.  
  
## Remarks  
 The following issues generate verifiability errors:  
  
-   Native types. Even if it isn't used, the declaration of native classes, structures, pointers, or arrays will prevent compilation.  
  
-   Global variables  
  
-   Function calls into any unmanaged library, including common language runtime function calls  
  
-   A verifiable function cannot contain a [static_cast Operator](../cpp/static-cast-operator.md) for down-casting. The [static_cast Operator](../cpp/static-cast-operator.md) can be used for casting between primitive types, but for down-casting, [safe_cast](../windows/safe-cast-cpp-component-extensions.md) or a C-Style cast (which is implemented as a [safe_cast](../windows/safe-cast-cpp-component-extensions.md)) must be used.  
  
-   A verifiable function cannot contain a [reinterpret_cast Operator](../cpp/reinterpret-cast-operator.md) (or any C-style cast equivalent).  
  
-   A verifiable function cannot perform arithmetic on an [interior_ptr (C++/CLI)](../windows/interior-ptr-cpp-cli.md). It may only assign to it and dereference it.  
  
-   A verifiable function can only throw or catch pointers to reference types, so value types must be boxed before throwing.  
  
-   A verifiable function can only call verifiable functions (such that calls to the common language runtime are not allowed, include `AtEntry`/`AtExit`, and so global constructors are disallowed).  
  
-   A verifiable class cannot use <xref:System.Runtime.InteropServices.LayoutKind>.  
  
-   If building an EXE, a main function cannot declare any parameters, so <xref:System.Environment.GetCommandLineArgs%2A> must be used to retrieve command-line arguments.  
  
-   Making a non-virtual call to a virtual function. For example:  
  
    ```  
    // not_verifiable.cpp  
    // compile with: /clr  
    ref struct A {  
       virtual void Test() {}  
    };  
  
    ref struct B : A {};  
  
    int main() {  
       B^ b1 = gcnew B;  
       b1->A::Test();   // Non-virtual call to virtual function  
    }  
    ```  
  
 Also, the following keywords cannot be used in verifiable code:  
  
-   [unmanaged](../preprocessor/managed-unmanaged.md) and [pack](../preprocessor/pack.md) pragmas  
  
-   [naked](../cpp/naked-cpp.md) and [align](../cpp/align-cpp.md) [__declspec](../cpp/declspec.md) modifiers  
  
-   [__asm](../assembler/inline/asm.md)  
  
-   [__based](../cpp/based-grammar.md)  
  
-   [__try](../cpp/try-except-statement.md) and `__except`  
  
## See Also  
 [Pure and Verifiable Code (C++/CLI)](../dotnet/pure-and-verifiable-code-cpp-cli.md)