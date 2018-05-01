---
title: "Linker Tools Error LNK2017 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK2017"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK2017"
ms.assetid: f7c21733-b0fb-4888-a295-9b453ba6ee77
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Linker Tools Error LNK2017
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Linker Tools Error LNK2017](https://docs.microsoft.com/cpp/error-messages/tool-errors/linker-tools-error-lnk2017).  
  
  
symbol' relocation to 'segment' invalid without /LARGEADDRESSAWARE:NO  
  
 You are trying to build a 64-bit image with 32-bit addresses. To do this, you must:  
  
-   Use a fixed load address.  
  
-   Restrict the image to 3 GB.  
  
-   Specify [/largeaddressaware:no](../../build/reference/largeaddressaware-handle-large-addresses.md).

