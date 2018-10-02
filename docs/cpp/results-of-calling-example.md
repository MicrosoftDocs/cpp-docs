---
title: "Results of Calling Example | Microsoft Docs"
ms.custom: ""
ms.date: "09/05/2018"
ms.technology: ["cpp-language"]
ms.topic: "language-reference"
dev_langs: ["C++"]
helpviewer_keywords: ["examples [C++], results of calling", "results, thiscall call", "results, __fastcall keyword call", "results, __cdecl call", "results, __stdcall call"]
ms.assetid: aa70a7cb-ba1d-4aa6-bd0a-ba783da2e642
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Results of Calling Example

**Microsoft Specific**

## __cdecl

The C decorated function name is `_MyFunc`.

![CDECL calling convention](../cpp/media/vc37i01.gif "vc37I01")
The **__cdecl** calling convention

## __stdcall and thiscall

The C decorated name (**__stdcall**) is `_MyFunc@20`. The C++ decorated name is implementation-specific.

![&#95;&#95;stdcall and thiscall calling conventions](../cpp/media/vc37i02.gif "vc37I02")
The __stdcall and thiscall calling conventions

## __fastcall

The C decorated name (**__fastcall**) is `@MyFunc@20`. The C++ decorated name is implementation-specific.

![Calling convention for &#95;&#95;fastcall](../cpp/media/vc37i03.gif "vc37I03")
The __fastcall calling convention

**END Microsoft Specific**

## See also

[Calling Example: Function Prototype and Call](../cpp/calling-example-function-prototype-and-call.md)