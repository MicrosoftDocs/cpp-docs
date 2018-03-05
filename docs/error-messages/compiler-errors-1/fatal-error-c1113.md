---
title: "Fatal Error C1113 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: ["C1113"]
dev_langs: ["C++"]
helpviewer_keywords: ["C1113"]
ms.assetid: 1c7c3ce7-2827-4822-9c63-0abc8615ea39
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# Fatal Error C1113
\#using failed on 'file'  
  
 Only a file in the Microsoft Intermediate Language (MSIL) format can be passed to a [#using](../../preprocessor/hash-using-directive-cpp.md) directive. The [/clr](../../build/reference/clr-common-language-runtime-compilation.md) compiler option lets you create an MSIL output file. Other [!INCLUDE[vsprvs](../../assembler/masm/includes/vsprvs_md.md)] languages also produce MSIL files.