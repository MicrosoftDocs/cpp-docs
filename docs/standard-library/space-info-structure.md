---
title: "space_info Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "filesystem/std::tr2::sys::space_info"
dev_langs: 
  - "C++"
ms.assetid: f2b35b42-06ff-45bd-8617-39a0f5358a54
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.mt: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# space_info Structure
Holds information about a volume.  
  
## Syntax  
  
```  
struct space_info	{
	uintmax_t capacity;
	uintmax_t free;
	uintmax_t available;
	};  
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
  
 **Namespace:** std::experimental::filesystem  
  
## See Also  
 [Header Files Reference](../standard-library/cpp-standard-library-header-files.md)   
 [\<filesystem>](../standard-library/filesystem.md)   
 [space Function](http://msdn.microsoft.com/en-us/7fce0b0e-523b-4598-b218-47245d0204ca)   
 [File System Navigation (C++)](../standard-library/file-system-navigation.md)

