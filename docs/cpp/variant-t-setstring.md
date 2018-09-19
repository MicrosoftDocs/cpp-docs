---
title: "_variant_t::SetString | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-language"]
ms.topic: "language-reference"
f1_keywords: ["_variant_t::SetString"]
dev_langs: ["C++"]
helpviewer_keywords: ["SetString method [C++]"]
ms.assetid: 816b08e5-6830-46ca-b3d7-7689308b3be3
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# _variant_t::SetString

**Microsoft Specific**

Assigns a string to this `_variant_t` object.

## Syntax

```
void SetString(const char* pSrc);
```

#### Parameters

*pSrc*<br/>
Pointer to the character string.

## Remarks

Converts an ANSI character string to a Unicode `BSTR` string and assigns it to this `_variant_t` object.

**END Microsoft Specific**

## See also

[_variant_t Class](../cpp/variant-t-class.md)