---
title: "IDBSchemaRowsetImpl::GetRowset"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 3ae28c22-e186-4a15-8591-b0192e784a6f
caps.latest.revision: 9
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# IDBSchemaRowsetImpl::GetRowset
Returns a schema rowset.  
  
## Syntax  
  
```  
  
      STDMETHOD (GetRowset)(  
   IUnknown *pUnkOuter,  
   REFGUID rguidSchema,  
   ULONG cRestrictions,  
   const VARIANT rgRestrictions[],  
   REFIID riid,  
   ULONG cPropertySets,  
   DBPROPSET rgPropertySets[],  
   IUnknown **ppRowset   
);  
```  
  
#### Parameters  
 `pUnkOuter`  
 [in] An outer **IUnknown** when aggregating; otherwise **NULL**.  
  
 `rguidSchema`  
 [in] A reference to the requested schema rowset GUID (for example, `DBSCHEMA_TABLES`).  
  
 `cRestrictions`  
 [in] A count of restrictions to be applied to the rowset.  
  
 `rgRestrictions`  
 [in] An array of `cRestrictions`**VARIANT**s that represent the restrictions.  
  
 `riid`  
 [in] The IID to request of the newly created schema rowset.  
  
 `cPropertySets`  
 [in] The number of property sets to set.  
  
 `rgPropertySets`  
 [in/out] An array of [DBPROPSET](https://msdn.microsoft.com/en-us/library/ms714367.aspx) structures to set on the newly created schema rowset.  
  
 `ppRowset`  
 [out] A pointer to the requested interface on the newly created schema rowset.  
  
## Remarks  
 This method requires the user to have a schema map in the session class. Using the schema map information, `GetRowset` creates a given rowset object if the `rguidSchema` parameter is equal to one of the map entries GUIDs. See [SCHEMA_ENTRY](../VS_visualcpp/SCHEMA_ENTRY.md) for a description of the map entry.  
  
 See [IDBSchemaRowset::GetRowset](https://msdn.microsoft.com/en-us/library/ms722634.aspx) in the Windows SDK.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IDBSchemaRowsetImpl Class](../VS_visualcpp/IDBSchemaRowsetImpl-Class.md)   
 [IDBSchemaRowsetImpl Class Members](assetId:///e74f6f82-541c-42e7-b4c6-e2d4656a0649)   
 [IDBSchemaRowsetImpl::GetSchemas](../VS_visualcpp/IDBSchemaRowsetImpl--GetSchemas.md)   
 [Schema Rowset Classes and Typedef Classes](../VS_visualcpp/Schema-Rowset-Classes-and-Typedef-Classes.md)