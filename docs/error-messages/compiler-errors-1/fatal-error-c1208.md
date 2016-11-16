---
title: "Fatal Error C1208 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C1208"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1208"
ms.assetid: 4eefd8f0-5c2e-4a11-9e63-293e1139db65
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
# Fatal Error C1208
Allocating reference classes on the stack is not supported by the version of the runtime installed  
  
 C1208 occurs when you have a compiler for the current release, but a common language runtime from a previous release.  
  
 Some functionality of the compiler may not work on a previous version of the run time.  
  
 Install the common language runtime version that is intended for use with your compiler.