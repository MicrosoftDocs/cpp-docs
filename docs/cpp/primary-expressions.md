---
title: "Primary Expressions | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-language"]
ms.topic: "language-reference"
dev_langs: ["C++"]
helpviewer_keywords: ["primary expressions", "expressions [C++], name", "expressions [C++], literal", "expressions [C++], primary", "expressions [C++], qualified names"]
ms.assetid: 8ef9a814-6058-4b93-9b6e-e8eb8350b1ca
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Primary Expressions
Primary expressions are the building blocks of more complex expressions. They are literals, names, and names qualified by the scope-resolution operator (`::`).  A primary expression may have any of the following forms:  
  
```  
  
literal  
this
name  
::name ( expression )  
```  
  
 A *literal* is a constant primary expression. Its type depends on the form of its specification. See [Literals](../cpp/numeric-boolean-and-pointer-literals-cpp.md) for complete information about specifying literals.  
  
 The **this** keyword is a pointer to a class object. It is available within nonstatic member functions and points to the instance of the class for which the function was invoked. The **this** keyword cannot be used outside the body of a class-member function.  
  
 The type of the **this** pointer is `type` **\*const** (where `type` is the class name) within functions not specifically modifying the **this** pointer. The following example shows member function declarations and the types of **this**:  
  
```cpp 
// expre_Primary_Expressions.cpp  
// compile with: /LD  
class Example  
{  
public:  
    void Func();          //  * const this  
    void Func() const;    //  const * const this  
    void Func() volatile; //  volatile * const this  
};  
```  
  
 See [this Pointer](this-pointer.md) for more information about modifying the type of the **this** pointer.  
  
 The scope-resolution operator (`::`) followed by a name constitutes a primary expression.  Such names must be names at global scope, not member names.  The type of this expression is determined by the declaration of the name. It is an l-value (that is, it can appear on the left hand side of an assignment operator expression) if the declaring name is an l-value. The scope-resolution operator allows a global name to be referred to, even if that name is hidden in the current scope. See [Scope](../cpp/scope-visual-cpp.md) for an example of how to use the scope-resolution operator.  
  
 An expression enclosed in parentheses is a primary expression whose type and value are identical to those of the unparenthesized expression. It is an l-value if the unparenthesized expression is an l-value.  
  
 Examples of primary expressions include:  
  
```cpp 
100 // literal  
'c' // literal  
this // in a member function, a pointer to the class instance  
::func // a global function  
::operator + // a global operator function  
::A::B // a global qualified name  
( i + 1 ) // a parenthesized expression  
```  
  
 The examples below are all considered *names*, and hence primary expressions, in various forms:  
  
```cpp 
MyClass // a identifier  
MyClass::f // a qualified name  
operator = // an operator function name  
operator char* // a conversion operator function name  
~MyClass // a destructor name  
A::B   // a qualified name  
A<int> // a template id  
```  
  
## See Also  
 [Types of Expressions](../cpp/types-of-expressions.md)