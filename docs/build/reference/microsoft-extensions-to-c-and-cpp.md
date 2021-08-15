---
description: "Learn more about: Microsoft extensions to C and C++"
title: "Microsoft extensions to C and C++"
ms.date: "06/14/2018"
helpviewer_keywords: ["or_eq operator", "~ operator, extensions to C/C++", "& operator, extensions to C/C++", "&= operator", "iso646.h header", "Xor operator, Microsoft extensions to C/C++", "!= operator", "! operator, extension to C++", "Or operator, Microsoft extensions to C/C++", "^ operator, extensions to C/C++", "^= operator, C++ extensions", "xor_eq operator", "and_eq operator", "Microsoft extensions to C/C++", "|= operator", "|| operator", "And operator, extensions to C/C++", "NOT operator", "&& operator", "extensions, C language", "Visual C++, extensions to C/C++", "| operator, extensions", "not_eq operator", "Visual C, Microsoft extensions", "extensions", "compl method"]
ms.assetid: e811a74a-45ba-4c00-b206-2f2321b8689a
---
# Microsoft extensions to C and C++

Visual C++ extends the ANSI C and ANSI C++ standards as follows.

## Keywords

Several keywords are added. In the list in [Keywords](../../cpp/keywords-cpp.md), the keywords that have two leading underscores are Visual C++ extensions.

## Out of class definition of static const integral (or enum) members

Under the standard (**/Za**), you must make an out-of-class definition for data members, as shown here:

```cpp
class CMyClass  {
   static const int max = 5;
   int m_array[max];
}
// . . .
const int CMyClass::max;   // out of class definition
```

Under **/Ze**, the out-of-class definition is optional for static, const integral, and const enum data members. Only integrals and enums that are static and const can have initializers in a class; the initializing expression must be a const expression.

To avoid errors when an out-of-class definition is provided in a header file and the header file is included in multiple source files, use [selectany](../../cpp/selectany.md). For example:

```cpp
__declspec(selectany) const int CMyClass::max = 5;
```

## Casts

Both the C++ compiler and C compiler support these kinds of non-ANSI casts:

- Non-ANSI casts to produce l-values. For example:

   ```C
   char *p;
   (( int * ) p )++;
   ```

   > [!NOTE]
   > This extension is available in the C language only. You can use the following ANSI C standard form in C++ code to modify a pointer as if it is a pointer to a different type.

   The preceding example could be rewritten as follows to conform to the ANSI C standard.

   ```C
   p = ( char * )(( int * )p + 1 );
   ```

- Non-ANSI casts of a function pointer to a data pointer. For example:

   ```C
   int ( * pfunc ) ();
   int *pdata;
   pdata = ( int * ) pfunc;
   ```

   To perform the same cast and also maintain ANSI compatibility, you can cast the function pointer to a `uintptr_t` before you cast it to a data pointer:

   ```C
   pdata = ( int * ) (uintptr_t) pfunc;
   ```

## Variable-length argument lists

Both the C++ compiler and C compiler support a function declarator that specifies a variable number of arguments, followed by a function definition that provides a type instead:

```cpp
void myfunc( int x, ... );
void myfunc( int x, char * c )
{ }
```

## Single-line comments

The C compiler supports single-line comments, which are introduced by using two forward slash (//) characters:

```C
// This is a single-line comment.
```

## Scope

The C compiler supports the following scope-related features.

- Redefinitions of extern items as static:

   ```C
   extern int clip();
   static int clip()
   {}
   ```

- Use of benign typedef redefinitions within the same scope:

   ```C
   typedef int INT;
   typedef int INT;
   ```

- Function declarators have file scope:

   ```C
   void func1()
   {
       extern int func2( double );
   }
   int main( void )
   {
       func2( 4 );    //  /Ze passes 4 as type double
   }                  //  /Za passes 4 as type int
   ```

- Use of block-scope variables that are initialized by using nonconstant expressions:

   ```C
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

## Data declarations and definitions

The C compiler supports the following data declaration and definition features.

- Mixed character and string constants in an initializer:

   ```C
   char arr[5] = {'a', 'b', "cde"};
   ```

- Bit fields that have base types other than **`unsigned int`** or **`signed int`**.

- Declarators that don't have a type:

   ```C
   x;
   int main( void )
   {
       x = 1;
   }
   ```

- Unsized arrays as the last field in structures and unions:

   ```C
   struct zero
   {
       char *c;
       int zarray[];
   };
   ```

- Unnamed (anonymous) structures:

   ```C
   struct
   {
       int i;
       char *s;
   };
   ```

- Unnamed (anonymous) unions:

   ```C
   union
   {
       int i;
       float fl;
   };
   ```

- Unnamed members:

   ```C
   struct s
   {
      unsigned int flag : 1;
      unsigned int : 31;
   }
   ```

## Intrinsic floating-point functions

Both the x86 C++ compiler and C compiler support inline generation of the `atan`, `atan2`, `cos`, `exp`, `log`, `log10`, `sin`, `sqrt`, and `tan` functions when **/Oi** is specified. For the C compiler, ANSI conformance is lost when these intrinsics are used, because they do not set the `errno` variable.

## Passing a non-const pointer parameter to a function that expects a reference to a const pointer parameter

This is an extension to C++. This code will compile with **/Ze**:

```cpp
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

## ISO646.H not enabled

Under **/Ze**, you have to include iso646.h if you want to use text forms of the following operators:

- && (and)

- &= (and_eq)

- & (bitand)

- &#124; (bitor)

- ~ (compl)

- ! (not)

- != (not_eq)

- &#124;&#124; (or)

- &#124;= (or_eq)

- ^ (xor)

- ^= (xor_eq)

## Address of string literal has type const char [], not const char (*) []

The following example will output `char const (*)[4]` under **/Za**, but `char const [4]` under **/Ze**.

```cpp
#include <stdio.h>
#include <typeinfo>

int main()
{
    printf_s("%s\n", typeid(&"abc").name());
}
```

## See also

- [/Za, /Ze (Disable Language Extensions)](za-ze-disable-language-extensions.md)
- [MSVC Compiler Options](compiler-options.md)
- [MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)
