---
title: "Compiler Error C3815 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: ["C3815"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3815"]
ms.assetid: c5a3b404-6341-4fd3-92af-152b404c4dde
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# Compiler Error C3815
return type of method 'get_accessor' must match type of the last parameter of a setter  
  
 When declaring properties, the return value of the `get_accessor` method must match the last parameter in the declaration of the set accessor method.  
  
 C3815 is only reachable using the obsolete compiler option **/clr:oldSyntax**.  
