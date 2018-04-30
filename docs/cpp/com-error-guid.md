---
title: "_com_error::GUID | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-language"]
ms.topic: "language-reference"
f1_keywords: ["_com_error::GUID"]
dev_langs: ["C++"]
helpviewer_keywords: ["GUID method [C++]"]
ms.assetid: e84c2c23-d02e-48f8-b776-9bd6937296d2
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# _com_error::GUID
**Microsoft Specific**  
  
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