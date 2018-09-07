---
title: "Type Checking (CRT) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "conceptual"
f1_keywords: ["c.types"]
dev_langs: ["C++"]
helpviewer_keywords: ["checking type", "variable argument functions", "type checking"]
ms.assetid: 1ba7590b-d1c0-4636-b6a0-e231395abdad
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Type Checking (CRT)
The compiler performs limited type checking on functions that can take a variable number of arguments, as follows:  
  
|Function call|Type-checked arguments|  
|-------------------|-----------------------------|  
|`_cprintf_s`, `_cscanf_s`, `printf_s`, `scanf_s`|First argument (format string)|  
|`fprintf_s`, `fscanf_s`, `sprintf_s`, `sscanf_s`|First two arguments (file or buffer and format string)|  
|`_snprintf_s`|First three arguments (file or buffer, count, and format string)|  
|`_open`|First two arguments (path and `_open` flag)|  
|`_sopen_s`|First three arguments (path, `_open` flag, and sharing mode)|  
|`_execl`, `_execle`, `_execlp`, `_execlpe`|First two arguments (path and first argument pointer)|  
|`_spawnl`, `_spawnle`, `_spawnlp`, `_spawnlpe`|First three arguments (mode flag, path, and first argument pointer)|  
  
 The compiler performs the same limited type checking on the wide-character counterparts of these functions.  
  
## See Also  
 [CRT Library Features](../c-runtime-library/crt-library-features.md)