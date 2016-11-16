---
title: "IDBSchemaRowsetImpl::CheckRestrictions | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CheckRestrictions"
  - "IDBSchemaRowsetImpl::CheckRestrictions"
  - "IDBSchemaRowsetImpl.CheckRestrictions"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CheckRestrictions method"
ms.assetid: 3c9d77d2-0e4b-48fa-80db-d735da19f1cf
caps.latest.revision: 9
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
# IDBSchemaRowsetImpl::CheckRestrictions
Checks the validity of restrictions against a schema rowset.  
  
## Syntax  
  
```  
  
      HRESULT CheckRestrictions(  
   REFGUID rguidSchema,  
   ULONG cRestrictions,  
   const VARIANT rgRestrictions[]  
);  
```  
  
#### Parameters  
 `rguidSchema`  
 [in] A reference to the requested schema rowset GUID (for example, `DBSCHEMA_TABLES`).  
  
 `cRestrictions`  
 [in] The number of restrictions that the consumer passed in for the schema rowset.  
  
 `rgRestrictions`  
 [in] An array of length *cRestrictions* of restriction values to be set. For more information, see the description of the `rgRestrictions` parameter in [SetRestrictions](../../data/oledb/idbschemarowsetimpl-setrestrictions.md).  
  
## Remarks  
 Use `CheckRestrictions` to check the validity of restrictions against a schema rowset. It checks restrictions for `DBSCHEMA_TABLES`, **DBSCHEMA_COLUMNS**, and **DBSCHEMA_PROVIDER_TYPES** schema rowsets. Call it to determine if a consumer's call to **IDBSchemaRowset::GetRowset** is correct. If you want to support schema rowsets other than those listed above, you should create your own function to carry out this task.  
  
 `CheckRestrictions` determines if the consumer is calling [GetRowset](../../data/oledb/idbschemarowsetimpl-getrowset.md) with the correct restriction and the correct restriction type (for example, a `VT_BSTR` for a string) that the provider supports. It also determines if the correct number of restrictions are supported. By default, `CheckRestrictions` will ask the provider, through the [SetRestrictions](../../data/oledb/idbschemarowsetimpl-setrestrictions.md) call, which restrictions it supports on a given rowset. It then compares the restrictions from the consumer against those supported by the provider and either succeeds or fails.  
  
 For more information on schema rowsets, see [IDBSchemaRowset](https://msdn.microsoft.com/en-us/library/ms713686.aspx) in the *OLE DB Programmer's Reference* in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IDBSchemaRowsetImpl Class](../../data/oledb/idbschemarowsetimpl-class.md)   
 [IDBSchemaRowsetImpl Class Members](http://msdn.microsoft.com/en-us/e74f6f82-541c-42e7-b4c6-e2d4656a0649)   
 [Schema Rowset Classes and Typedef Classes](../../data/oledb/schema-rowset-classes-and-typedef-classes.md)