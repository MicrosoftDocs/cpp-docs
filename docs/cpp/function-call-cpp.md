---
title: "Function Call (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "function calls, C++ functions"
  - "functions [C++], calling"
  - "operator overloading, function calls"
  - "function overloading, function-call operator"
  - "function calls, operator"
  - "operators [C++], overloading"
  - "operator overloading, examples"
  - "function call operator ( )"
ms.assetid: 5094254a-045b-46f7-8653-69bc91e80dce
caps.latest.revision: 7
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
# Function Call (C++)
The function-call operator, invoked using parentheses, is a binary operator.  
  
## Syntax  
  
```  
  
primary-expression ( expression-list )  
```  
  
## Remarks  
 In this context, `primary-expression` is the first operand, and `expression-list`, a possibly empty list of arguments, is the second operand. The function-call operator is used for operations that require a number of parameters. This works because `expression-list` is a list instead of a single operand. The function-call operator must be a nonstatic member function.  
  
 The function-call operator, when overloaded, does not modify how functions are called; rather, it modifies how the operator is to be interpreted when applied to objects of a given class type. For example, the following code would usually be meaningless:  
  
```  
Point pt;  
pt( 3, 2 );  
```  
  
 Given an appropriate overloaded function-call operator, however, this syntax can be used to offset the `x` coordinate 3 units and the `y` coordinate 2 units. The following code shows such a definition:  
  
```  
// function_call.cpp  
class Point  
{  
public:  
    Point() { _x = _y = 0; }  
    Point &operator()( int dx, int dy )  
        { _x += dx; _y += dy; return *this; }  
private:  
    int _x, _y;  
};  
  
int main()  
{  
   Point pt;  
   pt( 3, 2 );  
}  
```  
  
 Note that the function-call operator is applied to the name of an object, not the name of a function.  
  
 You can also overload the function call operator using a pointer to a function (rather than the function itself).  
  
```cpp  
typedef void(*ptf)();  
void func()  
{  
}  
struct S  
{  
   operator ptf()  
   {  
      return func;  
   }  
};  
  
int main()  
{  
   S s;  
   s();//operates as s.operator ptf()()  
}  
```  
  
## See Also  
 [Operator Overloading](../cpp/operator-overloading.md)