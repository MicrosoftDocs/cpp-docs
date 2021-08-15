---
description: "Learn more about: `process`"
title: "process"
ms.date: "11/04/2016"
f1_keywords: ["process_cpp"]
helpviewer_keywords: ["__declspec keyword [C++], process", "process __declspec keyword"]
ms.assetid: 60eecc2f-4eef-4567-b9db-aaed34733023
---
# `process`

Specifies that your managed application process should have a single copy of a particular global variable, static member variable, or static local variable shared across all application domains in the process. This was primarily intended to be used when compiling with **`/clr:pure`**, which is deprecated in Visual Studio 2015 and unsupported in Visual Studio 2017. When compiling with **`/clr`**, global and static variables are per-process by default and do not need to use **`__declspec(process)`**.

Only a global variable, a static member variable, or a static local variable of native type can be marked with **`__declspec(process)`**.

**`process`** is only valid when compiling with [`/clr`](../build/reference/clr-common-language-runtime-compilation.md).

If you want each application domain to have its own copy of a global variable, use [appdomain](../cpp/appdomain.md).

See [Application Domains and Visual C++](../dotnet/application-domains-and-visual-cpp.md) for more information.

## See also

[`__declspec`](../cpp/declspec.md)<br/>
[Keywords](../cpp/keywords-cpp.md)
