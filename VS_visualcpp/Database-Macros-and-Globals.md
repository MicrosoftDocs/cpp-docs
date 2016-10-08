---
title: "Database Macros and Globals"
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
ms.assetid: 5b9b9e61-1cf9-4345-9f29-3807dd466488
caps.latest.revision: 10
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
# Database Macros and Globals
The macros and globals listed below apply to ODBC-based database applications. They are not used with DAO-based applications.  
  
 Before MFC 4.2, the macros             `AFX_SQL_ASYNC` and             `AFX_SQL_SYNC` gave asynchronous operations an opportunity to yield time to other processes. Beginning with MFC 4.2, the implementation of these macros changed because the MFC ODBC classes used only synchronous operations. The macro             `AFX_ODBC_CALL` was new to MFC 4.2.  
  
### Database Macros  
  
|||  
|-|-|  
|[AFX_ODBC_CALL](../Topic/AFX_ODBC_CALL.md)|Calls an ODBC API function that returns                             `SQL_STILL_EXECUTING`.                             `AFX_ODBC_CALL` will repeatedly call the function until it no longer returns                             `SQL_STILL_EXECUTING`.|  
|[AFX_SQL_ASYNC](../Topic/AFX_SQL_ASYNC.md)|Calls                             `AFX_ODBC_CALL`.|  
|[AFX_SQL_SYNC](../Topic/AFX_SQL_SYNC.md)|Calls an ODBC API function that does not return                             `SQL_STILL_EXECUTING`.|  
  
### Database Globals  
  
|||  
|-|-|  
|[AfxGetHENV](../Topic/AfxGetHENV.md)|Retrieves a handle to the ODBC environment currently in use by MFC. You can use this handle in direct ODBC calls.|  
  
##  <a name="afx_odbc_call"></a>  AFX_ODBC_CALL  
 Use this macro to call any ODBC API function that may return                 `SQL_STILL_EXECUTING`.  
  
```  
  
AFX_ODBC_CALL(  
SQLFunc  
)  
  
```  
  
### Parameters  
 `SQLFunc`  
 An ODBC API function. For more information about ODBC API functions, see the                                 Windows SDK.  
  
### Remarks  
 `AFX_ODBC_CALL` repeatedly calls the function until it no longer returns                         `SQL_STILL_EXECUTING`.  
  
 Before invoking                         `AFX_ODBC_CALL`, you must declare a variable,                         `nRetCode`, of type                         **RETCODE**.  
  
 Note that the MFC ODBC classes now use only synchronous processing. In order to perform an asynchronous operation, you must call the ODBC API function                         **SQLSetConnectOption**. For more information, see the topic "Executing Functions Asynchronously" in the                         Windows SDK.  
  
### Example  
 This example uses                                 `AFX_ODBC_CALL` to call the                                 **SQLColumns** ODBC API function, which returns a list of the columns in the table named by                                 `strTableName`. Note the declaration of                                 `nRetCode` and the use of recordset data members to pass parameters to the function. The example also illustrates checking the results of the call with                                 **Check**, a member function of class                                 `CRecordset`. The variable                                 `prs` is a pointer to a                                 `CRecordset` object, declared elsewhere.  
  
 [!CODE [NVC_MFCDatabase#39](../CodeSnippet/VS_Snippets_Cpp/NVC_MFCDatabase#39)]  
  
##  <a name="afx_sql_async"></a>  AFX_SQL_ASYNC  
 The implementation of this macro changed in MFC 4.2.  
  
```  
  
AFX_SQL_ASYNC(  
prs  
,   
SQLFunc  
)  
  
```  
  
### Parameters  
 `prs`  
 A pointer to a                                 `CRecordset` object or a                                 `CDatabase` object. Beginning with MFC 4.2, this parameter value is ignored.  
  
 `SQLFunc`  
 An ODBC API function. For more information about ODBC API functions, see the                                 Windows SDK.  
  
### Remarks  
 `AFX_SQL_ASYNC` simply calls the macro                         [AFX_ODBC_CALL](../Topic/AFX_ODBC_CALL.md) and ignores the                         `prs` parameter. In versions of MFC prior to 4.2,                         `AFX_SQL_ASYNC` was used to call ODBC API functions that might return                         `SQL_STILL_EXECUTING`. If an ODBC API function did return                         `SQL_STILL_EXECUTING`, then                         `AFX_SQL_ASYNC` would call                         `prs->OnWaitForDataSource`.  
  
> [!NOTE]
>  The MFC ODBC classes now use only synchronous processing. In order to perform an asynchronous operation, you must call the ODBC API function                             **SQLSetConnectOption**. For more information, see the topic "Executing Functions Asynchronously" in the                             Windows SDK.  
  
##  <a name="afx_sql_sync"></a>  AFX_SQL_SYNC  
 The                 `AFX_SQL_SYNC` macro simply calls the function                 `SQLFunc`.  
  
```  
  
AFX_SQL_SYNC(  
SQLFunc  
)  
  
```  
  
### Parameters  
 `SQLFunc`  
 An ODBC API function. For more information about these functions, see the                                 Windows SDK.  
  
### Remarks  
 Use this macro to call ODBC API functions that will not return                         `SQL_STILL_EXECUTING`.  
  
 Before calling                         `AFX_SQL_SYNC`, you must declare a variable,                         `nRetCode`, of type                         **RETCODE**. You can check the value of                         `nRetCode` after the macro call.  
  
 Note that the implementation of                         `AFX_SQL_SYNC` changed in MFC 4.2. Because checking the server status was no longer required,                         `AFX_SQL_SYNC` simply assigns a value to                         `nRetCode`. For example, instead of making the call  
  
 [!CODE [NVC_MFCDatabase#40](../CodeSnippet/VS_Snippets_Cpp/NVC_MFCDatabase#40)]  
  
 you can simply make the assignment  
  
 [!CODE [NVC_MFCDatabase#41](../CodeSnippet/VS_Snippets_Cpp/NVC_MFCDatabase#41)]  
  
##  <a name="afxgethenv"></a>  AfxGetHENV  
 You can use the returned handle in direct ODBC calls, but you must not close the handle or assume that the handle is still valid and available after any existing                 `CDatabase`- or                 `CRecordset`-derived objects have been destroyed.  
  
```  
  
HENV AFXAPI AfxGetHENV( );  
  
```  
  
### Return Value  
 The handle to the ODBC environment currently in use by MFC. Can be                         `SQL_HENV_NULL` if there are no                         [CDatabase](../VS_visualcpp/CDatabase-Class.md) objects and no                         [CRecordset](../VS_visualcpp/CRecordset-Class.md) objects in use.  
  
## See Also  
 [Macros and Globals](../VS_visualcpp/MFC-Macros-and-Globals.md)