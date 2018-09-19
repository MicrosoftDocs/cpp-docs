---
title: "Compiler Error C3453 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3453"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3453"]
ms.assetid: dbefdbcf-f697-4239-b7a5-1d99b85e9e7f
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3453

'attribute': attribute not applied because qualifier 'assembly' did not match

Assembly or module level attributes can only be specified as stand-alone instructions.

## Example

The following sample generates C3453.

```
// C3453.cpp
// compile with: /clr /c
[assembly:System::CLSCompliant(true)]   // C3453
// try the following line instead
// [assembly:System::CLSCompliant(true)];
ref class X {};
```