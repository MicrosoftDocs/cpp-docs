---
description: "Learn more about: Fatal Error C1900"
title: "Fatal Error C1900"
ms.date: "11/04/2016"
f1_keywords: ["C1900"]
helpviewer_keywords: ["C1900"]
ms.assetid: 3aaa583b-4c1a-45de-aa34-527d806f2cb5
---
# Fatal Error C1900

> Il mismatch between '*tool1*' version '*number1*' and '*tool2*' version '*number2*'

Tools run in various passes of the compiler do not match. *number1* and *number2* refer to the dates on the files. For example, in pass 1, the compiler front end runs (c1.dll) and in pass 2, the compiler back end runs (c2.dll). The dates on the files must match.

To fix this issue, make sure that all updates have been applied to Visual Studio. If the problem persists, use **Programs and Features** in the Windows Control Panel to repair or reinstall Visual Studio.
