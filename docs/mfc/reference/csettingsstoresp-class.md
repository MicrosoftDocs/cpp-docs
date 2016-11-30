---
title: "CSettingsStoreSP Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CSettingsStoreSP"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CSettingsStoreSP class"
ms.assetid: bcd37f40-cfd4-4d17-a5ce-3bfabe995dcc
caps.latest.revision: 18
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
# CSettingsStoreSP Class
The `CSettingsStoreSP` class is a helper class that you can use to create instances of the [CSettingsStore Class](../../mfc/reference/csettingsstore-class.md).  
  
## Syntax  
  
```  
class CSettingsStoreSP  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CSettingsStoreSP::CSettingsStoreSP](#csettingsstoresp__csettingsstoresp)|Constructs a `CSettingsStoreSP` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CSettingsStoreSP::Create](#csettingsstoresp__create)|Creates an instance of a class that is derived from `CSettingsStore`.|  
|[CSettingsStoreSP::SetRuntimeClass](#csettingsstoresp__setruntimeclass)|Sets the runtime class. The `Create` method uses the runtime class to determine what class of objects to create.|  
  
### Data Members  
  
|Name|Description|  
|----------|-----------------|  
|`m_dwUserData`|Custom user data that is stored in the `CSettingsStoreSP` object. You supply this data in the constructor of the `CSettingsStoreSP` object.|  
|`m_pRegistry`|The `CSettingsStore`-derived object that the `Create` method creates.|  
  
## Remarks  
 You can use the `CSettingsStoreSP` class to redirect all MFC registry operations to other locations, such as an XML file or a database. To do this, follow these steps:  
  
1.  Create a class (such as `CMyStore`) and derive it from `CSettingsStore`.  
  
2.  Use [DECLARE_DYNCREATE](run-time-object-model-services.md#declare_dyncreate) and [IMPLEMENT_DYNCREATE](run-time-object-model-services.md#implement_dyncreate) macros with your custom `CSettingsStore` class to enable dynamic creation.  
  
3.  Override the virtual functions and implement the `Read` and `Write` functions in your custom class. Implement any other functionality to read and write data to your desired location.  
  
4.  In your application, call `CSettingsStoreSP::SetRuntimeClass` and pass in a pointer to the [CRuntimeClass Structure](../../mfc/reference/cruntimeclass-structure.md) obtained from your class.  
  
 Whenever the framework would typically access the registry, it will now dynamically instantiate your custom class and use it to read or write data.  
  
 `CSettingsStoreSP::SetRuntimeClass` uses a global static variable. Therefore, only one custom store is available at a time.  
  
## Requirements  
 **Header:** afxsettingsstore.h  
  
##  <a name="csettingsstoresp__create"></a>  CSettingsStoreSP::Create  
 Creates a new instance of an object that is derived from the [CSettingsStore Class](../../mfc/reference/csettingsstore-class.md).  
  
```  
CSettingsStore& CSettingsStoreSP Create(
    BOOL bAdmin,  
    BOOL bReadOnly);
```  
  
### Parameters  
 [in] `bAdmin`  
 A Boolean parameter that determines whether a `CSettingsStore` object is created in administrator mode.  
  
 [in] `bReadOnly`  
 A Boolean parameter that determines whether a `CSettingsStore` object is created for read-only access.  
  
### Return Value  
 A reference to the newly created `CSettingsStore` object.  
  
### Remarks  
 You can use the method [CSettingsStoreSP::SetRuntimeClass](#csettingsstoresp__setruntimeclass) to determine what type of object `CSettingsStoreSP::Create` will create. By default, this method creates a `CSettingsStore` object.  
  
 If you create a `CSettingsStore` object in administrator mode, the default location for all registry access is HKEY_LOCAL_MACHINE. Otherwise, the default location for all registry access is HKEY_CURRENT_USER.  
  
 If `bAdmin` is `TRUE`, the application must have administration rights. Otherwise, it will fail when it tries to access the registry.  
  
### Example  
 The following example demonstrates how to use the `Create` method of the `CSettingsStoreSP` class.  
  
 [!code-cpp[NVC_MFC_RibbonApp#33](../../mfc/reference/codesnippet/cpp/csettingsstoresp-class_1.cpp)]  
  
##  <a name="csettingsstoresp__csettingsstoresp"></a>  CSettingsStoreSP::CSettingsStoreSP  
 Constructs a [CSettingsStoreSP Class](../../mfc/reference/csettingsstoresp-class.md) object.  
  
```  
CSettingsStoreSP::CSettingsStoreSP(DWORD dwUserData = 0);
```  
  
### Parameters  
 [in] `dwUserData`  
 User-defined data that the `CSettingsStoreSP` object stores.  
  
### Remarks  
 The `CSettingsStoreSP` object stores the data from `dwUserData` in the protected member variable `m_dwUserData`.  
  
##  <a name="csettingsstoresp__setruntimeclass"></a>  CSettingsStoreSP::SetRuntimeClass  
 Sets the runtime class. The method [CSettingsStoreSP::Create](#csettingsstoresp__create) uses the runtime class to determine what type of object to create.  
  
```  
static BOOL __stdcall CSettingsStoreSP::SetRuntimeClass(CRuntimeClass* pRTI);
```  
  
### Parameters  
 [in] `pRTI`  
 A pointer to the runtime class information for a class derived from the [CSettingsStore Class](../../mfc/reference/csettingsstore-class.md).  
  
### Return Value  
 `TRUE` if successful; `FALSE` if the class identified by `pRTI` is not derived from `CSettingsStore`.  
  
### Remarks  
 You can use the [CSettingsStoreSP Class](../../mfc/reference/csettingsstoresp-class.md) to derive classes from `CSettingsStore`. Use the method `SetRuntimeClass` if you want to create objects of a custom class that is derived from `CSettingsStore`.  
  
## See Also  
 [Classes](../../mfc/reference/mfc-classes.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [CSettingsStore Class](../../mfc/reference/csettingsstore-class.md)
