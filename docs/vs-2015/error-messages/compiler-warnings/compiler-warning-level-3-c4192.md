---
title: "Compiler Warning (level 3) C4192 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
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
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 3) C4192
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 3) C4192](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4192).  
  
  
automatically excluding 'name' while importing type library 'library'  
  
 A `#import` library contains an item, *name*, that is also defined in the Win32 system headers. Due to limitations of type libraries, names such as **IUnknown** or GUID are often defined in a type library, duplicating the definition from the system headers. `#import` will detect these items and refuse to incorporate them in the .tlh and .tli header files.  
  
 To override this behavior, use `#import` attributes [no_auto_exclude](../../preprocessor/no-auto-exclude.md) and [include()](../../preprocessor/include-parens.md).

