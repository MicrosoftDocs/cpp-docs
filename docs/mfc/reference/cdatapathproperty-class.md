---
title: "CDataPathProperty Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CDataPathProperty"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ActiveX controls [C++], asynchronous"
  - "OLE controls [C++], asynchronous"
  - "CDataPathProperty class"
  - "asynchronous controls [C++]"
ms.assetid: 1f96efdb-54e4-460b-862c-eba5d4103488
caps.latest.revision: 24
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
# CDataPathProperty Class
Implements an OLE control property that can be loaded asynchronously.  
  
## Syntax  
  
```  
class CDataPathProperty : public CAsyncMonikerFile  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CDataPathProperty::CDataPathProperty](#cdatapathproperty__cdatapathproperty)|Constructs a `CDataPathProperty` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CDataPathProperty::GetControl](#cdatapathproperty__getcontrol)|Retrieves the asynchronous OLE control associated with the `CDataPathProperty` object.|  
|[CDataPathProperty::GetPath](#cdatapathproperty__getpath)|Retrieves the pathname of the property.|  
|[CDataPathProperty::Open](#cdatapathproperty__open)|Initiates loading of the asynchronous property for the associated ActiveX (OLE) control.|  
|[CDataPathProperty::ResetData](#cdatapathproperty__resetdata)|Calls `CAsyncMonikerFile::OnDataAvailable` to notify the container that the control properties have changed.|  
|[CDataPathProperty::SetControl](#cdatapathproperty__setcontrol)|Sets the asynchronous ActiveX (OLE) control associated with the property.|  
|[CDataPathProperty::SetPath](#cdatapathproperty__setpath)|Sets the pathname of the property.|  
  
## Remarks  
 Asynchronous properties are loaded after synchronous initiation.  
  
 The class `CDataPathProperty` is derived from **CAysncMonikerFile**. To implement asynchronous properties in your OLE controls, derive a class from `CDataPathProperty`, and override [OnDataAvailable](../../mfc/reference/casyncmonikerfile-class.md#casyncmonikerfile__ondataavailable).  
  
 For more information about how to use asynchronous monikers and ActiveX controls in Internet applications, see the following articles:  
  
- [Internet First Steps: ActiveX Controls](../../mfc/activex-controls-on-the-internet.md)  
  
- [Internet First Steps: Asynchronous Monikers](../../mfc/asynchronous-monikers-on-the-internet.md)  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CFile](../../mfc/reference/cfile-class.md)  
  
 [COleStreamFile](../../mfc/reference/colestreamfile-class.md)  
  
 [CMonikerFile](../../mfc/reference/cmonikerfile-class.md)  
  
 [CAsyncMonikerFile](../../mfc/reference/casyncmonikerfile-class.md)  
  
 `CDataPathProperty`  
  
## Requirements  
 **Header:** afxctl.h  
  
##  <a name="cdatapathproperty__cdatapathproperty"></a>  CDataPathProperty::CDataPathProperty  
 Constructs a `CDataPathProperty` object.  
  
```  
CDataPathProperty(
    COleControl* pControl = NULL);

 
CDataPathProperty(
    LPCTSTR lpszPath, COleControl* pControl = NULL);
```  
  
### Parameters  
 `pControl`  
 A pointer to the OLE control object to be associated with this `CDataPathProperty` object.  
  
 `lpszPath`  
 The path, which may be absolute or relative, used to create an asynchronous moniker that references the actual absolute location of the property. `CDataPathProperty` uses URLs, not filenames. If you want a `CDataPathProperty` object for a file, prepend `file://` to the path.  
  
### Remarks  
 The `COleControl` object pointed to by `pControl` is used by **Open** and retrieved by derived classes. If `pControl` is **NULL**, the control used with **Open** should be set with `SetControl`. If `lpszPath` is **NULL**, you can pass in the path through **Open** or set it with `SetPath`.  
  
##  <a name="cdatapathproperty__getcontrol"></a>  CDataPathProperty::GetControl  
 Call this member function to retrieve the `COleControl` object associated with the `CDataPathProperty` object.  
  
```  
COleControl* GetControl();
```  
  
### Return Value  
 Returns a pointer to the OLE control associated with the `CDataPathProperty` object. **NULL** if not control is associated.  
  
##  <a name="cdatapathproperty__getpath"></a>  CDataPathProperty::GetPath  
 Call this member function to retrieve the path, set when the `CDataPathProperty` object was constructed, or specified in **Open**, or specified in a previous call to the `SetPath` member function.  
  
```  
CString GetPath() const;

 
```  
  
### Return Value  
 Returns the pathname to the property itself. Can be empty if no path has been specified.  
  
##  <a name="cdatapathproperty__open"></a>  CDataPathProperty::Open  
 Call this member function to initiate loading of the asynchronous property for the associated control.  
  
```  
virtual BOOL Open(
    COleControl* pControl,  
    CFileException* pError = NULL);

 
virtual BOOL Open(
    LPCTSTR lpszPath,  
    COleControl* pControl,
    CFileException* pError = NULL);

 
virtual BOOL Open(
    LPCTSTR lpszPath,  
    CFileException* pError = NULL);

 
virtual BOOL Open(
    CFileException* pError = NULL);
```  
  
### Parameters  
 `pControl`  
 A pointer to the OLE control object to be associated with this `CDataPathProperty` object.  
  
 `pError`  
 A pointer to a file exception. In the event of an error, will be set to the cause.  
  
 `lpszPath`  
 The path, which may be absolute or relative, used to create an asynchronous moniker that references the actual absolute location of the property. `CDataPathProperty` uses URLs, not filenames. If you want a `CDataPathProperty` object for a file, prepend `file://` to the path.  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
### Remarks  
 The function attempts to obtain the `IBindHost` interface from the control.  
  
 Before calling **Open** without a path, the value for the property's path must be set. This can be done when the object is constructed, or by calling the `SetPath` member function.  
  
 Before calling **Open** without a control, an ActiveX control (formerly known as an OLE control) can be associated with the object. This can be done when the object is constructed, or by calling `SetControl`.  
  
 All overloads of [CAsyncMonikerFile::Open](../../mfc/reference/casyncmonikerfile-class.md#casyncmonikerfile__open) are also available from `CDataPathProperty`.  
  
##  <a name="cdatapathproperty__resetdata"></a>  CDataPathProperty::ResetData  
 Call this function to get `CAsyncMonikerFile::OnDataAvailable` to notify the container that the control properties have changed, and all the information loaded asynchronously is no longer useful.  
  
```  
virtual void ResetData();
```  
  
### Remarks  
 Opening should be restarted. Derived classes can override this function for different defaults.  
  
##  <a name="cdatapathproperty__setcontrol"></a>  CDataPathProperty::SetControl  
 Call this member function to associate an asynchronous OLE control with the `CDataPathProperty` object.  
  
```  
void SetControl(COleControl* pControl);
```  
  
### Parameters  
 `pControl`  
 A pointer to the asynchronous OLE control to be associated with the property.  
  
##  <a name="cdatapathproperty__setpath"></a>  CDataPathProperty::SetPath  
 Call this member function to set the pathname of the property.  
  
```  
void SetPath(LPCTSTR lpszPath);
```  
  
### Parameters  
 `lpszPath`  
 A path, which may be absolute or relative, to the property being loaded asynchronously. `CDataPathProperty` uses URLs, not filenames. If you want a `CDataPathProperty` object for a file, prepend `file://` to the path.  
  
## See Also  
 [MFC Sample Image](../../visual-cpp-samples.md)   
 [CAsyncMonikerFile Class](../../mfc/reference/casyncmonikerfile-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [CAsyncMonikerFile Class](../../mfc/reference/casyncmonikerfile-class.md)
