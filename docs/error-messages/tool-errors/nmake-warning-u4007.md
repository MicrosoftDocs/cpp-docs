---
title: "NMAKE Warning U4007 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "U4007"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "U4007"
ms.assetid: 61ec0417-6961-43c1-ade8-f9d6e93289e9
caps.latest.revision: 5
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
# NMAKE Warning U4007
filename 'filename' too long; truncating to 8.3  
  
 The base name of the given file has more than eight characters, or the extension has more than three characters. NMAKE truncated the name to an eight-character base and a three-character extension.  
  
 If long filenames are supported by your file system, enclose the name in double quotation marks (**"**).