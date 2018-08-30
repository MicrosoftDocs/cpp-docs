---
title: "operator IMAGEREL | Microsoft Docs"
ms.custom: ""
ms.date: "08/30/2018"
ms.technology: ["cpp-masm"]
ms.topic: "reference"
f1_keywords: ["operator IMAGEREL", "IMAGEREL"]
dev_langs: ["C++"]
helpviewer_keywords: ["operator IMAGEREL", "IMAGEREL operator"]
ms.assetid: 5b5ea425-36f0-467c-9262-62c484b7fdb4
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# operator IMAGEREL

Returns the image relative offset of `expression`.

## Syntax

> IMAGEREL expression

## Remarks

The resulting value is often referred to as an RVA or Relative Virtual Address.

IMAGEREL is available only with COFF object emission.

## See also

[Operators Reference](../../assembler/masm/operators-reference.md)<br/>