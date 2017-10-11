---
title: "ML Nonfatal Error A2063 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["A2063"]
dev_langs: ["C++"]
helpviewer_keywords: ["A2063"]
ms.assetid: 12976b25-2159-4e0c-9df3-dcfac61091ee
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# ML Nonfatal Error A2063
**can ALIGN only to power of 2 : expression**  
  
 The expression specified with the [ALIGN](../../assembler/masm/align-masm.md) directive was invalid.  
  
 The **ALIGN** expression must be a power of 2 between 2 and 256, and must be less than or equal to the alignment of the current segment, structure, or union.  
  
## See Also  
 [ML Error Messages](../../assembler/masm/ml-error-messages.md)