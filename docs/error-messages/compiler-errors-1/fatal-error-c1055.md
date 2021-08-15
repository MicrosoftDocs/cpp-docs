---
description: "Learn more about: Fatal Error C1055"
title: "Fatal Error C1055"
ms.date: "11/04/2016"
f1_keywords: ["C1055"]
helpviewer_keywords: ["C1055"]
ms.assetid: a9fb9190-d7eb-4d5f-b1a2-a41e584a28c1
---
# Fatal Error C1055

compiler limit : out of keys

The source file contains too many symbols. The compiler ran out of hash keys for the symbol table.

### To fix by using the following possible solutions

1. Split the source file into smaller files.

1. Eliminate unnecessary header files.

1. Reuse temporary and global variables instead of creating new ones.
