---
title: "CMenuTearOffManager Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology:  
  - "cpp-windows"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: ['CMenuTearOffManager', 'AFXMENUTEAROFFMANAGER/CMenuTearOffManager', 'AFXMENUTEAROFFMANAGER/CMenuTearOffManager::CMenuTearOffManager', 'AFXMENUTEAROFFMANAGER/CMenuTearOffManager::Build', 'AFXMENUTEAROFFMANAGER/CMenuTearOffManager::GetRegPath', 'AFXMENUTEAROFFMANAGER/CMenuTearOffManager::Initialize', 'AFXMENUTEAROFFMANAGER/CMenuTearOffManager::IsDynamicID', 'AFXMENUTEAROFFMANAGER/CMenuTearOffManager::Parse', 'AFXMENUTEAROFFMANAGER/CMenuTearOffManager::Reset', 'AFXMENUTEAROFFMANAGER/CMenuTearOffManager::SetInUse', 'AFXMENUTEAROFFMANAGER/CMenuTearOffManager::SetupTearOffMenus']
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMenuTearOffManager class"
ms.assetid: ab7ca272-ce42-4678-95f7-6ad75038f5a0
caps.latest.revision: 31
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
# CMenuTearOffManager Class
Manages tear-off menus. A tear-off menu is a menu on the menu bar. The user can remove a tear-off menu from the menu bar, causing the tear-off menu to float.  
  
   [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
   
## Syntax  
  
```  
class CMenuTearOffManager : public CObject  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CMenuTearOffManager::CMenuTearOffManager](#cmenutearoffmanager)|Constructs a `CMenuTearOffManager` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMenuTearOffManager::Build](#build)||  
|[CMenuTearOffManager::GetRegPath](#getregpath)||  
|[CMenuTearOffManager::Initialize](#initialize)|Initializes a `CMenuTearOffManager` object.|  
|[CMenuTearOffManager::IsDynamicID](#isdynamicid)||  
|[CMenuTearOffManager::Parse](#parse)||  
|[CMenuTearOffManager::Reset](#reset)||  
|[CMenuTearOffManager::SetInUse](#setinuse)||  
|[CMenuTearOffManager::SetupTearOffMenus](#setuptearoffmenus)||  
  
## Remarks  
 In order to use tear-off menus in your application, you must have a `CMenuTearOffManager` object. In most cases, you won't create or initialize a `CMenuTearOffManager` object directly. This is handled for you when you call the [CWinAppEx::EnableTearOffMenus](../../mfc/reference/cwinappex-class.md#enabletearoffmenus) function.  
  
## Example  
 The following example demonstrates how to construct and initialize a `CMenuTearOffManager` object by calling the `CWinAppEX::EnableTearOffMenus` method. This code snippet is part of the [Word Pad sample](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_WordPad#12](../../mfc/reference/codesnippet/cpp/cmenutearoffmanager-class_1.cpp)]  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CMenuTearOffManager`   
  
## Requirements  
 **Header:** afxmenutearoffmanager.h  
  
##  <a name="build"></a>  CMenuTearOffManager::Build  

  
```  
void Build(
    UINT uiTearOffBarID,  
    CString& strText);
```  
  
### Parameters  
 [in] `uiTearOffBarID`  
 [in] `strText`  
  
### Remarks  
  
##  <a name="cmenutearoffmanager"></a>  CMenuTearOffManager::CMenuTearOffManager  
 Constructs a [CMenuTearOffManager](../../mfc/reference/cmenutearoffmanager-class.md) object.  
  
```  
CMenuTearOffManager();
```  
  
### Remarks  
 In most cases, you should not create a `CMenuTearOffManager` manually. The framework of your application creates the `CMenuTearOffManager` object when you call [CWinAppEx::EnableTearOffMenus](../../mfc/reference/cwinappex-class.md#enabletearoffmenus).  
  
##  <a name="getregpath"></a>  CMenuTearOffManager::GetRegPath  

  
```  
LPCTSTR GetRegPath() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="initialize"></a>  CMenuTearOffManager::Initialize  
 Initializes a [CMenuTearOffManager](../../mfc/reference/cmenutearoffmanager-class.md) object.  
  
```  
BOOL Initialize(
    LPCTSTR lpszRegEntry,  
    UINT uiTearOffMenuFirst,  
    UINT uiTearOffMenuLast);
```  
  
### Parameters  
 [in] `lpszRegEntry`  
 A string that contains the path of a registry entry. Your applications stores the settings for tear-off bars in this registry entry.  
  
 [in] `uiTearOffMenuFirst`  
 The first menu ID for a tear-off menu.  
  
 [in] `uiTearOffMenuLast`  
 The last menu ID for a tear-off menu.  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
### Remarks  
 The range of menu IDs from `uiTearOffMenuFirst` to `uiTearOffMenuLast` must be a continuous interval. The interval defines the number of tear-off menus that can appear at the same time in the application.  
  
##  <a name="isdynamicid"></a>  CMenuTearOffManager::IsDynamicID  

  
```  
BOOL IsDynamicID(UINT uiID) const;  
```  
  
### Parameters  
 [in] `uiID`  
  
### Return Value  
  
### Remarks  
  
##  <a name="parse"></a>  CMenuTearOffManager::Parse  

  
```  
UINT Parse(CString& str);
```  
  
### Parameters  
 [in] `str`  
  
### Return Value  
  
### Remarks  
  
##  <a name="reset"></a>  CMenuTearOffManager::Reset  

  
```  
void Reset(HMENU hmenu);
```  
  
### Parameters  
 [in] `hmenu`  
  
### Remarks  
  
##  <a name="setinuse"></a>  CMenuTearOffManager::SetInUse  

  
```  
void SetInUse(
    UINT uiCmdId,  
    BOOL bUse = TRUE);
```  
  
### Parameters  
 [in] `uiCmdId`  
 [in] `bUse`  
  
### Remarks  
  
##  <a name="setuptearoffmenus"></a>  CMenuTearOffManager::SetupTearOffMenus  

  
```  
void SetupTearOffMenus(HMENU hMenu);
```  
  
### Parameters  
 [in] `hMenu`  
  
### Remarks  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CWinAppEx Class](../../mfc/reference/cwinappex-class.md)
