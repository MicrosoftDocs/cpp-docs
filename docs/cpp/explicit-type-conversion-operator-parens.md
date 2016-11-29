---
title: "Explicit Type Conversion Operator: () | Microsoft Docs"
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
  - "explicit data type conversion operator"
  - "conversions [C++], explicit"
  - "operators [C++], explicit type conversion"
  - "data type conversion [C++], explicit"
  - "type conversion [C++], explicit conversions"
ms.assetid: 54272006-5ffb-45ed-8283-27152ab97529
caps.latest.revision: 6
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
# Explicit Type Conversion Operator: ()
C++ allows explicit type conversion using syntax similar to the function-call syntax.  
  
## Syntax  
  
```  
simple-type-name ( expression-list )  
```  
  
## Remarks  
 A *simple-type-name* followed by an *expression-list* enclosed in parentheses constructs an object of the specified type using the specified expressions. The following example shows an explicit type conversion to type int:  
  
```  
int i = int( d );  
```  
  
 The following example shows a `Point` class.  
  
## Example  
  
```  
// expre_Explicit_Type_Conversion_Operator.cpp  
// compile with: /EHsc  
#include <iostream>  
  
using namespace std;  
class Point  
{  
public:  
    // Define default constructor.  
    Point() { _x = _y = 0; }  
    // Define another constructor.  
    Point( int X, int Y ) { _x = X; _y = Y; }  
  
    // Define "accessor" functions as  
    // reference types.  
    unsigned& x() { return _x; }  
    unsigned& y() { return _y; }  
    void Show()   { cout << "x = " << _x << ", "  
                         << "y = " << _y << "\n"; }  
private:  
    unsigned _x;  
    unsigned _y;  
};  
  
int main()  
{  
    Point Point1, Point2;  
  
    // Assign Point1 the explicit conversion  
    //  of ( 10, 10 ).  
    Point1 = Point( 10, 10 );  
  
    // Use x() as an l-value by assigning an explicit  
    //  conversion of 20 to type unsigned.  
    Point1.x() = unsigned( 20 );  
    Point1.Show();  
  
    // Assign Point2 the default Point object.  
    Point2 = Point();  
    Point2.Show();  
}  
```  
  
## Output  
  
```  
x = 20, y = 10  
x = 0, y = 0  
```  
  
 Although the preceding example demonstrates explicit type conversion using constants, the same technique works to perform these conversions on objects. The following code fragment demonstrates this:  
  
```  
int i = 7;  
float d;  
  
d = float( i );  
```  
  
 Explicit type conversions can also be specified using the "cast" syntax. The previous example, rewritten using the cast syntax, is:  
  
```  
d = (float)i;  
```  
  
 Both cast and function-style conversions have the same results when converting from single values. However, in the function-style syntax, you can specify more than one argument for conversion. This difference is important for user-defined types. Consider a `Point` class and its conversions:  
  
```  
struct Point  
{  
    Point( short x, short y ) { _x = x; _y = y; }  
    ...  
    short _x, _y;  
};  
...  
Point pt = Point( 3, 10 );  
```  
  
 The preceding example, which uses function-style conversion, shows how to convert two values (one for *x* and one for *y*) to the user-defined type `Point`.  
  
> [!CAUTION]
>  Use the explicit type conversions with care, since they override the C++ compiler's built-in type checking.  
  
 The [cast](../cpp/cast-operator-parens.md) notation must be used for conversions to types that do not have a *simple-type-name* (pointer or reference types, for example). Conversion to types that can be expressed with a *simple-type-name* can be written in either form. See [Type Specifiers](http://msdn.microsoft.com/en-us/34b6c737-0ef1-4470-9b77-b26e46c0bbd4) for more information about what constitutes a *simple-type-name*.  
  
 Type definition within casts is illegal.  
  
## See Also  
 [Postfix Expressions](../cpp/postfix-expressions.md)   
 [C++ Built-in Operators, Precedence and Associativity](../cpp/cpp-built-in-operators-precedence-and-associativity.md)