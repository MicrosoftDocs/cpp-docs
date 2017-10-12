---
title: "Fatal Error C1045 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["C1045"]
dev_langs: ["C++"]
helpviewer_keywords: ["C1045"]
ms.assetid: 766c2f89-4ecd-4281-adaa-14b270cc0829
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Fatal Error C1045
compiler limit : linkage specifications nested too deeply  
  
 Nested externals exceed the compiler limit. Nested externals are allowed with the external linkage type, such as `extern` "C++". Reduce the number of nested externals to resolve the error.