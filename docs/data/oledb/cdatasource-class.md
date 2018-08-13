---
title: "CDataSource Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["ATL.CDataSource", "ATL::CDataSource", "CDataSource", "ATL::CDataSource::Close", "ATL.CDataSource.Close", "CDataSource::Close", "CDataSource.Close", "ATL::CDataSource::GetInitializationString", "CDataSource.GetInitializationString", "GetInitializationString", "CDataSource::GetInitializationString", "ATL.CDataSource.GetInitializationString", "CDataSource::GetProperties", "ATL.CDataSource.GetProperties", "CDataSource.GetProperties", "ATL::CDataSource::GetProperties", "GetProperties", "ATL::CDataSource::GetProperty", "ATL.CDataSource.GetProperty", "CDataSource.GetProperty", "CDataSource::GetProperty", "ATL::CDataSource::Open", "ATL.CDataSource.Open", "CDataSource::Open", "CDataSource.Open", "CDataSource::OpenFromFileName", "ATL::CDataSource::OpenFromFileName", "OpenFromFileName", "CDataSource.OpenFromFileName", "ATL.CDataSource.OpenFromFileName", "CDataSource.OpenFromInitializationString", "OpenFromInitializationString", "CDataSource::OpenFromInitializationString", "ATL::CDataSource::OpenFromInitializationString", "ATL.CDataSource.OpenFromInitializationString", "CDataSource.OpenWithPromptFileName", "OpenWithPromptFileName", "ATL::CDataSource::OpenWithPromptFileName", "ATL.CDataSource.OpenWithPromptFileName", "CDataSource::OpenWithPromptFileName", "CDataSource::OpenWithServiceComponents", "OpenWithServiceComponents", "CDataSource.OpenWithServiceComponents"]
dev_langs: ["C++"]
helpviewer_keywords: ["CDataSource class", "Close method", "GetInitializationString method", "GetProperties method", "GetProperty method", "Open method", "OpenFromFileName method", "OpenFromInitializationString method", "OpenWithPromptFileName method", "OpenWithServiceComponents method"]
ms.assetid: 99bf862c-9d5c-4117-9501-aa0e2672085c
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# CDataSource Class
Corresponds to an OLE DB data source object, which represents a connection through a provider to a data source.  
  
## Syntax

```cpp
class CDataSource  
```  

## Requirements  
 **Header:** atldbcli.h 
  
## Members  
  
### Methods  
  
|||  
|-|-|  
|[Close](#close)|Closes the connection.|  
|[GetInitializationString](#getinitializationstring)|Retrieves the initialization string of the data source that is currently open.|  
|[GetProperties](#getproperties)|Gets the values of properties currently set for the connected data source.|  
|[GetProperty](#getproperty)|Gets the value of a single property currently set for the connected data source.|  
|[Open](#open)|Creates a connection to a provider (data source) using either a `CLSID`, `ProgID`, or a `CEnumerator` moniker provided by the caller.|  
|[OpenFromFileName](#openfromfilename)|Opens a data source from a file specified by the user-supplied file name.|  
|[OpenFromInitializationString](#openfrominitializationstring)|Opens the data source specified by an initialization string.|  
|[OpenWithPromptFileName](#openwithpromptfilename)|Allows the user to select a previously created data link file to open the corresponding data source.|  
|[OpenWithServiceComponents](#openwithservicecomponents)|Opens a data source object using the Data Link dialog box.|  
  
## Remarks  
 One or more database sessions can be created for a single connection. These sessions are represented by `CSession`. You must call [CDataSource::Open](../../data/oledb/cdatasource-open.md) to open the connection before creating a session with `CSession::Open`.  
  
 For an example of how to use `CDataSource`, see the [CatDB](../../visual-cpp-samples.md) sample.  

## <a name="close"></a> CDataSource::Close
Closes the connection by releasing the `m_spInit` pointer.  
  
### Syntax  
  
```cpp
void Close() throw();  
``` 

## <a name="getinitializationstring"></a> CDataSource::GetInitializationString
Retrieves the initialization string of a data source that is currently open.  
  
### Syntax  
  
```cpp
HRESULT GetInitializationString(BSTR* pInitializationString,   
   bool bIncludePassword = false) throw();  
```  
  
#### Parameters  
 *pInitializationString*  
 [out] A pointer to the initialization string.  
  
 *bIncludePassword*  
 [in] **true** if string includes a password; otherwise **false**.  
  
### Return Value  
 A standard HRESULT.  
  
### Remarks  
 The resulting initialization string can be used to later reopen this data source connection. 
 
## <a name="getproperties"></a> CDataSource::GetProperties
Returns the property information requested for the connected data source object.  
  
### Syntax  
  
```cpp
HRESULT GetProperties(ULONG ulPropIDSets,   
   constDBPROPIDSET* pPropIDSet,   
   ULONG* pulPropertySets,   
   DBPROPSET** ppPropsets) const throw();  
```  
  
#### Parameters  
 See [IDBProperties::GetProperties](https://msdn.microsoft.com/library/ms714344.aspx) in the *OLE DB Programmer's Reference* in the Windows SDK.  
  
### Return Value  
 A standard HRESULT.  
  
### Remarks  
 To get a single property, use [GetProperty](../../data/oledb/cdatasource-getproperty.md).

## <a name="getproperty"></a> CDataSource::GetProperty
Returns the value of a specified property for the connected data source object.  
  
### Syntax  
  
```cpp
HRESULT GetProperty(const GUID& guid,   
   DBPROPID propid,   
   VARIANT* pVariant) const throw();  
```  
  
#### Parameters  
 *guid*  
 [in] A GUID identifying the property set for which to return the property.  
  
 *propid*  
 [in] Property ID for the property to return.  
  
 *pVariant*  
 [out] A pointer to the variant where `GetProperty` returns the value of the property.  
  
### Return Value  
 A standard HRESULT.  
  
### Remarks  
 To get multiple properties, use [GetProperties](../../data/oledb/cdatasource-getproperties.md).

## <a name="open"></a> CDataSource::Open
Opens a connection to a data source using a `CLSID`, `ProgID`, or `CEnumerator` moniker or prompts the user with a locator dialog box.  
  
### Syntax  
  
```cpp
HRESULT Open(const CLSID& clsid,  
   DBPROPSET* pPropSet = NULL,  
   ULONG nPropertySets = 1) throw();  


HRESULT Open(const CLSID& clsid,  
   LPCTSTR pName,  
   LPCTSTR pUserName = NULL,  
   LPCTSTR pPassword = NULL,  
   long nInitMode = 0) throw();HRESULT Open(LPCTSTR szProgID,  
   DBPROPSET* pPropSet = NULL,  
   ULONG nPropertySets = 1) throw();HRESULT Open(LPCTSTR szProgID,  
   LPCTSTR pName,  LPCTSTR pUserName = NULL,  
   LPCTSTR pPassword = NULL,  
   long nInitMode = 0) throw();  

HRESULT Open(const CEnumerator& enumerator,  
   DBPROPSET* pPropSet = NULL,  
   ULONG nPropertySets = 1) throw();  

HRESULT Open(const CEnumerator& enumerator,  
   LPCTSTR pName,  
   LPCTSTR pUserName = NULL,  
   LPCTSTR pPassword = NULL,  
   long nInitMode = 0) throw();  

HRESULT Open(HWND hWnd = GetActiveWindow(),  
   DBPROMPTOPTIONS dwPromptOptions = DBPROMPTOPTIONS_WIZARDSHEET) throw();

HRESULT Open(LPCWSTR szProgID,   
   DBPROPSET* pPropSet = NULL,   
   ULONG nPropertySets = 1) throw();

HRESULT Open(LPCSTR szProgID,   
   LPCTSTR pName,LPCTSTR pUserName = NULL,   
   LPCTSTR pPassword = NULL,   
   long nInitMode = 0) throw();  
```  
  
#### Parameters  
 *clsid*  
 [in] The `CLSID` of the data provider.  
  
 *pPropSet*  
 [in] A pointer to an array of [DBPROPSET](https://msdn.microsoft.com/library/ms714367.aspx) structures containing properties and values to be set. See [Property Sets and Property Groups](https://msdn.microsoft.com/library/ms713696.aspx) in the *OLE DB Programmer's Reference* in the Windows SDK.  
  
 *nPropertySets*  
 [in] The number of [DBPROPSET](https://msdn.microsoft.com/library/ms714367.aspx) structures passed in the *pPropSet* argument.  
  
 *pName*  
 [in] The name of the database to which to connect.  
  
 *pUserName*  
 [in] The name of the user.  
  
 *pPassword*  
 [in] The user's password.  
  
 *nInitMode*  
 [in] Database initialization mode. See [Initialization Properties](https://msdn.microsoft.com/library/ms723127.aspx)in the *OLE DB Programmer's Reference* in the Windows SDK for a list of valid initialization modes. If *nInitMode* is zero, no initialization mode is included in the property set used to open the connection.  
  
 *szProgID*  
 [in] A program identifier.  
  
 *enumerator*  
 [in] A [CEnumerator](../../data/oledb/cenumerator-class.md) object used to obtain a moniker for opening the connection when the caller does not specify a `CLSID`.  
  
 *hWnd*  
 [in] Handle to the window that is to be the parent of the dialog box. Using the function overload that uses the *hWnd* parameter will automatically invoke Service Components; see Remarks for details.  
  
 *dwPromptOptions*  
 [in] Determines the style of locator dialog box to display. See Msdasc.h for possible values.  
  
### Return Value  
 A standard HRESULT.  
  
### Remarks  
 The method overload that uses the *hWnd* parameter opens a data source object with the service components in oledb32.dll; this DLL contains the implementation of Service Components features such as Resource Pooling, Automatic Transaction Enlistment, and so on. For more information, see "OLE DB Services" in the OLE DB Programmer's Reference at [http://msdn.microsoft.com/library/default.asp?url=/library/oledb/htm/oledbole_db_services.asp?frame=true](http://msdn.microsoft.com/library/default.asp?url=/library/oledb/htm/oledbole_db_services.asp?frame=true).  
  
 The method overloads that do not use the *hWnd* parameter open a data source object without using the service components in oledb32.dll. A [CDataSource](../../data/oledb/cdatasource-class.md) object opened with these function overloads will be unable to utilize any of the functionality of Service Components.  
  
### Example  
 The following code shows how to open a Jet 4.0 data source with OLE DB Templates. You treat the Jet data source as an OLE DB data source. However, your call to `Open` needs two property sets: one for DBPROPSET_DBINIT and the other for DBPROPSET_JETOLEDB_DBINIT, so that you can set DBPROP_JETOLEDB_DATABASEPASSWORD.  
  
 [!code-cpp[NVC_OLEDB_Consumer#7](../../data/oledb/codesnippet/cpp/cdatasource-open_1.cpp)]  

## <a name="openfromfilename"></a> CDataSource::OpenFromFileName
Opens a data source from a file specified by the user-supplied file name.  
  
### Syntax  
  
```cpp
HRESULT OpenFromFileName(LPCOLESTR szFileName) throw();  
```  
  
#### Parameters  
 *szFileName*  
 [in] The name of a file, usually a data source connection (.UDL) file.  
  
 For more information about data link files (.udl files), see [Data Link API Overview](https://msdn.microsoft.com/library/ms718102.aspx) in the Windows SDK.  
  
### Return Value  
 A standard HRESULT.  
  
### Remarks  
 This method opens a data source object using the service components in oledb32.dll; this DLL contains the implementation of Service Components features such as Resource Pooling, Automatic Transaction Enlistment, and so on. For more information, see "OLE DB Services" in the OLE DB Programmer's Reference at [http://msdn.microsoft.com/library/default.asp?url=/library/oledb/htm/oledbole_db_services.asp?frame=true](http://msdn.microsoft.com/library/default.asp?url=/library/oledb/htm/oledbole_db_services.asp?frame=true).  

## <a name="openfrominitializationstring"></a> CDataSource::OpenFromInitializationString
Opens a data source specified by the user-supplied initialization string.  
  
### Syntax  
  
```cpp
HRESULT OpenFromInitializationString(LPCOLESTR szInitializationString,   
   bool fPromptForInfo= false) throw();  
```  
  
#### Parameters  
 *szInitializationString*  
 [in] The initialization string.  
  
 *fPromptForInfo*  
 [in] If this argument is set to **true**, then `OpenFromInitializationString` will set the DBPROP_INIT_PROMPT property to DBPROMPT_COMPLETEREQUIRED, which specifies that the user be prompted only if more information is needed. This is useful for situations in which the initialization string specifies a database that requires a password, but the string does not contain the password. The user will be prompted for a password (or any other missing information) when trying to connect to the database.  
  
 The default value is **false**, which specifies that the user never be prompted (sets DBPROP_INIT_PROMPT to DBPROMPT_NOPROMPT).  
  
### Return Value  
 A standard HRESULT.  
  
### Remarks  
 This method opens a data source object using the service components in oledb32.dll; this DLL contains the implementation of Service Components features such as Resource Pooling, Automatic Transaction Enlistment, and so on.  

## <a name="openwithpromptfilename"></a> CDataSource::OpenWithPromptFileName
This method prompts the user with a dialog box, then opens a data source using the file specified by the user.  
  
### Syntax  
  
```cpp
HRESULT OpenWithPromptFileName(HWND hWnd = GetActiveWindow(   ),   
   DBPROMPTOPTIONS dwPromptOptions = DBPROMPTOPTIONS_NONE,   
   LPCOLESTR szInitialDirectory = NULL) throw();  
```  
  
#### Parameters  
 *hWnd*  
 [in] Handle to the window that is to be the parent of the dialog box.  
  
 *dwPromptOptions*  
 [in] Determines the style of locator dialog box to display. See Msdasc.h for possible values.  
  
 *szInitialDirectory*  
 [in] The initial directory to display in the locator dialog box.  
  
### Return Value  
 A standard HRESULT.  
  
### Remarks  
 This method opens a data source object using the service components in oledb32.dll; this DLL contains the implementation of Service Components features such as Resource Pooling, Automatic Transaction Enlistment, and so on. For more information, see "OLE DB Services" in the OLE DB Programmer's Reference at [http://msdn.microsoft.com/library/default.asp?url=/library/oledb/htm/oledbole_db_services.asp?frame=true](http://msdn.microsoft.com/library/default.asp?url=/library/oledb/htm/oledbole_db_services.asp?frame=true).

## <a name="openwithservicecomponents"></a> CDataSource::OpenWithServiceComponents
Opens a data source object using the service components in oledb32.dll.  
  
### Syntax  
  
```cpp
HRESULT OpenWithServiceComponents (const CLSID clsid,  
   DBPROPSET* pPropset = NULL,  
   ULONG ulPropSets = 1);  

HRESULT OpenWithServiceComponents (LPCSTR szProgID,  
   DBPROPSET* pPropset = NULL,  
   ULONG ulPropSets = 1);  
```  
  
#### Parameters  
 *clsid*  
 [in] The `CLSID` of a data provider.  
  
 *szProgID*  
 [in] Program ID of a data provider.  
  
 *pPropset*  
 [in] A pointer to an array of [DBPROPSET](https://msdn.microsoft.com/library/ms714367.aspx) structures containing properties and values to be set. See [Property Sets and Property Groups](https://msdn.microsoft.com/library/ms713696.aspx) in the *OLE DB Programmer's Reference* in the Windows SDK. If the data source object is initialized, the properties must belong to the Data Source property group. If the same property is specified more than once in *pPropset*, then which value is used is provider-specific. If *ulPropSets* is zero, this parameter is ignored.  
  
 *ulPropSets*  
 [in] The number of [DBPROPSET](https://msdn.microsoft.com/library/ms714367.aspx) structures passed in the *pPropSet* argument. If this is zero, the provider ignores *pPropset*.  
  
### Return Value  
 A standard HRESULT.  
  
### Remarks  
 This method opens a data source object using the service components in oledb32.dll; this DLL contains the implementation of Service Components features such as Resource Pooling, Automatic Transaction Enlistment, and so on. For more information, see "OLE DB Services" in the OLE DB Programmer's Reference at [http://msdn.microsoft.com/library/default.asp?url=/library/oledb/htm/oledbole_db_services.asp?frame=true](http://msdn.microsoft.com/library/default.asp?url=/library/oledb/htm/oledbole_db_services.asp?frame=true).    

## See Also  
 [OLE DB Consumer Templates](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [OLE DB Consumer Templates Reference](../../data/oledb/ole-db-consumer-templates-reference.md)