---
title: "_com_error::GUID | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "GUID"
  - "_com_error.GUID"
  - "_com_error::GUID"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GUID method"
ms.assetid: e84c2c23-d02e-48f8-b776-9bd6937296d2
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# _com_error::GUID
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [_com_error::GUID](https://docs.microsoft.com/cpp/cpp/com-error-guid).  
  
Microsoft Specific**  
  
 Calls **IErrorInfo::GetGUID** function.  
  
## Syntax  
  
```  
  
GUID GUID( ) const throw( );  
  
```  
  
## Return Value  
 Returns the result of **IErrorInfo::GetGUID** for the **IErrorInfo** object recorded within the `_com_error` object. If no **IErrorInfo** object is recorded, it returns `GUID_NULL`.  
  
## Remarks  
 Any failure while calling the **IErrorInfo::GetGUID** method is ignored.  
  
 **END Microsoft Specific**  
  
## See Also  
 [_com_error Class](../cpp/com-error-class.md)





