---
title: "Linker Tools Warning LNK4204 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK4204"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK4204"
ms.assetid: 14adda20-0cbe-407b-90f6-9f81c93530e2
caps.latest.revision: 10
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
# Linker Tools Warning LNK4204
'filename' is missing debugging information for referencing module; linking object as if no debug info  
  
 The .pdb file has an erroneous signature. The linker will continue to link the object without debug information. You may want to recompile the object file using the [/Zi](../../build/reference/z7-zi-zi-debug-information-format.md) option.  
  
 LNK4204 can occur if some of the objects in the library refer to a file that no longer exists. This could happen when rebuilding the solution, for example; an object file might be deleted and not rebuilt because of a compilation error. In this case, either compile with **/Z7**, or **/Fd**, to update the objects to refer to a single file per-library (that is not the default .pdb file name).  For more information, see [/Fd (Program Database File Name)](../../build/reference/fd-program-database-file-name.md).  Ensure that the .pdb is saved with the library every time it is updated in the source control system.