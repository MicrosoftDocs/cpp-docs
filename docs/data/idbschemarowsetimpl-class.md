---
title: "IDBSchemaRowsetImpl Class"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "IDBSchemaRowsetImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IDBSchemaRowsetImpl class"
ms.assetid: bd7bf0d7-a1c6-4afa-88e3-cfdbdf560703
caps.latest.revision: 8
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
# IDBSchemaRowsetImpl Class
Provides implementation for schema rowsets.  
  
## Syntax  
  
```  
template <class SessionClass>  
class ATL_NO_VTABLE IDBSchemaRowsetImpl : public IDBSchemaRowset  
```  
  
#### Parameters  
 `SessionClass`  
 The class by which `IDBSchemaRowsetImpl` is inherited. Typically, this class will be the user's session class.  
  
## Members  
  
### Methods  
  
|||  
|-|-|  
|[CheckRestrictions](../data/idbschemarowsetimpl--checkrestrictions.md)|Checks the validity of restrictions against a schema rowset.|  
|[CreateSchemaRowset](../data/idbschemarowsetimpl--createschemarowset.md)|Implements a COM object creator function for the object specified by the template parameter.|  
|[SetRestrictions](../data/idbschemarowsetimpl--setrestrictions.md)|Specifies which restrictions you support on a particular schema rowset.|  
  
### Interface Methods  
  
|||  
|-|-|  
|[GetRowset](../data/idbschemarowsetimpl--getrowset.md)|Returns a schema rowset.|  
|[GetSchemas](../data/idbschemarowsetimpl--getschemas.md)|Returns a list of schema rowsets accessible by [IDBSchemaRowsetImpl::GetRowset](../data/idbschemarowsetimpl--getrowset.md).|  
  
## Remarks  
 This class implements the [IDBSchemaRowset](https://msdn.microsoft.com/en-us/library/ms713686.aspx) interface and the templatized creator function [CreateSchemaRowset](../data/idbschemarowsetimpl--createschemarowset.md).  
  
 OLE DB uses schema rowsets to return data about the data in a provider. Such data is often called "metadata." By default, a provider must always support `DBSCHEMA_TABLES`, **DBSCHEMA_COLUMNS**, and **DBSCHEMA_PROVIDER_TYPES**, as described in [IDBSchemaRowset](https://msdn.microsoft.com/en-us/library/ms713686.aspx) in the *OLE DB Programmer's Reference*. Schema rowsets are designated in a schema map. For information about the schema map entries, see [SCHEMA_ENTRY](../data/schema_entry.md).  
  
 The OLE DB Provider Wizard, in the ATL Object Wizard, automatically generates code for the schema rowsets in your project. (By default, the wizard supports the mandatory schema rowsets previously mentioned.) When you create a consumer using the ATL Object Wizard, the wizard uses schema rowsets to bind the correct data to a provider. If you do not implement your schema rowsets to provide the correct metadata, the wizard will not bind the correct data.  
  
 For information on how to support schema rowsets in your provider, see [Supporting Schema Rowsets](../data/supporting-schema-rowsets.md).  
  
 For more information about schema rowsets, see [Schema Rowsets](https://msdn.microsoft.com/en-us/library/ms712921.aspx) in the *OLE DB Programmer's Reference*.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IDBSchemaRowsetImpl Class Members](assetId:///e74f6f82-541c-42e7-b4c6-e2d4656a0649)   
 [Schema Rowset Classes and Typedef Classes](../data/schema-rowset-classes-and-typedef-classes.md)   
 [Supporting Schema Rowsets](../data/supporting-schema-rowsets.md)