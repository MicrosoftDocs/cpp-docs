---
title: "NMAKE Fatal Error U1073 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["U1073"]
dev_langs: ["C++"]
helpviewer_keywords: ["U1073"]
ms.assetid: d46bf2dd-400a-4802-9db2-f832e1c97f02
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# NMAKE Fatal Error U1073
don't know how to make 'targetname'  
  
 The specified target does not exist, and there is no command to execute or inference rule to apply.  
  
### To fix by using the following possible solutions  
  
1.  Check the spelling of the target name.  
  
2.  If *targetname* is a pseudotarget, specify it as a target in another description block.  
  
3.  If *targetname* is a macro invocation, be sure it does not expand to a null string.