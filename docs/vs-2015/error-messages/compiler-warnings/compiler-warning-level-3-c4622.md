---
title: "Compiler Warning (level 3) C4622 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4622"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4622"
ms.assetid: d3c879f0-4492-4f4b-b26d-230993f3a933
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 3) C4622
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 3) C4622](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4622).  
  
  
Overwriting debug information formed during creation of the precompiled header in object file: 'file'  
  
 CodeView information in the specified file was lost when it was compiled with the [/Yu](../../build/reference/yu-use-precompiled-header-file.md) (Use Precompiled Headers) option.  
  
 Rename the object file (using [/Fo](../../build/reference/fo-object-file-name.md)) when creating or using the precompiled header file, and link using the new object file.

