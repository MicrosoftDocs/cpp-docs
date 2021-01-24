---
description: "Learn more about: Transaction: Performing a Transaction in a Recordset (ODBC)"
title: "Transaction: Performing a Transaction in a Recordset (ODBC)"
ms.date: "11/04/2016"
helpviewer_keywords: ["transactions, updating recordsets"]
ms.assetid: cf1d6b48-7fb8-4903-84f7-a1822054534d
---
# Transaction: Performing a Transaction in a Recordset (ODBC)

This topic explains how to perform a transaction in a recordset.

> [!NOTE]
> Only one level of transactions is supported; you cannot nest transactions.

#### To perform a transaction in a recordset

1. Call the `CDatabase` object's `BeginTrans` member function.

1. If you have not implemented bulk row fetching, call the `AddNew/Update`, `Edit/Update`, and `Delete` member functions of one or more recordset objects of the same database as many times as needed. For more information, see [Recordset: Adding, Updating, and Deleting Records (ODBC)](../../data/odbc/recordset-adding-updating-and-deleting-records-odbc.md). If you have implemented bulk row fetching, you must write your own functions to update the data source.

1. Finally, call the `CDatabase` object's `CommitTrans` member function. If an error occurs in one of the updates or you decide to cancel the changes, call its `Rollback` member function.

The following example uses two recordsets to delete a student's enrollment from a school registration database, removing the student from all classes in which the student is enrolled. Because the `Delete` calls in both recordsets must succeed, a transaction is required. The example assumes the existence of `m_dbStudentReg`, a member variable of type `CDatabase` already connected to the data source, and the recordset classes `CEnrollmentSet` and `CStudentSet`. The `strStudentID` variable contains a value obtained from the user.

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
> Calling `BeginTrans` again without calling `CommitTrans` or `Rollback` is an error.

## See also

[Transaction (ODBC)](../../data/odbc/transaction-odbc.md)<br/>
[Transaction: How Transactions Affect Updates (ODBC)](../../data/odbc/transaction-how-transactions-affect-updates-odbc.md)<br/>
[CDatabase Class](../../mfc/reference/cdatabase-class.md)<br/>
[CRecordset Class](../../mfc/reference/crecordset-class.md)
