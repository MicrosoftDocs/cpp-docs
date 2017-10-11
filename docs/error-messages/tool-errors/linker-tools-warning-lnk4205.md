---
title: "Linker Tools Warning LNK4205 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: ["LNK4205"]
dev_langs: ["C++"]
helpviewer_keywords: ["LNK4205"]
ms.assetid: d63b9d18-ef3c-4081-9d8d-93077dad13c2
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Linker Tools Warning LNK4205
'filename' is missing current debugging information for referencing module; linking object as if no debug info  
  
 The .pdb file has out-of-date information. The linker will continue to link object without debug information. You may want to recompile the object file using the [/Zi](../../build/reference/z7-zi-zi-debug-information-format.md) option.