---
title: "HSE_VERSION_INFO Structure | Microsoft Docs"
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
  - "HSE_VERSION_INFO"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "HSE_VERSION_INFO structure"
ms.assetid: 4837312d-68c8-4d05-9afa-1934d7d49b20
caps.latest.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# HSE_VERSION_INFO Structure
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [HSE_VERSION_INFO Structure](https://docs.microsoft.com/cpp/mfc/reference/hse-version-info-structure).  
  
  
This structure is pointed to by the `pVer` parameter in the `CHttpServer::GetExtensionVersion` member function. It provides the ISA version number and a text description of the ISA.  
  
## Syntax  
  
```  
typedef struct _HSE_VERSION_INFO {  
    DWORD dwExtensionVersion;  
    CHAR lpszExtensionDesc[HSE_MAX_EXT_DLL_NAME_LEN];  
} HSE_VERSION_INFO, *LPHSE_VERSION_INFO;  
```  
  
#### Parameters  
 *dwExtensionVersion*  
 The version number of the ISA.  
  
 *lpszExtensionDesc*  
 The text description of the ISA. The default implementation provides placeholder text; override `CHttpServer::GetExtensionVersion` to provide your own description.  
  
## Requirements  
 **Header:** httpext.h  
  
## See Also  
 [Structures, Styles, Callbacks, and Message Maps](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)







