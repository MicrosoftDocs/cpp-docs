---
title: "Linker Tools Error LNK2017 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: ["LNK2017"]
dev_langs: ["C++"]
helpviewer_keywords: ["LNK2017"]
ms.assetid: f7c21733-b0fb-4888-a295-9b453ba6ee77
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Linker Tools Error LNK2017
'symbol' relocation to 'segment' invalid without /LARGEADDRESSAWARE:NO  
  
 You are trying to build a 64-bit image with 32-bit addresses. To do this, you must:  
  
-   Use a fixed load address.  
  
-   Restrict the image to 3 GB.  
  
-   Specify [/largeaddressaware:no](../../build/reference/largeaddressaware-handle-large-addresses.md).