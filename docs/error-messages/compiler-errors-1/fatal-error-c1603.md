---
title: "Fatal Error C1603 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: ["C1603"]
dev_langs: ["C++"]
helpviewer_keywords: ["C1603"]
ms.assetid: e5a06925-f916-4637-8240-6d2d280e6124
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Fatal Error C1603
inline assembly branch target out of range by 'number' bytes  
  
 The computed distance between a JCXZ or JECXZ instruction and its specified target label was greater than 128 bytes. Update your code so that the label is closer to the instruction.