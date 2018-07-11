---
title: "CSettingsStore Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "reference"
f1_keywords: ["CSettingsStore", "AFXSETTINGSSTORE/CSettingsStore", "AFXSETTINGSSTORE/CSettingsStore::CSettingsStore", "AFXSETTINGSSTORE/CSettingsStore::Close", "AFXSETTINGSSTORE/CSettingsStore::CreateKey", "AFXSETTINGSSTORE/CSettingsStore::DeleteKey", "AFXSETTINGSSTORE/CSettingsStore::DeleteValue", "AFXSETTINGSSTORE/CSettingsStore::Open", "AFXSETTINGSSTORE/CSettingsStore::Read", "AFXSETTINGSSTORE/CSettingsStore::Write"]
dev_langs: ["C++"]
helpviewer_keywords: ["CSettingsStore [MFC], CSettingsStore", "CSettingsStore [MFC], Close", "CSettingsStore [MFC], CreateKey", "CSettingsStore [MFC], DeleteKey", "CSettingsStore [MFC], DeleteValue", "CSettingsStore [MFC], Open", "CSettingsStore [MFC], Read", "CSettingsStore [MFC], Write"]
ms.assetid: 0ea181de-a13e-4b29-b560-7c43838223ff
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# CSettingsStore Class
Wraps Windows API functions, providing an object-oriented interface that you use to access the registry.  
  
## Syntax  
  
```  
class CSettingsStore : public CObject  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CSettingsStore::CSettingsStore](#csettingsstore)|Constructs a `CSettingsStore` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CSettingsStore::Close](#close)|Closes the open registry key.|  
|[CSettingsStore::CreateKey](#createkey)|Opens the specified key or creates it if it does not exist.|  
|[CSettingsStore::DeleteKey](#deletekey)|Deletes the specified key and all its children.|  
|[CSettingsStore::DeleteValue](#deletevalue)|Deletes the specified value of the open key.|  
|[CSettingsStore::Open](#open)|Opens the specified key.|  
|[CSettingsStore::Read](#read)|Retrieves the data for a specified key value.|  
|[CSettingsStore::Write](#write)|Writes a value to the registry under the open key.|  
  
## Remarks  
 The member functions `CreateKey` and `Open` are very similar. If the registry key already exists, `CreateKey` and `Open` function in the same way. However, if the registry key does not exist, `CreateKey` will create it whereas `Open` will return an error value.  
  
## Example  
 The following example demonstrates how to use the Open and Read methods of the `CSettingsStore` class. This code snippet is part of the [Tool Tip Demo sample](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_ToolTipDemo#1](../../mfc/reference/codesnippet/cpp/csettingsstore-class_1.cpp)]  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CSettingsStore`  
  
## Requirements  
 **Header:** afxsettingsstore.h  
  
##  <a name="close"></a>  CSettingsStore::Close  
 Closes the open registry key.  
  
```  
virtual void Close();
```  
  
### Remarks  
 By default, this method is called from the destructor of the [CSettingsStore Class](../../mfc/reference/csettingsstore-class.md).  
  
##  <a name="createkey"></a>  CSettingsStore::CreateKey  
 Opens a registry key or creates it if it does not exist.  
  
```  
virtual BOOL CreateKey(LPCTSTR pszPath);
```  
  
### Parameters  
 [in] *pszPath*  
 Specifies the name of a key to be created or opened.  
  
### Return Value  
 0 if successful; otherwise a nonzero value.  
  
### Remarks  
 `CreateKey` uses `m_hKey` as the root of registry inquiries. It searches for *pszPath* as a subkey of `m_hKey`. If the key does not exist, `CreateKey` creates it. Otherwise, it opens the key. `CreateKey` then sets `m_hKey` to the created or opened key.  
  
##  <a name="csettingsstore"></a>  CSettingsStore::CSettingsStore  
 Creates a `CSettngsStore` object.  
  
```  
CSettingsStore(
    BOOL bAdmin,  
    BOOL bReadOnly);
```  
  
### Parameters  
 [in] *bAdmin*  
 Boolean parameter that specifies whether the `CSettingsStore` object is acting in administrator mode.  
  
 [in] *bReadOnly*  
 Boolean parameter that specifies whether the `CSettingsStore` object is created in read-only mode.  
  
### Remarks  
 If *bAdmin* is set to TRUE, the `m_hKey` member variable is set to **HKEY_LOCAL_MACHINE**. If you set *bAdmin* to FALSE, `m_hKey` is set to **HKEY_CURRENT_USER**.  
  
 The security access depends on the *bReadOnly* parameter. If *bReadonly* is FALSE, the security access will be set to **KEY_ALL_ACCESS**. If *bReadyOnly* is TRUE, the security access will be set to a combination of **KEY_QUERY_VALUE, KEY_NOTIFY** and **KEY_ENUMERATE_SUB_KEYS**. For more information about security access together with the registry, see [Registry Key Security and Access Rights](http://msdn.microsoft.com/library/windows/desktop/ms724878).  
  
 The destructor for `CSettingsStore` releases `m_hKey` automatically.  
  
##  <a name="deletekey"></a>  CSettingsStore::DeleteKey  
 Deletes a key and all its children from the registry.  
  
```  
virtual BOOL DeleteKey(
    LPCTSTR pszPath,  
    BOOL bAdmin = FALSE);
```  
  
### Parameters  
 [in] *pszPath*  
 The name of the key to delete.  
  
 [in] *bAdmin*  
 Switch that specifies the location of the key to delete.  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
### Remarks  
 This method will fail if the `CSettingsStore` object is in read-only mode.  
  
 If the parameter *bAdmin* is zero, `DeleteKey` searches for the key to delete under **HKEY_CURRENT_USER**. If *bAdmin* is nonzero, `DeleteKey` searches for the key to delete under **HKEY_LOCAL_MACHINE**.  
  
##  <a name="deletevalue"></a>  CSettingsStore::DeleteValue  
 Deletes a value from `m_hKey`.  
  
```  
virtual BOOL DeleteValue(LPCTSTR pszValue);
```  
  
### Parameters  
 [in] *pszValue*  
 Specifies the value field to remove.  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
##  <a name="open"></a>  CSettingsStore::Open  
 Opens a registry key.  
  
```  
virtual BOOL Open(LPCTSTR pszPath);
```  
  
### Parameters  
 [in] *pszPath*  
 The name of a registry key.  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
### Remarks  
 After this method successfully opens the specified key, it sets `m_hKey` to the handle of this key.  
  
##  <a name="read"></a>  CSettingsStore::Read  
 Reads a value from a key in the registry.  
  
```  
virtual BOOL Read(
    LPCTSTR pszKey,  
    int& iVal);

 
virtual BOOL Read(
    LPCTSTR pszKey,  
    DWORD& dwVal);

 
virtual BOOL Read(
    LPCTSTR pszKey,  
    CString& sVal);

 
virtual BOOL Read(
    LPCTSTR pszKey,  
    CStringList& scStringList);

 
virtual BOOL Read(
    LPCTSTR pszKey,  
    CStringArray& scArray);

 
virtual BOOL Read(
    LPCTSTR pszKey,  
    CDWordArray& dwcArray);

 
virtual BOOL Read(
    LPCTSTR pszKey,  
    CWordArray& wcArray);

 
virtual BOOL Read(
    LPCTSTR pszKey,  
    CByteArray& bcArray);

 
virtual BOOL Read(
    LPCTSTR pszKey,  
    LPPOINT& lpPoint);

 
virtual BOOL Read(
    LPCTSTR pszKey,  
    CRect& rect);

 
virtual BOOL Read(
    LPCTSTR pszKey,  
    BYTE** ppData,  
    UINT* pBytes);

 
virtual BOOL Read(
    LPCTSTR pszKey,  
    CObList& list);

 
virtual BOOL Read(
    LPCTSTR pszKey,  
    CObject& obj);

 
virtual BOOL Read(
    LPCTSTR pszKey,  
    CObject*& pObj);
```  
  
### Parameters  
 [in] *pszKey*  
 Pointer to a null-terminated string that contains the name of the value to read from the registry.  
  
 [out] *iVal*  
 Reference to an integer variable that receives the value read from the registry key.  
  
 [out] *dwVal*  
 Reference to a 32-bit double word variable that receives the value read from the registry key.  
  
 [out] *sVal*  
 Reference to a string variable that receives the value read from the registry key.  
  
 [out] *scStringList*  
 Reference to a string list variable that receives the value read from the registry key.  
  
 [out] *scArray*  
 Reference to a string array variable that receives the value read from the registry key.  
  
 [out] *dwcArray*  
 Reference to a 32-bit double word array variable that receives the value read from the registry key.  
  
 [out] *wcArray*  
 Reference to a 16-bit word array variable that receives the value read from the registry key.  
  
 [out] *bcArray*  
 Reference to a byte array variable that receives the value read from the registry key.  
  
 [out] *lpPoint*  
 Reference to a pointer to a `POINT` structure that receives the value read from the registry key.  
  
 [out] *rect*  
 Reference to a [CRect](../../atl-mfc-shared/reference/crect-class.md) variable that receives the value read from the registry key.  
  
 [out] *ppData*  
 Pointer to a pointer to data that receives the value read from the registry key.  
  
 [out] *pBytes*  
 Pointer to an unsigned integer variable. This variable receives the size of the buffer that *ppData* points to.  
  
 [out] *list*  
 Reference to a [CObList](../../mfc/reference/coblist-class.md) variable that receives the value read from the registry key.  
  
 [out] *obj*  
 Reference to a [CObject](../../mfc/reference/cobject-class.md) variable that receives the value read from the registry key.  
  
 [out] *pObj*  
 Reference to a pointer to a `CObject` variable that receives the value read from the registry key.  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
### Remarks  
 `Read` checks for *pszKey* as a subkey of `m_hKey`.  
  
##  <a name="write"></a>  CSettingsStore::Write  
 Writes a value to the registry under the open key.  
  
```  
virtual BOOL Write(
    LPCTSTR pszKey,  
    int iVal);

 
virtual BOOL Write(
    LPCTSTR pszKey,  
    DWORD dwVal);

 
virtual BOOL Write(
    LPCTSTR pszKey,  
    LPCTSTR pszVal);

 
virtual BOOL Write(
    LPCTSTR pszKey,  
    CStringList& scStringList);

 
virtual BOOL Write(
    LPCTSTR pszKey,  
    CByteArray& bcArray);

 
virtual BOOL Write(
    LPCTSTR pszKey,  
    CStringArray& scArray);

 
virtual BOOL Write(
    LPCTSTR pszKey,  
    CDWordArray& dwcArray);

 
virtual BOOL Write(
    LPCTSTR pszKey,  
    CWordArray& wcArray);

 
virtual BOOL Write(
    LPCTSTR pszKey,  
    const CRect& rect);

 
virtual BOOL Write(
    LPCTSTR pszKey,  
    LPPOINT& lpPoint);

 
virtual BOOL Write(
    LPCTSTR pszKey,  
    LPBYTE pData,  
    UINT nBytes);

 
virtual BOOL Write(
    LPCTSTR pszKey,  
    CObList& list);

 
virtual BOOL Write(
    LPCTSTR pszKey,  
    CObject& obj);

 
virtual BOOL Write(
    LPCTSTR pszKey,  
    CObject* pObj);
```  
  
### Parameters  
 [in] *pszKey*  
 Pointer to a string that contains the name of the value to set.  
  
 [in] *iVal*  
 Reference to an integer variable that contains the data to store.  
  
 [in] *dwVal*  
 Reference to a 32-bit double word variable that contains the data to store.  
  
 [in] *pszVal*  
 Pointer to a null-terminated string variable that contains the data to store.  
  
 [in] *scStringList*  
 Reference to a [CStringList](../../mfc/reference/cstringlist-class.md) variable that contains the data to store.  
  
 [in] *bcArray*  
 Reference to a byte array variable that contains the data to store.  
  
 [in] *scArray*  
 Reference to a string array variable that contains the data to store.  
  
 [in] *dwcArray*  
 Reference to a 32-bit double word array variable that contains the data to store.  
  
 [in] *wcArray*  
 Reference to a 16-bit word array variable that contains the data to store.  
  
 [in] *rect*  
 Reference to a [CRect](../../atl-mfc-shared/reference/crect-class.md) variable that contains the data to store.  
  
 [in] *lpPoint*  
 Reference to a pointer to a `POINT` variable that contains the data to store.  
  
 [in] *pData*  
 Pointer to a buffer that contains the data to store.  
  
 [in] *nBytes*  
 Specifies the size, in bytes, of the data to which the *pData* parameter points.  
  
 [in] *list*  
 Reference to a [CObList](../../mfc/reference/coblist-class.md) variable that contains the data to store.  
  
 [in] *obj*  
 Reference to a [CObject](../../mfc/reference/cobject-class.md) variable that contains the data to store.  
  
 [in] *pObj*  
 Pointer to a pointer to a `CObject` variable that contains the data to store.  
  
### Return Value  
 TRUE if successful; otherwise FALSE.  
  
### Remarks  
 In order to write to the registry, you must set *bReadOnly* to a nonzero value when you create a [CSettingsStore](../../mfc/reference/csettingsstore-class.md) object. For more information, see [CSettingsStore::CSettingsStore](#csettingsstore).  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CWinAppEx Class](../../mfc/reference/cwinappex-class.md)
