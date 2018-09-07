---
title: "Fatal Error C1192 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["c1192"]
dev_langs: ["C++"]
helpviewer_keywords: ["C1192"]
ms.assetid: 54cff717-a3eb-471d-9bd4-1c2e673dbbef
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Fatal Error C1192
\#using failed on 'file'  
  
 Only a file in the Microsoft Intermediate Language (MSIL) format can be passed to a [#using](../../preprocessor/hash-using-directive-cpp.md) directive. The [/clr](../../build/reference/clr-common-language-runtime-compilation.md) compiler option lets you create an MSIL output file. Other Visual Studio languages also produce MSIL files.