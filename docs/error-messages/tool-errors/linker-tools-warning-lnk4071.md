---
title: "Linker Tools Warning LNK4071 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: ["LNK4071"]
dev_langs: ["C++"]
helpviewer_keywords: ["LNK4071"]
ms.assetid: 803f8c34-8219-4f55-a4ae-7133ceff2ba3
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Linker Tools Warning LNK4071
cannot be incrementally linked on subsequent links  
  
 LINK found multiple definitions for one or more symbols, but [/FORCE](../../build/reference/force-force-file-output.md) or **/FORCE:MULTIPLE** was used to create an output file regardless of errors. LINK deleted the incremental status (.ilk) file.