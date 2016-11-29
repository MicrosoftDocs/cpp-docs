---
title: "Function Call Operator: () | Microsoft Docs"
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
  - "( ) function call operator"
  - "function calls, C++ functions"
  - "() function call operator"
  - "postfix operators"
  - "function calls, operator"
  - "functions [C++], function-call operator"
  - "function call operator ( )"
ms.assetid: 50c92e59-a4bf-415a-a6ab-d66c679ee80a
caps.latest.revision: 14
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
# Function Call Operator: ()
A postfix-expression followed by the function-call operator, **( )**, specifies a function call.  
  
## Syntax  
  
```  
postfix-expression   
( [argument-expression-list ] )  
```  
  
## Remarks  
 The arguments to the function-call operator are zero or more expressions separated by commas — the actual arguments to the function.  
  
 The *postfix-expression* must evaluate to a function address (for example, a function identifier or the value of a function pointer), and *argument-expression-list* is a list of expressions (separated by commas) whose values (the arguments) are passed to the function. The *argument-expression-list* argument can be empty.  
  
 The *postfix-expression* must be of one of these types:  
  
-   Function returning type `T`. An example declaration is  
  
    ```  
    T func( int i )  
    ```  
  
-   Pointer to a function returning type `T`. An example declaration is  
  
    ```  
    T (*func)( int i )  
    ```  
  
-   Reference to a function returning type `T`. An example declaration is  
  
    ```  
    T (&func)(int i)  
    ```  
  
-   Pointer-to-member function dereference returning type `T`. Example function calls are  
  
    ```  
    (pObject->*pmf)();  
    (Object.*pmf)();  
    ```  
  
## Example  
 The following example calls the standard library function `strcat_s` with three arguments:  
  
```  
// expre_Function_Call_Operator.cpp  
// compile with: /EHsc  
  
#include <iostream>  
#include <string>  
  
// STL name space  
using namespace std;  
  
int main()  
{  
    enum  
    {  
        sizeOfBuffer = 20  
    };  
  
    char s1[ sizeOfBuffer ] = "Welcome to ";  
    char s2[ ] = "C++";  
  
    strcat_s( s1, sizeOfBuffer, s2 );  
  
    cout << s1 << endl;  
}  
```  
  
```Output  
Welcome to C++  
```  
  
## Function call results  
 A function call evaluates to an r-value unless the function is declared as a reference type. Functions with reference return type evaluate to l-values, and can be used on the left side of an assignment statement as follows:  
  
```  
// expre_Function_Call_Results.cpp  
// compile with: /EHsc  
#include <iostream>  
class Point  
{  
public:  
    // Define "accessor" functions as  
    // reference types.  
    unsigned& x() { return _x; }  
    unsigned& y() { return _y; }  
private:  
    unsigned _x;  
    unsigned _y;  
};  
  
using namespace std;  
int main()  
{  
    Point ThePoint;  
  
    ThePoint.x() = 7;           // Use x() as an l-value.  
    unsigned y = ThePoint.y();  // Use y() as an r-value.  
  
    // Use x() and y() as r-values.  
    cout << "x = " << ThePoint.x() << "\n"  
         << "y = " << ThePoint.y() << "\n";  
}  
```  
  
 The preceding code defines a class called `Point`, which contains private data objects that represent *x* and *y* coordinates. These data objects must be modified and their values retrieved. This program is only one of several designs for such a class; use of the `GetX` and `SetX` or `GetY` and `SetY` functions is another possible design.  
  
 Functions that return class types, pointers to class types, or references to class types can be used as the left operand to member-selection operators. Therefore, the following code is legal:  
  
```  
// expre_Function_Results2.cpp  
class A {  
public:  
   A() {}  
   A(int i) {}  
   int SetA( int i ) {  
      return (I = i);  
   }  
  
   int GetA() {  
      return I;  
   }  
  
private:  
   int I;  
};  
  
A func1() {  
   A a = 0;  
   return a;  
}  
  
A* func2() {  
   A *a = new A();  
   return a;  
}  
  
A& func3() {  
   A *a = new A();  
   A &b = *a;  
   return b;  
}  
  
int main() {  
   int iResult = func1().GetA();  
   func2()->SetA( 3 );  
   func3().SetA( 7 );  
}  
```  
  
 Functions can be called recursively. For more information about function declarations, see [Functions](functions-cpp.md). Related material is in [Program and Linkage](../cpp/program-and-linkage-cpp.md).  
  
## See Also  
 [Postfix Expressions](../cpp/postfix-expressions.md)   
 [C++ Built-in Operators, Precedence and Associativity](../cpp/cpp-built-in-operators-precedence-and-associativity.md)   
 [Function Call](../c-language/function-call-c.md)   
