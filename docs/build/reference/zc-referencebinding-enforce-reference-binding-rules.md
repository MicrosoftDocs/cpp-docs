---
title: "/Zc:referenceBinding (Enforce reference binding rules) | Microsoft Docs"
ms.custom: ""
ms.date: "12/13/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "referenceBinding"
  - "/Zc:referenceBinding"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "-Zc compiler options (C++)"
  - "referenceBinding"
  - "Enforce reference binding rules"
  - "/Zc compiler options (C++)"
  - "Zc compiler options (C++)"
ms.assetid: 0c6cfaac-9c2a-41a3-aa94-64ca8ef261fc
caps.latest.revision: 1
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
# /Zc:referenceBinding (Enforce reference binding rules)
When the **/Zc:referenceBinding** option is specified, the compiler does not allow a non-const lvalue reference to bind to a temporary.  
  
## Syntax  
  
```  
/Zc:referenceBinding[-]  
```  
  
## Remarks  
If **/Zc:referenceBinding** is specified, the compiler follows section 8.5.3 of the C++11 standard and does not allow expressions that bind a user-defined type temporary to a non-const lvalue reference. By default, or if **/Zc:referenceBinding-** is specified, the compiler allows such expressions as a Microsoft extension, but a level 4 warning is issued. For code security, portability and conformance, we recommend that you use **/Zc:referenceBinding**. The [/permissive-](permissive-standards-conformance.md) compiler option implicitly sets this option, but it can be overridden by using **/Zc:referenceBinding-**.  
  
## Example  
  
This sample shows the Microsoft extension that allows a temporary of a user-defined type to be bound to a non-const lvalue reference.
```cpp  
// zcreferencebinding.cpp
struct S {
};

void f(S&) {
}

S g() {
    return S{};
}

void main() {
    S& s = g();         // warning C4239 at /W4
    const S& cs = g();  // okay, bound to const ref
    f(g());             // Extension: error C2664 only if /Zc:referenceBinding
}
```  
  
For more information about conformance issues in Visual C++, see [Nonstandard Behavior](../../cpp/nonstandard-behavior.md).  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Select the **C/C++** folder.  
  
3.  Select the **Command Line** property page.  
  
4.  Modify the **Additional Options** property to include **/Zc:referenceBinding** and then choose **OK**.  
  
## See Also  
[Compiler Options](../../build/reference/compiler-options.md)   
[Setting Compiler Options](../../build/reference/setting-compiler-options.md)   
[/Zc (Conformance)](../../build/reference/zc-conformance.md)