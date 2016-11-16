---
title: "Compiler Warning (level 3) C4622 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Compiler Warning (level 3) C4622
Overwriting debug information formed during creation of the precompiled header in object file: 'file'  
  
 CodeView information in the specified file was lost when it was compiled with the [/Yu](../../build/reference/yu-use-precompiled-header-file.md) (Use Precompiled Headers) option.  
  
 Rename the object file (using [/Fo](../../build/reference/fo-object-file-name.md)) when creating or using the precompiled header file, and link using the new object file.