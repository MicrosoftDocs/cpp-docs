---
title: "IDBSchemaRowsetImpl::SetRestrictions"
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
ms.assetid: 707d5065-b853-4d38-9b67-3066b4d3b279
caps.latest.revision: 10
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
# IDBSchemaRowsetImpl::SetRestrictions
Specifies which restrictions you support on a particular schema rowset.  
  
## Syntax  
  
```  
  
      void SetRestrictions(  
   ULONG cRestrictions,  
   GUID* /* rguidSchema */,  
   ULONG* rgRestrictions   
);  
```  
  
#### Parameters  
 `cRestrictions`  
 [in] The number of restrictions in the `rgRestrictions` array and the number of GUIDs in the `rguidSchema` array.  
  
 `rguidSchema`  
 [in] An array of the GUIDs of the schema rowsets for which to fetch restrictions. Each array element contains the GUID of one schema rowset (for example, `DBSCHEMA_TABLES`).  
  
 `rgRestrictions`  
 [in] An array of length `cRestrictions` of restriction values to be set. Each element corresponds to the restrictions on the schema rowset identified by the GUID. If a schema rowset is not supported by the provider, the element is set to zero. Otherwise, the **ULONG** value contains a bit mask that represents the restrictions supported on that schema rowset. For more information on which restrictions correspond to a particular schema rowset, consult the table of schema rowset GUIDs in [IDBSchemaRowset](https://msdn.microsoft.com/en-us/library/ms713686.aspx) in the *OLE DB Programmer's Reference* in the Windows SDK.  
  
## Remarks  
 The **IDBSchemaRowset** object calls `SetRestrictions` to determine which restrictions you support on a particular schema rowset (it is called by [GetSchemas](../VS_visualcpp/IDBSchemaRowsetImpl--GetSchemas.md) through an upcasted pointer). Restrictions allow consumers to fetch only matching rows (for example, find all the columns in the table "MyTable"). Restrictions are optional, and in the case in which none are supported (the default), all data is always returned.  
  
 The default implementation of this method sets the `rgRestrictions` array elements to 0. Override the default in your session class to set restrictions other than the default.  
  
 For information on implementing schema rowset support, see [Supporting Schema Rowsets](../VS_visualcpp/Supporting-Schema-Rowsets.md).  
  
 For an example of an provider that supports schema rowsets, see the [UpdatePV](../VS_visualcpp/Visual-C---Samples.md) sample.  
  
 For more information on schema rowsets, see [IDBSchemaRowset](https://msdn.microsoft.com/en-us/library/ms713686.aspx) in the *OLE DB Programmer's Reference* in the Windows SDK.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IDBSchemaRowsetImpl Class](../VS_visualcpp/IDBSchemaRowsetImpl-Class.md)   
 [IDBSchemaRowsetImpl Class Members](assetId:///e74f6f82-541c-42e7-b4c6-e2d4656a0649)   
 [Schema Rowset Classes and Typedef Classes](../VS_visualcpp/Schema-Rowset-Classes-and-Typedef-Classes.md)   
 [Supporting Schema Rowsets](../VS_visualcpp/Supporting-Schema-Rowsets.md)   
 [UpdatePV](../VS_visualcpp/Visual-C---Samples.md)