---
description: "Learn more about: CSnapInItemImpl Class"
title: "CSnapInItemImpl Class"
ms.date: "11/04/2016"
f1_keywords: ["CSnapInItemImpl", "ATLSNAP/ATL::CSnapInItemImpl", "ATLSNAP/ATL::CSnapInItemImpl::CSnapInItemImpl", "ATLSNAP/ATL::CSnapInItemImpl::AddMenuItems", "ATLSNAP/ATL::CSnapInItemImpl::Command", "ATLSNAP/ATL::CSnapInItemImpl::CreatePropertyPages", "ATLSNAP/ATL::CSnapInItemImpl::FillData", "ATLSNAP/ATL::CSnapInItemImpl::GetResultPaneInfo", "ATLSNAP/ATL::CSnapInItemImpl::GetResultViewType", "ATLSNAP/ATL::CSnapInItemImpl::GetScopePaneInfo", "ATLSNAP/ATL::CSnapInItemImpl::Notify", "ATLSNAP/ATL::CSnapInItemImpl::QueryPagesFor", "ATLSNAP/ATL::CSnapInItemImpl::SetMenuInsertionFlags", "ATLSNAP/ATL::CSnapInItemImpl::SetToolbarButtonInfo", "ATLSNAP/ATL::CSnapInItemImpl::UpdateMenuState", "ATLSNAP/ATL::CSnapInItemImpl::UpdateToolbarButton", "ATLSNAP/ATL::CSnapInItemImpl::m_bstrDisplayName", "ATLSNAP/ATL::CSnapInItemImpl::m_resultDataItem", "ATLSNAP/ATL::CSnapInItemImpl::m_scopeDataItem"]
helpviewer_keywords: ["snap-ins, data items", "snap-ins, ATL support for", "CSnapInItemImpl class", "snap-ins"]
ms.assetid: 52caefbd-9eae-49b0-add2-d55524271aa7
---
# CSnapInItemImpl Class

This class provides methods for implementing a snap-in node object.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```
template <class T, BOOL bIsExtension = FALSE>
class ATL_NO_VTABLE CSnapInItemImpl : public CSnapInItem
```

#### Parameters

*T*<br/>
Your class, derived from `CSnapInItemImpl`.

*bIsExtension*<br/>
TRUE if the object is a snap-in extension; otherwise FALSE.

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CSnapInItemImpl::CSnapInItemImpl](#csnapinitemimpl)|Constructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CSnapInItemImpl::AddMenuItems](#addmenuitems)|Adds menu items to a context menu.|
|[CSnapInItemImpl::Command](#command)|Called by the console when a custom menu item is selected.|
|[CSnapInItemImpl::CreatePropertyPages](#createpropertypages)|Adds pages to the property sheet of the snap-in.|
|[CSnapInItemImpl::FillData](#filldata)|Copies information on the snap-in object into a specified stream.|
|[CSnapInItemImpl::GetResultPaneInfo](#getresultpaneinfo)|Retrieves the `RESULTDATAITEM` structure of the snap-in.|
|[CSnapInItemImpl::GetResultViewType](#getresultviewtype)|Determines the type of view used by the result pane.|
|[CSnapInItemImpl::GetScopePaneInfo](#getscopepaneinfo)|Retrieves the `SCOPEDATAITEM` structure of the snap-in.|
|[CSnapInItemImpl::Notify](#notify)|Called by the console to notify the snap-in of actions taken by the user.|
|[CSnapInItemImpl::QueryPagesFor](#querypagesfor)|Called to see if the snap-in node supports property pages.|
|[CSnapInItemImpl::SetMenuInsertionFlags](#setmenuinsertionflags)|Modifies the menu insertion flags for a snap-in object.|
|[CSnapInItemImpl::SetToolbarButtonInfo](#settoolbarbuttoninfo)|Sets the information of the specified toolbar button.|
|[CSnapInItemImpl::UpdateMenuState](#updatemenustate)|Updates the state of a context menu item.|
|[CSnapInItemImpl::UpdateToolbarButton](#updatetoolbarbutton)|Updates the state of the specified toolbar button.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[CSnapInItemImpl::m_bstrDisplayName](#m_bstrdisplayname)|The name of the snap-in object.|
|[CSnapInItemImpl::m_resultDataItem](#m_resultdataitem)|The Windows `RESULTDATAITEM` structure used by the `CSnapInItemImpl` object.|
|[CSnapInItemImpl::m_scopeDataItem](#m_scopedataitem)|The Windows `SCOPEDATAITEM` structure used by the `CSnapInItemImpl` object.|

## Remarks

`CSnapInItemImpl` provides a basic implementation for a snap-in node object, such as adding menu items and toolbars, and forwarding commands for the snap-in node to the appropriate handler function. These features are implemented using several different interfaces and map types. The default implementation handles notifications sent to the node object by determining the correct instance of the derived class and then forwarding the message to the correct instance.

## Inheritance Hierarchy

`CSnapInItem`

`CSnapInItemImpl`

## Requirements

**Header:** atlsnap.h

## <a name="addmenuitems"></a> CSnapInItemImpl::AddMenuItems

This method implements the Win32 function [IExtendContextMenu::AddMenuItems](/windows/win32/api/mmc/nf-mmc-iextendcontextmenu-addmenuitems).

```
AddMenuItems(
    LPCONTEXTMENUCALLBACK piCallback,
    long* pInsertionAllowed,
    DATA_OBJECT_TYPES type);
```

### Parameters

*piCallback*<br/>
[in] Pointer to the `IContextMenuCallback` that can add items to the context menu.

*pInsertionAllowed*<br/>
[in, out] Identifies Microsoft Management Console (MMC)-defined, menu-item insertion points that can be used. This can be a combination of the following flags:

- CCM_INSERTIONALLOWED_TOP Items can be inserted at the top of a context menu.

- CCM_INSERTIONALLOWED_NEW Items can be inserted in the Create New submenu.

- CCM_INSERTIONALLOWED_TASK Items can be inserted in the Task submenu.

- CCM_INSERTIONALLOWED_VIEW Items can be inserted in the toolbar view menu or in the View submenu of the result pane context menu.

*type*<br/>
[in] Specifies the type of object. It can have one of the following values:

- CCT_SCOPE Data object for scope pane context.

- CCT_RESULT Data object for result pane context.

- CCT_SNAPIN_MANAGER Data object for snap-in manager context.

- CCT_UNINITIALIZED Data object has an invalid type.

## <a name="command"></a> CSnapInItemImpl::Command

This method implements the Win32 function [IExtendContextMenu::Command](/windows/win32/api/mmc/nf-mmc-iextendcontextmenu-command).

```
Command(long lCommandID, DATA_OBJECT_TYPES type);
```

### Parameters

*lCommandID*<br/>
[in] Specifies the command identifier of the menu item.

*type*<br/>
[in] Specifies the type of object. It can have one of the following values:

- CCT_SCOPE Data object for scope pane context.

- CCT_RESULT Data object for result pane context.

- CCT_SNAPIN_MANAGER Data object for snap-in manager context.

- CCT_UNINITIALIZED Data object has an invalid type.

## <a name="createpropertypages"></a> CSnapInItemImpl::CreatePropertyPages

This method implements the Win32 function [IExtendPropertySheet::CreatePropertyPages](/windows/win32/api/mmc/nn-mmc-iextendpropertysheet2).

```
CreatePropertyPages(
    LPPROPERTYSHEETCALLBACK lpProvider,
    long handle,
    IUnknown* pUnk,
    DATA_OBJECT_TYPES type);
```

### Parameters

*lpProvider*<br/>
[in] Pointer to the `IPropertySheetCallback` interface.

*handle*<br/>
[in] Specifies the handle used to route the MMCN_PROPERTY_CHANGE notification message to the appropriate data class.

*pUnk*<br/>
[in] Pointer to the `IExtendPropertySheet` interface on the object that contains context information about the node.

*type*<br/>
[in] Specifies the type of object. It can have one of the following values:

- CCT_SCOPE Data object for scope pane context.

- CCT_RESULT Data object for result pane context.

- CCT_SNAPIN_MANAGER Data object for snap-in manager context.

- CCT_UNINITIALIZED Data object has an invalid type.

## <a name="csnapinitemimpl"></a> CSnapInItemImpl::CSnapInItemImpl

Constructs a `CSnapInItemImpl` object.

```
CSnapInItemImpl();
```

## <a name="filldata"></a> CSnapInItemImpl::FillData

This function is called to retrieve information about the item.

```
FillData(CLIPFORMAT cf, LPSTREAM pStream);
```

### Parameters

*cf*<br/>
[in] The format (text, rich text, or rich text with OLE items) of the Clipboard.

*pStream*<br/>
[in] A pointer to the stream containing the object data.

### Remarks

To properly implement this function, copy the correct information into the stream (*pStream*), depending on the Clipboard format indicated by *cf*.

## <a name="getresultviewtype"></a> CSnapInItemImpl::GetResultViewType

Call this function to retrieve the type of view for the result pane of the snap-in object.

```
GetResultViewType(
    LPOLESTR* ppViewType,
    long* pViewOptions);
```

### Parameters

*ppViewType*<br/>
[out] Pointer to the address of the returned view type.

*pViewOptions*<br/>
[out] Pointer to the MMC_VIEW_OPTIONS enumeration, which provides the console with options specified by the owning snap-in. This value can be one of the following:

- MMC_VIEW_OPTIONS_NOLISTVIEWS = 0x00000001   Tells the console to refrain from presenting standard list view choices in the **View** menu. Allows the snap-in to display its own custom views only in the result view pane. This is the only option flag defined at this time.

- MMC_VIEW_OPTIONS_NONE = 0   Allows the default view options.

## <a name="getscopepaneinfo"></a> CSnapInItemImpl::GetScopePaneInfo

Call this function to retrieve the `SCOPEDATAITEM` structure of the snap-in.

```
GetScopePaneInfo (SCOPEDATAITEM* pScopeDataItem);
```

### Parameters

*pScopeDataItem*<br/>
[out] A pointer to the `SCOPEDATAITEM` structure of the `CSnapInItemImpl` object.

## <a name="getresultpaneinfo"></a> CSnapInItemImpl::GetResultPaneInfo

Call this function to retrieve the `RESULTDATAITEM` structure of the snap-in.

```
GetResultPaneInfo (RESULTDATAITEM* pResultDataItem);
```

### Parameters

*pResultDataItem*<br/>
[out] A pointer to the `RESULTDATAITEM` structure of the `CSnapInItemImpl` object.

## <a name="m_bstrdisplayname"></a> CSnapInItemImpl::m_bstrDisplayName

Contains the string displayed for the node item.

```
CComBSTR m_bstrDisplayName;
```

## <a name="m_scopedataitem"></a> CSnapInItemImpl::m_scopeDataItem

The `SCOPEDATAITEM` structure of the snap-in data object.

```
SCOPEDATAITEM m_scopeDataItem;
```

## <a name="m_resultdataitem"></a> CSnapInItemImpl::m_resultDataItem

The [RESULTDATAITEM](/windows/win32/api/mmc/ns-mmc-resultdataitem) structure of the snap-in data object.

```
RESULTDATAITEM m_resultDataItem;
```

## <a name="notify"></a> CSnapInItemImpl::Notify

Called when the snap-in object is acted upon by the user.

```
STDMETHOD(Notify)(
    MMC_NOTIFY_TYPE event,
    long arg,
    long param,
    IComponentData* pComponentData,
    IComponent* pComponent,
    DATA_OBJECT_TYPES type) = 0;
```

### Parameters

*event*<br/>
[in] Identifies an action taken by a user. The following notifications are possible:

- MMCN_ACTIVATE Sent when a window is being activated and deactivated.

- MMCN_ADD_IMAGES Sent to add images to the result pane.

- MMCN_BTN_CLICK Sent when the user clicks one of the toolbar buttons.

- MMCN_CLICK Sent when a user clicks a mouse button on a list view item.

- MMCN_DBLCLICK Sent when a user double clicks a mouse button on a list view item.

- MMCN_DELETE Sent to inform the snap-in that the object should be deleted.

- MMCN_EXPAND Sent when a folder needs to be expanded or contracted.

- MMCN_MINIMIZED Sent when a window is being minimized or maximized.

- MMCN_PROPERTY_CHANGE Sent to notify a snap-in object that the snap-in object's view is about to change.

- MMCN_REMOVE_CHILDREN Sent when the snap-in must delete the entire subtree it has added below the specified node.

- MMCN_RENAME Sent the first time to query for a rename and the second time to do the rename.

- MMCN_SELECT Sent when an item in the scope or result view pane is selected.

- MMCN_SHOW Sent when a scope item is selected or deselected for the first time.

- MMCN_VIEW_CHANGE Sent when the snap-in can update all views when a change occurs.

*arg*<br/>
[in] Depends on the notification type.

*param*<br/>
[in] Depends on the notification type.

*pComponentData*<br/>
[out] A pointer to the object implementing `IComponentData`. This parameter is NULL if the notification is not being forwarded from `IComponentData::Notify`.

*pComponent*<br/>
[out] A pointer to the object that implements `IComponent`. This parameter is NULL if the notification is not being forwarded from `IComponent::Notify`.

*type*<br/>
[in] Specifies the type of object. It can have one of the following values:

- CCT_SCOPE Data object for scope pane context.

- CCT_RESULT Data object for result pane context.

- CCT_SNAPIN_MANAGER Data object for snap-in manager context.

- CCT_UNINITIALIZED Data object has an invalid type.

## <a name="querypagesfor"></a> CSnapInItemImpl::QueryPagesFor

Called to see if the snap-in node supports property pages.

```
QueryPagesFor(DATA_OBJECT_TYPES type);
```

## <a name="setmenuinsertionflags"></a> CSnapInItemImpl::SetMenuInsertionFlags

Call this function to modify the menu insertion flags, specified by *pInsertionAllowed*, for the snap-in object.

```cpp
void SetMenuInsertionFlags(
    bool bBeforeInsertion,
    long* pInsertionAllowed);
```

### Parameters

*bBeforeInsertion*<br/>
[in] Nonzero if the function should be called before items are added to the context menu; otherwise 0.

*pInsertionAllowed*<br/>
[in, out] Identifies Microsoft Management Console (MMC)-defined, menu-item insertion points that can be used. This can be a combination of the following flags:

- CCM_INSERTIONALLOWED_TOP Items can be inserted at the top of a context menu.

- CCM_INSERTIONALLOWED_NEW Items can be inserted in the Create New submenu.

- CCM_INSERTIONALLOWED_TASK Items can be inserted in the Task submenu.

- CCM_INSERTIONALLOWED_VIEW Items can be inserted in the toolbar view menu or in the View submenu of the result pane context menu.

### Remarks

If you are developing a primary snap-in, you can reset any of the insertion flags as a way of restricting the kind of menu items that a third-party extension can add. For example, the primary snap-in can clear the CCM_INSERTIONALLOWED_NEW flag to prevent extensions from adding their own Create New menu items.

You should not attempt to set bits in *pInsertionAllowed* that were originally cleared. Future versions of MMC may use bits not currently defined so you should not change bits that are currently not defined.

## <a name="settoolbarbuttoninfo"></a> CSnapInItemImpl::SetToolbarButtonInfo

Call this function to modify any toolbar button styles, of the snap-in object, before the toolbar is created.

```cpp
void SetToolbarButtonInfo(
    UINT id,
    BYTE* fsState,
    BYTE* fsType);
```

### Parameters

*id*<br/>
[in] The ID of the toolbar button to be set.

*fsState*<br/>
[in] The state flags of the button. Can be one or more of the following:

- TBSTATE_CHECKED The button has the TBSTYLE_CHECKED style and is being pressed.

- TBSTATE_ENABLED The button accepts user input. A button that does not have this state does not accept user input and is grayed.

- TBSTATE_HIDDEN The button is not visible and cannot receive user input.

- TBSTATE_INDETERMINATE The button is grayed.

- TBSTATE_PRESSED The button is being pressed.

- TBSTATE_WRAP A line break follows the button. The button must also have the TBSTATE_ENABLED.

*fsType*<br/>
[in] The state flags of the button. Can be one or more of the following:

- TBSTYLE_BUTTON Creates a standard push button.

- TBSTYLE_CHECK Creates a button that toggles between the pressed and not-pressed states each time the user clicks it. The button has a different background color when it is in the pressed state.

- TBSTYLE_CHECKGROUP Creates a check button that stays pressed until another button in the group is pressed.

- TBSTYLE_GROUP Creates a button that stays pressed until another button in the group is pressed.

- TBSTYLE_SEP Creates a separator, providing a small gap between button groups. A button that has this style does not receive user input.

## <a name="updatemenustate"></a> CSnapInItemImpl::UpdateMenuState

Call this function to modify a menu item before it is inserted into the context menu of the snap-in object.

```cpp
void UpdateMenuState(
    UINT id,
    LPTSTR pBuf,
    UINT* flags);
```

### Parameters

*id*<br/>
[in] The ID of the menu item to be set.

*pBuf*<br/>
[in] A pointer to the string for the menu item to be updated.

*flags*<br/>
[in] Specifies the new state flags. This can be a combination of the following flags:

- MF_POPUP Specifies that this is a submenu within the context menu. Menu items, insertion points, and further submenus may be added to this submenu using its `lCommandID` as their `IInsertionPointID`.

- MF_BITMAP and MF_OWNERDRAW These flags are not permitted and will result in a return value of E_INVALIDARG.

- MF_SEPARATOR Draws a horizontal dividing line. Only `IContextMenuProvider` is allowed to add menu items with MF_SEPARATOR set.

- MF_CHECKED Places a check mark next to the menu item.

- MF_DISABLED Disables the menu item so it cannot be selected, but the flag does not gray it.

- MF_ENABLED Enables the menu item so it can be selected, restoring it from its grayed state.

- MF_GRAYED Disables the menu item, graying it so it cannot be selected.

- MF_MENUBARBREAK Functions the same as the MF_MENUBREAK flag for a menu bar. For a drop-down menu, submenu, or shortcut menu, the new column is separated from the old column by a vertical line.

- MF_MENUBREAK Places the item on a new line (for a menu bar) or in a new column (for a drop-down menu, submenu, or shortcut menu) without separating columns.

- MF_UNCHECKED Does not place a check mark next to the item (default).

The following groups of flags cannot be used together:

- MF_DISABLED, MF_ENABLED, and MF_GRAYED.

- MF_MENUBARBREAK and MF_MENUBREAK.

- MF_CHECKED and MF_UNCHECKED.

## <a name="updatetoolbarbutton"></a> CSnapInItemImpl::UpdateToolbarButton

Call this function to modify a toolbar button, of the snap-in object, before it is displayed.

```
BOOL UpdateToolbarButton(UINT id, BYTE fsState);
```

### Parameters

*id*<br/>
Specifies the button ID of the toolbar button to be updated.

*fsState*<br/>
Specifies a toolbar button state. If this state is to be set, return TRUE. This can be a combination of the following flags:

- ENABLED The button accepts user input. A button that does not have this state does not accept user input and is grayed.

- CHECKED The button has the CHECKED style and is being pressed.

- HIDDEN The button is not visible and cannot receive user input.

- INDETERMINATE The button is grayed.

- BUTTONPRESSED The button is being pressed.

## See also

[Class Overview](../../atl/atl-class-overview.md)
