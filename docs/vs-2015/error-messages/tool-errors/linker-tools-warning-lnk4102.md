---
title: "Linker Tools Warning LNK4102 | Microsoft Docs"
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
  - "LNK4102"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK4102"
ms.assetid: bfd1b17e-05c7-4bc2-80d6-2888b1a425b2
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Linker Tools Warning LNK4102
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Linker Tools Warning LNK4102](https://docs.microsoft.com/cpp/error-messages/tool-errors/linker-tools-warning-lnk4102).  
  
  
export of deleting destructor 'name'; image may not run correctly  
  
 The program has attempted to export a deleting destructor. The resulting delete may occur across a DLL boundary such that a process can free memory that it does not own. Make sure that the given symbol is not listed in your .def file, and that the symbol is not listed as an argument of the **/IMPORT** or **/EXPORT** option in the linker command line.  
  
 If you are rebuilding the C run-time library, you can ignore this message.

