---
title: "Assignment Operators | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - ">>="
  - "xor_eq"
  - "&="
  - "<<="
  - "-="
  - "and_eq"
  - "^="
  - "|="
  - "/="
  - "%="
  - "or_eq"
  - "+="
  - "*="
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "or_eq operator"
  - "&= operator"
  - "operators [C++], assignment"
  - "assignment operators, C++"
  - "xor_eq operator"
  - "+= operator"
  - "and_eq operator"
  - ">>= operator"
  - "|= operator"
  - "operator>>="
  - "*= operator"
  - "%= operator"
  - "^= operator"
  - "operator >>="
  - "= operator"
  - "assignment operators"
  - "-= operator"
  - "/= operator"
  - "<<= operator"
ms.assetid: b028cf35-2ff1-4f14-9027-fd53ebec8aa0
caps.latest.revision: 8
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
# Assignment Operators
## Syntax  
  
```  
  
      expression assignment-operator expression   
assignment-operator : one of  
   =   *=   /=   %=   +=   –=   <<=   >>=   &=   ^=   |=  
```  
  
## Remarks  
 Assignment operators store a value in the object designated by the left operand. There are two kinds of assignment operations: simple assignment, in which the value of the second operand is stored in the object specified by the first operand, and compound assignment, in which an arithmetic, shift, or bitwise operation is performed prior to storing the result. All assignment operators in the following table except the = operator are compound assignment operators.  
  
### Assignment Operators  
  
|Operator|Meaning|  
|--------------|-------------|  
|**=**|Store the value of the second operand in the object specified by the first operand (simple assignment).|  
|**\*=**|Multiply the value of the first operand by the value of the second operand; store the result in the object specified by the first operand.|  
|`/=`|Divide the value of the first operand by the value of the second operand; store the result in the object specified by the first operand.|  
|`%=`|Take modulus of the first operand specified by the value of the second operand; store the result in the object specified by the first operand.|  
|`+=`|Add the value of the second operand to the value of the first operand; store the result in the object specified by the first operand.|  
|**–=**|Subtract the value of the second operand from the value of the first operand; store the result in the object specified by the first operand.|  
|**<\<=**|Shift the value of the first operand left the number of bits specified by the value of the second operand; store the result in the object specified by the first operand.|  
|**>>=**|Shift the value of the first operand right the number of bits specified by the value of the second operand; store the result in the object specified by the first operand.|  
|**&=**|Obtain the bitwise AND of the first and second operands; store the result in the object specified by the first operand.|  
|`^=`|Obtain the bitwise exclusive OR of the first and second operands; store the result in the object specified by the first operand.|  
|`&#124;=`|Obtain the bitwise inclusive OR of the first and second operands; store the result in the object specified by the first operand.|  
  
 **Operator Keywords**  
  
 Three of the compound assignment operators have text equivalents. They are:  
  
|Operator|Equivalent|  
|--------------|----------------|  
|**&=**|`and_eq`|  
|`&#124;=`|`or_eq`|  
|`^=`|`xor_eq`|  
  
 There are two ways to access these operator keywords in your programs: include the header file `iso646.h`, or compile with the [/Za](../build/reference/za-ze-disable-language-extensions.md) (Disable language extensions) compiler option.  
  
## Example  
  
```  
// expre_Assignment_Operators.cpp  
// compile with: /EHsc  
// Demonstrate assignment operators  
#include <iostream>  
using namespace std;  
int main() {  
   int a = 3, b = 6, c = 10, d = 0xAAAA, e = 0x5555;  
  
   a += b;      // a is 9  
   b %= a;      // b is 6  
   c >>= 1;      // c is 5  
   d |= e;      // Bitwise--d is 0xFFFF   
  
   cout  << "a = 3, b = 6, c = 10, d = 0xAAAA, e = 0x5555" << endl  
         << "a += b yields " << a << endl  
         << "b %= a yields " << b << endl  
         << "c >>= 1 yields " << c << endl  
         << "d |= e yields " << hex << d << endl;  
}  
```  
  
## Simple assignment  
 The simple assignment operator (=) causes the value of the second operand to be stored in the object specified by the first operand. If both objects are of arithmetic types, the right operand is converted to the type of the left, prior to storing the value.  
  
 Objects of const and volatile types can be assigned to l-values of types that are just volatile or that are neither const nor volatile.  
  
 Assignment to objects of class type (struct, union, and class types) is performed by a function named operator=. The default behavior of this operator function is to perform a bitwise copy; however, this behavior can be modified using overloaded operators. (See [Overloaded Operators](../cpp/operator-overloading.md) for more information.)  
  
 An object of any unambiguously derived class from a given base class can be assigned to an object of the base class. The reverse is not true because there is an implicit conversion from derived class to base class but not from base class to derived class. For example:  
  
```  
// expre_SimpleAssignment.cpp  
// compile with: /EHsc  
#include <iostream>  
using namespace std;  
class ABase  
{  
public:  
    ABase() { cout << "constructing ABase\n"; }  
};  
  
class ADerived : public ABase  
{  
public:  
    ADerived() { cout << "constructing ADerived\n"; }  
};  
  
int main()  
{  
    ABase aBase;  
    ADerived aDerived;  
  
    aBase = aDerived; // OK  
    aDerived = aBase; // C2679  
}  
```  
  
 Assignments to reference types behave as if the assignment were being made to the object to which the reference points.  
  
 For class-type objects, assignment is different from initialization. To illustrate how different assignment and initialization can be, consider the code  
  
```  
UserType1 A;  
UserType2 B = A;  
```  
  
 The preceding code shows an initializer; it calls the constructor for `UserType2` that takes an argument of type `UserType1`. Given the code  
  
```  
UserType1 A;  
UserType2 B;  
  
B = A;  
```  
  
 the assignment statement  
  
```  
B = A;   
```  
  
 can have one of the following effects:  
  
-   Call the function operator= for `UserType2`, provided operator= is provided with a `UserType1` argument.  
  
-   Call the explicit conversion function `UserType1::operator UserType2`, if such a function exists.  
  
-   Call a constructor `UserType2::UserType2`, provided such a constructor exists, that takes a `UserType1` argument and copies the result.  
  
## Compound assignment  
 The compound assignment operators, shown in the table in [Assignment Operators](../cpp/assignment-operators.md), are specified in the form *e1* `op`= *e2*, where *e1* is a modifiable l-value not of const type and *e2* is one of the following:  
  
-   An arithmetic type  
  
-   A pointer, if `op` is + or –  
  
 The *e1* `op`= *e2* form behaves as *e1* *= e1* `op` *e2*, but *e1* is evaluated only once.  
  
 Compound assignment to an enumerated type generates an error message. If the left operand is of a pointer type, the right operand must be of a pointer type or it must be a constant expression that evaluates to 0. If the left operand is of an integral type, the right operand must not be of a pointer type.  
  
## Result of assignment operators  
 The assignment operators return the value of the object specified by the left operand after the assignment. The resultant type is the type of the left operand. The result of an assignment expression is always an l-value. These operators have right-to-left associativity. The left operand must be a modifiable l-value.  
  
 In ANSI C, the result of an assignment expression is not an l-value. Therefore, the legal C++ expression `(a += b) += c` is illegal in C.  
  
## See Also  
 [Expressions with Binary Operators](../cpp/expressions-with-binary-operators.md)   
 [C++ Built-in Operators, Precedence and Associativity](../cpp/cpp-built-in-operators-precedence-and-associativity.md)   
 [C Assignment Operators](../c-language/c-assignment-operators.md)