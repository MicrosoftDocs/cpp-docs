---
title: "IDBSchemaRowsetImpl::CreateSchemaRowset | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "IDBSchemaRowsetImpl::CreateSchemaRowset"
  - "ATL::IDBSchemaRowsetImpl::CreateSchemaRowset"
  - "CreateSchemaRowset"
  - "IDBSchemaRowsetImpl.CreateSchemaRowset"
  - "ATL.IDBSchemaRowsetImpl.CreateSchemaRowset"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CreateSchemaRowset method"
ms.assetid: ad3e3e4d-45b9-461c-b7b8-3af6843631b1
caps.latest.revision: 8
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
# IDBSchemaRowsetImpl::CreateSchemaRowset
Implements a COM object creator function for the object specified by the template parameter.  
  
## Syntax  
  
```  
  
      template < class   
      SchemaRowsetClass  
       >  
HRESULT CreateSchemaRowset(  
   IUnknown *pUnkOuter,  
   ULONG cRestrictions,  
   const VARIANT rgRestrictions[],  
   REFIID riid,  
   ULONG cPropertySets,  
   DBPROPSET rgPropertySets[],  
   IUnknown** ppRowset,  
   SchemaRowsetClass*& pSchemaRowset   
);  
```  
  
#### Parameters  
 `pUnkOuter`  
 [in] An outer [IUnknown](http://msdn.microsoft.com/library/windows/desktop/ms680509) when aggregating, otherwise **NULL**.  
  
 `cRestrictions`  
 [in] The count of restrictions applied to the schema rowset.  
  
 `rgRestrictions`  
 [in] An array of `cRestrictions`**VARIANT**s to be applied to the rowset.  
  
 `riid`  
 [in] The interface to [QueryInterface](../../atl/queryinterface.md) for on the output **IUnknown**.  
  
 `cPropertySets`  
 [in] The number of property sets to set.  
  
 `rgPropertySets`  
 [in] An array of [DBPROPSET](https://msdn.microsoft.com/en-us/library/ms714367.aspx) structures that specify the properties being set.  
  
 `ppRowset`  
 [out] The outgoing **IUnknown** requested by `riid`. This **IUnknown** is an interface on the schema rowset object.  
  
 `pSchemaRowset`  
 [out] A pointer to an instance of the schema rowset class. Typically, this parameter is not used, but it can be used if you must perform more work on the schema rowset before handing it out to a COM object. The lifetime of `pSchemaRowset` is bound by `ppRowset`.  
  
## Return Value  
 A standard `HRESULT` value.  
  
## Remarks  
 This function implements a generic creator for all types of schema rowsets. Typically, the user does not call this function. It is called by the implementation of the schema map.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IDBSchemaRowsetImpl Class](../../data/oledb/idbschemarowsetimpl-class.md)   
 [IDBSchemaRowsetImpl Class Members](http://msdn.microsoft.com/en-us/e74f6f82-541c-42e7-b4c6-e2d4656a0649)   
 [SCHEMA_ENTRY](../../data/oledb/schema-entry.md)   
 [Schema Rowset Classes and Typedef Classes](../../data/oledb/schema-rowset-classes-and-typedef-classes.md)