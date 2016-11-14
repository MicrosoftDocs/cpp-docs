---
title: "BSCMAKE Error BK1517 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "BK1517"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "BK1517"
ms.assetid: 24391f42-0a3e-40a9-9991-c8b9a6a7b1c7
caps.latest.revision: 6
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
# BSCMAKE Error BK1517
source file for sbrfile compiled with both /Yc and /Yu  
  
 The .sbr file refers to itself. It was probably recompiled with /Yu after compiling with /Yc. Reset the compiler option for the source file to /Yc, then select **Rebuild** to generate new .sbr files. Do not recompile the source file with /Yu.