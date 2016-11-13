---
title: "partial  (C++ Component Extensions) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "partial_CPP"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "partial"
  - "C++/CX,partial"
ms.assetid: 43adf1f5-10c5-44aa-a66f-7507e2bdabf8
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# partial  (C++ Component Extensions)
The `partial` keyword enables different parts of the same ref class to be authored independently and in different files.  
  
## All Runtimes  
 (This language feature applies only to the [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)].)  
  
## [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)]  
 For a ref class that has two partial definitions, the `partial` keyword is applied to the first occurrence of the definition, and this is typically done by auto-generated code, so that a human coder doesn’t use the keyword very often. For all subsequent partial definitions of the class, omit the `partial` modifier from the *class-key* keyword and class identifier. When the compiler encounters a previously defined ref class and class identifier but no `partial` keyword, it internally combines all of the parts of the ref class definition into one definition.  
  
### Syntax  
  
```cpp  
  
      partial  
      class-key  
      identifier {  
   /* The first part of the partial class definition. This is typically auto-generated*/  
}  
// ...  
class-keyidentifier {  
   /* The subsequent part(s) of the class definition. The same identifier is specified, but the "partial" keyword is omitted. */  
}  
  
```  
  
### Parameters  
 *class-key*  
 A keyword that declares a class or struct that is supported by the [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)]. Either `ref class`, `value class`, `ref struct`, or `value struct`.  
  
 *identifier*  
 The name of the defined type.  
  
### Remarks  
 A partial class supports scenarios where you modify one part of a class definition in one file, and automatic code-generating software—for example, the XAML designer—modifies code in the same class in another file. By using a partial class, you can prevent the automatic code generator from overwriting your code. In a Visual Studio project, the `partial` modifier is applied automatically to the generated file.  
  
 Contents: With two exceptions, a partial class definition can contain anything that the full class definition could contain if the `partial` keyword was omitted. However, you can't specify class accessibility (for example, `public partial class X {…};`),  or a `declspec`.  
  
 Access specifiers used in a partial class definition for *identifier* do not affect the default accessibility in a subsequent partial or full class definition for *identifier*. Inline definitions of static data members are allowed.  
  
 Declaration: A partial definition of a class *identifier* only introduces the name *identifier*, but *identifier* cannot be used in a way that requires a class definition. The name *identifier* can't be used to know the size of *identifier*, or to use a base or member of *identifier* until after the compiler encounters the full definition of *identifier*.  
  
 Number and ordering: There can be zero or more partial class definitions for *identifier*. Every partial class definition of *identifier* must lexically precede the one full definition of *identifier* (if there is a full definition; otherwise, the class can't be used except as if forward-declared) but need not precede forward declarations of *identifier*. All class-keys must match.  
  
 Full definition: At the point of the full definition of the class *identifier*, the behavior is the same as if the definition of *identifier* had declared all base classes, members, etc. in the order in which they were encountered and defined in the partial classes.  
  
 Templates: A partial class cannot be a template.  
  
 Generics: A partial class can be a generic if the full definition could be generic. But every partial and full class must have exactly the same generic parameters, including formal parameter names.  
  
 For more information about how to use the `partial` keyword, see [Partial Classes (C++/CX)](http://go.microsoft.com/fwlink/p/?LinkId=249023).  
  
### Requirements  
 Compiler option: **/ZW**  
  
## Common Language Runtime  
 (This language feature does not apply to the Common Language Runtime.)  
  
## See Also  
 [Partial Classes (C++/CX)](http://go.microsoft.com/fwlink/p/?LinkId=249023)