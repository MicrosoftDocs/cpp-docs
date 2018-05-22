---
title: "Linker Tools Warning LNK4206 | Microsoft Docs"
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
  - "LNK4206"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK4206"
ms.assetid: 6c108e33-00cf-4c5a-830d-d65d470930a7
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Linker Tools Warning LNK4206
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Linker Tools Warning LNK4206](https://docs.microsoft.com/cpp/error-messages/tool-errors/linker-tools-warning-lnk4206).  
  
  
precompiled type information not found; 'filename' not linked or overwritten; linking object as if no debug info  
  
 The given object file, compiled with [/Yc](../../build/reference/yc-create-precompiled-header-file.md), was either not specified in the LINK command or was overwritten.  
  
 A common scenario for this warning is when the .obj that was compiled with /Yc is in a library, and where there are no symbol references to that .obj from your code.  In that case, the linker will not use (or even see) the .obj file.  In this situation, you should recompile your code and use [/Yl](../../build/reference/yl-inject-pch-reference-for-debug-library.md) for the remaining objects (the objects that are not compiled with /Yc).

