---
title: "Compiler Error C2857 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2857"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2857"]
ms.assetid: b57302bd-58ec-45ae-992a-1e282d5eeccc
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2857
'#include' statement specified with the /Ycfilename command-line option was not found in the source file  
  
 The [/Yc](../../build/reference/yc-create-precompiled-header-file.md) option specifies the name of an include file that is not included in the source file being compiled.  
  
 This error can be caused by a `#include` statement in a conditional compilation block that is not compiled.