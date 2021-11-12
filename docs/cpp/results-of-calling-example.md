---
description: "Learn more about: Results of Calling Example"
title: "Results of Calling Example"
ms.date: "11/19/2018"
helpviewer_keywords: ["examples [C++], results of calling", "results, thiscall call", "results, __fastcall keyword call", "results, __cdecl call", "results, __stdcall call"]
ms.assetid: aa70a7cb-ba1d-4aa6-bd0a-ba783da2e642
---
# Results of Calling Example

**Microsoft Specific**

## `__cdecl`

The C decorated function name is `_MyFunc`.

![Diagram showing the stack and registers for the CDECL calling convention.](../cpp/media/vc37i01.gif "CDECL calling convention") <br/>
The **`__cdecl`** calling convention

## `__stdcall` and `thiscall`

The C decorated name (**`__stdcall`**) is `_MyFunc@20`. The C++ decorated name is implementation-specific.

![Diagram showing the stack and registers for the S T D call and this call calling conventions.](../cpp/media/vc37i02.gif )<br/>
The __stdcall and thiscall calling conventions

## `__fastcall`

The C decorated name (**`__fastcall`**) is `@MyFunc@20`. The C++ decorated name is implementation-specific.

![Diagram showing the stack and registers for the fast call calling convention.](../cpp/media/vc37i03.gif)<br/>
The `__fastcall` calling convention

**END Microsoft Specific**

## See also

[Calling Example: Function Prototype and Call](../cpp/calling-example-function-prototype-and-call.md)
