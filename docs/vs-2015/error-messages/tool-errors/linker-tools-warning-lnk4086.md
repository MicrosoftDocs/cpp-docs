---
title: "Linker Tools Warning LNK4086 | Microsoft Docs"
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
  - "LNK4086"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK4086"
ms.assetid: ea1eecbb-ba2c-41bb-9a4f-fa0808a4b92d
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Linker Tools Warning LNK4086
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Linker Tools Warning LNK4086](https://docs.microsoft.com/cpp/error-messages/tool-errors/linker-tools-warning-lnk4086).  
  
  
entrypoint 'function' is not __stdcall with 'number' bytes of arguments; image may not run  
  
 The entry point for a DLL must be `__stdcall`. Either recompile the function with the [/Gz](../../build/reference/gd-gr-gv-gz-calling-convention.md) option or specify `__stdcall` or WINAPI when you define the function.

