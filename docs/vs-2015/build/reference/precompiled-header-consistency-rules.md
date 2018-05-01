---
title: "Precompiled Header Consistency Rules | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "precompiled header files, consistency rules"
ms.assetid: 844b1a14-5b0b-4276-a1f5-cc62f13f6dda
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Precompiled Header Consistency Rules
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Precompiled Header Consistency Rules](https://docs.microsoft.com/cpp/build/reference/precompiled-header-consistency-rules).  
  
  
This section discusses guidelines that will help you use precompiled headers more efficiently:  
  
-   [Consistency Rules for Per-File Use of Precompiled Headers](../../build/reference/consistency-rules-for-per-file-use-of-precompiled-headers.md)  
  
-   [Consistency Rules for /Yc and /Yu](../../build/reference/consistency-rules-for-yc-and-yu.md)  
  
 Because PCH files contain information about the machine environment as well as memory address information about the program, you should only use a PCH file on the machine where it was created.  
  
## See Also  
 [Creating Precompiled Header Files](../../build/reference/creating-precompiled-header-files.md)

