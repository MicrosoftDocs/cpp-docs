---
title: "Linker Tools Warning LNK4022 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["LNK4022"]
dev_langs: ["C++"]
helpviewer_keywords: ["LNK4022"]
ms.assetid: 890f487e-db98-45dd-a226-c7ccead82b1e
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Linker Tools Warning LNK4022
cannot find unique match for symbol 'symbol'  
  
 LINK or LIB found multiple matches for the given undecorated symbol and it could not resolve the ambiguity. No output file (.exe, .dll, .exp, or .lib) is produced. This warning is followed by one warning [LNK4002](../../error-messages/tool-errors/linker-tools-warning-lnk4002.md) for each duplicate symbol and is finally followed by fatal error [LNK1152](../../error-messages/tool-errors/linker-tools-error-lnk1152.md).  
  
 To prevent this warning, specify the symbol in its decorated form. Run [DUMPBIN](../../build/reference/dumpbin-options.md) on the object to see decorated names.