---
title: "Compiler Error C3381 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3381"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3381"]
ms.assetid: d276c89f-8377-4cb6-a8d4-7770885f06c4
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3381

'assembly' : assembly access specifiers are only available in code compiled with a /clr option

Native types can be visible outside the assembly, but you can only specify assembly access for native types in a **/clr** compilation.

For more information, see [Type visibility](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Type_visibility) and [/clr (Common Language Runtime Compilation)](../../build/reference/clr-common-language-runtime-compilation.md).

## Example

The following sample generates C3381.

```
// C3381.cpp
// compile with: /c
public class A {};   // C3381
```