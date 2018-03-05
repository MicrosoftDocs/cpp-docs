---
title: "Compiler Error C3610 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: ["C3610"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3610"]
ms.assetid: 9349a348-9d37-4a00-9eab-481039268d31
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# Compiler Error C3610
'valuetype': value type must be 'boxed' before method 'method' can be called  
  
 By default, a value type is not on the managed heap. Before you can call methods from .NET runtime classes, such as `Object`, you need to move the value type to the managed heap.  
  
 C3610 is only reachable using the obsolete compiler option **/clr:oldSyntax**.  
