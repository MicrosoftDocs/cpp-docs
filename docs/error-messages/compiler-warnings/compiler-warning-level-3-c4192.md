---
title: "Compiler Warning (level 3) C4192 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4192"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4192"
ms.assetid: ea5f91fa-8c96-4f3f-ac42-0c8a86d4e5df
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
# Compiler Warning (level 3) C4192
automatically excluding 'name' while importing type library 'library'  
  
 A `#import` library contains an item, *name*, that is also defined in the Win32 system headers. Due to limitations of type libraries, names such as **IUnknown** or GUID are often defined in a type library, duplicating the definition from the system headers. `#import` will detect these items and refuse to incorporate them in the .tlh and .tli header files.  
  
 To override this behavior, use `#import` attributes [no_auto_exclude](../../preprocessor/no-auto-exclude.md) and [include()](../../preprocessor/include-parens.md).