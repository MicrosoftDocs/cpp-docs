---
title: "space_info Structure"
ms.custom: na
ms.date: 10/06/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: f2b35b42-06ff-45bd-8617-39a0f5358a54
caps.latest.revision: 12
manager: ghogen
translation.priority.mt: 
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
# space_info Structure
Holds information about a volume.  
  
## Syntax  
  
```  
struct space_info;  
```  
  
## Members  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|`unsigned long long available`|Represents the number of bytes that are available to represent data on the volume.|  
|`unsigned long long capacity`|Represents the total number of bytes that the volume can represent.|  
|`unsigned long long free`|Represents the number of bytes that are not used to represent data on the volume.|  
  
## Requirements  
 **Header:** filesystem  
  
 **Namespace:** std::tr2::sys  
  
## See Also  
 [Header Files Reference](../VS_visualcpp/C---Standard-Library-Header-Files.md)   
 [<filesystem\>](../VS_visualcpp/-filesystem-.md)   
 [space Function](assetId:///7fce0b0e-523b-4598-b218-47245d0204ca)   
 [File System Navigation (C++)](../VS_visualcpp/File-System-Navigation.md)