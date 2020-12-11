---
description: "Learn more about: CMenuTearOffManager Class"
title: "CMenuTearOffManager Class"
ms.date: "10/18/2018"
f1_keywords: ["CMenuTearOffManager", "AFXMENUTEAROFFMANAGER/CMenuTearOffManager", "AFXMENUTEAROFFMANAGER/CMenuTearOffManager::CMenuTearOffManager", "AFXMENUTEAROFFMANAGER/CMenuTearOffManager::Build", "AFXMENUTEAROFFMANAGER/CMenuTearOffManager::GetRegPath", "AFXMENUTEAROFFMANAGER/CMenuTearOffManager::Initialize", "AFXMENUTEAROFFMANAGER/CMenuTearOffManager::IsDynamicID", "AFXMENUTEAROFFMANAGER/CMenuTearOffManager::Parse", "AFXMENUTEAROFFMANAGER/CMenuTearOffManager::Reset", "AFXMENUTEAROFFMANAGER/CMenuTearOffManager::SetInUse", "AFXMENUTEAROFFMANAGER/CMenuTearOffManager::SetupTearOffMenus"]
helpviewer_keywords: ["CMenuTearOffManager [MFC], CMenuTearOffManager", "CMenuTearOffManager [MFC], Build", "CMenuTearOffManager [MFC], GetRegPath", "CMenuTearOffManager [MFC], Initialize", "CMenuTearOffManager [MFC], IsDynamicID", "CMenuTearOffManager [MFC], Parse", "CMenuTearOffManager [MFC], Reset", "CMenuTearOffManager [MFC], SetInUse", "CMenuTearOffManager [MFC], SetupTearOffMenus"]
ms.assetid: ab7ca272-ce42-4678-95f7-6ad75038f5a0
---
# CMenuTearOffManager Class

Manages tear-off menus. A tear-off menu is a menu on the menu bar. The user can remove a tear-off menu from the menu bar, causing the tear-off menu to float.

   For more detail see the source code located in the **VC\\atlmfc\\src\\mfc** folder of your Visual Studio installation.

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

The following example demonstrates how to construct and initialize a `CMenuTearOffManager` object by calling the `CWinAppEX::EnableTearOffMenus` method. This code snippet is part of the [Word Pad sample](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_WordPad#12](../../mfc/reference/codesnippet/cpp/cmenutearoffmanager-class_1.cpp)]

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

`CMenuTearOffManager`

## Requirements

**Header:** afxmenutearoffmanager.h

## <a name="build"></a> CMenuTearOffManager::Build

```cpp
void Build(
    UINT uiTearOffBarID,
    CString& strText);
```

### Parameters

[in] *uiTearOffBarID*<br/>

[in] *strText*<br/>

### Remarks

## <a name="cmenutearoffmanager"></a> CMenuTearOffManager::CMenuTearOffManager

Constructs a [CMenuTearOffManager](../../mfc/reference/cmenutearoffmanager-class.md) object.

```
CMenuTearOffManager();
```

### Remarks

In most cases, you should not create a `CMenuTearOffManager` manually. The framework of your application creates the `CMenuTearOffManager` object when you call [CWinAppEx::EnableTearOffMenus](../../mfc/reference/cwinappex-class.md#enabletearoffmenus).

## <a name="getregpath"></a> CMenuTearOffManager::GetRegPath

```
LPCTSTR GetRegPath() const;
```

### Return Value

### Remarks

## <a name="initialize"></a> CMenuTearOffManager::Initialize

Initializes a [CMenuTearOffManager](../../mfc/reference/cmenutearoffmanager-class.md) object.

```
BOOL Initialize(
    LPCTSTR lpszRegEntry,
    UINT uiTearOffMenuFirst,
    UINT uiTearOffMenuLast);
```

### Parameters

*lpszRegEntry*<br/>
[in] A string that contains the path of a registry entry. Your applications stores the settings for tear-off bars in this registry entry.

*uiTearOffMenuFirst*<br/>
[in] The first menu ID for a tear-off menu.

*uiTearOffMenuLast*<br/>
[in] The last menu ID for a tear-off menu.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

The range of menu IDs from *uiTearOffMenuFirst* to *uiTearOffMenuLast* must be a continuous interval. The interval defines the number of tear-off menus that can appear at the same time in the application.

## <a name="isdynamicid"></a> CMenuTearOffManager::IsDynamicID

```
BOOL IsDynamicID(UINT uiID) const;
```

### Parameters

[in] *uiID*<br/>

### Return Value

### Remarks

## <a name="parse"></a> CMenuTearOffManager::Parse

```
UINT Parse(CString& str);
```

### Parameters

[in] *str*<br/>

### Return Value

### Remarks

## <a name="reset"></a> CMenuTearOffManager::Reset

```cpp
void Reset(HMENU hmenu);
```

### Parameters

[in] *hmenu*<br/>

### Remarks

## <a name="setinuse"></a> CMenuTearOffManager::SetInUse

```cpp
void SetInUse(
    UINT uiCmdId,
    BOOL bUse = TRUE);
```

### Parameters

[in] *uiCmdId*<br/>

[in] *bUse*<br/>

### Remarks

## <a name="setuptearoffmenus"></a> CMenuTearOffManager::SetupTearOffMenus

```cpp
void SetupTearOffMenus(HMENU hMenu);
```

### Parameters

[in] *hMenu*<br/>

### Remarks

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CWinAppEx Class](../../mfc/reference/cwinappex-class.md)
