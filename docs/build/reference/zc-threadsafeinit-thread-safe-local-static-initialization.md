---
description: "Learn more about: /Zc:threadSafeInit (Thread-safe Local Static Initialization)"
title: "/Zc:threadSafeInit (Thread-safe Local Static Initialization)"
ms.date: "03/14/2018"
f1_keywords: ["threadSafeInit", "/Zc:threadSafeInit"]
helpviewer_keywords: ["-Zc compiler options (C++)", "threadSafeInit", "Thread-safe Local Static Initialization", "/Zc compiler options (C++)", "Zc compiler options (C++)"]
ms.assetid: a0fc4b34-2cf0-45a7-a642-b8afc4ca19f2
---
# /Zc:threadSafeInit (Thread-safe Local Static Initialization)

The **/Zc:threadSafeInit** compiler option tells the compiler to initialize static local (function scope) variables in a thread-safe way, eliminating the need for manual synchronization. Only initialization is thread-safe. Use and modification of static local variables by multiple threads must still be manually synchronized. This option is available starting in Visual Studio 2015. By default, Visual Studio enables this option.

## Syntax

> **/Zc:threadSafeInit**[**-**]

## Remarks

In the C++11 standard, block scope variables with static or thread storage duration must be zero-initialized before any other initialization takes place. Initialization occurs when control first passes through the declaration of the variable. If an exception is thrown during initialization, the variable is considered uninitialized, and initialization is re-attempted the next time control passes through the declaration. If control enters the declaration concurrently with initialization, the concurrent execution blocks while initialization is completed. The behavior is undefined if control re-enters the declaration recursively during initialization. By default, Visual Studio starting in Visual Studio 2015 implements this standard behavior. This behavior may be explicitly specified by setting the **/Zc:threadSafeInit** compiler option.

The **/Zc:threadSafeInit** compiler option is on by default. The [/permissive-](permissive-standards-conformance.md) option does not affect **/Zc:threadSafeInit**.

Thread-safe initialization of static local variables relies on code implemented in the Universal C run-time library (UCRT). To avoid taking a dependency on the UCRT, or to preserve the non-thread-safe initialization behavior of versions of Visual Studio prior to Visual Studio 2015, use the **/Zc:threadSafeInit-** option. If you know that thread-safety is not required, use this option to generate slightly smaller, faster code around static local declarations.

Thread-safe static local variables use thread-local storage (TLS) internally to provide efficient execution when the static has already been initialized. The implementation of this feature relies on Windows operating system support functions in Windows Vista and later operating systems. Windows XP, Windows Server 2003, and older operating systems do not have this support, so they do not get the efficiency advantage. These operating systems also have a lower limit on the number of TLS sections that can be loaded. Exceeding the TLS section limit can cause a crash. If this is a problem in your code, especially in code that must run on older operating systems, use **/Zc:threadSafeInit-** to disable the thread-safe initialization code.

For more information about conformance issues in Visual C++, see [Nonstandard Behavior](../../cpp/nonstandard-behavior.md).

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. From the **Configurations** drop down menu, choose **All Configurations**.

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. Modify the **Additional Options** property to include **/Zc:threadSafeInit** or **/Zc:threadSafeInit-** and then choose **OK**.

## See also

[MSVC Compiler Options](compiler-options.md)<br/>
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)<br/>
[/Zc (Conformance)](zc-conformance.md)<br/>
