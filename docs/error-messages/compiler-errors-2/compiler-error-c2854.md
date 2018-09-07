---
title: "Compiler Error C2854 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2854"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2854"]
ms.assetid: 917fec9c-790a-4149-8dfc-00d17a09199c
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2854
syntax error in #pragma hdrstop  
  
 The `#pragma hdrstop` gives an invalid filename. The pragma can be followed by an optional filename in parentheses and quotation marks:  
  
 The following sample generates C2854:  
  
```  
// C2854.cpp  
// compile with: /c  
#pragma hdrstop( "\\source\\pchfiles\\myheader.pch" ]   // C2854  
// try the following line instead  
// #pragma hdrstop( "\\source\\pchfiles\\myheader.pch" )  
```