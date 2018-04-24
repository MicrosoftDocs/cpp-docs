---
title: "Linker Tools Error LNK1215 | Microsoft Docs"
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
  - "LNK1215"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK1215"
ms.assetid: 0774d8e6-f0c1-4efb-8723-7e1be6863d81
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Linker Tools Error LNK1215
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Linker Tools Error LNK1215](https://docs.microsoft.com/cpp/error-messages/tool-errors/linker-tools-error-lnk1215).  
  
  
metadata operation failed (HRESULT) : error  
  
 The linker received an error from the .NET runtime while attempting to do a metadata update through the .NET runtime.  
  
 `HRESULT` is the HRESULT from the .NET runtime method. `error` is the .NET-supplied text.  
  
 You probably have a mismatched linker and .NET runtime; reinstall Visual C++.

