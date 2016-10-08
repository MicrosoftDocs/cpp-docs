---
title: "How to: Migrate to -clr:safe (C++-CLI)"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
H1: How to: Migrate to /clr:safe (C++/CLI)
ms.assetid: 75f9aae9-1dcc-448a-aa11-2d96f972f9d2
caps.latest.revision: 15
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# How to: Migrate to -clr:safe (C++-CLI)
Visual C++ can generate verifiable components by using **/clr:safe**, which causes the compiler to generate errors for each non-verifiable code construct.  
  
## Remarks  
 The following issues generate verifiability errors:  
  
-   Native types. Even if it isn't used, the declaration of native classes, structures, pointers, or arrays will prevent compilation.  
  
-   Global variables  
  
-   Function calls into any unmanaged library, including common language runtime function calls  
  
-   A verifiable function cannot contain a [static_cast Operator](../VS_visualcpp/static_cast-Operator.md) for down-casting. The [static_cast Operator](../VS_visualcpp/static_cast-Operator.md) can be used for casting between primitive types, but for down-casting, [safe_cast](../VS_visualcpp/safe_cast--C---Component-Extensions-.md) or a C-Style cast (which is implemented as a [safe_cast](../VS_visualcpp/safe_cast--C---Component-Extensions-.md)) must be used.  
  
-   A verifiable function cannot contain a [reinterpret_cast Operator](../VS_visualcpp/reinterpret_cast-Operator.md) (or any C-style cast equivalent).  
  
-   A verifiable function cannot perform arithmetic on an [interior_ptr (C++/CLI)](../VS_visualcpp/interior_ptr--C---CLI-.md). It may only assign to it and dereference it.  
  
-   A verifiable function can only throw or catch pointers to reference types, so value types must be boxed before throwing.  
  
-   A verifiable function can only call verifiable functions (such that calls to the common language runtime are not allowed, include `AtEntry`/`AtExit`, and so global constructors are disallowed).  
  
-   A verifiable class cannot use <xref:System.Runtime.InteropServices.LayoutKind?qualifyHint=False>.  
  
-   If building an EXE, a main function cannot declare any parameters, so <xref:System.Environment.GetCommandLineArgs?qualifyHint=False> must be used to retrieve command-line arguments.  
  
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
  
-   [unmanaged](../VS_visualcpp/managed--unmanaged.md) and [pack](../VS_visualcpp/pack.md) pragmas  
  
-   [naked](../VS_visualcpp/naked--C---.md) and [align](../VS_visualcpp/align--C---.md) [__declspec](../VS_visualcpp/__declspec.md) modifiers  
  
-   [__asm](../VS_visualcpp/__asm.md)  
  
-   [__based](../VS_visualcpp/__based-Grammar.md)  
  
-   [__try](../VS_visualcpp/try-except-Statement.md) and `__except`  
  
## See Also  
 [Pure and Verifiable Code (C++/CLI)](../VS_visualcpp/Pure-and-Verifiable-Code--C---CLI-.md)