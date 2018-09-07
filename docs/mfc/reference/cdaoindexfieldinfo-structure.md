---
title: "CDaoIndexFieldInfo Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "reference"
f1_keywords: ["CDaoIndexFieldInfo"]
dev_langs: ["C++"]
helpviewer_keywords: ["CDaoIndexFieldInfo structure [MFC]", "DAO (Data Access Objects), Index Fields collection"]
ms.assetid: 097ee8a6-83b1-4db7-8f05-d62a2deefe19
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# CDaoIndexFieldInfo Structure
The `CDaoIndexFieldInfo` structure contains information about an index field object defined for data access objects (DAO).  
  
## Syntax  
  
```  
struct CDaoIndexFieldInfo  
{  
    CString m_strName;          // Primary  
    BOOL m_bDescending;         // Primary  
};  
```  
  
#### Parameters  
 *m_strName*  
 Uniquely names the index field object. For details, see the topic "Name Property" in DAO Help.  
  
 *m_bDescending*  
 Indicates the index ordering defined by the index object. TRUE if the order is descending.  
  
## Remarks  
 An index object can have a number of fields, indicating which fields a tabledef (or a recordset based on a table) is indexed on. The references to Primary above indicate how the information is returned in the `m_pFieldInfos` member of a [CDaoIndexInfo](../../mfc/reference/cdaoindexinfo-structure.md) object obtained by calling the `GetIndexInfo` member function of class [CDaoTableDef](../../mfc/reference/cdaotabledef-class.md#getindexinfo) or [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md#getindexinfo).  
  
 Index objects and index field objects are not represented by an MFC class. Instead, the DAO objects underlying MFC objects of class [CDaoTableDef](../../mfc/reference/cdaotabledef-class.md) or [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) contain a collection of index objects, called the Indexes collection. Each index object, in turn, contains a collection of field objects. These classes supply member functions to access individual items of index information, or you can access them all at once with a `CDaoIndexInfo` object by calling the `GetIndexInfo` member function of the containing object. The `CDaoIndexInfo` object, then, has a data member, `m_pFieldInfos`, that points to an array of `CDaoIndexFieldInfo` objects.  
  
 Call the `GetIndexInfo` member function of the containing tabledef or recordset object in whose Indexes collection is stored the index object you are interested in. Then access the `m_pFieldInfos` member of the [CDaoIndexInfo](../../mfc/reference/cdaoindexinfo-structure.md) object. The length of the `m_pFieldInfos` array is stored in `m_nFields`. `CDaoIndexFieldInfo` also defines a `Dump` member function in debug builds. You can use `Dump` to dump the contents of a `CDaoIndexFieldInfo` object.  
  
## Requirements  
 **Header:** afxdao.h  
  
## See Also  
 [Structures, Styles, Callbacks, and Message Maps](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CDaoTableDef::GetIndexInfo](../../mfc/reference/cdaotabledef-class.md#getindexinfo)   
 [CDaoRecordset::GetIndexInfo](../../mfc/reference/cdaorecordset-class.md#getindexinfo)

