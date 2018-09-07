---
title: "Compiler Warning (level 1) C4935 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4935"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4935"]
ms.assetid: a36c56d3-571a-44dd-bb0f-bcc6b020e134
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4935
assembly access specifier modified from 'access'  
  
The assembly visibility of a type was modified. The compiler uses the last specifier that it encounters. For example, the assembly visibility of a forward declaration may be different from the assembly visibility of the class definition.  
  
C4935 is only reachable using the obsolete compiler option **/clr:oldSyntax**.  
