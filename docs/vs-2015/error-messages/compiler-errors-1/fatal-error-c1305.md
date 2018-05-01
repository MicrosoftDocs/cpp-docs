---
title: "Fatal Error C1305 | Microsoft Docs"
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
  - "C1305"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1305"
ms.assetid: 1629c850-e2db-4678-83d8-9bfc85323bc5
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Fatal Error C1305
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Fatal Error C1305](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/fatal-error-c1305).  
  
  
profile database 'pgd_file' is for a different architecture  
  
 A .pgd file that was generated from the /LTCG:PGINSTRUMENT operation for another platform was passed to [/LTCG:PGOPTIMIZE](../../build/reference/ltcg-link-time-code-generation.md) . [Profile-guided optimizations](../../build/reference/profile-guided-optimizations.md) are available for x86 and [!INCLUDE[vcprx64](../../includes/vcprx64-md.md)] platforms. However, a .pgd file generated with a /LTCG:PGINSTRUMENT operation for one platform is not valid as input to a /LTCG:PGOPTIMIZE for a different platform.  
  
 To resolve this error, only pass a .pgd file that is created with /LTCG:PGINSTRUMENT to /LTCG:PGOPTIMIZE on the same platform.

