---
title: "Compiler Warning C4868 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4868"
ms.assetid: fc6aa7e5-34dd-4ec2-88bd-16e430361dc7
caps.latest.revision: 4
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Compiler Warning C4868
'file(line_number)' compiler may not enforce left-to-right evaluation order in braced initializer list  
  
 The elements of a braced initializer list are to be evaluated in left-to-right order. There are two cases in which the compiler is unable to guarantee this order: the first is when some of the elements are objects passed by value; the second is  when compiling with `/clr` and some of the elements are fields of objects or are array elements. When the compiler can't guarantee left-to-right evaluation it emits warning C4868.  
  
 This warning can be generated as a result of compiler conformance work that was done for Visual C++ 2015 Update 2. Code that compiled prior to Visual C++ 2015 Update 2 will now generate C4868.  
  
 This warning is off by default. Use `/Wall` to activate this warning.  
  
 To resolve this warning, first consider whether left-to-right evaluation of the initializer list elements is necessary, such as when evaluation of the elements might produce order-dependent side-effects. In many cases, the order in which elements are evaluated does not have an observable effect.  
  
 If the order of evaluation must be left-to-right, consider if it's possible to pass the elements by (const) reference instead. A change such as this eliminates the warning in the following code sample.  
  
## Example  
 The following sample generates C4868.  
  
```  
// C4868.cpp  
// compile with: /c /Wall  
#include <cstdio>  
  
class HasCopyConstructor  
{  
public:  
    int x;  
  
    HasCopyConstructor(int x): x(x) {}  
  
    HasCopyConstructor(const HasCopyConstructor& h): x(h.x)  
    {  
        printf("Constructing %d\n", h.x);  
    }  
};  
  
class TripWarning4868  
{  
public:  
    // note that taking "HasCopyConstructor" parameters by-value will trigger copy-construction.  
    TripWarning4868(HasCopyConstructor a, HasCopyConstructor b) {}  
  
    // This variation will not trigger the warning:  
    // TripWarning4868(const HasCopyConstructor& a, const HasCopyConstructor& b) {}  
};  
  
int main()  
{  
    HasCopyConstructor a{1};  
    HasCopyConstructor b{2};  
  
    // the warning will indicate the below line, the usage of the braced initializer list.  
    TripWarning4868 warningOnThisLine{a, b};  
};  
```