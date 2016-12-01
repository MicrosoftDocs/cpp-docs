---
title: "CSnapInItemImpl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CSnapInItemImpl"
  - "ATL.CSnapInItemImpl"
  - "ATL::CSnapInItemImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "snap-ins, data items"
  - "snap-ins, ATL support for"
  - "CSnapInItemImpl class"
  - "snap-ins"
ms.assetid: 52caefbd-9eae-49b0-add2-d55524271aa7
caps.latest.revision: 20
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
# CSnapInItemImpl Class
This class provides methods for implementing a snap-in node object.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the Windows Runtime.  
  
## Syntax  
  
```
template <class T,  BOOL bIsExtension = FALSE>  class ATL_NO_VTABLE CSnapInItemImpl :  public CSnapInItem
```  
  
#### Parameters  
 `T`  
 Your class, derived from `CSnapInItemImpl`.  
  
 *bIsExtension*  
 **TRUE** if the object is a snap-in extension; otherwise **FALSE**.  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CSnapInItemImpl::CSnapInItemImpl](#csnapinitemimpl__csnapinitemimpl)|Constructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CSnapInItemImpl::AddMenuItems](#csnapinitemimpl__addmenuitems)|Adds menu items to a context menu.|  
|[CSnapInItemImpl::Command](#csnapinitemimpl__command)|Called by the console when a custom menu item is selected.|  
|[CSnapInItemImpl::CreatePropertyPages](#csnapinitemimpl__createpropertypages)|Adds pages to the property sheet of the snap-in.|  
|[CSnapInItemImpl::FillData](#csnapinitemimpl__filldata)|Copies information on the snap-in object into a specified stream.|  
|[CSnapInItemImpl::GetResultPaneInfo](#csnapinitemimpl__getresultpaneinfo)|Retrieves the **RESULTDATAITEM** structure of the snap-in.|  
|[CSnapInItemImpl::GetResultViewType](#csnapinitemimpl__getresultviewtype)|Determines the type of view used by the result pane.|  
|[CSnapInItemImpl::GetScopePaneInfo](#csnapinitemimpl__getscopepaneinfo)|Retrieves the **SCOPEDATAITEM** structure of the snap-in.|  
|[CSnapInItemImpl::Notify](#csnapinitemimpl__notify)|Called by the console to notify the snap-in of actions taken by the user.|  
|[CSnapInItemImpl::QueryPagesFor](#csnapinitemimpl__querypagesfor)|Called to see if the snap-in node supports property pages.|  
|[CSnapInItemImpl::SetMenuInsertionFlags](#csnapinitemimpl__setmenuinsertionflags)|Modifies the menu insertion flags for a snap-in object.|  
|[CSnapInItemImpl::SetToolbarButtonInfo](#csnapinitemimpl__settoolbarbuttoninfo)|Sets the information of the specified toolbar button.|  
|[CSnapInItemImpl::UpdateMenuState](#csnapinitemimpl__updatemenustate)|Updates the state of a context menu item.|  
|[CSnapInItemImpl::UpdateToolbarButton](#csnapinitemimpl__updatetoolbarbutton)|Updates the state of the specified toolbar button.|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CSnapInItemImpl::m_bstrDisplayName](#csnapinitemimpl__m_bstrdisplayname)|The name of the snap-in object.|  
|[CSnapInItemImpl::m_resultDataItem](#csnapinitemimpl__m_resultdataitem)|The Windows **RESULTDATAITEM** structure used by the `CSnapInItemImpl` object.|  
|[CSnapInItemImpl::m_scopeDataItem](#csnapinitemimpl__m_scopedataitem)|The Windows **SCOPEDATAITEM** structure used by the `CSnapInItemImpl` object.|  
  
## Remarks  
 `CSnapInItemImpl` provides a basic implementation for a snap-in node object, such as adding menu items and toolbars, and forwarding commands for the snap-in node to the appropriate handler function. These features are implemented using several different interfaces and map types. The default implementation handles notifications sent to the node object by determining the correct instance of the derived class and then forwarding the message to the correct instance.  
  
## Inheritance Hierarchy  
 `CSnapInItem`  
  
 `CSnapInItemImpl`  
  
## Requirements  
 **Header:** atlsnap.h  
  
##  <a name="csnapinitemimpl__addmenuitems"></a>  CSnapInItemImpl::AddMenuItems  
 This method implements the Win32 function [IExtendContextMenu::AddMenuItems](http://msdn.microsoft.com/library/aa814841).  
  
```
AddMenuItems(LPCONTEXTMENUCALLBACK piCallback,
    long* pInsertionAllowed,
    DATA_OBJECT_TYPES type);
```  
  
### Parameters  
 *piCallback*  
 [in] Pointer to the **IContextMenuCallback** that can add items to the context menu.  
  
 `pInsertionAllowed`  
 [in, out] Identifies Microsoft Management Console (MMC)-defined, menu-item insertion points that can be used. This can be a combination of the following flags:  
  
- **CCM_INSERTIONALLOWED_TOP** Items can be inserted at the top of a context menu.  
  
- **CCM_INSERTIONALLOWED_NEW** Items can be inserted in the Create New submenu.  
  
- **CCM_INSERTIONALLOWED_TASK** Items can be inserted in the Task submenu.  
  
- **CCM_INSERTIONALLOWED_VIEW** Items can be inserted in the toolbar view menu or in the View submenu of the result pane context menu.  
  
 `type`  
 [in] Specifies the type of object. It can have one of the following values:  
  
- **CCT_SCOPE** Data object for scope pane context.  
  
- **CCT_RESULT** Data object for result pane context.  
  
- **CCT_SNAPIN_MANAGER** Data object for snap-in manager context.  
  
- **CCT_UNINITIALIZED** Data object has an invalid type.  
  
##  <a name="csnapinitemimpl__command"></a>  CSnapInItemImpl::Command  
 This method implements the Win32 function [IExtendContextMenu::Command](http://msdn.microsoft.com/library/aa814842).  
  
```
Command(long lCommandID,  DATA_OBJECT_TYPES type);
```  
  
### Parameters  
 *lCommandID*  
 [in] Specifies the command identifier of the menu item.  
  
 `type`  
 [in] Specifies the type of object. It can have one of the following values:  
  
- **CCT_SCOPE** Data object for scope pane context.  
  
- **CCT_RESULT** Data object for result pane context.  
  
- **CCT_SNAPIN_MANAGER** Data object for snap-in manager context.  
  
- **CCT_UNINITIALIZED** Data object has an invalid type.  
  
##  <a name="csnapinitemimpl__createpropertypages"></a>  CSnapInItemImpl::CreatePropertyPages  
 This method implements the Win32 function [IExtendPropertySheet::CreatePropertyPages](http://msdn.microsoft.com/library/aa814846).  
  
```
CreatePropertyPages(LPPROPERTYSHEETCALLBACK lpProvider,
    long handle,
    IUnknown* pUnk,
    DATA_OBJECT_TYPES type);
```  
  
### Parameters  
 *lpProvider*  
 [in] Pointer to the **IPropertySheetCallback** interface.  
  
 *handle*  
 [in] Specifies the handle used to route the **MMCN_PROPERTY_CHANGE** notification message to the appropriate data class.  
  
 *pUnk*  
 [in] Pointer to the **IExtendPropertySheet** interface on the object that contains context information about the node.  
  
 `type`  
 [in] Specifies the type of object. It can have one of the following values:  
  
- **CCT_SCOPE** Data object for scope pane context.  
  
- **CCT_RESULT** Data object for result pane context.  
  
- **CCT_SNAPIN_MANAGER** Data object for snap-in manager context.  
  
- **CCT_UNINITIALIZED** Data object has an invalid type.  
  
##  <a name="csnapinitemimpl__csnapinitemimpl"></a>  CSnapInItemImpl::CSnapInItemImpl  
 Constructs a `CSnapInItemImpl` object.  
  
```
CSnapInItemImpl();
```  
  
##  <a name="csnapinitemimpl__filldata"></a>  CSnapInItemImpl::FillData  
 This function is called to retrieve information about the item.  
  
```
FillData(CLIPFORMAT cf,  LPSTREAM pStream);
```  
  
### Parameters  
 `cf`  
 [in] The format (text, rich text, or rich text with OLE items) of the Clipboard.  
  
 `pStream`  
 [in] A pointer to the stream containing the object data.  
  
### Remarks  
 To properly implement this function, copy the correct information into the stream ( `pStream`), depending on the Clipboard format indicated by `cf`.  
  
##  <a name="csnapinitemimpl__getresultviewtype"></a>  CSnapInItemImpl::GetResultViewType  
 Call this function to retrieve the type of view for the result pane of the snap-in object.  
  
```
GetResultViewType(
    LPOLESTR* ppViewType,
    long* pViewOptions);
```  
  
### Parameters  
 *ppViewType*  
 [out] Pointer to the address of the returned view type.  
  
 *pViewOptions*  
 [out] Pointer to the **MMC_VIEW_OPTIONS** enumeration, which provides the console with options specified by the owning snap-in. This value can be one of the following:  
  
- **MMC_VIEW_OPTIONS_NOLISTVIEWS** = 0x00000001   Tells the console to refrain from presenting standard list view choices in the **View** menu. Allows the snap-in to display its own custom views only in the result view pane. This is the only option flag defined at this time.  
  
- **MMC_VIEW_OPTIONS_NONE** = 0   Allows the default view options.  
  
##  <a name="csnapinitemimpl__getscopepaneinfo"></a>  CSnapInItemImpl::GetScopePaneInfo  
 Call this function to retrieve the **SCOPEDATAITEM** structure of the snap-in.  
  
```
GetScopePaneInfo (SCOPEDATAITEM* pScopeDataItem);
```  
  
### Parameters  
 *pScopeDataItem*  
 [out] A pointer to the **SCOPEDATAITEM** structure of the `CSnapInItemImpl` object.  
  
##  <a name="csnapinitemimpl__getresultpaneinfo"></a>  CSnapInItemImpl::GetResultPaneInfo  
 Call this function to retrieve the **RESULTDATAITEM** structure of the snap-in.  
  
```
GetResultPaneInfo (RESULTDATAITEM* pResultDataItem);
```  
  
### Parameters  
 *pResultDataItem*  
 [out] A pointer to the **RESULTDATAITEM** structure of the `CSnapInItemImpl` object.  
  
##  <a name="csnapinitemimpl__m_bstrdisplayname"></a>  CSnapInItemImpl::m_bstrDisplayName  
 Contains the string displayed for the node item.  
  
```
CComBSTR m_bstrDisplayName;
```  
  
##  <a name="csnapinitemimpl__m_scopedataitem"></a>  CSnapInItemImpl::m_scopeDataItem  
 The `SCOPEDATAITEM` structure of the snap-in data object.  
  
```
SCOPEDATAITEM m_scopeDataItem;
```  
  
##  <a name="csnapinitemimpl__m_resultdataitem"></a>  CSnapInItemImpl::m_resultDataItem  
 The [RESULTDATAITEM](http://msdn.microsoft.com/library/aa815165) structure of the snap-in data object.  
  
```
RESULTDATAITEM m_resultDataItem;
```  
  
##  <a name="csnapinitemimpl__notify"></a>  CSnapInItemImpl::Notify  
 Called when the snap-in object is acted upon by the user.  
  
```
STDMETHOD(Notify)(MMC_NOTIFY_TYPE event,
    long arg,
    long param,
    IComponentData* pComponentData,
    IComponent* pComponent,
    DATA_OBJECT_TYPES type) = 0;
```  
  
### Parameters  
 `event`  
 [in] Identifies an action taken by a user. The following notifications are possible:  
  
- **MMCN_ACTIVATE** Sent when a window is being activated and deactivated.  
  
- **MMCN_ADD_IMAGES** Sent to add images to the result pane.  
  
- **MMCN_BTN_CLICK** Sent when the user clicks one of the toolbar buttons.  
  
- **MMCN_CLICK** Sent when a user clicks a mouse button on a list view item.  
  
- **MMCN_DBLCLICK** Sent when a user double clicks a mouse button on a list view item.  
  
- **MMCN_DELETE** Sent to inform the snap-in that the object should be deleted.  
  
- **MMCN_EXPAND** Sent when a folder needs to be expanded or contracted.  
  
- **MMCN_MINIMIZED** Sent when a window is being minimized or maximized.  
  
- **MMCN_PROPERTY_CHANGE** Sent to notify a snap-in object that the snap-in object's view is about to change.  
  
- **MMCN_REMOVE_CHILDREN** Sent when the snap-in must delete the entire subtree it has added below the specified node.  
  
- **MMCN_RENAME** Sent the first time to query for a rename and the second time to do the rename.  
  
- **MMCN_SELECT** Sent when an item in the scope or result view pane is selected.  
  
- **MMCN_SHOW** Sent when a scope item is selected or deselected for the first time.  
  
- **MMCN_VIEW_CHANGE** Sent when the snap-in can update all views when a change occurs.  
  
 `arg`  
 [in] Depends on the notification type.  
  
 `param`  
 [in] Depends on the notification type.  
  
 *pComponentData*  
 [out] A pointer to the object implementing **IComponentData**. This parameter is **NULL** if the notification is not being forwarded from **IComponentData::Notify**.  
  
 *pComponent*  
 [out] A pointer to the object that implements **IComponent**. This parameter is **NULL** if the notification is not being forwarded from **IComponent::Notify**.  
  
 `type`  
 [in] Specifies the type of object. It can have one of the following values:  
  
- **CCT_SCOPE** Data object for scope pane context.  
  
- **CCT_RESULT** Data object for result pane context.  
  
- **CCT_SNAPIN_MANAGER** Data object for snap-in manager context.  
  
- **CCT_UNINITIALIZED** Data object has an invalid type.  
  
##  <a name="csnapinitemimpl__querypagesfor"></a>  CSnapInItemImpl::QueryPagesFor  
 Called to see if the snap-in node supports property pages.  
  
```
QueryPagesFor(DATA_OBJECT_TYPES type);
```  
  
##  <a name="csnapinitemimpl__setmenuinsertionflags"></a>  CSnapInItemImpl::SetMenuInsertionFlags  
 Call this function to modify the menu insertion flags, specified by `pInsertionAllowed`, for the snap-in object.  
  
```
void SetMenuInsertionFlags(bool bBeforeInsertion,
    long* pInsertionAllowed);
```  
  
### Parameters  
 *bBeforeInsertion*  
 [in] Nonzero if the function should be called before items are added to the context menu; otherwise 0.  
  
 `pInsertionAllowed`  
 [in, out] Identifies Microsoft Management Console (MMC)-defined, menu-item insertion points that can be used. This can be a combination of the following flags:  
  
- **CCM_INSERTIONALLOWED_TOP** Items can be inserted at the top of a context menu.  
  
- **CCM_INSERTIONALLOWED_NEW** Items can be inserted in the Create New submenu.  
  
- **CCM_INSERTIONALLOWED_TASK** Items can be inserted in the Task submenu.  
  
- **CCM_INSERTIONALLOWED_VIEW** Items can be inserted in the toolbar view menu or in the View submenu of the result pane context menu.  
  
### Remarks  
 If you are developing a primary snap-in, you can reset any of the insertion flags as a way of restricting the kind of menu items that a third-party extension can add. For example, the primary snap-in can clear the **CCM_INSERTIONALLOWED_NEW** flag to prevent extensions from adding their own Create New menu items.  
  
 You should not attempt to set bits in `pInsertionAllowed` that were originally cleared. Future versions of MMC may use bits not currently defined so you should not change bits that are currently not defined.  
  
##  <a name="csnapinitemimpl__settoolbarbuttoninfo"></a>  CSnapInItemImpl::SetToolbarButtonInfo  
 Call this function to modify any toolbar button styles, of the snap-in object, before the toolbar is created.  
  
```
void SetToolbarButtonInfo(UINT id,
    BYTE* fsState,
    BYTE* fsType);
```  
  
### Parameters  
 `id`  
 [in] The ID of the toolbar button to be set.  
  
 `fsState`  
 [in] The state flags of the button. Can be one or more of the following:  
  
- `TBSTATE_CHECKED` The button has the **TBSTYLE_CHECKED** style and is being pressed.  
  
- `TBSTATE_ENABLED` The button accepts user input. A button that does not have this state does not accept user input and is grayed.  
  
- `TBSTATE_HIDDEN` The button is not visible and cannot receive user input.  
  
- `TBSTATE_INDETERMINATE` The button is grayed.  
  
- `TBSTATE_PRESSED` The button is being pressed.  
  
- `TBSTATE_WRAP` A line break follows the button. The button must also have the `TBSTATE_ENABLED`.  
  
 *fsType*  
 [in] The state flags of the button. Can be one or more of the following:  
  
- `TBSTYLE_BUTTON` Creates a standard push button.  
  
- `TBSTYLE_CHECK` Creates a button that toggles between the pressed and not-pressed states each time the user clicks it. The button has a different background color when it is in the pressed state.  
  
- `TBSTYLE_CHECKGROUP` Creates a check button that stays pressed until another button in the group is pressed.  
  
- `TBSTYLE_GROUP` Creates a button that stays pressed until another button in the group is pressed.  
  
- `TBSTYLE_SEP` Creates a separator, providing a small gap between button groups. A button that has this style does not receive user input.  
  
##  <a name="csnapinitemimpl__updatemenustate"></a>  CSnapInItemImpl::UpdateMenuState  
 Call this function to modify a menu item before it is inserted into the context menu of the snap-in object.  
  
```
void UpdateMenuState(UINT id,
    LPTSTR pBuf,
    UINT* flags);
```  
  
### Parameters  
 `id`  
 [in] The ID of the menu item to be set.  
  
 `pBuf`  
 [in] A pointer to the string for the menu item to be updated.  
  
 `flags`  
 [in] Specifies the new state flags. This can be a combination of the following flags:  
  
- **MF_POPUP** Specifies that this is a submenu within the context menu. Menu items, insertion points, and further submenus may be added to this submenu using its **lCommandID** as their **IInsertionPointID**.  
  
- **MF_BITMAP** and `MF_OWNERDRAW` These flags are not permitted and will result in a return value of `E_INVALIDARG`.  
  
- **MF_SEPARATOR** Draws a horizontal dividing line. Only **IContextMenuProvider** is allowed to add menu items with **MF_SEPARATOR** set.  
  
- **MF_CHECKED** Places a check mark next to the menu item.  
  
- **MF_DISABLED** Disables the menu item so it cannot be selected, but the flag does not gray it.  
  
- `MF_ENABLED` Enables the menu item so it can be selected, restoring it from its grayed state.  
  
- **MF_GRAYED** Disables the menu item, graying it so it cannot be selected.  
  
- **MF_MENUBARBREAK** Functions the same as the **MF_MENUBREAK** flag for a menu bar. For a drop-down menu, submenu, or shortcut menu, the new column is separated from the old column by a vertical line.  
  
- **MF_MENUBREAK** Places the item on a new line (for a menu bar) or in a new column (for a drop-down menu, submenu, or shortcut menu) without separating columns.  
  
- **MF_UNCHECKED** Does not place a check mark next to the item (default).  
  
 The following groups of flags cannot be used together:  
  
- **MF_DISABLED**, `MF_ENABLED`, and **MF_GRAYED**.  
  
- **MF_MENUBARBREAK** and **MF_MENUBREAK**.  
  
- **MF_CHECKED** and **MF_UNCHECKED**.  
  
##  <a name="csnapinitemimpl__updatetoolbarbutton"></a>  CSnapInItemImpl::UpdateToolbarButton  
 Call this function to modify a toolbar button, of the snap-in object, before it is displayed.  
  
```
BOOL UpdateToolbarButton(UINT id,  BYTE fsState);
```  
  
### Parameters  
 `id`  
 Specifies the button ID of the toolbar button to be updated.  
  
 `fsState`  
 Specifies a toolbar button state. If this state is to be set, return **TRUE**. This can be a combination of the following flags:  
  
- **ENABLED** The button accepts user input. A button that does not have this state does not accept user input and is grayed.  
  
- **CHECKED** The button has the **CHECKED** style and is being pressed.  
  
- **HIDDEN** The button is not visible and cannot receive user input.  
  
- **INDETERMINATE** The button is grayed.  
  
- **BUTTONPRESSED** The button is being pressed.  
  
## See Also  
 [Class Overview](../../atl/atl-class-overview.md)
