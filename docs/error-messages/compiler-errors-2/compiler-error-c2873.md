---
title: "Compiler Error C2873 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2873"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2873"]
ms.assetid: 7a10036b-400e-4364-bd2f-dcd7370c5e28
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2873
'symbol' : symbol cannot be used in a using-declaration  
  
 A `using` directive is missing a [namespace](../../cpp/namespaces-cpp.md) keyword. This causes the compiler to misinterpret the code as a [using declaration](../../cpp/using-declaration.md) rather than a [using directive](../../cpp/namespaces-cpp.md#using_directives).