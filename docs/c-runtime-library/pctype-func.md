---
title: "__pctype_func | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "conceptual"
apiname: ["__pctype_func"]
apilocation: ["msvcrt.dll", "msvcr110_clr0400.dll", "msvcr110.dll", "msvcr120.dll", "msvcr90.dll", "msvcr100.dll", "msvcr80.dll"]
apitype: "DLLExport"
f1_keywords: ["__pctype_func"]
dev_langs: ["C++"]
helpviewer_keywords: ["__pctype_func"]
ms.assetid: d52b8add-d07d-4516-a22f-e836cde0c57f
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# __pctype_func
Retrieves a pointer to an array of character classification information.  
  
## Syntax  
  
```cpp  
const unsigned short *__pctype_func(  
   )  
```  
  
## Return Value  
 A pointer to an array of character classification information.  
  
## Remarks  
 The information in the character classification table is for internal use only, and is used by various functions that classify characters of type `char`. For more information, see the `Remarks` section of [_pctype, _pwctype, _wctype, _mbctype, _mbcasemap](../c-runtime-library/pctype-pwctype-wctype-mbctype-mbcasemap.md).  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|__pctype_func|ctype.h|  
  
## See Also  
 [_pctype, _pwctype, _wctype, _mbctype, _mbcasemap](../c-runtime-library/pctype-pwctype-wctype-mbctype-mbcasemap.md)