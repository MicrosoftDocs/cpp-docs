---
description: "Learn more about: Exceptions: Database Exceptions"
title: "Exceptions: Database Exceptions"
ms.date: "09/17/2019"
helpviewer_keywords: ["DAO [MFC], exceptions", "exceptions [MFC], database", "exception handling [MFC], databases", "ODBC exceptions [MFC]", "ODBC [MFC], exceptions", "database exceptions [MFC]", "databases [MFC], exception handling", "error codes [MFC], database exception handling"]
ms.assetid: 28daf260-f824-4be6-aecc-1f859e6dec26
---
# Exceptions: Database Exceptions

This article explains how to handle database exceptions. Most of the material in this article applies whether you are working with the MFC classes for Open Database Connectivity (ODBC) or the MFC classes for Data Access Objects (DAO). Material specific to one or the other model is explicitly marked. Topics include:

- [Approaches to exception handling](#_core_approaches_to_exception_handling)

- [A database exception-handling example](#_core_a_database_exception.2d.handling_example)

## <a name="_core_approaches_to_exception_handling"></a> Approaches to Exception Handling

The approach is the same whether you are working with DAO (obsolete) or ODBC.

You should always write exception handlers to handle exceptional conditions.

The most pragmatic approach to catching database exceptions is to test your application with exception scenarios. Determine the likely exceptions that might occur for an operation in your code, and force the exception to occur. Then examine the trace output to see what exception is thrown, or examine the returned error information in the debugger. This lets you know which return codes you'll see for the exception scenarios you are using.

### Error Codes Used for ODBC Exceptions

In addition to return codes defined by the framework, which have names of the form **AFX_SQL_ERROR_XXX**, some [CDBExceptions](reference/cdbexception-class.md) are based on [ODBC](../data/odbc/odbc-basics.md) return codes. The return codes for such exceptions have names of the form **SQL_ERROR_XXX**.

The return codes — both framework-defined and ODBC-defined — that the database classes can return are documented under the [m_nRetCode](reference/cdbexception-class.md#m_nretcode) data member of class `CDBException`. Additional information about return codes defined by ODBC is available in the [ODBC Programmer's Reference](/sql/odbc/reference/odbc-programmer-s-reference).

### Error Codes Used for DAO Exceptions

For DAO exceptions, more information is typically available. You can access error information through three data members of a caught [CDaoException](reference/cdaoexception-class.md) object:

- [m_pErrorInfo](reference/cdaoexception-class.md#m_perrorinfo) contains a pointer to a [CDaoErrorInfo](reference/cdaoerrorinfo-structure.md) object that encapsulates error information in DAO's collection of error objects associated with the database.

- [m_nAfxDaoError](reference/cdaoexception-class.md#m_nafxdaoerror) contains an extended error code from the MFC DAO classes. These error codes, which have names of the form **AFX_DAO_ERROR_XXX**, are documented under the data member in `CDaoException`.

- [m_scode](reference/cdaoexception-class.md#m_scode) contains an OLE **SCODE** from DAO, if applicable. You'll seldom need to work with this error code, however. Usually more information is available in the other two data members. See the data member for more about **SCODE** values.

Additional information about DAO errors, the DAO Error object type, and the DAO Errors collection is available under class [CDaoException](reference/cdaoexception-class.md).

## <a name="_core_a_database_exception.2d.handling_example"></a> A Database Exception-Handling Example

The following example attempts to construct a [CRecordset](reference/crecordset-class.md)-derived object on the heap with the **`new`** operator, and then open the recordset (for an ODBC data source). For a similar example for the DAO classes, see "DAO Exception Example" below.

### ODBC Exception Example

The [Open](reference/crecordset-class.md#open) member function could throw an exception (of type [CDBException](reference/cdbexception-class.md) for the ODBC classes), so this code brackets the `Open` call with a **`try`** block. The subsequent **`catch`** block will catch a `CDBException`. You could examine the exception object itself, called `e`, but in this case it is enough to know that the attempt to create a recordset has failed. The **`catch`** block displays a message box and cleans up by deleting the recordset object.

[!code-cpp[NVC_MFCDatabase#36](codesnippet/cpp/exceptions-database-exceptions_1.cpp)]

### DAO Exception Example

The DAO example is similar to the example for ODBC, but you can typically retrieve more kinds of information. The following code also attempts to open a recordset. If that attempt throws an exception, you can examine a data member of the exception object for error information. As with the previous ODBC example, it is probably enough to know that the attempt to create a recordset failed.

[!code-cpp[NVC_MFCDatabase#37](codesnippet/cpp/exceptions-database-exceptions_2.cpp)]

This code gets an error message string from the [m_pErrorInfo](reference/cdaoexception-class.md#m_perrorinfo) member of the exception object. MFC fills this member when it throws the exception.

For a discussion of the error information returned by a `CDaoException` object, see classes [CDaoException](reference/cdaoexception-class.md) and [CDaoErrorInfo](reference/cdaoerrorinfo-structure.md).

When you are working with Microsoft Jet (.mdb) databases, and in most cases when you are working with ODBC, there will be only one error object. In the rare case when you are using an ODBC data source and there are multiple errors, you can loop through DAO's Errors collection based on the number of errors returned by [CDaoException::GetErrorCount](reference/cdaoexception-class.md#geterrorcount). Each time through the loop, call [CDaoException::GetErrorInfo](reference/cdaoexception-class.md#geterrorinfo) to refill the `m_pErrorInfo` data member.

## See also

[Exception Handling](exception-handling-in-mfc.md)
