---
title: "Fatal Error C1192 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "c1192"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1192"
ms.assetid: 54cff717-a3eb-471d-9bd4-1c2e673dbbef
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
# Fatal Error C1192
\#using failed on 'file'  
  
 Only a file in the Microsoft Intermediate Language (MSIL) format can be passed to a [#using](../../preprocessor/hash-using-directive-cpp.md) directive. The [/clr](../../build/reference/clr-common-language-runtime-compilation.md) compiler option lets you create an MSIL output file. Other Visual Studio languages also produce MSIL files.