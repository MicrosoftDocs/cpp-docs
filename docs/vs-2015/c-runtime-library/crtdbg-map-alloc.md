---
title: "_CRTDBG_MAP_ALLOC | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CRTDBG_MAP_ALLOC"
  - "_CRTDBG_MAP_ALLOC"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_CRTDBG_MAP_ALLOC macro"
  - "memory allocation, in debug builds"
  - "CRTDBG_MAP_ALLOC macro"
ms.assetid: 435242b8-caea-4063-b765-4a608200312b
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _CRTDBG_MAP_ALLOC
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [_CRTDBG_MAP_ALLOC](https://docs.microsoft.com/cpp/c-runtime-library/crtdbg-map-alloc).  
  
When the **_CRTDBG_MAP_ALLOC** flag is defined in the debug version of an application, the base version of the heap functions are directly mapped to their debug versions. The flag is used in Crtdbg.h to do the mapping. This flag is only available when the [_DEBUG](../c-runtime-library/debug.md) flag has been defined in the application.  
  
 For more information about using the debug version versus the base version of a heap function, see [Using the Debug Version Versus the Base Version](../Topic/Debug%20Versions%20of%20Heap%20Allocation%20Functions.md).  
  
## See Also  
 [Control Flags](../c-runtime-library/control-flags.md)





