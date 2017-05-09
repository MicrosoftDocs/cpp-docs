---
title: "Linker Tools Error LNK1120 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK1120"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK1120"
ms.assetid: 56aa7d36-921f-4daf-b44d-cca0d4fb1b51
caps.latest.revision: 10
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
# Linker Tools Error LNK1120
*number* unresolved externals  
  
Error LNK1120 reports the count (*number*) of unresolved external symbol errors for this link operation. Most unresolved external symbol errors are reported individually by [Linker Tools Error LNK2001](../../error-messages/tool-errors/linker-tools-error-lnk2001.md) and  [Linker Tools Error LNK2019](../../error-messages/tool-errors/linker-tools-error-lnk2019.md), which precede this error message, once for each unresolved external symbol error.  
  
To fix this error, correct all of the other unresolved external errors that precede it in the build output. This error is not reported when no unresolved external errors remain.  
