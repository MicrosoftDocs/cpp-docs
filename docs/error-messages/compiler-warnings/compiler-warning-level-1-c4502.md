---
title: "Compiler Warning (level 1) C4502 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4502"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4502"
ms.assetid: d8d43153-a40c-4b96-bc11-64028a144d70
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
# Compiler Warning (level 1) C4502
'linkage specification' requires use of keyword 'extern' and must precede all other specifiers  
  
 A linkage was specified without the `extern` keyword. Linkage is not relevant to non-extern types.  
  
 The compiler assumed the `extern` keyword.