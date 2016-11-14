---
title: "Scalar Types | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 07c9195e-b6c7-4083-8ef0-8a93032e4d1e
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Scalar Types
Although the access of data can stem from any alignment, it is recommended that data be aligned on its natural boundary to avoid performance loss (or a multiple thereof). Enums are constant integers and are treated as 32-bit integers. The following table describes the type definition and recommended storage for it as it pertains to alignment using the following alignment values:  
  
-   Byte – 8 bits  
  
-   Word – 16 bits  
  
-   Double Word – 32 bits  
  
-   Quad Word – 64 bits  
  
-   Octa Word – 128 bits  
  
|||||  
|-|-|-|-|  
|Scalar Type|C Data Type|Storage Size (in bytes)|Recommended Alignment|  
|**INT8**|`char`|1|Byte|  
|**UINT8**|`unsigned char`|1|Byte|  
|**INT16**|**short**|2|Word|  
|**UINT16**|**unsigned short**|2|Word|  
|**INT32**|**int, long**|4|Doubleword|  
|**UINT32**|**unsigned int, unsigned long**|4|Doubleword|  
|**INT64**|`__int64`|8|Quadword|  
|**UINT64**|**unsigned __int64**|8|Quadword|  
|**FP32 (single precision)**|**float**|4|Doubleword|  
|**FP64 (double precision)**|**double**|8|Quadword|  
|**POINTER**|**\***|8|Quadword|  
|`__m64`|**struct __m64**|8|Quadword|  
|`__m128`|**struct __m128**|16|Octaword|  
  
## See Also  
 [Types and Storage](../build/types-and-storage.md)