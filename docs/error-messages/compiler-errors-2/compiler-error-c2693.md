---
title: "Compiler Error C2693 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2693"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2693"]
ms.assetid: b7364ca8-b6be-48c0-97d6-6029787fb171
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2693

'operator' : illegal comparison for references to a managed or WinRT array

You cannot test a managed or WinRT array for any kind of inequality. For example, you can test to see if managed arrays are equal but you cannot test to see if one array is greater or less than another array.
