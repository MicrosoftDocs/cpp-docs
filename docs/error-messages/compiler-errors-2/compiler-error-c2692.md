---
title: "Compiler Error C2692 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2692"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2692"]
ms.assetid: 02ade3b4-b757-448b-b065-d7d71bc3f441
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2692
'function_name' : fully prototyped functions required in C compiler with the '/clr' option  
  
 When compiling for .NET managed code, the C compiler requires ANSI function declarations. In addition, if a function takes no parameters, it must explicitly declare `void` as the parameter type.