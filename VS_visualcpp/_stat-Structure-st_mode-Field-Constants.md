---
title: "_stat Structure st_mode Field Constants"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
  - C
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: fd462004-7563-4766-8443-30b0a86174b6
caps.latest.revision: 6
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# _stat Structure st_mode Field Constants
## Syntax  
  
```  
  
#include <sys/stat.h>  
  
```  
  
## Remarks  
 These constants are used to indicate file type in the **st_mode** field of the [_stat structure](../VS_visualcpp/Standard-Types.md).  
  
 The bit mask constants are described below:  
  
|Constant|Meaning|  
|--------------|-------------|  
|`_S_IFMT`|File type mask|  
|`_S_IFDIR`|Directory|  
|`_S_IFCHR`|Character special (indicates a device if set)|  
|`_S_IFREG`|Regular|  
|`_S_IREAD`|Read permission, owner|  
|`_S_IWRITE`|Write permission, owner|  
|`_S_IEXEC`|Execute/search permission, owner|  
  
## See Also  
 [_stat, _wstat Functions](../VS_visualcpp/_stat--_stat32--_stat64--_stati64--_stat32i64--_stat64i32--_wstat--_wstat32--_wstat64--_wstati64--_wstat32i64--_wstat64i32.md)   
 [_fstat, _fstat32, _fstat64, _fstati64, _fstat32i64, _fstat64i32](../VS_visualcpp/_fstat--_fstat32--_fstat64--_fstati64--_fstat32i64--_fstat64i32.md)   
 [Standard Types](../VS_visualcpp/Standard-Types.md)   
 [Global Constants](../VS_visualcpp/Global-Constants.md)