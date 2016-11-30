---
title: "Overview of Declarators | Microsoft Docs"
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
  - "declarators, about declarators"
ms.assetid: 0f2e2312-80bd-4154-8345-718bd9ed2173
caps.latest.revision: 10
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
# Overview of Declarators
Declarators are the components of a declaration that specify names of objects or functions. Declarators also specify whether or not the named object is an object, pointer, reference or array.  While declarators do not specify the base type, they do modify the type information in the basic type to specify derived types such as pointers, references, and arrays.  Applied to functions, the declarator works with the type specifier to fully specify the return type of a function to be an object, pointer, or reference. (Specifiers, discussed in [Declarations and Definitions](declarations-and-definitions-cpp.md), convey properties such as type and storage class. Modifiers, discussed in this section and in [Microsoft-Specific Modifiers](../cpp/microsoft-specific-modifiers.md), modify declarators.) The following figure shows a complete declaration of `MyFunction`, and calls out the components of the declaration.  
  
 ![Modifiers, specifiers, and declarators](../cpp/media/vc38qy1.gif "vc38QY1")  
Specifiers, Modifiers, and Declarators  
  
 **Microsoft Specific**  
  
 Most Microsoft extended keywords can be used as modifiers to form derived types; they are not specifiers or declarators. (See [Microsoft-Specific Modifiers](../cpp/microsoft-specific-modifiers.md).)  
  
 **END Microsoft Specific**  
  
 Declarators appear in the declaration syntax after an optional list of specifiers. These specifiers are discussed in [Declarations.](declarations-and-definitions-cpp.md) A declaration can contain more than one declarator, but each declarator declares only one name.  
  
 The following sample declaration shows how specifiers and declarators are combined to form a complete declaration:  
  
```  
const char *pch, ch;  
```  
  
 In the preceding declaration, the keywords **const** and `char` make up the list of specifiers. Two declarators are listed: `*pch` and `ch`.  A declaration that declares multiple entities consists of a type specifier followed by a comma-separated list of declarators, terminated with a semicolon.  
  
 **Declarators for Simple Objects**  
  
 The declarator of a simple object such as an int or double is simply its name, with optional parentheses.  
  
 `int i; // declarator is i`  
  
 `int (i); // declarator is (i)`  
  
 **Declarators for Pointers, References and Arrays**  
  
 Pointer operators inserted in front of the name cause the object to be a pointer or reference.  The **\*** operator declares the name as a pointer; the **&** operator declares it as a reference.  
  
```  
int *i; // declarator is *i  
int **i; // declarator is **i;  
int &i = x; // declaratory is &i  
```  
  
 Appending `const` or `volatile` give the pointer these special properties.  The use of these specifiers in a declarator (as opposed to in the type specifier) modifies the properties of the pointer, not the object pointed to:  
  
```  
char *const cpc; // const pointer to char   
const char *pcc; // pointer to const char   
const char *const cpcc; // const pointer to const char  
```  
  
 Further information may be found in [const and volatile Pointers](../cpp/const-and-volatile-pointers.md).  
  
 A pointer to a member of a class or struct is declared with the appropriate nested name specifier:  
  
```  
int X::* pIntMember;   
int ::X::* pIntMember; // the initial :: specifies X is in global scope  
char Outer::Inner::* pIntMember; // pointer to char in a nested class  
```  
  
 Brackets enclosing an optional constant expression after the name cause the object to be an array.  Successive brackets declare additional dimensions to the array.  
  
```  
int i[5]; // array with five elements of type int numbered from 0 to 4  
int i[]; // array of unknown size  
char *s[4]; // array of pointers to char  
int i[2][2]; // two dimensional array  
```  
  
 **Declarators for Functions**  
  
 Parentheses containing the argument list are used after the name to declare a function.  The following declares a function of return type `int` and three arguments of type `int`.  
  
```  
int f(int a, int b, int c);  
```  
  
 For information on argument lists, see [Function Declarations](http://msdn.microsoft.com/en-us/3f9b4e14-60d2-47c1-acd8-4fa8fc988be7).  
  
 Pointers and references to functions are declared by prepending the pointer or reference operator to the function name as shown below.  Parentheses, normally optional, are required to distinguish a pointer to a function from a function that returns a pointer:  
  
```  
int (*pf)(int); // pointer to function returning int  
int *f(int i); // function returning pointer to int  
int (&pf)(int); // reference to function   
```  
  
 Pointers to member functions are distinguished by nested name specifiers:  
  
```  
int (X::* pmf)(); // pointer to member function of X returning int  
int* (X::* pmf)(); // pointer to member function returning pointer to int  
```  
  
 See also [Pointers to Members](../cpp/pointers-to-members.md).  
  
 **Functions and objects in the same declaration**  
  
 Functions and objects may be declared in the same declaration as follows:  
  
```  
int i, *j, f(int k);  // int, pointer to int, function returning int  
```  
  
 The syntax may be misleading in some circumstances.  The following declaration  
  
```  
int* i, f(int k);  // pointer to int, function returning int (not int*)  
```  
  
 may look like the declaration of an `int` pointer and a function returning `int*`, but it is not.  That's because the * is part of the declarator for `i`, not part of the declarator for `f`.  
  
 **Simplifying declarator syntax with typedef**  
  
 A better technique, however, is to use a `typedef` or a combination of parentheses and the `typedef` keyword. Consider declaring an array of pointers to functions:  
  
```  
//  Function returning type int that takes one   
//   argument of type char *.  
typedef int (*PIFN)( char * );  
//  Declare an array of 7 pointers to functions   
//   returning int and taking one argument of type   
//   char *.  
PIFN pifnDispatchArray[7];  
```  
  
 The equivalent declaration can be written without the `typedef` declaration, but it is so complicated that the potential for error exceeds any benefits:  
  
```  
int ( *pifnDispatchArray[7] )( char * );  
```  
  
 For more information on typedef, see [typedef Specifier](http://msdn.microsoft.com/en-us/cc96cf26-ba93-4179-951e-695d1f5fdcf1).  
  
 Pointers, references, arrays of a single base type can be combined in a single declaration (separated by commas) as  
  
```  
int a, *b, c[5], **d, &e=a;  
```  
  
 **More complex declarator syntax**  
  
-   Pointer, reference, array, and function declarators may be combined to specify such objects as arrays of pointers to functions, pointers to arrays, etc.  
  
-   The following recursive grammar describes pointer declarator syntax fully.  
  
-   A `declarator` is defined as one of:  
  
```  
1. identifier   
2. qualified-name   
3. declarator ( argument-list ) [cv-qualfiers] [exception-spec]  
4. declarator [ [ constant-expression ] ]   
  
5. pointer-operatordeclarator   
6. ( declarator )  
```  
  
-   and *pointer-operator* is one of:  
  
```  
  
      * [cv-qualifiers]  
& [cv-qualifiers]  
::nested-name-specifier * [cv-qualfiers]  
```  
  
 Because a declarator may contain declarators, it is possible to construct the more complex derived types such as arrays of pointers, functions returning arrays of function pointers, by using the above rules.  To form each step of the construction, start with the identifier representing the base data type and apply the syntax rule above with the previous expression as the `declarator`.  The order that you apply the syntax rules should be the reverse of the way the expression is stated in English.  If applying the *pointer-operator* syntax rule to an array or function expression, use parentheses if you want a pointer to the array or function, as in the last row in the table below.  
  
 The following example shows the construction of "pointer to array of 10 pointers to int".  
  
|Verbal expression|Declarator|Syntax Rule Applied|  
|-----------------------|----------------|-------------------------|  
||`i`|1|  
|pointer(s) to|`*i`|5|  
|array of 10|`(*i)[10]`|4|  
|pointer to|`*((*i)[10])`|6 and then 5|  
  
 When multiple pointer, reference, array or function modifiers are used, declarators may become quite complicated.  The topic [Interpreting More Complex Declarators](../c-language/interpreting-more-complex-declarators.md) describes how to read more complex declarator syntax.  The topic is applicable to both C and C++, although in C++, anywhere the * is used to indicate a pointer, a qualified name such as MyClass::\* may be used to specify a pointer to a member of a class.