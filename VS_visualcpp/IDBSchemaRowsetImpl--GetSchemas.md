---
title: "IDBSchemaRowsetImpl::GetSchemas"
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
ms.assetid: fbe725a6-3acd-45f8-bcaf-10a6c1239cd2
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
# IDBSchemaRowsetImpl::GetSchemas
Returns a list of schema rowsets accessible by [IDBSchemaRowsetImpl::GetRowset](../VS_visualcpp/IDBSchemaRowsetImpl--GetRowset.md).  
  
## Syntax  
  
```  
  
      STDMETHOD ( GetSchema s )(  
   ULONG * pcSchemas,  
   GUID ** prgSchemas,  
   ULONG** prgRest  
);  
```  
  
#### Parameters  
 *pcSchemas*  
 [out] A pointer to a **ULONG** that is filled with the number of schemas.  
  
 *prgSchemas*  
 [out] A pointer to an array of GUIDs that is filled with a pointer to an array of schema rowset GUIDs.  
  
 *prgRest*  
 [out] A pointer to an array of **ULONG**s that is to be filled with the restriction array.  
  
## Remarks  
 This method returns an array of all schema rowsets supported by the provider. See [IDBSchemaRowset::GetSchemas](https://msdn.microsoft.com/en-us/library/ms719605.aspx) in the Windows SDK.  
  
 The implementation of this function requires the user to have a schema map in the session class. Using the schema map information, it then responds with the array of GUIDs for the schemas in the map. This represents the schemas supported by the provider.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IDBSchemaRowsetImpl Class](../VS_visualcpp/IDBSchemaRowsetImpl-Class.md)   
 [IDBSchemaRowsetImpl Class Members](assetId:///e74f6f82-541c-42e7-b4c6-e2d4656a0649)   
 [IDBSchemaRowsetImpl::GetRowset](../VS_visualcpp/IDBSchemaRowsetImpl--GetRowset.md)   
 [IDBSchemaRowset::GetRowset](https://msdn.microsoft.com/en-us/library/ms722634.aspx)   
 [Schema Rowset Classes and Typedef Classes](../VS_visualcpp/Schema-Rowset-Classes-and-Typedef-Classes.md)