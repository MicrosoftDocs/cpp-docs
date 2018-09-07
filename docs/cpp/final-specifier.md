---
title: "final Specifier | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-language"]
ms.topic: "language-reference"
f1_keywords: ["final_CPP"]
dev_langs: ["C++"]
helpviewer_keywords: ["final Identifier"]
ms.assetid: 649866d0-79d4-449f-ab74-f84b911b79a3
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# final Specifier
You can use the **final** keyword to designate virtual functions that cannot be overridden in a derived class. You can also use it to designate classes that cannot be inherited.  
  
## Syntax  
  
```  
function-declaration final;  
class class-name final base-classes  
```  
  
## Remarks  
 **final** is context-sensitive and has special meaning only when it's used after a function declaration or class name; otherwise, it's not a reserved keyword.  
  
 When **final** is used in class declarations, `base-classes` is an optional part of the declaration.  
  
## Example  
 The following example uses the **final** keyword to specify that a virtual function cannot be overridden.  
  
```cpp  
class BaseClass  
{  
    virtual void func() final;  
};  
  
class DerivedClass: public BaseClass  
{  
    virtual void func(); // compiler error: attempting to   
                         // override a final function  
};  
```  
  
 For information about how to specify that member functions can be overridden, see [override Specifier](../cpp/override-specifier.md).  
  
 The next example uses the **final** keyword to specify that a class cannot be inherited.  
  
```cpp  
class BaseClass final   
{  
};  
  
class DerivedClass: public BaseClass // compiler error: BaseClass is   
                                     // marked as non-inheritable  
{  
};  
```  
  
## See also  
 [Keywords](../cpp/keywords-cpp.md)   
 [override Specifier](../cpp/override-specifier.md)