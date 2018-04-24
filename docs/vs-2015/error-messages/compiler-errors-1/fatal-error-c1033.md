---
title: "Fatal Error C1033 | Microsoft Docs"
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
  - "C1033"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1033"
ms.assetid: 09976c03-8450-4cf7-8b43-1b91c2c2b9f9
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Fatal Error C1033
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Fatal Error C1033](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/fatal-error-c1033).  
  
  
cannot open program database pdb  
  
 This error can be caused by disk error.  
  
 In Visual C++ .NET 2002, the user locale must be set correctly when the file name (or directory path to the file name) contains MBCS characters. Setting the system locale is not sufficient; the user locale must be set to process MBCS characters.  
  
 For more information, see [http://support.microsoft.com/default.aspx?scid=kb;en-us;246007](http://support.microsoft.com/default.aspx?scid=kb;en-us;246007).

