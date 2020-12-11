---
description: "Learn more about: Resource Compiler Fatal Error RC1120"
title: "Resource Compiler Fatal Error RC1120"
ms.date: "11/04/2016"
f1_keywords: ["RC1120"]
helpviewer_keywords: ["RC1120"]
ms.assetid: 4e462931-e42e-42e3-8bfc-847677194286
---
# Resource Compiler Fatal Error RC1120

out of memory, needed number bytes

The Resource Compiler ran out of storage for items that it stores in its heap. Usually this is the result of having too many symbols.

### To fix by using the following possible solutions

1. Increase the Windows swap file space. For more information about increasing the swap-file space, see virtual memory in Windows help.

1. Eliminate unnecessary include files, especially unneeded `#define`s and function prototypes.

1. Split the current file into two or more files and compile them separately.

1. Remove other programs or drivers running in the system, which could be consuming significant amounts of memory.
