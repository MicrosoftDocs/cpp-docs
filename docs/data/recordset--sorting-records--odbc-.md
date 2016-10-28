---
title: "Recordset: Sorting Records (ODBC)"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "sorting data, recordset data"
  - "ODBC recordsets, sorting"
  - "recordsets, sorting"
ms.assetid: b40b152e-0a91-452e-be7b-e5bc27f744c7
caps.latest.revision: 8
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
# Recordset: Sorting Records (ODBC)
This topic applies to the MFC ODBC classes.  
  
 This topic explains how to sort your recordset. You can specify one or more columns on which to base the sort, and you can specify ascending or descending order (`ASC` or **DESC**; `ASC` is the default) for each specified column. For example, if you specify two columns, the records are sorted first on the first column named and then on the second column named. A SQL **ORDER BY** clause defines a sort. When the framework appends the **ORDER BY** clause to the recordset's SQL query, the clause controls the selection's ordering.  
  
 You must establish a recordset's sort order after you construct the object but before you call its **Open** member function (or before you call the **Requery** member function for an existing recordset object whose **Open** member function has been called previously).  
  
#### To specify a sort order for a recordset object  
  
1.  Construct a new recordset object (or prepare to call **Requery** for an existing one).  
  
2.  Set the value of the object's [m_strSort](../Topic/CRecordset::m_strSort.md) data member.  
  
     The sort is a null-terminated string. It contains the contents of the **ORDER BY** clause but not the keyword **ORDER BY**. For example, use:  
  
    ```  
    recordset.m_strSort = "LastName DESC, FirstName DESC";  
    ```  
  
     not  
  
    ```  
    recordset.m_strSort = "ORDER BY LastName DESC, FirstName DESC";  
    ```  
  
3.  Set any other options you need, such as a filter, locking mode, or parameters.  
  
4.  Call **Open** for the new object (or **Requery** for an existing object).  
  
 The selected records are ordered as specified. For example, to sort a set of student records in descending order by last name, then first name, do the following:  
  
```  
// Construct the recordset  
CStudentSet rsStudent( NULL );  
// Set the sort  
rsStudent.m_strSort = "LastName DESC, FirstName DESC";  
// Run the query with the sort in place  
rsStudent.Open( );  
```  
  
 The recordset contains all of the student records, sorted in descending order (Z to A) by last name, then by first name.  
  
> [!NOTE]
>  If you choose to override the recordset's default SQL string by passing your own SQL string to **Open**, do not set a sort if your custom string has an **ORDER BY** clause.  
  
## See Also  
 [Recordset (ODBC)](../data/recordset--odbc-.md)   
 [Recordset: Parameterizing a Recordset (ODBC)](../data/recordset--parameterizing-a-recordset--odbc-.md)   
 [Recordset: Filtering Records (ODBC)](../data/recordset--filtering-records--odbc-.md)