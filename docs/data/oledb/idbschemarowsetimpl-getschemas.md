---
title: "IDBSchemaRowsetImpl::GetSchemas | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ATL::IDBSchemaRowsetImpl::GetSchemas"
  - "GetSchemas"
  - "IDBSchemaRowsetImpl<SessionClass>::GetSchemas"
  - "ATL.IDBSchemaRowsetImpl.GetSchemas"
  - "ATL::IDBSchemaRowsetImpl<SessionClass>::GetSchemas"
  - "IDBSchemaRowsetImpl.GetSchemas"
  - "IDBSchemaRowsetImpl::GetSchemas"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetSchemas method"
ms.assetid: fbe725a6-3acd-45f8-bcaf-10a6c1239cd2
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
# IDBSchemaRowsetImpl::GetSchemas
Returns a list of schema rowsets accessible by [IDBSchemaRowsetImpl::GetRowset](../../data/oledb/idbschemarowsetimpl-getrowset.md).  
  
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
 This method returns an array of all schema rowsets supported by the provider. See [IDBSchemaRowset::GetSchemas](https://msdn.microsoft.com/en-us/library/ms719605.aspx) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 The implementation of this function requires the user to have a schema map in the session class. Using the schema map information, it then responds with the array of GUIDs for the schemas in the map. This represents the schemas supported by the provider.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IDBSchemaRowsetImpl Class](../../data/oledb/idbschemarowsetimpl-class.md)   
 [IDBSchemaRowsetImpl Class Members](http://msdn.microsoft.com/en-us/e74f6f82-541c-42e7-b4c6-e2d4656a0649)   
 [IDBSchemaRowsetImpl::GetRowset](../../data/oledb/idbschemarowsetimpl-getrowset.md)   
 [IDBSchemaRowset::GetRowset](https://msdn.microsoft.com/en-us/library/ms722634.aspx)   
 [Schema Rowset Classes and Typedef Classes](../../data/oledb/schema-rowset-classes-and-typedef-classes.md)