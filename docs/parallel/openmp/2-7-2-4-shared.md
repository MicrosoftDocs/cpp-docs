---
title: "2.7.2.4 shared | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-parallel"]
ms.topic: "conceptual"
dev_langs: ["C++"]
ms.assetid: c9c5d653-58fc-4620-ab0a-443ac4f8ba2e
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# 2.7.2.4 shared

This clause shares variables that appear in the *variable-list* among all the threads in a team. All threads within a team access the same storage area for **shared** variables.

The syntax of the **shared** clause is as follows:

```
shared(variable-list)
```