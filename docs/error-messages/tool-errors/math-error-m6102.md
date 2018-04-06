---
title: "Math Error M6102 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: ["M6102"]
dev_langs: ["C++"]
helpviewer_keywords: ["M6102"]
ms.assetid: dbd2241f-6595-431e-9597-d9dbdb3a0ca2
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# Math Error M6102
denormal  
  
 An operation generated a very small floating-point number, which be invalid due loss of significance. Denormal floating-point exceptions are usually masked, causing them to be trapped and operated upon.  
  
 Program terminates with exit code 130.