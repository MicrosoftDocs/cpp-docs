---
title: "NMAKE Fatal Error U1045 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["U1045"]
dev_langs: ["C++"]
helpviewer_keywords: ["U1045"]
ms.assetid: dc70d162-14b9-4107-9237-7514044d72e3
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# NMAKE Fatal Error U1045
spawn failed : message  
  
 A program or command called by NMAKE failed for the given reason. When NMAKE calls another program—for example, the compiler or linker—the call may fail, or an error may be returned by the called program. This message is used to report the error.  
  
 To fix this issue, first determine the cause of the error. You can use the commands reported by the NMAKE [/N](../../build/nmake-options.md) option to verify the environment settings and to repeat the actions performed by NMAKE on the command line.