---
title: "__nogc | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "__nogc_cpp"
  - "__nogc"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__nogc type declarations"
  - "classes [C++], unmanaged type"
  - "unmanaged classes, declaration of"
  - "unmanaged classes"
ms.assetid: 3e7f1b09-0fc3-4a8f-9458-a22f7a38ce45
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
translation.priority.mt: 
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
# __nogc
> [!NOTE]
>  This topic applies only to version 1 of Managed Extensions for C++. This syntax should only be used to maintain version 1 code. In the new syntax, you do not need to explicitly mark a type as unmanaged.  
  
 Explicitly declares an unmanaged type.  
  
## Syntax  
  
```  
  
      __nogc   
      class-specifier  
__nogc struct-specifier  
__nogc interface-specifier  
__nogc array-specifier  
__nogc pointer-specifier  
__nogc new  
```  
  
## Remarks  
 The `__nogc` keyword is used to explicitly specify that an object is allocated on the standard C++ heap. This keyword is optional. If you don't specify `__gc` or `__nogc` in front of a class declaration, it defaults to `__nogc`.  
  
 Objects of this type are similar to standard C++ objects in that they are allocated from the standard C++ heap and are not subject to the restrictions of a managed object.  
  
 The `__nogc` keyword is also used when an object of a __value type is explicitly allocated on the standard C++ heap:  
  
```  
// keyword__nogc.cpp  
// compile with: /clr:oldSyntax  
#using <mscorlib.dll>  
__value struct V {   
   int i;  
};  
int main() {  
   V * v = __nogc new V;  
   v->i = 10;  
   delete v;  
}  
```  
  
> [!NOTE]
>  The `__nogc` keyword can also be applied to array and pointer types.  
  
 A gc pointer cannot be a member of a `__nogc` class. See [__value](../misc/value.md) for guidelines on embedding a value type in a `__nogc` class.  
  
## Example  
 In the following example, an unmanaged class is declared (`X`) and an object is instantiated and modified:  
  
```  
// keyword__nogc_2.cpp  
// compile with: /clr:oldSyntax  
#using <mscorlib.dll>  
using namespace System;  
  
__nogc class X {  
public:  
   int i;  
};  
  
int main() {  
   X* x;   // declares an unmanaged pointer of type X  
   x = new X();   // creates unmanaged object of type X on the C++ heap  
   Console::WriteLine(x->i);  
  
   x->i = 4;   // modifies unmanaged object  
   Console::WriteLine(x->i);  
  
   delete x;   // call C++ delete operator to clean up resource  
}  
```  
  
 **48378256**  
**4**