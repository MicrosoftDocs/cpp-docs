---
title: "Compiler Error C3275 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["C3275"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3275"]
ms.assetid: 5752680f-7d3e-4c42-ba9c-845e09d32e7a
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# Compiler Error C3275
'enum member' : cannot use this symbol without qualifier  
  
When using managed code and when two or more enumerations contain an identifier with the same name, you must explicitly qualify references to the identifier.  
  
C3275 is only reachable using the obsolete compiler option **/clr:oldSyntax**.  
