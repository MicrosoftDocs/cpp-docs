---
title: "offsetof Macro | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
api_location: 
  - "msvcrt.dll"
  - "msvcr80.dll"
  - "msvcr90.dll"
  - "msvcr100.dll"
  - "msvcr100_clr0400.dll"
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr120.dll"
  - "msvcr120_clr0400.dll"
  - "ucrtbase.dll"
api_type: 
  - "DLLExport"
topic_type: 
  - "apiref"
f1_keywords: 
  - "offsetof"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "structure members, offset"
  - "offsetof macro"
ms.assetid: f3b4eb16-a882-4d38-afc9-eebd976a7352
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# offsetof Macro
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [offsetof Macro](https://docs.microsoft.com/cpp/c-runtime-library/reference/offsetof-macro).  
  
Retrieves the offset of a member from the beginning of its parent structure.  
  
## Syntax  
  
```  
  
      size_t offsetof(  
   structName,  
   memberName   
);  
```  
  
#### Parameters  
 *structName*  
 Name of the parent data structure.  
  
 `memberName`  
 Name of the member in the parent data structure for which to determine the offset.  
  
## Return Value  
 `offsetof` returns the offset in bytes of the specified member from the beginning of its parent data structure. It is undefined for bit fields.  
  
## Remarks  
 The `offsetof` macro returns the offset in bytes of `memberName` from the beginning of the structure specified by *structName* as a value of type `size_t`. You can specify types with the `struct` keyword.  
  
> [!NOTE]
>  `offsetof` is not a function and cannot be described using a C prototype.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`offsetof`|\<stddef.h>|  
  
 For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## Libraries  
 All versions of the [C run-time libraries](../../c-runtime-library/crt-library-features.md).  
  
## See Also  
 [Memory Allocation](../../c-runtime-library/memory-allocation.md)





