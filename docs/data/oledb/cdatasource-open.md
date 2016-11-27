---
title: "CDataSource::Open | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ATL::CDataSource::Open"
  - "ATL.CDataSource.Open"
  - "CDataSource::Open"
  - "CDataSource.Open"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Open method"
ms.assetid: a6d28bd1-799a-48ed-8993-5f82d1705b77
caps.latest.revision: 12
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
# CDataSource::Open
Opens a connection to a data source using a **CLSID**, **ProgID**, or `CEnumerator` moniker or prompts the user with a locator dialog box.  
  
## Syntax  
  
```  
  
      HRESULT Open(  
   const CLSID& clsid,  
   DBPROPSET* pPropSet = NULL,  
   ULONG nPropertySets = 1   
) throw( );  
HRESULT Open(  
   const CLSID& clsid,  
   LPCTSTR pName,  
   LPCTSTR pUserName = NULL,  
   LPCTSTR pPassword = NULL,  
   long nInitMode = 0   
) throw( );  
HRESULT Open(  
   LPCTSTR szProgID,  
   DBPROPSET* pPropSet = NULL,  
   ULONG nPropertySets = 1   
) throw( );  
HRESULT Open(  
   LPCTSTR szProgID,  
   LPCTSTR pName,  
   LPCTSTR pUserName = NULL,  
   LPCTSTR pPassword = NULL,  
   long nInitMode = 0   
) throw( );  
HRESULT Open(  
   const CEnumerator& enumerator,  
   DBPROPSET* pPropSet = NULL,  
   ULONG nPropertySets = 1   
) throw( );  
HRESULT Open(  
   const CEnumerator& enumerator,  
   LPCTSTR pName,  
   LPCTSTR pUserName = NULL,  
   LPCTSTR pPassword = NULL,  
   long nInitMode = 0   
) throw( );  
HRESULT Open(  
   HWND hWnd = GetActiveWindow( ),  
   DBPROMPTOPTIONS dwPromptOptions = DBPROMPTOPTIONS_WIZARDSHEET   
) throw( );  
HRESULT Open(   
   LPCWSTR szProgID,   
   DBPROPSET* pPropSet = NULL,   
   ULONG nPropertySets = 1   
) throw( );  
HRESULT Open(   
   LPCSTR szProgID,   
   LPCTSTR pName,   
   LPCTSTR pUserName = NULL,   
   LPCTSTR pPassword = NULL,   
   long nInitMode = 0   
) throw( );  
```  
  
#### Parameters  
 `clsid`  
 [in] The **CLSID** of the data provider.  
  
 *pPropSet*  
 [in] A pointer to an array of [DBPROPSET](https://msdn.microsoft.com/en-us/library/ms714367.aspx) structures containing properties and values to be set. See [Property Sets and Property Groups](https://msdn.microsoft.com/en-us/library/ms713696.aspx) in the *OLE DB Programmer's Reference* in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 *nPropertySets*  
 [in] The number of [DBPROPSET](https://msdn.microsoft.com/en-us/library/ms714367.aspx) structures passed in the *pPropSet* argument.  
  
 *pName*  
 [in] The name of the database to which to connect.  
  
 *pUserName*  
 [in] The name of the user.  
  
 *pPassword*  
 [in] The user's password.  
  
 `nInitMode`  
 [in] Database initialization mode. See [Initialization Properties](https://msdn.microsoft.com/en-us/library/ms723127.aspx)in the *OLE DB Programmer's Reference* in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] for a list of valid initialization modes. If `nInitMode` is zero, no initialization mode is included in the property set used to open the connection.  
  
 `szProgID`  
 [in] A program identifier.  
  
 `enumerator`  
 [in] A [CEnumerator](../../data/oledb/cenumerator-class.md) object used to obtain a moniker for opening the connection when the caller does not specify a **CLSID**.  
  
 `hWnd`  
 [in] Handle to the window that is to be the parent of the dialog box. Using the function overload that uses the `hWnd` parameter will automatically invoke Service Components; see Remarks for details.  
  
 `dwPromptOptions`  
 [in] Determines the style of locator dialog box to display. See Msdasc.h for possible values.  
  
## Return Value  
 A standard `HRESULT`.  
  
## Remarks  
 The method overload that uses the `hWnd` parameter opens a data source object with the service components in oledb32.dll; this DLL contains the implementation of Service Components features such as Resource Pooling, Automatic Transaction Enlistment, and so on. For more information, see "OLE DB Services" in the OLE DB Programmer's Reference at [http://msdn.microsoft.com/library/default.asp?url=/library/oledb/htm/oledbole_db_services.asp?frame=true](http://msdn.microsoft.com/library/default.asp?url=/library/oledb/htm/oledbole_db_services.asp?frame=true).  
  
 The method overloads that do not use the `hWnd` parameter open a data source object without using the service components in oledb32.dll. A [CDataSource](../../data/oledb/cdatasource-class.md) object opened with these function overloads will be unable to utilize any of the functionality of Service Components.  
  
## Example  
 The following code shows how to open a Jet 4.0 data source with OLE DB Templates. You treat the Jet data source as an OLE DB data source. However, your call to **Open** needs two property sets: one for **DBPROPSET_DBINIT** and the other for **DBPROPSET_JETOLEDB_DBINIT**, so that you can set **DBPROP_JETOLEDB_DATABASEPASSWORD**.  
  
 [!code-cpp[NVC_OLEDB_Consumer#7](../../data/oledb/codesnippet/cpp/cdatasource-open_1.cpp)]  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CDataSource Class](../../data/oledb/cdatasource-class.md)