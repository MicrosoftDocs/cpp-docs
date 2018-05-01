---
title: "Compiler Error C2857 | Microsoft Docs"
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
  - "C2857"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2857"
ms.assetid: b57302bd-58ec-45ae-992a-1e282d5eeccc
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2857
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2857](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2857).  
  
  
include' statement specified with the /Ycfilename command-line option was not found in the source file  
  
 The [/Yc](../../build/reference/yc-create-precompiled-header-file.md) option specifies the name of an include file that is not included in the source file being compiled.  
  
 This error can be caused by a `#include` statement in a conditional compilation block that is not compiled.

