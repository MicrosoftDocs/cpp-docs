---
title: "Transaction: Performing a Transaction in a Recordset (ODBC)"
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
ms.assetid: cf1d6b48-7fb8-4903-84f7-a1822054534d
caps.latest.revision: 8
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Transaction: Performing a Transaction in a Recordset (ODBC)
This topic explains how to perform a transaction in a recordset.  
  
> [!NOTE]
>  Only one level of transactions is supported; you cannot nest transactions.  
  
#### To perform a transaction in a recordset  
  
1.  Call the `CDatabase` object's **BeginTrans** member function.  
  
2.  If you have not implemented bulk row fetching, call the **AddNew/Update**, **Edit/Update**, and **Delete** member functions of one or more recordset objects of the same database as many times as needed. For more information, see [Recordset: Adding, Updating, and Deleting Records (ODBC)](../VS_visualcpp/Recordset--Adding--Updating--and-Deleting-Records--ODBC-.md). If you have implemented bulk row fetching, you must write your own functions to update the data source.  
  
3.  Finally, call the `CDatabase` object's **CommitTrans** member function. If an error occurs in one of the updates or you decide to cancel the changes, call its **Rollback** member function.  
  
 The following example uses two recordsets to delete a student's enrollment from a school registration database, removing the student from all classes in which the student is enrolled. Because the **Delete** calls in both recordsets must succeed, a transaction is required. The example assumes the existence of `m_dbStudentReg`, a member variable of type `CDatabase` already connected to the data source, and the recordset classes `CEnrollmentSet` and `CStudentSet`. The `strStudentID` variable contains a value obtained from the user.  
  
```  
BOOL CEnrollDoc::RemoveStudent( CString strStudentID )  
{  
    // remove student from all the classes  
    // the student is enrolled in  
  
    if ( !m_dbStudentReg.BeginTrans( ) )  
        return FALSE;  
  
    CEnrollmentSet rsEnrollmentSet(&m_dbStudentReg);  
    rsEnrollmentSet.m_strFilter = "StudentID = " + strStudentID;  
  
    if ( !rsEnrollmentSet.Open(CRecordset::dynaset) )  
        return FALSE;  
  
    CStudentSet rsStudentSet(&m_dbStudentReg);  
    rsStudentSet.m_strFilter = "StudentID = " + strStudentID;  
  
    if ( !rsStudentSet.Open(CRecordset::dynaset) )  
        return FALSE;  
  
    TRY  
    {  
        while ( !rsEnrollmentSet.IsEOF( ) )  
        {  
            rsEnrollmentSet.Delete( );  
            rsEnrollmentSet.MoveNext( );  
        }  
  
        // delete the student record  
        rsStudentSet.Delete( );  
  
        m_dbStudentReg.CommitTrans( );  
    }  
  
    CATCH_ALL(e)  
    {  
        m_dbStudentReg.Rollback( );  
        return FALSE;  
    }  
    END_CATCH_ALL  
  
    rsEnrollmentSet.Close( );  
    rsStudentSet.Close( );  
  
    return TRUE;  
  
}  
```  
  
> [!NOTE]
>  Calling **BeginTrans** again without calling **CommitTrans** or **Rollback** is an error.  
  
## See Also  
 [Transaction (ODBC)](../VS_visualcpp/Transaction--ODBC-.md)   
 [Transaction: How Transactions Affect Updates (ODBC)](../VS_visualcpp/Transaction--How-Transactions-Affect-Updates--ODBC-.md)   
 [CDatabase Class](../VS_visualcpp/CDatabase-Class.md)   
 [CRecordset Class](../VS_visualcpp/CRecordset-Class.md)