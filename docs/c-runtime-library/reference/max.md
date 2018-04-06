---
title: "__max | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-standard-libraries"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
apiname: ["__max"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
apitype: "DLLExport"
f1_keywords: ["max", "__max"]
dev_langs: ["C++"]
helpviewer_keywords: ["max macro", "maximum macro", "__max macro"]
ms.assetid: 05c936f6-0e22-45d6-a58d-4bc102e9dae2
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# __max
Returns the larger of two values.  
  
## Syntax  
  
```  
type __max(  
   type a,  
   type b   
);  
```  
  
#### Parameters  
 `type`  
 Any numeric data type.  
  
 `a, b`  
 Values of any numeric type to be compared.  
  
## Return Value  
 `__max` returns the larger of its arguments.  
  
## Remarks  
 The `__max` macro compares two values and returns the value of the larger one. The arguments can be of any numeric data type, signed or unsigned. Both arguments and the return value must be of the same data type.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`__max`|\<stdlib.h>|  
  
## Example  
 For more information, see the example for [__min](../../c-runtime-library/reference/min.md).  
  
## See Also  
 [Floating-Point Support](../../c-runtime-library/floating-point-support.md)   
 [__min](../../c-runtime-library/reference/min.md)