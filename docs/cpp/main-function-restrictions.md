---
title: "main Function Restrictions"
ms.date: "11/04/2016"
f1_keywords: ["Main"]
helpviewer_keywords: ["main function, restrictions on using"]
ms.assetid: 7b3df731-344b-44a8-850c-11cbcbfbfa83
---
# main Function Restrictions

Several restrictions apply to the **main** function that do not apply to any other C++ functions. The **main** function:

- Cannot be overloaded (see [Function Overloading](function-overloading.md)).

- Cannot be declared as **inline**.

- Cannot be declared as **static**.

- Cannot have its address taken.

- Cannot be called.

## See also

[main: Program Startup](../cpp/main-program-startup.md)