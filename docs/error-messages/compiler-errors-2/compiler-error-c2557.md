---
title: "Compiler Error C2557"
description: "Learn more about: Compiler Error C2557"
ms.date: 11/04/2016
f1_keywords: ["C2557"]
helpviewer_keywords: ["C2557"]
---
# Compiler Error C2557

> 'identifier' : private and protected members cannot be initialized without a constructor

## Remarks

Only members and friends can assign a value to a private or protected member. Nonpublic members should be initialized in the class constructor.
