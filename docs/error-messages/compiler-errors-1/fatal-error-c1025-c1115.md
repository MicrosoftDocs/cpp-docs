---
description: "Learn more about: Fatal Error C1025, C1115"
title: "Fatal Error C1025, C1115"
ms.date: 08/17/2022
f1_keywords: ["C1025", "C1115"]
helpviewer_keywords: ["C1025", "C1115"]
---
# Fatal Error C1025, C1115

> too many nested lambdas

The compiler detected more than an internal limit for nested lambdas in the same scope. The limit is 65,535 in recent versions of Visual Studio. To resolve this issue, reduce the number of nested lambdas in the current scope.
