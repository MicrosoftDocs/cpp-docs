---
title: "Database Macros and Globals | Microsoft Docs"
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
  - "vc.mfc.macros.data"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "global database functions [C++]"
  - "database macros [C++]"
  - "database globals [C++]"
  - "global functions [C++], database functions"
  - "macros [C++], MFC database"
ms.assetid: 5b9b9e61-1cf9-4345-9f29-3807dd466488
caps.latest.revision: 18
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Database Macros and Globals
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Database Macros and Globals](https://docs.microsoft.com/cpp/mfc/reference/database-macros-and-globals).  
  
  
The macros and globals listed below apply to ODBC-based database applications. They are not used with DAO-based applications.  
  
 Before MFC 4.2, the macros `AFX_SQL_ASYNC` and `AFX_SQL_SYNC` gave asynchronous operations an opportunity to yield time to other processes. Beginning with MFC 4.2, the implementation of these macros changed because the MFC ODBC classes used only synchronous operations. The macro `AFX_ODBC_CALL` was new to MFC 4.2.  
  
### Database Macros  
  
|||  
|-|-|  
|[AFX_ODBC_CALL](#afx_odbc_call)|Calls an ODBC API function that returns `SQL_STILL_EXECUTING`. `AFX_ODBC_CALL` will repeatedly call the function until it no longer returns `SQL_STILL_EXECUTING`.|  
|[AFX_SQL_ASYNC](#afx_sql_async)|Calls `AFX_ODBC_CALL`.|  
|[AFX_SQL_SYNC](#afx_sql_sync)|Calls an ODBC API function that does not return `SQL_STILL_EXECUTING`.|  
  
### Database Globals  
  
|||  
|-|-|  
|[AfxGetHENV](#afxgethenv)|Retrieves a handle to the ODBC environment currently in use by MFC. You can use this handle in direct ODBC calls.|  
  
##  <a name="afx_odbc_call"></a>  AFX_ODBC_CALL  
 Use this macro to call any ODBC API function that may return `SQL_STILL_EXECUTING`.  
  
```  
AFX_ODBC_CALL(SQLFunc)  
```  
  
### Parameters  
 `SQLFunc`  
 An ODBC API function. For more information about ODBC API functions, see the [!INCLUDE[winSDK](../../includes/winsdk-md.md)].  
  
### Remarks  
 `AFX_ODBC_CALL` repeatedly calls the function until it no longer returns `SQL_STILL_EXECUTING`.  
  
 Before invoking `AFX_ODBC_CALL`, you must declare a variable, `nRetCode`, of type **RETCODE**.  
  
 Note that the MFC ODBC classes now use only synchronous processing. In order to perform an asynchronous operation, you must call the ODBC API function **SQLSetConnectOption**. For more information, see the topic "Executing Functions Asynchronously" in the [!INCLUDE[winSDK](../../includes/winsdk-md.md)].  
  
### Example  
 This example uses `AFX_ODBC_CALL` to call the **SQLColumns** ODBC API function, which returns a list of the columns in the table named by `strTableName`. Note the declaration of `nRetCode` and the use of recordset data members to pass parameters to the function. The example also illustrates checking the results of the call with **Check**, a member function of class `CRecordset`. The variable `prs` is a pointer to a `CRecordset` object, declared elsewhere.  
  
 [!code-cpp[NVC_MFCDatabase#39](../../snippets/cpp/VS_Snippets_Cpp/NVC_MFCDatabase/Cpp/MyDatabaseDoc.cpp#39)]  
  
##  <a name="afx_sql_async"></a>  AFX_SQL_ASYNC  
 The implementation of this macro changed in MFC 4.2.  
  
```   
AFX_SQL_ASYNC(prs, SQLFunc)   
```  
  
### Parameters  
 `prs`  
 A pointer to a `CRecordset` object or a `CDatabase` object. Beginning with MFC 4.2, this parameter value is ignored.  
  
 `SQLFunc`  
 An ODBC API function. For more information about ODBC API functions, see the [!INCLUDE[winSDK](../../includes/winsdk-md.md)].  
  
### Remarks  
 `AFX_SQL_ASYNC` simply calls the macro [AFX_ODBC_CALL](#afx_odbc_call) and ignores the `prs` parameter. In versions of MFC prior to 4.2, `AFX_SQL_ASYNC` was used to call ODBC API functions that might return `SQL_STILL_EXECUTING`. If an ODBC API function did return `SQL_STILL_EXECUTING`, then `AFX_SQL_ASYNC` would call `prs->OnWaitForDataSource`.  
  
> [!NOTE]
>  The MFC ODBC classes now use only synchronous processing. In order to perform an asynchronous operation, you must call the ODBC API function **SQLSetConnectOption**. For more information, see the topic "Executing Functions Asynchronously" in the [!INCLUDE[winSDK](../../includes/winsdk-md.md)].  
  
##  <a name="afx_sql_sync"></a>  AFX_SQL_SYNC  
 The `AFX_SQL_SYNC` macro simply calls the function `SQLFunc`.  
  
```   
AFX_SQL_SYNC(SQLFunc)   
```  
  
### Parameters  
 `SQLFunc`  
 An ODBC API function. For more information about these functions, see the [!INCLUDE[winSDK](../../includes/winsdk-md.md)].  
  
### Remarks  
 Use this macro to call ODBC API functions that will not return `SQL_STILL_EXECUTING`.  
  
 Before calling `AFX_SQL_SYNC`, you must declare a variable, `nRetCode`, of type **RETCODE**. You can check the value of `nRetCode` after the macro call.  
  
 Note that the implementation of `AFX_SQL_SYNC` changed in MFC 4.2. Because checking the server status was no longer required, `AFX_SQL_SYNC` simply assigns a value to `nRetCode`. For example, instead of making the call  
  
 [!code-cpp[NVC_MFCDatabase#40](../../snippets/cpp/VS_Snippets_Cpp/NVC_MFCDatabase/Cpp/MyDatabaseDoc.cpp#40)]  
  
 you can simply make the assignment  
  
 [!code-cpp[NVC_MFCDatabase#41](../../snippets/cpp/VS_Snippets_Cpp/NVC_MFCDatabase/Cpp/MyDatabaseDoc.cpp#41)]  
  
##  <a name="afxgethenv"></a>  AfxGetHENV  
 You can use the returned handle in direct ODBC calls, but you must not close the handle or assume that the handle is still valid and available after any existing `CDatabase`- or `CRecordset`-derived objects have been destroyed.  
  
```   
HENV AFXAPI AfxGetHENV(); 
```  
  
### Return Value  
 The handle to the ODBC environment currently in use by MFC. Can be `SQL_HENV_NULL` if there are no [CDatabase](../../mfc/reference/cdatabase-class.md) objects and no [CRecordset](../../mfc/reference/crecordset-class.md) objects in use.  
  
## See Also  
 [Macros and Globals](../../mfc/reference/mfc-macros-and-globals.md)






