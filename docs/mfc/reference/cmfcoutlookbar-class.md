---
description: "Learn more about: CMFCOutlookBar Class"
title: "CMFCOutlookBar Class"
ms.date: "06/25/2018"
f1_keywords: ["CMFCOutlookBar", "AFXOUTLOOKBAR/CMFCOutlookBar", "AFXOUTLOOKBAR/CMFCOutlookBar::AllowDestroyEmptyTabbedPane", "AFXOUTLOOKBAR/CMFCOutlookBar::CanAcceptPane", "AFXOUTLOOKBAR/CMFCOutlookBar::CanSetCaptionTextToTabName", "AFXOUTLOOKBAR/CMFCOutlookBar::Create", "AFXOUTLOOKBAR/CMFCOutlookBar::CreateCustomPage", "AFXOUTLOOKBAR/CMFCOutlookBar::DoesAllowDynInsertBefore", "AFXOUTLOOKBAR/CMFCOutlookBar::FloatTab", "AFXOUTLOOKBAR/CMFCOutlookBar::GetButtonsFont", "AFXOUTLOOKBAR/CMFCOutlookBar::GetTabArea", "AFXOUTLOOKBAR/CMFCOutlookBar::IsMode2003", "AFXOUTLOOKBAR/CMFCOutlookBar::OnAfterAnimation", "AFXOUTLOOKBAR/CMFCOutlookBar::OnBeforeAnimation", "AFXOUTLOOKBAR/CMFCOutlookBar::OnScroll", "AFXOUTLOOKBAR/CMFCOutlookBar::RemoveCustomPage", "AFXOUTLOOKBAR/CMFCOutlookBar::SetButtonsFont", "AFXOUTLOOKBAR/CMFCOutlookBar::SetMode2003"]
helpviewer_keywords: ["CMFCOutlookBar [MFC], AllowDestroyEmptyTabbedPane", "CMFCOutlookBar [MFC], CanAcceptPane", "CMFCOutlookBar [MFC], CanSetCaptionTextToTabName", "CMFCOutlookBar [MFC], Create", "CMFCOutlookBar [MFC], CreateCustomPage", "CMFCOutlookBar [MFC], DoesAllowDynInsertBefore", "CMFCOutlookBar [MFC], FloatTab", "CMFCOutlookBar [MFC], GetButtonsFont", "CMFCOutlookBar [MFC], GetTabArea", "CMFCOutlookBar [MFC], IsMode2003", "CMFCOutlookBar [MFC], OnAfterAnimation", "CMFCOutlookBar [MFC], OnBeforeAnimation", "CMFCOutlookBar [MFC], OnScroll", "CMFCOutlookBar [MFC], RemoveCustomPage", "CMFCOutlookBar [MFC], SetButtonsFont", "CMFCOutlookBar [MFC], SetMode2003"]
ms.assetid: 2b335f71-ce99-4efd-b103-e65ba43ffc36
---
# CMFCOutlookBar Class

A tabbed pane with the visual appearance of the **Navigation Pane** in Microsoft Outlook 2000 or Outlook 2003. The `CMFCOutlookBar` object contains a [CMFCOutlookBarTabCtrl Class](../../mfc/reference/cmfcoutlookbartabctrl-class.md) object and a series of tabs. The tabs can be either [CMFCOutlookBarPane Class](../../mfc/reference/cmfcoutlookbarpane-class.md) objects or `CWnd`-derived objects. To the user, the Outlook bar appears as a series of buttons and a display area. When the user clicks a button, the corresponding control or button pane is displayed.

## Syntax

```cpp
class CMFCOutlookBar : public CBaseTabbedPane
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|`CMFCOutlookBar::CMFCOutlookBar`|Default constructor.|
|`CMFCOutlookBar::~CMFCOutlookBar`|Destructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CMFCOutlookBar::AllowDestroyEmptyTabbedPane](#allowdestroyemptytabbedpane)|Specifies whether an empty tabbed pane can be destroyed. (Overrides [CBaseTabbedPane::AllowDestroyEmptyTabbedPane](../../mfc/reference/cbasetabbedpane-class.md#allowdestroyemptytabbedpane).)|
|[CMFCOutlookBar::CanAcceptPane](#canacceptpane)|Determines whether another pane can be docked to the Outlook bar pane. (Overrides CDockablePane::CanAcceptPane.)|
|[CMFCOutlookBar::CanSetCaptionTextToTabName](#cansetcaptiontexttotabname)|Determines whether the caption for the tabbed pane displays the same text as the active tab. (Overrides [CBaseTabbedPane::CanSetCaptionTextToTabName](../../mfc/reference/cbasetabbedpane-class.md#cansetcaptiontexttotabname).)|
|[CMFCOutlookBar::Create](#create)|Creates the Outlook bar control.|
|[CMFCOutlookBar::CreateCustomPage](#createcustompage)|Creates a custom Outlook bar tab.|
|`CMFCOutlookBar::CreateObject`|Used by the framework to create a dynamic instance of this class type.|
|[CMFCOutlookBar::DoesAllowDynInsertBefore](#doesallowdyninsertbefore)|Determines whether a user can dock a control bar at the outer edge of the Outlook bar.|
|[CMFCOutlookBar::FloatTab](#floattab)|Floats a pane, but only if the pane currently resides in a detachable tab. (Overrides [CBaseTabbedPane::FloatTab](../../mfc/reference/cbasetabbedpane-class.md#floattab).)|
|[CMFCOutlookBar::GetButtonsFont](#getbuttonsfont)|Returns the font of the text on the buttons of the Outlook bar.|
|[CMFCOutlookBar::GetTabArea](#gettabarea)|Returns the size and position of the tab areas on the Outlook bar. (Overrides [CBaseTabbedPane::GetTabArea](../../mfc/reference/cbasetabbedpane-class.md#gettabarea).)|
|`CMFCOutlookBar::GetThisClass`|Used by the framework to obtain a pointer to the [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) object that is associated with this class type.|
|[CMFCOutlookBar::IsMode2003](#ismode2003)|Determines whether the behavior of the Outlook bar mimics that of Microsoft Office Outlook 2003 (see Remarks).|
|[CMFCOutlookBar::OnAfterAnimation](#onafteranimation)|Called by [CMFCOutlookBarTabCtrl::SetActiveTab](../../mfc/reference/cmfcoutlookbartabctrl-class.md#setactivetab) after the active tab has been set using animation.|
|[CMFCOutlookBar::OnBeforeAnimation](#onbeforeanimation)|Called by [CMFCOutlookBarTabCtrl::SetActiveTab](../../mfc/reference/cmfcoutlookbartabctrl-class.md#setactivetab) before a tab page is set as the active tab using animation.|
|[CMFCOutlookBar::OnScroll](#onscroll)|Called by the framework if the Outlook bar is scrolling up or down.|
|[CMFCOutlookBar::RemoveCustomPage](#removecustompage)|Removes a custom Outlook bar tab.|
|[CMFCOutlookBar::SetButtonsFont](#setbuttonsfont)|Sets the font of the text on the buttons of the Outlook bar.|
|[CMFCOutlookBar::SetMode2003](#setmode2003)|Specifies whether the behavior of the Outlook bar mimics that of Outlook 2003 (see Remarks).|

## Remarks

For an example of an Outlook bar, see the [OutlookDemo Sample: MFC OutlookDemo Application](../../overview/visual-cpp-samples.md).

## Implementing the Outlook Bar

To use the `CMFCOutlookBar` control in your application, follow these steps:

1. Embed a `CMFCOutlookBar` object into the main frame window class.

    ```cpp
    class CMainFrame : public CMDIFrameWnd
    {
        // ...
        CMFCOutlookBar m_wndOutlookBar;
        CMFCOutlookBarPane m_wndOutlookPane;
        // ...
    };
    ```

1. When processing the WM_CREATE message in the main frame, call the [CMFCOutlookBar::Create](#create) method to create the Outlook bar tab control.

    ```cpp
    m_wndOutlookBar.Create (_T("Shortcuts"),
        this,
        CRect (0, 0, 100, 100),
        ID_VIEW_OUTLOOKBAR,
        WS_CHILD | WS_VISIBLE | CBRS_LEFT);
    ```

1. Obtain a pointer to the underlying `CMFCOutlookBarTabCtrl` by using [CBaseTabbedPane::GetUnderlyingWindow](../../mfc/reference/cbasetabbedpane-class.md#getunderlyingwindow).

    ```cpp
    CMFCOutlookBarTabCtrl* pOutlookBar = (CMFCOutlookBarTabCtrl*) m_wndOutlookBar.GetUnderlyingWindow ();
    ```

1. Create a [CMFCOutlookBarPane Class](../../mfc/reference/cmfcoutlookbarpane-class.md) object for each tab that contains buttons.

    ```cpp
    m_wndOutlookPane.Create(&m_wndOutlookBar,
        AFX_DEFAULT_TOOLBAR_STYLE,
        ID_OUTLOOK_PANE_GENERAL,
        AFX_CBRS_FLOAT | AFX_CBRS_RESIZE);

    // make the Outlook pane detachable (enable docking)
    m_wndOutlookPane.EnableDocking(CBRS_ALIGN_ANY);

    // add buttons
    m_wndOutlookPane.AddButton(theApp.LoadIcon (IDR_MAINFRAME),
        "About",
        ID_APP_ABOUT);

    m_wndOutlookPane.AddButton (theApp.LoadIcon (IDR_CUSTOM_OPEN_ICON),
        "Open",
        ID_FILE_OPEN);
    ```

1. Call [CMFCOutlookBarTabCtrl::AddTab](../../mfc/reference/cmfcbasetabctrl-class.md#addtab) to add each new tab. Set the *bDetachable* parameter to FALSE to make a page non-detachable. Or, use [CMFCOutlookBarTabCtrl::AddControl](../../mfc/reference/cmfcoutlookbartabctrl-class.md#addcontrol) to add detachable pages.

    ```cpp
    pOutlookBar->AddTab (&m_wndOutlookPane, "General", (UINT) -1, TRUE);
    ```

1. To add a `CWnd`-derived control (for example, [CMFCShellTreeCtrl Class](../../mfc/reference/cmfcshelltreectrl-class.md)) as a tab, create the control and call [CMFCOutlookBarTabCtrl::AddTab](../../mfc/reference/cmfcbasetabctrl-class.md#addtab) to add it to the Outlook bar.

> [!NOTE]
> You should use unique control IDs for each [CMFCOutlookBarPane Class](../../mfc/reference/cmfcoutlookbarpane-class.md) object and for each `CWnd`-derived object.

To dynamically add or delete new pages at runtime, use [CMFCOutlookBar::CreateCustomPage](#createcustompage) and [CMFCOutlookBar::RemoveCustomPage](#removecustompage).

## Outlook 2003 Mode

In Outlook 2003 mode, the tab buttons are positioned at the bottom of the Outlook bar pane. When there is not sufficient room to display the buttons, they are displayed as icons in a toolbar-like area along the bottom of the pane.

Use [CMFCOutlookBar::SetMode2003](#setmode2003) to enable Outlook 2003 mode. Use [CMFCOutlookBarTabCtrl::SetToolbarImageList](../../mfc/reference/cmfcoutlookbartabctrl-class.md#settoolbarimagelist) to set the bitmap that contains the icons that are displayed on the bottom of the Outlook bar. The icons in the bitmap must be ordered by tab index.

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CBasePane](../../mfc/reference/cbasepane-class.md)

[CPane](../../mfc/reference/cpane-class.md)

[CDockablePane](../../mfc/reference/cdockablepane-class.md)

[CBaseTabbedPane](../../mfc/reference/cbasetabbedpane-class.md)

[CMFCOutlookBar](../../mfc/reference/cmfcoutlookbar-class.md)

## Requirements

**Header:** afxoutlookbar.h

## <a name="allowdestroyemptytabbedpane"></a> CMFCOutlookBar::AllowDestroyEmptyTabbedPane

Specifies whether an empty tabbed pane can be destroyed.

```cpp
virtual BOOL AllowDestroyEmptyTabbedPane() const;
```

### Return Value

TRUE if an empty tabbed pane can be destroyed; otherwise, FALSE. The default implementation always returns TRUE.

### Remarks

If an empty tabbed pane cannot be destroyed, the framework hides it instead.

## <a name="canacceptpane"></a> CMFCOutlookBar::CanAcceptPane

Determines whether another pane can be docked to the Outlook bar pane.

```cpp
virtual BOOL CanAcceptPane(const CBasePane* pBar) const;
```

### Parameters

*pBar*<br/>
[in] A pointer to another pane that is being docked to this pane.

### Return Value

TRUE if another pane can be docked to the Outlook bar pane; otherwise FALSE.

### Remarks

If the Outlook bar is in Outlook 2003 mode, docking is not supported, so the return value is FALSE.

If the *pBar* parameter is NULL, this method returns FALSE.

Otherwise, this method behaves as the base method [CBasePane::CanAcceptPane](../../mfc/reference/cbasepane-class.md#canacceptpane), except that even if docking is not enabled, an Outlook bar can still enable another Outlook bar to be docked over it.

## <a name="cansetcaptiontexttotabname"></a> CMFCOutlookBar::CanSetCaptionTextToTabName

Determines whether the caption for the tabbed pane displays the same text as the active tab.

```cpp
virtual BOOL CanSetCaptionTextToTabName() const;
```

### Return Value

TRUE if the Outlook bar window caption is automatically set to the text of the active tab; otherwise FALSE.

### Remarks

Use [CBaseTabbedPane::EnableSetCaptionTextToTabName](../../mfc/reference/cbasetabbedpane-class.md#enablesetcaptiontexttotabname) to enable or disable this functionality.

In Outlook 2003 mode, this setting is always enabled.

## <a name="create"></a> CMFCOutlookBar::Create

Creates the Outlook bar control.

```cpp
virtual BOOL Create(
    LPCTSTR lpszCaption,
    CWnd* pParentWnd,
    const RECT& rect,
    UINT nID,
    DWORD dwStyle,
    DWORD dwControlBarStyle=AFX_CBRS_RESIZE,
    CCreateContext* pContext=NULL);
```

### Parameters

*lpszCaption*<br/>
[in] Specifies the window caption.

*pParentWnd*<br/>
[in] Specifies a pointer to a parent window. It must not be NULL.

*rect*<br/>
[in] Specifies the outlook bar size and position in pixels.

*nID*<br/>
[in] Specifies the control ID. Must be distinct from other control IDs used in the application.

*dwStyle*<br/>
[in] Specifies the desired control bar style. For possible values, see [Window Styles](../../mfc/reference/styles-used-by-mfc.md#window-styles).

*dwControlBarStyle*<br/>
[in] Specifies the special library-defined styles.

*pContext*<br/>
[in] Create context.

### Return Value

Nonzero if the method is successful; otherwise 0.

### Remarks

You construct a `CMFCOutlookBar` object in two steps. First call the constructor, and then call `Create`, which creates the outlook bar control and attaches it to the `CMFCOutlookBar` object.

See [CBasePane::CreateEx](../../mfc/reference/cbasepane-class.md#createex) for the list of the available library-defined styles to be specified by *dwControlBarStyle*.

### Example

The following example demonstrates how to use the `Create` method of the `CMFCOutlookBar` class. This code snippet is part of the [Outlook Multi Views sample](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_OutlookMultiViews#1](../../mfc/reference/codesnippet/cpp/cmfcoutlookbar-class_1.h)]
[!code-cpp[NVC_MFC_OutlookMultiViews#2](../../mfc/reference/codesnippet/cpp/cmfcoutlookbar-class_2.cpp)]

## <a name="createcustompage"></a> CMFCOutlookBar::CreateCustomPage

Creates a custom Outlook bar tab.

```cpp
CMFCOutlookBarPane* CreateCustomPage(
    LPCTSTR lpszPageName,
    BOOL bActivatePage=TRUE,
    DWORD dwEnabledDocking=CBRS_ALIGN_ANY,
    BOOL bEnableTextLabels=TRUE);
```

### Parameters

*lpszPageName*<br/>
[in] The page label.

*bActivatePage*<br/>
[in] If TRUE, the page becomes active upon creation.

*dwEnabledDocking*<br/>
[in] A combination of CBRS_ALIGN_ flags that specifies the enabled docking sides when the page is detached.

*bEnableTextLabels*<br/>
[in] If TRUE, the text labels are enabled for the buttons that reside on the page.

### Return Value

A pointer to the newly created page, or NULL if the creation failed.

### Remarks

Use this method to enable the users to create custom Outlook bar pages. You can create up to 100 pages per application. The page control IDs start from 0xF000. The creation fails if the total number of custom Outlook bar pages exceeds 100.

Use [CMFCOutlookBar::RemoveCustomPage](#removecustompage) to delete custom pages.

## <a name="doesallowdyninsertbefore"></a> CMFCOutlookBar::DoesAllowDynInsertBefore

Specifies whether a user can dock a pane at the outer edge of the Outlook bar.

```
DECLARE_MESSAGE_MAP virtual BOOL DoesAllowDynInsertBefore() const;
```

### Return Value

The default implementation returns FALSE.

### Remarks

The framework calls the `DoesAllowDynInsertBefore` method when it looks for a location to dock a dynamic pane. If the function returns FALSE, the framework does not allow the docking of any dynamic pane at the outer edges of the pane.

Usually, you create an Outlook bar as a static non-floating control. You can override this function in a derived class and return TRUE to change this behavior.

> [!NOTE]
> Because dynamic panes check the status of docked static panes when docking, you should dock dynamic panes after static panes whenever possible.

## <a name="floattab"></a> CMFCOutlookBar::FloatTab

Floats a pane.

```cpp
virtual BOOL FloatTab(
    CWnd* pBar,
    int nTabID,
    AFX_DOCK_METHOD dockMethod,
    BOOL bHide);
```

### Parameters

*pBar*<br/>
[in] A pointer to the pane to float.

*nTabID*<br/>
[in] The zero-based index of the tab to float.

*dockMethod*<br/>
[in] Specifies the method to use to make the pane float.  For more information, see [CBaseTabbedPane::FloatTab](../../mfc/reference/cbasetabbedpane-class.md#floattab).

*bHide*<br/>
[in] TRUE to hide the pane before floating; otherwise, FALSE. Unlike the base class version of this method, this parameter does not have a default value.

### Return Value

TRUE if the pane floated; otherwise, FALSE.

### Remarks

This method is like [CBaseTabbedPane::FloatTab](../../mfc/reference/cbasetabbedpane-class.md#floattab) except that it does not enable the last remaining tab on an Outlook bar control to float.

## <a name="getbuttonsfont"></a> CMFCOutlookBar::GetButtonsFont

Returns the font of the text on the page button tabs of the Outlook bar.

```cpp
CFont* GetButtonsFont() const;
```

### Return Value

A pointer to the font object that is used to display text on Outlook bar page button tabs.

### Remarks

Use this function to retrieve the font that is used to display the text on Outlook page button tabs. You can set the font by calling on [CMFCOutlookBar::SetButtonsFont](#setbuttonsfont).

## <a name="gettabarea"></a> CMFCOutlookBar::GetTabArea

Determines the size and position of the tab areas on the Outlook bar.

```cpp
virtual void GetTabArea(
    CRect& rectTabAreaTop,
    CRect& rectTabAreaBottom) const;
```

### Parameters

*rectTabAreaTop*<br/>
[out] Contains the size and position (in the client coordinates) of the top tab area when the function returns.

*rectTabAreaBottom*<br/>
[out] Contains the size and position (in the client coordinates) of the bottom tab area when the function returns.

### Remarks

The framework calls this method to determine the type of docking to the target pane. When the framework determines that the user drags the pane to be docked over the tab area of the target pane, it tries to add the first pane as a new tab of the target pane. Otherwise, it tries to dock the first pane at an appropriate side of the target pane. The framework creates a new container with a slider to accommodate the additional docked pane.

The default implementation of `GetTabArea` returns the whole client area of the Outlook bar if the Outlook bar is static; that is, if the Outlook bar cannot float. Otherwise, it returns the area that page buttons take at the top and bottom of the Outlook bar control.

Override this method in class derived from `CMFCOutlookBar` to change this behavior.

## <a name="ismode2003"></a> CMFCOutlookBar::IsMode2003

Specifies whether the behavior of the Outlook bar mimics that of Microsoft Office Outlook 2003.

```cpp
BOOL IsMode2003() const;
```

### Return Value

Nonzero if the Outlook bar is running in Microsoft Office 2003 mode; otherwise 0.

### Remarks

You can enable this mode by using [CMFCOutlookBar::SetMode2003](#setmode2003).

## <a name="onafteranimation"></a> CMFCOutlookBar::OnAfterAnimation

Called by [CMFCOutlookBarTabCtrl::SetActiveTab](../../mfc/reference/cmfcoutlookbartabctrl-class.md#setactivetab) after the active tab has been set using animation.

```cpp
virtual void OnAfterAnimation(int nPage);
```

### Parameters

*nPage*<br/>
[in] The zero-based index of the tab page that has been made active.

### Remarks

The visual effect of setting the active tab depends on whether you have enabled animation. For more information, see [CMFCOutlookBarTabCtrl::EnableAnimation](../../mfc/reference/cmfcoutlookbartabctrl-class.md#enableanimation).

## <a name="onbeforeanimation"></a> CMFCOutlookBar::OnBeforeAnimation

Called by [CMFCOutlookBarTabCtrl::SetActiveTab](../../mfc/reference/cmfcoutlookbartabctrl-class.md#setactivetab) before a tab page is set as the active tab using animation.

```cpp
virtual BOOL OnBeforeAnimation(int nPage);
```

### Parameters

*nPage*<br/>
[in] The zero-based index of the tab page that is about to be set active.

### Return Value

Returns TRUE if animation should be used in setting the new active tab, or FALSE if animation should be disabled.

### Remarks

## <a name="onscroll"></a> CMFCOutlookBar::OnScroll

Called by the framework if the Outlook bar is scrolling up or down.

```cpp
virtual void OnScroll(BOOL bDown);
```

### Parameters

*bDown*<br/>
[in] TRUE if the Outlook bar is scrolling down, or FALSE if it is scrolling up.

### Remarks

## <a name="removecustompage"></a> CMFCOutlookBar::RemoveCustomPage

Removes a custom Outlook bar tab page.

```cpp
BOOL RemoveCustomPage(
    UINT uiPage,
    CMFCOutlookBarTabCtrl* pTargetWnd);
```

### Parameters

*uiPage*<br/>
[in] Zero-based index of the page in the parent Outlook window.

*pTargetWnd*<br/>
[in] Pointerto the parent Outlook window.

### Return Value

Nonzero if the custom page has been removed successfully; otherwise 0.

### Remarks

Call this function to delete custom pages. When the page is removed its control ID is returned to the pool of available IDs.

You must provide a pointer to [CMFCOutlookBarTabCtrl Class](../../mfc/reference/cmfcoutlookbartabctrl-class.md) object in which the page to be removed currently resides. Note that a user can move detachable pages between different Outlook bars, but the information about a custom page resides in the Outlook bar object for which you have called [CMFCOutlookBar::CreateCustomPage](#createcustompage).

Use [CBaseTabbedPane::GetUnderlyingWindow](../../mfc/reference/cbasetabbedpane-class.md#getunderlyingwindow) to obtain a pointer to the Outlook window.

## <a name="setbuttonsfont"></a> CMFCOutlookBar::SetButtonsFont

Sets the font of the text on the buttons of the Outlook bar.

```cpp
void SetButtonsFont(
    CFont* pFont,
    BOOL bRedraw=TRUE);
```

### Parameters

*pFont*<br/>
[in] Specifies the new font.

*bRedraw*<br/>
[in] If TRUE, the Outlook bar will be redrawn.

### Remarks

Use this method to set a font for the text displayed on outlook tab page buttons.

## <a name="setmode2003"></a> CMFCOutlookBar::SetMode2003

Specifies whether the behavior of the Outlook bar mimics that of Outlook 2003.

```cpp
void SetMode2003(BOOL bMode2003=TRUE);
```

### Parameters

*bMode2003*<br/>
[in] If TRUE, Office 2003 mode is enabled.

### Remarks

Use this function to enable or disable Office 2003 mode. In this mode, the Outlook bar has an additional toolbar with a customization button. The behavior of the Outlook bar conforms to the behavior of the Outlook bar in Microsoft Office 2003.

By default, this mode is disabled.

> [!NOTE]
> This function must be called before [CMFCOutlookBar::Create](#create).

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CBaseTabbedPane Class](../../mfc/reference/cbasetabbedpane-class.md)<br/>
[CMFCOutlookBarTabCtrl Class](../../mfc/reference/cmfcoutlookbartabctrl-class.md)<br/>
[CMFCOutlookBarPane Class](../../mfc/reference/cmfcoutlookbarpane-class.md)
