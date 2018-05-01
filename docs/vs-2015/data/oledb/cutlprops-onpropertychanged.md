---
title: "CUtlProps::OnPropertyChanged | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "OnPropertyChanged"
  - "CUtlProps.OnPropertyChanged"
  - "CUtlProps::OnPropertyChanged"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "OnPropertyChanged method"
ms.assetid: c5924210-b685-46c4-87f8-1b81e5bd3378
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CUtlProps::OnPropertyChanged
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [CUtlProps::OnPropertyChanged](https://docs.microsoft.com/cpp/data/oledb/cutlprops-onpropertychanged).  
  
  
Called after setting a property to handle chained properties.  
  
## Syntax  
  
```  
  
      virtual HRESULT OnPropertyChanged(  
   ULONG /* iCurSet */,  
   DBPROP* pDBProp   
);  
```  
  
#### Parameters  
 `iCurSet`  
 The index into the property-set array; zero if there is only one property set.  
  
 `pDBProp`  
 The property ID and new value in a [DBPROP](https://msdn.microsoft.com/library/ms717970.aspx) structure.  
  
## Return Value  
 A standard `HRESULT`. The default return value is `S_OK`.  
  
## Remarks  
 If you want to handle chained properties, such as bookmarks or updates whose values are dependent on another property's value, you should override this function.  
  
## Example  
 In this function, the user gets the property ID from the `DBPROP*` parameter. Now, it is possible to compare the ID against a property to chain. When the property is found, `SetProperties` is called with the property that will now be set in conjunction with the other property. In this case, if one gets the `DBPROP_IRowsetLocate`, `DBPROP_LITERALBOOKMARKS`, or `DBPROP_ORDEREDBOOKMARKS` property, one can set the `DBPROP_BOOKMARKS` property.  
  
 [!code-cpp[NVC_OLEDB_Provider#2](../../snippets/cpp/VS_Snippets_Cpp/NVC_OLEDB_Provider/Cpp/MyProviderDS.h#2)]  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [CUtlProps Class](../../data/oledb/cutlprops-class.md)

