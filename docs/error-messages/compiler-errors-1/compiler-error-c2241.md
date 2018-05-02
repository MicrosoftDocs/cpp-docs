---
title: "Compiler Error C2241 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2241"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2241"]
ms.assetid: 2f4e2c2c-b95c-4afe-bbe0-4214cd39d140
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2241
'identifier' : member access is restricted  
  
 Code attempts to access a private or protected member.  
  
### To fix by using the following possible solutions  
  
1.  Change the access level of the member.  
  
2.  Declare the member a `friend` of the accessing function.