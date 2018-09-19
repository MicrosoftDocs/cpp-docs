---
title: "Compiler Error C3539 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3539"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3539"]
ms.assetid: 34a33a0f-d1b6-498f-b312-ffad2d4799b3
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3539

'type': a template-argument cannot be a type that contains 'auto'

The indicated template argument type cannot contain a usage of the `auto` keyword.

### To correct this error

1. Do not specify the template argument with the `auto` keyword.

## Example

The following example yields C3539.

```
// C3539.cpp
// Compile with /Zc:auto
template<class T> class C{};
int main()
{
   C<auto> c;   // C3539
   return 0;
}
```

## See Also

[auto Keyword](../../cpp/auto-keyword.md)