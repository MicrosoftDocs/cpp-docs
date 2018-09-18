---
title: "Compiler Error C2667 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2667"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2667"]
ms.assetid: 3c91d9d1-18fa-4e0d-a9ba-984d38980ca3
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2667

'function' : none of number overloads have a best conversion

An overloaded function call is ambiguous and cannot be resolved.

The conversion required to match the actual parameters in the function call to one of the overloaded functions must be strictly better than the conversions required by all the other overloaded functions.

See Knowledge Base article Q240869 for more information on partial ordering of function templates.