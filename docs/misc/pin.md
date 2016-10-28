---
title: "__pin"
ms.custom: ""
ms.date: "10/20/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "__pin"
  - "__pin_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "pinning pointers, __pin keyword"
  - "unmanaged types"
  - "__pin keyword"
ms.assetid: 8b55c792-5654-4669-bb0e-a52100f4cabe
caps.latest.revision: 8
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
# __pin
**Note** This topic applies only to version 1 of Managed Extensions for C++. This syntax should only be used to maintain version 1 code. See [pin_ptr (C++/CLI)](../windows/pin-ptr-cpp-cli.md) for information on using the equivalent functionality in the new syntax.  
  
 Prevents an object or embedded object of a managed class from being moved by the common language runtime during garbage collection.  
  
## Syntax  
  
```  
  
__pin   
identifier  
  
```  
  
## Remarks  
 The `__pin` keyword declares a pointer to an object or embedded object of a managed class and prevents that object from being moved during garbage collection by the common language runtime. This is useful when passing the address of a managed class to an unmanaged function because the address will not change unexpectedly during resolution of the unmanaged function call.  
  
 A pinning pointer remains valid in its lexical scope. As soon as the pinning pointer goes out of scope, the object is no longer considered pinned (unless, of course, there exist other pinning pointers pointing to or into the object).  
  
 The MSIL has no concept of "block scope" -- all local variables live in the scope of the function. To let the system know the pinning is no longer in effect, the compiler generates code that assigns NULL to the pinning pointer. This is also what you can do yourself, if you need to unpin the object without leaving the block.  
  
 You should not convert your pinning pointer to an unmanaged pointer and continue using this unmanaged pointer after the object is no longer pinned (after the pinning pointer goes out of scope). Unlike gc pointers, pinning pointers can be converted to nogc, unmanaged pointers. However, it is user's responsibility to maintain the pinning while the unmanaged pointer is in use.  
  
 Using a pinned pointer to get the address of a variable and then using that address after the pinning pointer goes out of scope, should not be done.  
  
```  
// keyword_pin_scope_bad.cpp  
// compile with: /clr:oldSyntax /LD  
#using <mscorlib.dll>  
__gc struct X {  
   int x;  
};  
  
int* Get_x( X* pX ) {  
   int __pin* px = &pX -> x;  
   return px;   // BE CAREFUL px goes of scope,   
                // so object pointed by it is no longer pinned,  
                // making the return value unsafe.  
}  
```  
  
 The following sample shows correct behavior:  
  
```  
// keyword_pin_scope_good.cpp  
// compile with: /clr:oldSyntax /LD  
#using <mscorlib.dll>  
__gc struct X {  
   int x;  
};  
  
int Get_x( X* pX ) {  
   int __pin* px = &pX -> x;  
   return *px;   // OK, value obtained from px before px out of scope  
}  
```  
  
## Example  
 In the following example, the object pointed to by `pG` is pinned until it passes out of scope:  
  
```  
// keyword__pin.cpp  
// compile with: /clr:oldSyntax  
#using <mscorlib.dll>  
#include <iostream>  
  
__gc class G {   
public:   
   int i;   
   G() {i = 0;};  
};  
  
class H {  
public:  
   // unmanaged function  
   void incr(int * i) {  
      (*i)++;   
      std::cout << *i << std::endl;  
   };  
};  
  
int main() {  
   G __pin * pG = new G;  // pG is a pinning pointer  
   H * h = new H;  
   // pointer to managed data passed as actual parameter of unmanaged   
   // function call  
   h->incr(& pG -> i);   
}  
```  
  
## Output  
  
```  
1  
```