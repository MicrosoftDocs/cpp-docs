---
title: "Compiler Error C2241 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["C2241"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2241"]
ms.assetid: 2f4e2c2c-b95c-4afe-bbe0-4214cd39d140
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2241
'identifier' : member access is restricted  
  
 Code attempts to access a private or protected member.  
  
### To fix by using the following possible solutions  
  
1.  Change the access level of the member.  
  
2.  Declare the member a `friend` of the accessing function.