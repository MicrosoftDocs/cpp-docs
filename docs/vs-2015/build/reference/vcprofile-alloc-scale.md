---
title: "VCPROFILE_ALLOC_SCALE | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VCPROFILE_ALLOC_SCALE"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "VCPROFILE_ALLOC_SCALE environment variable"
ms.assetid: 5cb5ce27-f9b8-489b-b46c-d6e9bcab2d34
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# VCPROFILE_ALLOC_SCALE
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [VCPROFILE_ALLOC_SCALE](https://docs.microsoft.com/cpp/build/reference/vcprofile-alloc-scale).  
  
  
Modify the amount of memory allocated to hold the profile data.  
  
## Syntax  
  
```  
VCPROFILE_ALLOC_SCALE=scale_value  
```  
  
#### Parameters  
 `scale_value`  
 The scale value for the amount of memory you want for running test scenarios.  The default is 1.  
  
## Remarks  
 In rare cases, there will not be enough memory available to support gathering profile data when running test scenarios.  In those cases, you can increase the amount of memory with `VCPROFILE_ALLOC_SCALE`.  
  
 If you receive an error message during a test run that indicates that you have insufficient memory, assign a larger value to `VCPROFILE_ALLOC_SCALE`, until the test runs complete with no out-of-memory errors.  
  
## Example  
  
```  
set VCPROFILE_ALLOC_SCALE=2  
```  
  
## See Also  
 [Environment Variables for Profile-Guided Optimizations](../../build/reference/environment-variables-for-profile-guided-optimizations.md)

