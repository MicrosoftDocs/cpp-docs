---
description: "Learn more about: Compiler Warning (level 4) C4057"
title: "Compiler Warning (level 4) C4057"
ms.date: "11/04/2016"
f1_keywords: ["C4057"]
helpviewer_keywords: ["C4057"]
ms.assetid: e75d0645-84c9-4bef-a812-942ed9879aa3
---
# Compiler Warning (level 4) C4057

'operator' : 'identifier1' indirection to slightly different base types from 'identifier2'

Two pointer expressions refer to different base types. The expressions are used without conversion.

### To fix by checking the following possible causes

1. Mixing signed and unsigned types.

1. Mixing **`short`** and **`long`** types.
