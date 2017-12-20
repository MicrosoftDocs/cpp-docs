---
title: "Compiler Error C2170 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "cpp-tools"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2170"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2170"
ms.assetid: d5c663f0-2459-4e11-a8bf-a52b62f3c71d
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: 
  - "cplusplus"
---
# Compiler Error C2170
'identifier' : not declared as a function, cannot be intrinsic  
  
### To fix by checking the following possible causes  
  
1.  Pragma `intrinsic` is used for an item other than a function.  
  
2.  Pragma `intrinsic` is used for a function with no intrinsic form.