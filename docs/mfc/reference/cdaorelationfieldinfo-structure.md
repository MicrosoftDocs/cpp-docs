---
title: "CDaoRelationFieldInfo Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CDaoRelationFieldInfo"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "DAO (Data Access Objects), Relations collection"
  - "CDaoRelationFieldInfo structure"
ms.assetid: 47cb89ca-dc80-47ce-96fd-cc4b88512558
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# CDaoRelationFieldInfo Structure
The `CDaoRelationFieldInfo` structure contains information about a field in a relation defined for data access objects (DAO).  
  
## Syntax  
  
```  
struct CDaoRelationFieldInfo  
{  
    CString m_strName;           // Primary  
    CString m_strForeignName;    // Primary  
};  
```  
  
#### Parameters  
 `m_strName`  
 The name of the field in the primary table of the relation.  
  
 `m_strForeignName`  
 The name of the field in the foreign table of the relation.  
  
## Remarks  
 A DAO relation object specifies the fields in a primary table and the fields in a foreign table that define the relation. The references to Primary in the structure definition above indicate how the information is returned in the `m_pFieldInfos` member of a [CDaoRelationInfo](../../mfc/reference/cdaorelationinfo-structure.md) object obtained by calling the [GetRelationInfo](../../mfc/reference/cdaodatabase-class.md#cdaodatabase__getrelationinfo) member function of class `CDaoDatabase`.  
  
 Relation objects and relation field objects are not represented by an MFC class. Instead, the DAO objects underlying MFC objects of class [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) contain a collection of relation objects, called the Relations collection. Each relation object, in turn, contains a collection of relation field objects. Each relation field object correlates a field in the primary table with a field in the foreign table. Taken together, the relation field objects define a group of fields in each table, which together define the relation. `CDaoDatabase` lets you access relation objects with a `CDaoRelationInfo` object by calling the `GetRelationInfo` member function. The `CDaoRelationInfo` object, then, has a data member, `m_pFieldInfos`, that points to an array of `CDaoRelationFieldInfo` objects.  
  
 Call the [GetRelationInfo](../../mfc/reference/cdaodatabase-class.md#cdaodatabase__getrelationinfo) member function of the containing `CDaoDatabase` object in whose Relations collection is stored the relation object you are interested in. Then access the `m_pFieldInfos` member of the [CDaoRelationInfo](../../mfc/reference/cdaorelationinfo-structure.md) object. `CDaoRelationFieldInfo` also defines a `Dump` member function in debug builds. You can use `Dump` to dump the contents of a `CDaoRelationFieldInfo` object.  
  
## Requirements  
 **Header:** afxdao.h  
  
## See Also  
 [Structures, Styles, Callbacks, and Message Maps](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CDaoRelationInfo Structure](../../mfc/reference/cdaorelationinfo-structure.md)
