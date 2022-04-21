---
description: "Learn more about: Microsoft extensions to C and C++"
title: "Microsoft extensions to C and C++"
ms.date: 03/15/2022
helpviewer_keywords: ["or_eq operator", "~ operator, extensions to C/C++", "& operator, extensions to C/C++", "&= operator", "iso646.h header", "Xor operator, Microsoft extensions to C/C++", "!= operator", "! operator, extension to C++", "Or operator, Microsoft extensions to C/C++", "^ operator, extensions to C/C++", "^= operator, C++ extensions", "xor_eq operator", "and_eq operator", "Microsoft extensions to C/C++", "|= operator", "|| operator", "And operator, extensions to C/C++", "NOT operator", "&& operator", "extensions, C language", "Visual C++, extensions to C/C++", "| operator, extensions", "not_eq operator", "Visual C, Microsoft extensions", "extensions", "compl method"]
---
# Microsoft extensions to C and C++

Microsoft Visual C++ (MSVC) extends the C and C++ language standards in several ways, detailed in this article.

The MSVC C++ compiler defaults to support for ISO C++14 with some ISO C++17 features and some Microsoft-specific language extensions. For more information on supported features, see [Microsoft C/C++ language conformance by Visual Studio version](../../overview/visual-cpp-language-conformance.md). You can use the **`/std`** compiler option to enable full support for ISO C++17 and ISO C++20 language features. For more information, see [`/std` (Specify language standard version)](std-specify-language-standard-version.md).

Where specified, some MSVC C++ language extensions can be disabled by use of the **`/Za`** compiler option. In Visual Studio 2017 and later versions, the **`/permissive-`** compiler option disables Microsoft-specific C++ language extensions. The **`/permissive-`** compiler option is implicitly enabled by the **`/std:c++20`** and **`/std:c++latest`** compiler options.

By default, when MSVC compiles code as C, it implements ANSI C89 with Microsoft-specific language extensions. Some of these MSVC extensions are standardized in ISO C99 and later. Most MSVC C extensions can be disabled by use of the **`/Za`** compiler option, as detailed later in this article. You can use the **`/std`** compiler option to enable support for ISO C11 and C17. For more information, see [`/std` (Specify language standard version)](std-specify-language-standard-version.md).

The standard C runtime library is implemented by the Universal C runtime library (UCRT) in Windows. The UCRT also implements many POSIX and Microsoft-specific library extensions. The UCRT supports the ISO C11 and C17 C runtime library standards, with certain implementation-specific caveats. It doesn't support the full ISO C99 standard C runtime library. For more information, see [compatibility](../../c-runtime-library/compatibility.md) in the Universal C runtime library documentation.

## Keywords

MSVC adds several Microsoft-specific keywords to C and C++. In the list in [Keywords](../../cpp/keywords-cpp.md), the keywords that have two leading underscores are MSVC extensions.

## Casts

Both the C++ compiler and C compiler support these kinds of non-standard casts:

- The C compiler supports non-standard casts to produce l-values. For example:

   ```C
   char *p;
   (( int * ) p )++;
   // In C with /W4, both by default and under /Ze:
   //     warning C4213: nonstandard extension used: cast on l-value
   // Under /TP or /Za:
   //     error C2105: '++' needs l-value
   ```

   > [!NOTE]
   > This extension is available in the C language only. You can use the following C standard form in C++ code to modify a pointer as if it's a pointer to a different type.

   The preceding example could be rewritten as follows to conform to the C standard.

   ```C
   p = ( char * )(( int * )p + 1 );
   ```

- Both the C and C++ compilers support non-standard casts of a function pointer to a data pointer. For example:

   ```C
   int ( * pfunc ) ();
   int *pdata;
   pdata = ( int * ) pfunc;
   /* No diagnostic at any level, whether compiled with default options or under /Za */
   ```

## Variable-length argument lists

Both C and C++ compilers support a function declarator that specifies a variable number of arguments, followed by a function definition that provides a type instead:

```cpp
void myfunc( int x, ... );
void myfunc( int x, char * c )
{ }
// In C with /W4, either by default or under /Ze:
//     warning C4212: nonstandard extension used: function declaration used ellipsis
// In C with /W4, under /Za:
//     warning C4028: formal parameter 2 different from declaration
// In C++, no diagnostic by default or under /Za.
```

## Single-line comments

The C compiler supports single-line comments, which are introduced by using two forward slash (`//`) characters:

```C
// This is a single-line comment.
```

Single-line comments are a C99 feature. They're unaffected by **`/Za`** and cause no diagnostic at any level.

## Scope

The C compiler supports the following scope-related features.

- Redefinitions of `extern` items as `static`:

   ```C
   extern int clip();
   static int clip() {}
   // In C and C++ with /W4, either by default or under /Ze:
   //     warning C4211: nonstandard extension used: redefined extern to static
   // In C and C++ under /Za:
   //     error C2375: 'clip': redefinition; different linkage
   ```

- Use of benign typedef redefinitions within the same scope:

   ```C
   typedef int INT;
   typedef int INT; // No diagnostic at any level in C or C++
   ```

- Function declarators have file scope:

   ```C
   void func1()
   {
       extern double func2( double );
       // In C at /W4:  warning C4210: nonstandard extension used: function given file scope
   }
   int main( void )
   {
       func2( 4 );    //  /Ze passes 4 as type double
   }                  //  /Za passes 4 as type int
   ```

- Use of block-scope variables that are initialized by using non-constant expressions:

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
   char arr[6] = {'a', 'b', "cde"};
   // In C with /W4, either by default or under /Ze:
   //     warning C4207: nonstandard extension used: extended initializer form
   // Under /Za:
   //     error C2078: too many initializers
   ```

- Bit fields that have base types other than **`unsigned int`** or **`signed int`**.

- Declarators that don't have a type:

   ```C
   x;
   // By default or under /Ze, /Za, /std:c11, and /std:c17, when /W4 is specified:
   //     warning C4431: missing type specifier - int assumed. Note: C no longer supports default-int
   //     warning C4218: nonstandard extension used: must specify at least a storage class or a type
   */
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
       // In C with /W4, either by default, under /Ze, /std:c11, and /std:c17:
       //     warning C4200: nonstandard extension used: zero-sized array in struct/union
       // Under /Za:
       //     error C2133: 'zarray': unknown size
   };
   ```

- Unnamed (anonymous) structures:

   ```C
   struct
   {
       int i;
       char *s;
   };
   // By default or under /Ze, /std:c11, and /std:c17, when /W4 is specified:
   //     warning C4094: untagged 'struct' declared no symbols
   // Under /Za:
   //     error C2059: syntax error: 'empty declaration'
   ```

- Unnamed (anonymous) unions:

   ```C
   union
   {
       int i;
       float fl;
   };
   // By default or under /Ze, /std:c11, and /std:c17, when /W4 is specified:
   //     warning C4094: untagged 'union' declared no symbols
   // Under /Za:
   //     error C2059: syntax error: 'empty declaration'
   ```


## Intrinsic floating-point functions

Both the x86 C++ compiler and C compiler support inline generation of the `atan`, `atan2`, `cos`, `exp`, `log`, `log10`, `sin`, `sqrt`, and `tan` functions when **`/Oi`** is specified. These intrinsics don't conform to the standard, because they don't set the `errno` variable.

## *`ISO646.H`* not enabled

Under **`/Ze`**, you have to include *`iso646.h`* if you want to use text forms of the following operators:

| Operator | Text form |
|--|--|
| `&&` | `and` |
| `&=` | `and_eq` |
| `&` | `bitand` |
| `|` | `bitor` |
| `~` | `compl` |
| `!` | `not` |
| `!=` | `not_eq` |
| `||` | `or` |
| `|=` | `or_eq` |
| `^` | `xor` |
| `^=` | `xor_eq` |

These text forms are available as C++ keywords under **`/Za`** or when **`/permissive-`** is specified or implied.

## See also

[`/Za`, `/Ze` (Disable language extensions)](za-ze-disable-language-extensions.md)\
[MSVC compiler options](compiler-options.md)\
[MSVC compiler command-line syntax](compiler-command-line-syntax.md)
