---
title: "Fatal Error C1037"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "C1037"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1037"
ms.assetid: 79103bca-ccfb-42e7-aef9-9b90c15b162f
caps.latest.revision: 7
ms.author: "corob"
manager: "douge"
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
# Fatal Error C1037
cannot open object file filename  
  
 The object file specified by [/Fo](../buildref/-fo--object-file-name-.md) cannot be opened.  
  
### To fix by checking the following possible causes  
  
1.  Invalid filename.  
  
2.  Insufficient memory to open the file.  
  
3.  Another process is using the file.  
  
4.  A read-only file has the same name.  
  
 In Visual C++ .NET (version 1300 of the compiler), there is a bug that requires the user locale to be set correctly when the file name (or directory path to the file name) contains MBCS characters. Setting the system locale is not sufficient; the user locale must be set to process MBCS characters.