---
title: "Functions with Variable Argument Lists  (C++) | Microsoft Docs"
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
  - "arguments [C++], variable number of"
  - "variable argument lists"
  - "declarators, functions"
  - "argument lists [C++], variable number of"
  - "declaring functions, variables"
  - "function calls, variable number of arguments"
ms.assetid: 27c2f83a-21dd-44c6-913c-2834cb944703
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
# Functions with Variable Argument Lists  (C++)
Function declarations in which the last member of  is the ellipsis (...) can take a variable number of arguments. In these cases, C++ provides type checking only for the explicitly declared arguments. You can use variable argument lists when you need to make a function so general that even the number and types of arguments can vary. The  family of functions is an example of functions that use variable argument lists.`printf`*argument-declaration-list*  
  
## Functions with variable arguments  
 To access arguments after those declared, use the macros contained in the standard include file STDARG.H as described below.  
  
 **Microsoft Specific**  
  
 Microsoft C++ allows the ellipsis to be specified as an argument if the ellipsis is the last argument and the ellipsis is preceded by a comma. Therefore, the declaration `int Func( int i, ... );` is legal, but `int Func( int i ... );` is not.  
  
 **END Microsoft Specific**  
  
 Declaration of a function that takes a variable number of arguments requires at least one placeholder argument, even if it is not used. If this placeholder argument is not supplied, there is no way to access the remaining arguments.  
  
 When arguments of type `char` are passed as variable arguments, they are converted to type `int`. Similarly, when arguments of type **float** are passed as variable arguments, they are converted to type **double**. Arguments of other types are subject to the usual integral and floating-point promotions. See [Standard Conversions](standard-conversions.md) for more information.  
  
 Functions that require variable lists are declared by using the ellipsis (...) in the argument list. Use the types and macros that are described in the STDARG.H include file to access arguments that are passed by a variable list. For more information about these macros, see [va_arg, va_copy, va_end, va_start](../c-runtime-library/reference/va-arg-va-copy-va-end-va-start.md). in the documentation for the C Run-Time Library.  
  
 The following example shows how the macros work together with the  type (declared in STDARG.H): `va_list``va_end``va_arg``va_start`  
  
```  
// variable_argument_lists.cpp  
#include <stdio.h>  
#include <stdarg.h>  
  
//  Declaration, but not definition, of ShowVar.  
void ShowVar( char *szTypes, ... );  
int main() {  
   ShowVar( "fcsi", 32.4f, 'a', "Test string", 4 );  
}  
  
//  ShowVar takes a format string of the form  
//   "ifcs", where each character specifies the  
//   type of the argument in that position.  
//  
//  i = int  
//  f = float  
//  c = char  
//  s = string (char *)  
//  
//  Following the format specification is a variable   
//  list of arguments. Each argument corresponds to   
//  a format character in the format string to which   
// the szTypes parameter points   
void ShowVar( char *szTypes, ... ) {  
   va_list vl;  
   int i;  
  
   //  szTypes is the last argument specified; you must access   
   //  all others using the variable-argument macros.  
   va_start( vl, szTypes );  
  
   // Step through the list.  
   for( i = 0; szTypes[i] != '\0'; ++i ) {  
      union Printable_t {  
         int     i;  
         float   f;  
         char    c;  
         char   *s;  
      } Printable;  
  
      switch( szTypes[i] ) {   // Type to expect.  
         case 'i':  
            Printable.i = va_arg( vl, int );  
            printf_s( "%i\n", Printable.i );  
         break;  
  
         case 'f':  
             Printable.f = va_arg( vl, double );  
             printf_s( "%f\n", Printable.f );  
         break;  
  
         case 'c':  
             Printable.c = va_arg( vl, char );  
             printf_s( "%c\n", Printable.c );  
         break;  
  
         case 's':  
             Printable.s = va_arg( vl, char * );  
             printf_s( "%s\n", Printable.s );  
         break;  
  
         default:  
         break;  
      }  
   }  
   va_end( vl );  
}  
//Output:   
// 32.400002  
// a  
// Test string  
```  
  
 The previous example illustrates these important concepts:  
  
1.  You must establish a list marker as a variable of type `va_list` before any variable arguments are accessed. In the previous example, the marker is called `vl`.  
  
2.  The individual arguments are accessed by using the `va_arg` macro. You must tell the `va_arg` macro the type of argument to retrieve so that it can transfer the correct number of bytes from the stack. If you specify an incorrect type of a size different from that supplied by the calling program to `va_arg`, the results are unpredictable.  
  
3.  You should explicitly cast the result obtained by using the `va_arg` macro to the type that you want.  
  
 You must call the  macro to terminate variable-argument processing.`va_end`