---
description: "Learn more about the /Zc:tlsGuards (Check TLS initialization) compiler option."
title: "/Zc:tlsGuards (Check TLS initialization)"
ms.date: 11/08/2022
f1_keywords: ["/Zc:tlsGuards"]
helpviewer_keywords: ["-Zc:tlsGuards compiler option (C++)", "/Zc:tlsGuards compiler option (C++)"]
---
# `/Zc:tlsGuards` (Check TLS initialization)

The **`/Zc:tlsGuards`** compiler option generates runtime checks for thread local storage (TLS) initialization in DLLs.

## Syntax

> **`/Zc:tlsGuards`**\[**`-`**]

## Remarks

The **`/Zc:tlsGuards`** compiler option enables checks for initialization of thread-local variables in DLLs. Previously, thread-local variables in DLLs weren't correctly initialized. Other than on the thread that loaded the DLL, they weren't initialized before first use on threads that existed before the DLL was loaded. The **`/Zc:tlsGuards`** option enables code that corrects this defect. Thread-local variables in such a DLL get initialized immediately before their first use on such threads.

The **`/Zc:tlsGuards`** option is new in Visual Studio 2019 version 16.5. This option is on by default in all compiler modes. The new behavior of testing for initialization on uses of thread-local variables may be disabled by using the **`/Zc:tlsGuards-`** compiler option. To disable checks for specific thread-local variables, use the [`[[msvc::no_tls_guard]]`](../../cpp/attributes.md) attribute.

### To set this compiler option in Visual Studio

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. In **Additional options**, add *`/Zc:tlsGuards`*. Choose **OK** or **Apply** to save your changes.

## See also

[`/Zc` (Conformance)](zc-conformance.md)\
