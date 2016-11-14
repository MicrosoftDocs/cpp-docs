---
title: "Numeric, Boolean and Pointer Literals  (C++) | Microsoft Docs"
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
  - "literals, C++"
  - "constants, literals"
  - "literals"
ms.assetid: 17c09fc3-3ad7-47e2-8b48-ba8ae994edc8
caps.latest.revision: 16
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
# Numeric, Boolean and Pointer Literals  (C++)
A literal is a program element that directly represents a value. This article covers literals of type integer, floating-point, boolean and pointer. For information about string and character literals, see [String and Character Literals  (C++)](../cpp/string-and-character-literals-cpp.md). You can also define your own literals based on any of these categories; for more information see [User-Defined Literals  (C++)](../cpp/user-defined-literals-cpp.md)  
  
 . You can use literals in many contexts, but most commonly to initialize named variables and to pass arguments to functions:  
  
```  
const int answer = 42; // integer literal  
double d = sin(108.87);     //floating point literal passed to sin function  
bool b = true;              // boolean literal  
MyClass* mc = nullptr;      // pointer literal  
  
```  
  
 Sometimes it's important to tell the compiler how to interpret a literal, or what specific type to give to it. You do this by appending prefixes or suffixes to the literal. For example, the  prefix 0x tells the compiler to interpret the number that follows it as a hexadecimal value, for example 0x35. The ULL suffix tells the compiler to treat the value as an `unsigned long long` type, as in 5894345ULL. See the following sections for the complete list of prefixes and suffixes for each literal type.  
  
## Syntax  
  
## Integer literals  
 Integer literals begin with a digit and have no fractional parts or exponents. You can specify integer literals in decimal, octal, or hexadecimal form. They can specify signed or unsigned types and long or short types.  
  
 When no prefix or suffix is present, the compiler will give an integral literal value type `int` (32 bits), if the value will fit, otherwise it will give it type `long long` (64 bits).  
  
 To specify a decimal integral literal, begin the specification with a nonzero digit. For example:  
  
```  
int i = 157;   // Decimal literal  
int j = 0198;       // Not a decimal number; erroneous octal literal  
int k = 0365;       // Leading zero specifies octal literal, not decimal  
int m = 36'000'000  // digit separators make large values more readable  
int   
```  
  
 To specify an octal integral literal, begin the specification with 0, followed by a sequence of digits in the range 0 through 7. The digits 8 and 9 are errors in specifying an octal literal. For example:  
  
```  
int i = 0377;   // Octal literal  
int j = 0397;        // Error: 9 is not an octal digit  
```  
  
 To specify a hexadecimal integral literal, begin the specification with `0x` or `0X` (the case of the "x" does not matter), followed by a sequence of digits in the range `0` through `9` and `a` (or `A`) through `f` (or `F`). Hexadecimal digits `a` (or `A`) through `f` (or `F`) represent values in the range 10 through 15. For example:  
  
```  
int i = 0x3fff;   // Hexadecimal literal  
int j = 0X3FFF;        // Equal to i  
```  
  
 To specify an unsigned type, use either the **u** or **U** suffix. To specify a long type, use either the **l** or **L** suffix. To specify a 64-bit integral type, use the LL, or ll suffix. The i64 suffix is still supported but should be avoided because it is specific to Microsoft and is not portable. For example:  
  
```  
unsigned val_1 = 328u;             // Unsigned value  
long val_2 = 0x7FFFFFL;                 // Long value specified   
                                        //  as hex literal  
unsigned long val_3 = 0776745ul;        // Unsigned long value  
auto val_4 = 108LL;                           // signed long long  
auto val_4 = 0x8000000000000000ULL << 16;     // unsigned long long   
```  
  
 **Digit separators**: You can use the single-quote character (apostrophe) to separate place values in larger numbers to make them easier for humans to read. Separators have no effect on compilation.  
  
```  
long long i = 24'847'458'121  
```  
  
## Floating point literals  
 Floating-point literals specify values that must have a fractional part. These values contain decimal points (**.**) and can contain exponents.  
  
 Floating-point literals have a "mantissa," which specifies the value of the number, an "exponent," which specifies the magnitude of the number, and an optional suffix that specifies the literal's type. The mantissa is specified as a sequence of digits followed by a period, followed by an optional sequence of digits representing the fractional part of the number. For example:  
  
```  
18.46  
38.  
```  
  
 The exponent, if present, specifies the magnitude of the number as a power of 10, as shown in the following example:  
  
```  
18.46e0      // 18.46  
18.46e1           // 184.6  
```  
  
 The exponent may be specified using **e** or **E**, which have the same meaning, followed by an optional sign (+ or -) and a sequence of digits.  If an exponent is present, the trailing decimal point is unnecessary in whole numbers such as `18E0`.  
  
 Floating-point literals default to type **double**. By using the suffixes **f** or **l** (or **F** or **L** — the suffix is not case sensitive), the literal can be specified as **float** or `long double`, respectively.  
  
 Although `long double` and **double** have the same representation, they are not the same type. For example, you can have overloaded functions like  
  
```  
void func( double );  
```  
  
 and  
  
```  
void func( long double );  
```  
  
## Boolean literals  
 The boolean literals are `true` and `false`.  
  
## Pointer literal (C++11)  
 C++ introduces the [nullptr](../cpp/nullptr.md) literal to specify a zero-initialized pointer. In portable code, `nullptr` should be used instead of integral-type zero or macros such as NULL.  
  
## Binary literals (C++14)  
 A binary literal can be specified by the use of the `0B` or `0b` prefix, followed by a sequence of 1's and 0's:  
  
```  
  
auto x = 0B001101 ; // int  
auto y = 0b000001 ; // int  
```  
  
## Avoid using literals as "magic constants"  
 You can use literals directly in expressions and statements although it's not always good programming practice:  
  
```  
if (num < 100)  
    return "Success";  
  
```  
  
 In the previous example, it might be better to use a named constant that conveys a clear meaning, for example "MAXIMUM_ERROR_THRESHOLD". And if the return value "Success" is seen by end users, then it might be better to use a named string constant that can be stored in a single location in a file from where it can be localized into other languages. Using named constants helps others as well as yourself to understand the intent of the code.  
  
## See Also  
 [Lexical Conventions](../cpp/lexical-conventions.md)   
 [C++ Integer Constants](http://msdn.microsoft.com/en-us/1f3b58a4-8346-4533-ba6e-df26d76f8dcf)   
 [C++ Character Literals](http://msdn.microsoft.com/en-us/a7901c61-524d-47c6-beb6-d9dacc2e72ed)   
 [C++ Floating-Point Constants](http://msdn.microsoft.com/en-us/f6273f24-a876-4484-a7a2-e82275692ad3)   
 [C++ String Literals](../cpp/string-and-character-literals-cpp.md)   
 [C++ User-Defined Literals](../cpp/user-defined-literals-cpp.md)