---
title: "Fatal Error C1854 | Microsoft Docs"
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
  - "C1854"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1854"
ms.assetid: 8c21a9cc-1737-475c-9e57-8725cd8937c1
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Fatal Error C1854
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Fatal Error C1854](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/fatal-error-c1854).  
  
  
cannot overwrite information formed during creation of the precompiled header in object file: 'filename'  
  
 You specified the **/Yu** (use precompiled header) option after specifying the **/Yc** (create precompiled header) option for the same file. Certain declarations (such as declarations including `__declspec` `dllexport`) make this invalid.

