---
title: "NMAKE Warning U4011 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["U4011"]
dev_langs: ["C++"]
helpviewer_keywords: ["U4011"]
ms.assetid: e8244514-eba6-4285-8853-7baeefdcd8a4
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# NMAKE Warning U4011
'target' : not all dependents available; target not built  
  
 A dependent of the given target either did not exist or was out-of-date, and a command for updating the dependent returned a nonzero exit code. The /K option told NMAKE to continue processing unrelated parts of the build and to issue an exit code 1 when the NMAKE session is finished.  
  
 This warning is preceded by warning [U4010](../../error-messages/tool-errors/nmake-warning-u4010.md) for each dependent that failed to be created or updated.