---
title: "CDaoRelationInfo Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CDaoRelationInfo"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "DAO (Data Access Objects), Relations collection"
  - "CDaoRelationInfo structure"
ms.assetid: 92dda090-fe72-4090-84ec-429498a48aad
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
# CDaoRelationInfo Structure
The `CDaoRelationInfo` structure contains information about a relation defined between fields of two tables in a [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) object.  
  
## Syntax  
  
```  
struct CDaoRelationInfo  
{  
    CDaoRelationInfo();
*// Constructor  
    CString m_strName;      // Primary  
    CString m_strTable;     // Primary  
    CString m_strForeignTable;              // Primary  
    long m_lAttributes;     // Secondary  
    CDaoRelationFieldInfo* m_pFieldInfos;   // Secondary  
    short m_nFields;        // Secondary *// Below the // Implementation comment: *// Destructor, not otherwise documented  
};  
```  
  
#### Parameters  
 `m_strName`  
 Uniquely names the relation object. For more information, see the topic "Name Property" in DAO Help.  
  
 *m_strTable*  
 Names the primary table in the relation.  
  
 *m_strForeignTable*  
 Names the foreign table in the relation. A foreign table is a table used to contain foreign keys. Generally, you use a foreign table to establish or enforce referential integrity. The foreign table is usually on the many side of a one-to-many relationship. Examples of foreign tables include tables containing codes for the American states or Canadian provinces or customer orders.  
  
 `m_lAttributes`  
 Contains information about the relation type. The value of this member can be any of the following:  
  
- **dbRelationUnique** Relationship is one-to-one.  
  
- **dbRelationDontEnforce** Relationship is not enforced (no referential integrity).  
  
- **dbRelationInherited** Relationship exists in a noncurrent database that contains the two attached tables.  
  
- **dbRelationLeft** The relationship is a left join. A left outer join includes all of the records from the first (left-hand) of two tables, even if there are no matching values for records in the second (right-hand) table.  
  
- **dbRelationRight** The relationship is a right join. A right outer join includes all of the records from the second (right-hand) of two tables, even if there are no matching values for records in the first (left-hand) table.  
  
- **dbRelationUpdateCascade** Updates will cascade.  
  
- **dbRelationDeleteCascade** Deletions will cascade.  
  
 `m_pFieldInfos`  
 A pointer to an array of [CDaoRelationFieldInfo](../../mfc/reference/cdaorelationfieldinfo-structure.md) structures. The array contains one object for each field in the relation. The `m_nFields` data member gives a count of the array elements.  
  
 `m_nFields`  
 The number of `CDaoRelationFieldInfo` objects in the `m_pFieldInfos` data member.  
  
## Remarks  
 The references to Primary and Secondary above indicate how the information is returned by the [GetRelationInfo](../../mfc/reference/cdaodatabase-class.md#cdaodatabase__getrelationinfo) member function in class `CDaoDatabase`.  
  
 Relation objects are not represented by an MFC class. Instead, the DAO object underlying an MFC object of the `CDaoDatabase` class maintains a collection of relation objects: `CDaoDatabase` supplies member functions to access some individual items of relation information, or you can access them all at once with a `CDaoRelationInfo` object by calling the `GetRelationInfo` member function of the containing database object.  
  
 Information retrieved by the [CDaoDatabase::GetRelationInfo](../../mfc/reference/cdaodatabase-class.md#cdaodatabase__getrelationinfo) member function is stored in a `CDaoRelationInfo` structure. `CDaoRelationInfo` also defines a `Dump` member function in debug builds. You can use `Dump` to dump the contents of a `CDaoRelationInfo` object.  
  
## Requirements  
 **Header:** afxdao.h  
  
## See Also  
 [CDaoRelationFieldInfo Structure](../../mfc/reference/cdaorelationfieldinfo-structure.md)
