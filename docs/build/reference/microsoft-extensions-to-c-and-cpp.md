---
title: "Microsoft Extensions to C and C++ | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "or_eq operator"
  - "~ operator, extensions to C/C++"
  - "& operator, extensions to C/C++"
  - "&= operator"
  - "iso646.h header"
  - "Xor operator, Microsoft extensions to C/C++"
  - "!= operator"
  - "! operator, extension to C++"
  - "Or operator, Microsoft extensions to C/C++"
  - "^ operator, extensions to C/C++"
  - "^= operator, C++ extensions"
  - "xor_eq operator"
  - "and_eq operator"
  - "Microsoft extensions to C/C++"
  - "|= operator"
  - "|| operator"
  - "And operator, extensions to C/C++"
  - "NOT operator"
  - "&& operator"
  - "extensions, C language"
  - "Visual C++, extensions to C/C++"
  - "| operator, extensions"
  - "not_eq operator"
  - "Visual C, Microsoft extensions"
  - "extensions"
  - "compl method"
ms.assetid: e811a74a-45ba-4c00-b206-2f2321b8689a
caps.latest.revision: 18
author: "corob-msft"
ms.author: "corob"
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
# Microsoft Extensions to C and C++
Visual C++ extends the ANSI C and ANSI C++ standards as follows.  
  
## Keywords  
 Several keywords are added. In the list in [Keywords](../../cpp/keywords-cpp.md), the keywords that have two leading underscores are Visual C++ extensions.  
  
## Out of Class Definition of static const Integral (or enum) Members  
 Under the standard (**/Za**), you must make an out-of-class definition for data members, as shown here:  
  
```  
  
      class CMyClass  {  
   static const int max = 5;  
   int m_array[max];  
}  
...  
const int CMyClass::max;   // out of class definition  
```  
  
 Under **/Ze**, the out-of-class definition is optional for static, const integral, and const enum data members. Only integrals and enums that are static and const can have initializers in a class; the initializing expression must be a const expression.  
  
 To avoid errors when an out-of-class definition is provided in a header file and the header file is included in multiple source files, use [selectany](../../cpp/selectany.md). For example:  
  
```  
__declspec(selectany) const int CMyClass::max = 5;  
```  
  
## Casts  
 Both the C++ compiler and C compiler support these kinds of non-ANSI casts:  
  
-   Non-ANSI casts to produce l-values. For example:  
  
    ```  
    char *p;  
    (( int * ) p )++;  
    ```  
  
    > [!NOTE]
    >  This extension is available in the C language only. You can use the following ANSI C standard form in C++ code to modify a pointer as if it is a pointer to a different type.  
  
     The preceding example could be rewritten as follows to conform to the ANSI C standard.  
  
    ```  
    p = ( char * )(( int * )p + 1 );  
    ```  
  
-   Non-ANSI casts of a function pointer to a data pointer. For example:  
  
    ```  
    int ( * pfunc ) ();   
    int *pdata;  
    pdata = ( int * ) pfunc;  
    ```  
  
     To perform the same cast and also maintain ANSI compatibility, you can cast the function pointer to a `uintptr_t` before you cast it to a data pointer:  
  
    ```  
    pdata = ( int * ) (uintptr_t) pfunc;  
    ```  
  
## Variable-Length Argument Lists  
 Both the C++ compiler and C compiler support a function declarator that specifies a variable number of arguments, followed by a function definition that provides a type instead:  
  
```  
void myfunc( int x, ... );  
void myfunc( int x, char * c )  
{ }  
```  
  
## Single-Line Comments  
 The C compiler supports single-line comments, which are introduced by using two forward slash (//) characters:  
  
```  
// This is a single-line comment.  
```  
  
## Scope  
 The C compiler supports the following scope-related features.  
  
-   Redefinitions of extern items as static:  
  
    ```  
    extern int clip();  
    static int clip()  
    {}  
    ```  
  
-   Use of benign typedef redefinitions within the same scope:  
  
    ```  
    typedef int INT;  
    typedef int INT;  
    ```  
  
-   Function declarators have file scope:  
  
    ```  
    void func1()  
    {  
        extern int func2( double );  
    }  
    int main( void )  
    {  
        func2( 4 );    //  /Ze passes 4 as type double  
    }                  //  /Za passes 4 as type int  
    ```  
  
-   Use of block-scope variables that are initialized by using nonconstant expressions:  
  
    ```  
    int clip( int );  
    int bar( int );  
    int main( void )  
    {  
        int array[2] = { clip( 2 ), bar( 4 ) };  
    }  
    int clip( int x )  
    {  
        return x;  
    }  
    int bar( int x )  
    {  
        return x;  
    }  
    ```  
  
## Data Declarations and Definitions  
 The C compiler supports the following data declaration and definition features.  
  
-   Mixed character and string constants in an initializer:  
  
    ```  
    char arr[5] = {'a', 'b', "cde"};  
    ```  
  
-   Bit fields that have base types other than **unsigned int** or **signed int**.  
  
-   Declarators that don't have a type:  
  
    ```  
    x;  
    int main( void )  
    {  
        x = 1;  
    }  
    ```  
  
-   Unsized arrays as the last field in structures and unions:  
  
    ```  
    struct zero  
    {  
        char *c;  
        int zarray[];  
    };  
    ```  
  
-   Unnamed (anonymous) structures:  
  
    ```  
    struct  
    {  
        int i;  
        char *s;  
    };  
    ```  
  
-   Unnamed (anonymous) unions:  
  
    ```  
    union  
    {  
        int i;  
        float fl;  
    };  
    ```  
  
-   Unnamed members:  
  
    ```  
    struct s  
    {  
       unsigned int flag : 1;  
       unsigned int : 31;  
    }  
    ```  
  
## Intrinsic Floating-Point Functions  
 Both the C++ compiler and C compiler support inline generation **x86 Specific >** of the `atan`, `atan2`, `cos`, `exp`, `log`, `log10`, `sin`, `sqrt`, and `tan` functions **END x86 Specific** when **/Oi** is specified. For the C compiler, ANSI conformance is lost when these intrinsics are used, because they do not set the `errno` variable.  
  
## Passing a Non-Const Pointer Parameter to a Function that Expects a Reference to a Const Pointer Parameter  
 This is an extension to C++. This code will compile with **/Ze**:  
  
```  
typedef   int   T;  
  
const T  acT = 9;      // A constant of type 'T'  
const T* pcT = &acT;   // A pointer to a constant of type 'T'  
  
void func2 ( const T*& rpcT )   // A reference to a pointer to a constant of type 'T'  
{  
   rpcT = pcT;  
}  
  
T*   pT;               // A pointer to a 'T'  
  
void func ()  
{  
   func2 ( pT );      // Should be an error, but isn't detected  
   *pT   = 7;         // Invalidly overwrites the constant 'acT'  
}  
```  
  
## ISO646.H Not Enabled  
 Under **/Ze**, you have to include iso646.h if you want to use text forms of the following operators:  
  
-   && (and)  
  
-   &= (and_eq)  
  
-   & (bitand)  
  
-   &#124; (bitor)  
  
-   ~ (compl)  
  
-   ! (not)  
  
-   != (not_eq)  
  
-   &#124;&#124; (or)  
  
-   &#124;= (or_eq)  
  
-   ^ (xor)  
  
-   ^= (xor_eq)  
  
## Address of String Literal Has Type const char [], not const char (*) []  
 The following example will output char const (\*)[4] under **/Za**, but char const [4] under **/Ze**.  
  
```  
#include <stdio.h>  
#include <typeinfo>  
  
int main()  
{  
    printf_s("%s\n", typeid(&"abc").name());  
}  
```  
  
## See Also  
 [/Za, /Ze (Disable Language Extensions)](../../build/reference/za-ze-disable-language-extensions.md)   
 [Compiler Options](../../build/reference/compiler-options.md)   
 [Setting Compiler Options](../../build/reference/setting-compiler-options.md)