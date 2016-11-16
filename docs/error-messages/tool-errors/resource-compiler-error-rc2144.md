---
title: "Resource Compiler Error RC2144 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "RC2144"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "RC2144"
ms.assetid: 1b3ff39a-92cd-4a04-b1a3-b1fa6a805813
caps.latest.revision: 8
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
# Resource Compiler Error RC2144
PRIMARY LANGUAGE ID not a number  
  
 The PRIMARY LANGUAGE ID must be a hexadecimal language ID. See [Language and Country/Region Strings](../../c-runtime-library/locale-names-languages-and-country-region-strings.md) in the *Run-Time Library Reference* for a list of valid Language IDs.  
  
 This error can also occur if resources have been added and deleted from the .RC file using a tool. To fix this issue, open the .RC file in a text editor and clean up any unused resources manually.