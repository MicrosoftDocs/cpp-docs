---
title: "Linker Tools Error LNK1282 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK1282"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK1282"
ms.assetid: 99c13f52-eb80-46ce-a5b9-4537583e32a9
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Linker Tools Error LNK1282
unable to /REBASE file; it has been signed  
  
 You attempted to change the base address of a signed assembly with the /REBASE option for [editbin](../../build/reference/editbin-reference.md). To do this, first change the base address and then sign the assembly.