---
title: "CDBErrorInfo::GetAllErrorInfo | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ATL.CDBErrorInfo.GetAllErrorInfo"
  - "CDBErrorInfo::GetAllErrorInfo"
  - "ATL::CDBErrorInfo::GetAllErrorInfo"
  - "GetAllErrorInfo"
  - "CDBErrorInfo.GetAllErrorInfo"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetAllErrorInfo method"
ms.assetid: 630049fa-d296-497a-bbf6-f5d3d71d271d
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
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
# CDBErrorInfo::GetAllErrorInfo
Returns all the types of error information contained in an error record.  
  
## Syntax  
  
```  
  
      HRESULT GetAllErrorInfo(  
   ULONG ulRecordNum,  
   LCID lcid,  
   BSTR* pbstrDescription,  
   BSTR* pbstrSource = NULL,  
   GUID* pguid = NULL,  
   DWORD* pdwHelpContext = NULL,  
   BSTR* pbstrHelpFile = NULL  
) const throw( );  
```  
  
#### Parameters  
 *ulRecordNum*  
 [in] The zero-based number of the record for which to return error information.  
  
 `lcid`  
 [in] The locale ID for the error information to be returned.  
  
 `pbstrDescription`  
 [out] A pointer to a text description of the error or NULL if the locale is not supported. See Remarks.  
  
 `pbstrSource`  
 [out] A pointer to a string containing the name of the component that generated the error.  
  
 `pguid`  
 [out] A pointer to the GUID of the interface that defined the error.  
  
 *pdwHelpContext*  
 [out] A pointer to the help context ID for the error.  
  
 *pbstrHelpFile*  
 [out] A pointer to a string containing the path to the help file that describes the error.  
  
## Return Value  
 `S_OK` if successful. See [IErrorRecords::GetErrorInfo](https://msdn.microsoft.com/en-us/library/ms711230.aspx) in the *OLE DB Programmer's Reference* for other return values.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## Remarks  
 The output value of `pbstrDescription` is obtained internally by calling IErrorInfo::GetDescription, which sets the value to NULL if the locale is not supported, or if both of the following conditions are true:  
  
1.  the value of `lcid` is NOT U.S. English and  
  
2.  the value of `lcid` is NOT equal to the value returned by GetUserDefaultLCID.  
  
## See Also  
 [CDBErrorInfo Class](../../data/oledb/cdberrorinfo-class.md)