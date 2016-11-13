---
title: "CVTRES Fatal Error CVT1100 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "CVT1100"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CVT1100"
ms.assetid: 886e88dd-5818-4b5f-84f2-d2a3d75f0aaf
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
# CVTRES Fatal Error CVT1100
duplicate resource — type:type, name:name, language:language, flags:flags, size:size  
  
 The given resource was specified more than once.  
  
 You can get this error if the linker is creating a type library and you did not specify [/TLBID](../../build/reference/tlbid-specify-resource-id-for-typelib.md) and a resource in your project already uses 1. In this case, specify /TLBID and specify another number up to 65535.