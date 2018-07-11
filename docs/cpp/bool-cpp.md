---
title: "bool (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-language"]
ms.topic: "language-reference"
f1_keywords: ["bool_cpp", "__BOOL_DEFINED"]
dev_langs: ["C++"]
helpviewer_keywords: ["bool keyword [C++]", "__BOOL_DEFINED macro"]
ms.assetid: 9abed3f2-d21c-4eb4-97c5-716342e613d8
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# bool (C++)

This keyword is a built-in type. A variable of this type can have values [true](../cpp/true-cpp.md) and [false](../cpp/false-cpp.md). Conditional expressions have the type **bool** and so have values of type **bool**. For example, `i!=0` now has TRUE or FALSE depending on the value of `i`.  

**Visual Studio 2017 version 15.3 and later** (available with [/std:c++17](../build/reference/std-specify-language-standard-version.md)): The operand of a postfix or prefix increment or decrement operator may not be of type **bool**. In other words, given a variable `b` of type **bool**, these expressions are no longer allowed:

```cpp
    b++;
    ++b;
    b--;
    --b;
```
  
The values TRUE and FALSE have the following relationship:  
  
```cpp  
!false == true  
!true == false  
```  
  
In the following statement:  
  
```cpp  
if (condexpr1) statement1;   
```  
  
If `condexpr1` is TRUE, `statement1` is always executed; if `condexpr1` is FALSE, `statement1` is never executed.  
  
When a postfix or prefix **++** operator is applied to a variable of type **bool**, the variable is set to TRUE. 
**Visual Studio 2017 version 15.3 and later**: operator++ for **bool** was removed from the language and is no longer supported.

The postfix or prefix **--** operator cannot be applied to a variable of this type.  
  
 The **bool** type participates in integral promotions. An r-value of type **bool** can be converted to an r-value of type **int**, with FALSE becoming zero and TRUE becoming one. As a distinct type, **bool** participates in overload resolution.  
  
## See also

[Keywords](../cpp/keywords-cpp.md)<br/>
[Fundamental Types](../cpp/fundamental-types-cpp.md)<br/>
