---
title: "ML Nonfatal Error A2066 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["A2066"]
dev_langs: ["C++"]
helpviewer_keywords: ["A2066"]
ms.assetid: 58220fdf-fb8f-47fc-a36d-737867361185
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# ML Nonfatal Error A2066
**incompatible CPU mode and segment size**  
  
 An attempt was made to open a segment with a **USE16**, **USE32**, or **FLAT** attribute that was not compatible with the specified CPU, or to change to a 16-bit CPU while in a 32-bit segment.  
  
 The **USE32** and **FLAT** attributes must be preceded by the .386 or greater processor directive.  
  
## See Also  
 [ML Error Messages](../../assembler/masm/ml-error-messages.md)