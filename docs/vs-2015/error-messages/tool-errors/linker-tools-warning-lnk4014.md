---
title: "Linker Tools Warning LNK4014 | Microsoft Docs"
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
  - "LNK4014"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK4014"
ms.assetid: 394903e9-3ded-4ea4-b7c0-a3535d4b4da4
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Linker Tools Warning LNK4014
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Linker Tools Warning LNK4014](https://docs.microsoft.com/cpp/error-messages/tool-errors/linker-tools-warning-lnk4014).  
  
  
cannot find member object "objectname"  
  
 LIB could not find `objectname` in the library.  
  
 The **/REMOVE** and **/EXTRACT** options require the full name of the member object that is to be deleted or copied to a file. The full name includes the path of the original object file. To see the full names of member objects in a library, use DUMPBIN [/ARCHIVEMEMBERS](../../build/reference/archivemembers.md) or LIB [/LIST](../../build/reference/managing-a-library.md).

