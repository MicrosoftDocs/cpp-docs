---
title: "ATL_URL_SCHEME enumeration | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "index-page "
dev_langs: ["C++"]
helpviewer_keywords: ["ATLUTIL/ATL::ATL_URL_SCHEME"]
ms.assetid: f4131046-8ba0-4ec1-8209-84203f05d20e
caps.latest.revision: 7.2
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---


# ATL_URL_SCHEME  

The members of this enumeration provide constants for the schemes understood by [CUrl](curl-class.md).  
  
## Syntax  
  
```  
  
      enum ATL_URL_SCHEME{  
   ATL_URL_SCHEME_UNKNOWN = -1,  
   ATL_URL_SCHEME_FTP     = 0,  
   ATL_URL_SCHEME_GOPHER  = 1,  
   ATL_URL_SCHEME_HTTP    = 2,  
   ATL_URL_SCHEME_HTTPS   = 3,  
   ATL_URL_SCHEME_FILE    = 4,  
   ATL_URL_SCHEME_NEWS    = 5,  
   ATL_URL_SCHEME_MAILTO  = 6,  
   ATL_URL_SCHEME_SOCKS   = 7  
};  
```  
  
## Requirements  
 **Header:** atlutil.h  
  
## See Also  
 [Concepts](../active-template-library-atl-concepts.md)   
 [CUrl::SetScheme](curl-class.md#setscheme)   
 [CUrl::GetScheme](curl-class.md#getscheme)