---
description: "Learn more about: Using wmain"
title: "Using wmain"
ms.date: 09/27/2022
helpviewer_keywords: ["wmain function"]
ms.assetid: d0300812-adc4-40c6-bba3-b2da25468c80
---
# Using `wmain`

**Microsoft Specific**

In the Unicode programming model, you can define a wide-character version of the `main` function. Use `wmain` instead of `main` if you want to write portable code that adheres to the Unicode programming model.

Like `main`, several restrictions apply to the `wmain` function that don't apply to any other C functions. The `wmain` function:

- Can't be declared as **`inline`**.
- Can't be declared as **`static`**.
- Can't have its address taken.
- Can't be called from your program.

## The `wmain` function signature

The `wmain` function doesn't have a declaration, because it's built into the language. If it did, the declaration syntax for `wmain` would look like this:

```C
int wmain( void );
int wmain( int argc, wchar_t *argv[ ] );
int wmain( int argc, wchar_t *argv[ ], wchar_t *envp[ ] );
```

The `wmain` function is declared implicitly by using one of these signatures. You may use any of these signatures when you define your `wmain` function. You can then pass wide-character arguments and, optionally, a wide-character environment pointer to the program. The Microsoft compiler also allows `wmain` to have a return type of **`void`** when no value is returned. The *`argv`* and *`envp`* parameters to `wmain` can also be defined as type `wchar_t**`. For more information about the arguments, see [Argument description](./argument-description.md).

## The `envp` environment

If your program uses a `main` function, the multibyte-character environment is created by the run-time library at program startup. A wide-character copy of the environment is created only when needed (for example, by a call to the `_wgetenv` or `_wputenv` functions). On the first call to `_wputenv`, or on the first call to `_wgetenv` if an MBCS environment already exists, a corresponding wide-character string environment is created and is then pointed to by the `_wenviron` global variable, which is a wide-character version of the `_environ` global variable. At this point, two copies of the environment (MBCS and Unicode) exist simultaneously and are maintained by the operating system throughout the life of the program.

Similarly, if your program uses a `wmain` function, a wide-character environment is created at program startup and is pointed to by the `_wenviron` global variable. An MBCS (ASCII) environment is created on the first call to `_putenv` or `getenv`, and is pointed to by the `_environ` global variable.

For more information on the MBCS environment, see [Internationalization](../c-runtime-library/internationalization.md).

**END Microsoft Specific**

## See also

[`main` function and program execution](../c-language/main-function-and-program-execution.md)
