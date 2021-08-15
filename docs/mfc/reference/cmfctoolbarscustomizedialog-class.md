---
description: "Learn more about: CMFCToolBarsCustomizeDialog Class"
title: "CMFCToolBarsCustomizeDialog Class"
ms.date: "11/04/2016"
f1_keywords: ["CMFCToolBarsCustomizeDialog", "AFXTOOLBARSCUSTOMIZEDIALOG/CMFCToolBarsCustomizeDialog", "AFXTOOLBARSCUSTOMIZEDIALOG/CMFCToolBarsCustomizeDialog::CMFCToolBarsCustomizeDialog", "AFXTOOLBARSCUSTOMIZEDIALOG/CMFCToolBarsCustomizeDialog::FillAllCommandsList", "AFXTOOLBARSCUSTOMIZEDIALOG/CMFCToolBarsCustomizeDialog::FillCategoriesComboBox", "AFXTOOLBARSCUSTOMIZEDIALOG/CMFCToolBarsCustomizeDialog::FillCategoriesListBox", "AFXTOOLBARSCUSTOMIZEDIALOG/CMFCToolBarsCustomizeDialog::GetCommandName", "AFXTOOLBARSCUSTOMIZEDIALOG/CMFCToolBarsCustomizeDialog::GetCountInCategory", "AFXTOOLBARSCUSTOMIZEDIALOG/CMFCToolBarsCustomizeDialog::GetFlags", "AFXTOOLBARSCUSTOMIZEDIALOG/CMFCToolBarsCustomizeDialog::OnInitDialog", "AFXTOOLBARSCUSTOMIZEDIALOG/CMFCToolBarsCustomizeDialog::PostNcDestroy"]
helpviewer_keywords: ["CMFCToolBarsCustomizeDialog [MFC], CMFCToolBarsCustomizeDialog", "CMFCToolBarsCustomizeDialog [MFC], FillAllCommandsList", "CMFCToolBarsCustomizeDialog [MFC], FillCategoriesComboBox", "CMFCToolBarsCustomizeDialog [MFC], FillCategoriesListBox", "CMFCToolBarsCustomizeDialog [MFC], GetCommandName", "CMFCToolBarsCustomizeDialog [MFC], GetCountInCategory", "CMFCToolBarsCustomizeDialog [MFC], GetFlags", "CMFCToolBarsCustomizeDialog [MFC], OnInitDialog", "CMFCToolBarsCustomizeDialog [MFC], PostNcDestroy"]
ms.assetid: 78e2cddd-4f13-4097-afc3-1ad646a113f1
---
# CMFCToolBarsCustomizeDialog Class

A modeless tab dialog box ( [CPropertySheet Class](../../mfc/reference/cpropertysheet-class.md)) that enables the user to customize the toolbars, menus, keyboard shortcuts, user-defined tools, and visual style in an application. Typically, the user accesses this dialog box by selecting **Customize** from the **Tools** menu.

The **Customize** dialog box has six tabs: **Commands**, **Toolbars**, **Tools**, **Keyboard**, **Menu**, and **Options**.

## Syntax

```
class CMFCToolBarsCustomizeDialog : public CPropertySheet
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CMFCToolBarsCustomizeDialog::CMFCToolBarsCustomizeDialog](#cmfctoolbarscustomizedialog)|Constructs a `CMFCToolBarsCustomizeDialog` object.|
|`CMFCToolBarsCustomizeDialog::~CMFCToolBarsCustomizeDialog`|Destructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CMFCToolBarsCustomizeDialog::AddButton](#addbutton)|Inserts a toolbar button into the list of commands on the **Commands** page|
|[CMFCToolBarsCustomizeDialog::AddMenu](#addmenu)|Loads a menu from the resources and calls [CMFCToolBarsCustomizeDialog::AddMenuCommands](#addmenucommands) to add that menu to the list of commands on the **Commands** page.|
|[CMFCToolBarsCustomizeDialog::AddMenuCommands](#addmenucommands)|Loads a menu from the resources and calls [CMFCToolBarsCustomizeDialog::AddMenuCommands](#addmenucommands) to add that menu to the list of commands on the **Commands** page.|
|[CMFCToolBarsCustomizeDialog::AddToolBar](#addtoolbar)|Loads a toolbar from the resources. Then, for each command in the menu calls the [CMFCToolBarsCustomizeDialog::AddButton](#addbutton) method to insert a button in the list of commands on the **Commands** page under the specified category.|
|[CMFCToolBarsCustomizeDialog::Create](#create)|Displays the **Customization** dialog box.|
|`CMFCToolBarsCustomizeDialog::EnableTools`|Reserved for future use.|
|[CMFCToolBarsCustomizeDialog::EnableUserDefinedToolbars](#enableuserdefinedtoolbars)|Enables or disables creating new toolbars by using the **Customize** dialog box.|
|[CMFCToolBarsCustomizeDialog::FillAllCommandsList](#fillallcommandslist)|Populates the provided `CListBox` object with the commands in the **All Commands** category.|
|[CMFCToolBarsCustomizeDialog::FillCategoriesComboBox](#fillcategoriescombobox)|Populates the provided `CComboBox` object with the name of each command category in the **Customize** dialog box.|
|[CMFCToolBarsCustomizeDialog::FillCategoriesListBox](#fillcategorieslistbox)|Populates the provided `CListBox` object with the name of each command category in the **Customize** dialog box.|
|[CMFCToolBarsCustomizeDialog::GetCommandName](#getcommandname)|Retrieves the name that is associated with the given command ID.|
|[CMFCToolBarsCustomizeDialog::GetCountInCategory](#getcountincategory)|Retrieves the number of items in the provided list that have a given text label.|
|[CMFCToolBarsCustomizeDialog::GetFlags](#getflags)|Retrieves the set of flags that affect the behavior of the dialog box.|
|`CMFCToolBarsCustomizeDialog::GetThisClass`|Used by the framework to obtain a pointer to the [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) object that is associated with this class type.|
|[CMFCToolBarsCustomizeDialog::OnEditToolbarMenuImage](#onedittoolbarmenuimage)|Starts an image editor so that a user can customize a toolbar button or menu item icon.|
|[CMFCToolBarsCustomizeDialog::OnInitDialog](#oninitdialog)|Overrides to augment property sheet initialization. (Overrides [CPropertySheet::OnInitDialog](../../mfc/reference/cpropertysheet-class.md#oninitdialog).)|
|[CMFCToolBarsCustomizeDialog::PostNcDestroy](#postncdestroy)|Called by the framework after the window has been destroyed. (Overrides `CPropertySheet::PostNcDestroy`.)|
|[CMFCToolBarsCustomizeDialog::RemoveButton](#removebutton)|Removes the button with the specified command ID from the specified category, or from all categories.|
|[CMFCToolBarsCustomizeDialog::RenameCategory](#renamecategory)|Renames a category in the list box of categories on the **Commands** tab.|
|[CMFCToolBarsCustomizeDialog::ReplaceButton](#replacebutton)|Replaces a button in the list of commands on the **Commands** tab with a new toolbar button object.|
|[CMFCToolBarsCustomizeDialog::SetUserCategory](#setusercategory)|Adds a category to the list of categories that will be displayed on the **Commands** tab.|

### Protected Methods

|Name|Description|
|----------|-----------------|
|[CMFCToolBarsCustomizeDialog::CheckToolsValidity](#checktoolsvalidity)|Called by the framework to determine whether the list of user-defined tools is valid.|
|[CMFCToolBarsCustomizeDialog::OnAfterChangeTool](#onafterchangetool)|Called by the framework when the properties of a user-defined tool change.|
|[CMFCToolBarsCustomizeDialog::OnAssignKey](#onassignkey)|Determines whether a specified keyboard shortcut can be assigned to an action.|
|[CMFCToolBarsCustomizeDialog::OnBeforeChangeTool](#onbeforechangetool)|Determines whether a user-defined tool can be changed.|
|[CMFCToolBarsCustomizeDialog::OnInitToolsPage](#oninittoolspage)|Called by the framework when the user chooses the **Tools** tab is requested.|

## Remarks

To display the **Customize** dialog box, create a `CMFCToolBarsCustomizeDialog` object and call the [CMFCToolBarsCustomizeDialog::Create](#create) method.

While the **Customize** dialog box is active, the application works in a special mode that limits the user to customization tasks.

## Example

The following example demonstrates how to use various methods in the `CMFCToolBarsCustomizeDialog` class. The example shows how to replace a toolbar button in the list box of commands on the **Commands** page, enable creating new toolbars by using the **Customize** dialog box, and display the **Customization** dialog box. This code snippet is part of the [IE Demo sample](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_IEDemo#4](../../mfc/reference/codesnippet/cpp/cmfctoolbarscustomizedialog-class_1.cpp)]

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CPropertySheet](../../mfc/reference/cpropertysheet-class.md)

`CMFCToolBarsCustomizeDialog`

## Requirements

**Header:** afxToolBarsCustomizeDialog.h

## <a name="addbutton"></a> CMFCToolBarsCustomizeDialog::AddButton

Inserts a toolbar button into the list of commands on the **Commands** page.

```cpp
void AddButton(
    UINT uiCategoryId,
    const CMFCToolBarButton& button,
    int iInsertBefore=-1);

void AddButton(
    LPCTSTR lpszCategory,
    const CMFCToolBarButton& button,
    int iInsertBefore=-1);
```

### Parameters

*uiCategoryId*<br/>
[in] Specifies the category ID into which to insert the button.

*button*<br/>
[in] Specifies the button to insert.

*iInsertBefore*<br/>
[in] Specifies the zero-based index of a toolbar button before which the button is inserted.

*lpszCategory*<br/>
[in] Specifies the category string to insert the button.

### Remarks

The `AddButton` method ignores buttons that have the standard command IDs (such as ID_FILE_MRU_FILE1), commands that are not permitted (see [CMFCToolBar::IsCommandPermitted](../../mfc/reference/cmfctoolbar-class.md#iscommandpermitted)) and dummy buttons.

This method creates a new object of the same type as `button` (usually a [CMFCToolBarButton Class](../../mfc/reference/cmfctoolbarbutton-class.md)) by using the runtime class of the button. It then calls [CMFCToolBarButton::CopyFrom](../../mfc/reference/cmfctoolbarbutton-class.md#copyfrom) to copy the data members of button, and inserts the copy into the specified category.

When the new button is inserted, it receives the `OnAddToCustomizePage` notification.

If `iInsertBefore` is -1, the button is appended to the list of categories; otherwise it is inserted before the item with the specified index.

### Example

The following example demonstrates how to use the `AddButton` method of the `CMFCToolBarsCustomizeDialog` class. This code snippet is part of the [Slider sample](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_Slider#1](../../mfc/reference/codesnippet/cpp/cmfctoolbarscustomizedialog-class_2.cpp)]

## <a name="addmenu"></a> CMFCToolBarsCustomizeDialog::AddMenu

Loads a menu from the resources and calls [CMFCToolBarsCustomizeDialog::AddMenuCommands](#addmenucommands) to add that menu to the list of commands on the **Commands** page.

```
BOOL AddMenu(UINT uiMenuResId);
```

### Parameters

*uiMenuResId*<br/>
[in] Specifies the resource ID of a menu to load.

### Return Value

TRUE if a menu was added successfully; otherwise FALSE.

### Remarks

In the call to `AddMenuCommands`, *bPopup* is FALSE. As a result, that method does not add menu items that contain submenus to the list of commands. This method does add the menu items in the submenus to the list of commands.

## <a name="addmenucommands"></a> CMFCToolBarsCustomizeDialog::AddMenuCommands

Adds items to the list of commands in the **Commands** page to represent all the items in the specified menu.

```cpp
void AddMenuCommands(
    const CMenu* pMenu,
    BOOL bPopup,
    LPCTSTR lpszCategory=NULL,
    LPCTSTR lpszMenuPath=NULL);
```

### Parameters

*pMenu*<br/>
[in] A pointer to the CMenu object to add.

*bPopup*<br/>
[in] Specifies whether to insert the popup menu items to the list of commands.

*lpszCategory*<br/>
[in] The name of the category to insert the menu.

*lpszMenuPath*<br/>
[in] A prefix that is added to the name when the command is shown in the **All Categories** list.

### Remarks

The `AddMenuCommands` method loops over all menu items of *pMenu*. For each menu item that does not contain a submenu, this method creates a [CMFCToolBarButton Class](../../mfc/reference/cmfctoolbarbutton-class.md) object and calls the [CMFCToolBarsCustomizeDialog::AddButton](#addbutton) method to add the menu item as a toolbar button to the list of commands on the **Commands** page. Separators are ignored in this process.

If *bPopup* is TRUE, for each menu item that contains a submenu this method creates a [CMFCToolBarMenuButton Class](../../mfc/reference/cmfctoolbarmenubutton-class.md) object and inserts it into the list of commands by calling `AddButton`. Otherwise menu items that contain submenus are not displayed in the list of commands. In either case, when `AddMenuCommands` encounters a menu item with a submenu it calls itself recursively, passing a pointer to the submenu as the *pMenu* parameter and appending the label of the submenu to *lpszMenuPath*.

## <a name="addtoolbar"></a> CMFCToolBarsCustomizeDialog::AddToolBar

Loads a toolbar from the resources. Then, for each command in the menu calls the [CMFCToolBarsCustomizeDialog::AddButton](#addbutton) method to insert a button in the list of commands on the **Commands** page under the specified category.

```
BOOL AddToolBar(
    UINT uiCategoryId,
    UINT uiToolbarResId);

BOOL AddToolBar(
    LPCTSTR lpszCategory,
    UINT uiToolbarResId);
```

### Parameters

*uiCategoryId*<br/>
[in] Specifies the resource ID of the category to add the toolbar to.

*uiToolbarResId*<br/>
[in] Specifies the resource ID of a toolbar whose commands are inserted into the list of commands.

*lpszCategory*<br/>
[in] Specifies the name of the category to which to add the toolbar.

### Return Value

TRUE if the method is successful; otherwise FALSE.

### Example

The following example demonstrates how to use the `AddToolBar` method in the `CMFCToolBarsCustomizeDialog` class. This code snippet is part of the [Word Pad sample](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_WordPad#11](../../mfc/reference/codesnippet/cpp/cmfctoolbarscustomizedialog-class_3.cpp)]

### Remarks

The control that is used to represent each command is a [CMFCToolBarButton Class](../../mfc/reference/cmfctoolbarbutton-class.md) object. After you add the toolbar, you can replace the button with a control of a derived type by calling [CMFCToolBarsCustomizeDialog::ReplaceButton](#replacebutton).

## <a name="checktoolsvalidity"></a> CMFCToolBarsCustomizeDialog::CheckToolsValidity

Verifies the validity of the list of user tools.

```
virtual BOOL CheckToolsValidity(const CObList& lstTools);
```

### Parameters

*lstTools*<br/>
[in] The list of user-defined tools to check.

### Return Value

Returns TRUE if the list of user-defined tools is valid; otherwise FALSE. The default implementation always returns TRUE.

### Remarks

The framework calls this method to verify the validity of objects that represent user-defined tools returned by [CMFCToolBarsCustomizeDialog::CheckToolsValidity](#checktoolsvalidity).

Override the `CheckToolsValidity` method in a class derived from `CMFCToolBarsCustomizeDialog`  if you want to validate the user tools before the user closes the dialog box. If this method returns FALSE when the user clicks either the **Close** button in the upper-right corner of the dialog box or the button labeled **Close** in the lower-right corner of the dialog box, the dialog box displays the **Tools** tab instead of closing. If this method returns FALSE when the user clicks a tab to navigate away from the **Tools** tab, the navigation does not occur. You should display an appropriate message box to inform the user of the problem that caused validation to fail.

## <a name="cmfctoolbarscustomizedialog"></a> CMFCToolBarsCustomizeDialog::CMFCToolBarsCustomizeDialog

Constructs a `CMFCToolBarsCustomizeDialog` object.

```
CMFCToolBarsCustomizeDialog(
    CFrameWnd* pWndParentFrame,
    BOOL bAutoSetFromMenus = FALSE,
    UINT uiFlags = (AFX_CUSTOMIZE_MENU_SHADOWS | AFX_CUSTOMIZE_TEXT_LABELS | AFX_CUSTOMIZE_MENU_ANIMATIONS | AFX_CUSTOMIZE_NOHELP),
    CList <CRuntimeClass*, CRuntimeClass*>* p listCustomPages = NULL);
```

### Parameters

*pWndParentFrame*<br/>
[in] A pointer to the parent frame. This parameter must not be NULL.

*bAutoSetFromMenus*<br/>
[in] A Boolean value that specifies whether to add the menu commands from all menus to the list of commands on the **Commands** page. If this parameter is TRUE, the menu commands are added. Otherwise, the menu commands are not added.

*uiFlags*<br/>
[in] A combination of flags that affect the behavior of the dialog box. This parameter can be one or more of the following values:

- AFX_CUSTOMIZE_MENU_SHADOWS

- AFX_CUSTOMIZE_TEXT_LABELS

- AFX_CUSTOMIZE_MENU_ANIMATIONS

- AFX_CUSTOMIZE_NOHELP

- AFX_CUSTOMIZE_CONTEXT_HELP

- AFX_CUSTOMIZE_NOTOOLS

- AFX_CUSTOMIZE_MENUAMPERS

- AFX_CUSTOMIZE_NO_LARGE_ICONS

*plistCustomPages*<br/>
[in] A pointer to a list of `CRuntimeClass` objects that specify additional custom pages.

### Remarks

The *plistCustomPages* parameter refers to the list of `CRuntimeClass` objects that specify additional custom pages. The constructor adds more pages to the dialog box by using the [CRuntimeClass::CreateObject](../../mfc/reference/cruntimeclass-structure.md#createobject) method. See the CustomPages sample for an example that adds more pages to the **Customize** dialog box.

For more information about the values that you can pass in the *uiFlags* parameter, see [CMFCToolBarsCustomizeDialog::GetFlags](#getflags).

### Example

The following example demonstrates how to construct an object of the `CMFCToolBarsCustomizeDialog` class. This code snippet is part of the [Custom Pages sample](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_CustomPages#3](../../mfc/reference/codesnippet/cpp/cmfctoolbarscustomizedialog-class_4.cpp)]

## <a name="create"></a> CMFCToolBarsCustomizeDialog::Create

Displays the **Customization** dialog box.

```
virtual BOOL Create();
```

### Return Value

TRUE if the customization property sheet is created successfully; otherwise FALSE.

### Remarks

Call the `Create` method only after you fully initialize the class.

## <a name="enableuserdefinedtoolbars"></a> CMFCToolBarsCustomizeDialog::EnableUserDefinedToolbars

Enables or disables creating new toolbars by using the **Customize** dialog box.

```cpp
void EnableUserDefinedToolbars(BOOL bEnable=TRUE);
```

### Parameters

*bEnable*<br/>
[in] TRUE to enable the user-defined toolbars; FALSE to disable the toolbars.

### Remarks

If *bEnable* is TRUE, the **New**, **Rename** and **Delete** buttons are displayed on the **Toolbars** page.

By default, or if *bEnable* is FALSE, these buttons are not displayed and the user cannot define new toolbars.

## <a name="fillallcommandslist"></a> CMFCToolBarsCustomizeDialog::FillAllCommandsList

Populates the provided `CListBox` object with the commands in the **All Commands** category.

```
virtual void FillAllCommandsList(CListBox& wndListOfCommands) const;
```

### Parameters

*wndListOfCommands*<br/>
[out] A reference to the `CListBox` object to populate.

### Remarks

The **All Commands** category contains the commands of all categories. The [CMFCToolBarsCustomizeDialog::AddButton](#addbutton) method adds the command that is associated with the provided button to the **All Commands** category for you.

This method clears the contents of the provided `CListBox` object before populating it with the commands in the **All Commands** category.

The `CMFCMousePropertyPage` class uses this method to populate the double-click event list box.

## <a name="fillcategoriescombobox"></a> CMFCToolBarsCustomizeDialog::FillCategoriesComboBox

Populates the provided `CComboBox` object with the name of each command category in the **Customize** dialog box.

```cpp
void FillCategoriesComboBox(
    CComboBox& wndCategory,
    BOOL bAddEmpty = TRUE) const;
```

### Parameters

*wndCategory*<br/>
[out] A reference to the `CComboBox` object to populate.

*bAddEmpty*<br/>
[in] A Boolean value that specifies whether to add categories to the combo box that do not have commands. If this parameter is TRUE, empty categories are added to the combo box. Otherwise, empty categories are not added.

### Remarks

This method is like the [CMFCToolBarsCustomizeDialog::FillCategoriesListBox](#fillcategorieslistbox) method except that this method works with a `CComboBox` object.

This method does not clear the contents of the `CComboBox` object before populating it. It guarantees that the **All Commands** category is the final item in the combo box.

You can add new command categories by using the [CMFCToolBarsCustomizeDialog::AddButton](#addbutton) method. You can change the name of an existing category by using the [CMFCToolBarsCustomizeDialog::RenameCategory](#renamecategory) method.

The `CMFCToolBarsKeyboardPropertyPage` and `CMFCKeyMapDialog` classes use this method to categorize keyboard mappings.

## <a name="fillcategorieslistbox"></a> CMFCToolBarsCustomizeDialog::FillCategoriesListBox

Populates the provided `CListBox` object with the name of each command category in the **Customize** dialog box.

```cpp
void FillCategoriesListBox(
    CListBox& wndCategory,
    BOOL bAddEmpty = TRUE) const;
```

### Parameters

*wndCategory*<br/>
[out] A reference to the `CListBox` object to populate.

*bAddEmpty*<br/>
[in] A Boolean value that specifies whether to add categories to the list box that do not have commands. If this parameter is TRUE, empty categories are added to the list box. Otherwise, empty categories are not added.

### Remarks

This method is like the [CMFCToolBarsCustomizeDialog::FillCategoriesComboBox](#fillcategoriescombobox) method except that this method works with a `CListBox` object.

This method does not clear the contents of the `CListBox` object before populating it. It guarantees that the **All Commands** category is the final item in the list box.

You can add new command categories by using the [CMFCToolBarsCustomizeDialog::AddButton](#addbutton) method. You can change the name of an existing category by using the [CMFCToolBarsCustomizeDialog::RenameCategory](#renamecategory) method.

The `CMFCToolBarsCommandsPropertyPage` class uses this method to show the list of commands that is associated with each command category.

## <a name="getcommandname"></a> CMFCToolBarsCustomizeDialog::GetCommandName

Retrieves the name that is associated with the given command ID.

```
LPCTSTR GetCommandName(UINT uiCmd) const;
```

### Parameters

*uiCmd*<br/>
[in] The ID of the command to retrieve.

### Return Value

The name that is associated with the given command ID, or NULL if the command does not exist.

## <a name="getcountincategory"></a> CMFCToolBarsCustomizeDialog::GetCountInCategory

Retrieves the number of items in the provided list that have a given text label.

```
int GetCountInCategory(
    LPCTSTR lpszItemName,
    const CObList& lstCommands) const;
```

### Parameters

*lpszItemName*<br/>
[in] The text label to match.

*lstCommands*<br/>
[in] A reference to a list that contains `CMFCToolBarButton` objects.

### Return Value

The number of items in the provided list whose text label equals *lpszItemName*.

### Remarks

Each element in the provided object list must be of type `CMFCToolBarButton`. This method compares *lpszItemName* with the [CMFCToolBarButton::m_strText](../../mfc/reference/cmfctoolbarbutton-class.md#m_strtext) data member.

## <a name="getflags"></a> CMFCToolBarsCustomizeDialog::GetFlags

Retrieves the set of flags that affect the behavior of the dialog box.

```
UINT GetFlags() const;
```

### Return Value

The set of flags that affect the behavior of the dialog box.

### Remarks

This method retrieves the value of the *uiFlags* parameter that is passed to the constructor. The return value can be one or more of the following values:

|Name|Description|
|-|-|
|AFX_CUSTOMIZE_MENU_SHADOWS|Allows the user to specify the shadow appearance of the menu.  |
|AFX_CUSTOMIZE_TEXT_LABELS|Allows the user to specify whether text labels are shown underneath the toolbar button images.  |
|AFX_CUSTOMIZE_MENU_ANIMATIONS|Allows the user to specify the menu animation style.  |
|AFX_CUSTOMIZE_NOHELP|Removes the help button from the customization dialog box.  |
|AFX_CUSTOMIZE_CONTEXT_HELP|Enables the WS_EX_CONTEXTHELP visual style.  |
|AFX_CUSTOMIZE_NOTOOLS|Removes the **Tools** page from the customization dialog box. This flag is valid if your application uses the `CUserToolsManager` class.  |
|AFX_CUSTOMIZE_MENUAMPERS|Allows button captions to contain the ampersand ( **&**) character.  |
|AFX_CUSTOMIZE_NO_LARGE_ICONS|Removes the **Large Icons** option from the customization dialog box.  |

For more information about the WS_EX_CONTEXTHELP visual style, see [Extended Window Styles](../../mfc/reference/styles-used-by-mfc.md#extended-window-styles).

## <a name="onafterchangetool"></a> CMFCToolBarsCustomizeDialog::OnAfterChangeTool

Responds to a change in a user tool immediately after it occurs.

```
virtual void OnAfterChangeTool(CUserTool* pSelTool);
```

### Parameters

*pSelTool*<br/>
[in, out] A pointer to the user tool object that has been changed.

### Remarks

This method is called by the framework when a user changes the properties of a user-defined tool. The default implementation does nothing. Override this method in a class derived from `CMFCToolBarsCustomizeDialog`  to perform processing after a change to a user tool occurs.

## <a name="onassignkey"></a> CMFCToolBarsCustomizeDialog::OnAssignKey

Validates keyboard shortcuts as a user defines them.

```
virtual BOOL OnAssignKey(ACCEL* pAccel);
```

### Parameters

*pAccel*<br/>
[in, out] Pointer to the proposed keyboard assigment that is expressed as an [ACCEL](/windows/win32/api/winuser/ns-winuser-accel) struct.

### Return Value

TRUE if the key can be assigned, or FALSE if the key cannot be assigned. The default implementation always returns TRUE.

### Remarks

Override this method in a derived class to perform extra processing when a user assigns a new keyboard shortcut, or to validate keyboard shortcuts as the user defines them. To prevent a shortcut from being assigned, return FALSE. You should also display a message box or otherwise inform the user of the reason why the keyboard shortcut was rejected.

## <a name="onbeforechangetool"></a> CMFCToolBarsCustomizeDialog::OnBeforeChangeTool

Performs custom processing when a change to a user tool when the user is about to apply a change.

```
virtual void OnBeforeChangeTool(CUserTool* pSelTool);
```

### Parameters

*pSelTool*<br/>
[in, out] A pointer to the user tool object that is about to be replaced.

### Remarks

This method is called by the framework when the properties of a user-defined tool is about to change. The default implementation does nothing. Override the `OnBeforeChangeTool` method in a class derived from `CMFCToolBarsCustomizeDialog`  if you want to perform processing before a change to a user tool occurs, such as releasing resources that *pSelTool* uses.

## <a name="onedittoolbarmenuimage"></a> CMFCToolBarsCustomizeDialog::OnEditToolbarMenuImage

Starts an image editor so that a user can customize a toolbar button or menu item icon.

```
virtual BOOL OnEditToolbarMenuImage(
    CWnd* pWndParent,
    CBitmap& bitmap,
    int nBitsPerPixel);
```

### Parameters

*pWndParent*<br/>
[in] A pointer to the parent window.

*bitmap*<br/>
[in] A reference to a bitmap object to be edited.

*nBitsPerPixel*<br/>
[in] Bitmap color resolution, in bits per pixel.

### Return Value

TRUE if a change is being committed; otherwise FALSE. The default implementation displays a dialog box and returns TRUE if the user clicks **OK**, or FALSE if the user clicks **Cancel** or the **Close** button.

### Remarks

This method is called by the framework when the user runs the image editor. The default implementation displays [CMFCImageEditorDialog Class](../../mfc/reference/cmfcimageeditordialog-class.md) dialog box. Override `OnEditToolbarMenuImage` in a derived class to use a custom image editor.

## <a name="oninitdialog"></a> CMFCToolBarsCustomizeDialog::OnInitDialog

Overrides to augment property sheet initialization.

```
virtual BOOL OnInitDialog();
```

### Return Value

The result of calling the [CPropertySheet::OnInitDialog](../../mfc/reference/cpropertysheet-class.md#oninitdialog) method.

### Remarks

This method extends the base class implementation, [CPropertySheet::OnInitDialog](../../mfc/reference/cpropertysheet-class.md#oninitdialog), by displaying the **Close** button, by making sure that the dialog box fits the current screen size, and by moving the **Help** button to the lower-left corner of the dialog box.

## <a name="oninittoolspage"></a> CMFCToolBarsCustomizeDialog::OnInitToolsPage

Handles the notification from the framework that the **Tools** page is about to be initialized.

```
virtual void OnInitToolsPage();
```

### Remarks

The default implementation does nothing. Override this method in a derived class to process this notification.

## <a name="postncdestroy"></a> CMFCToolBarsCustomizeDialog::PostNcDestroy

Called by the framework after the window has been destroyed.

```
virtual void PostNcDestroy();
```

### Remarks

This method extends the base class implementation, `CPropertySheet::PostNcDestroy`, by restoring the application to the previous mode.

The [CMFCToolBarsCustomizeDialog::Create](#create) method puts the application in a special mode that limits the user to customization tasks.

## <a name="removebutton"></a> CMFCToolBarsCustomizeDialog::RemoveButton

Removes the button with the specified command ID from the specified category, or from all categories.

```
int RemoveButton(
    UINT uiCategoryId,
    UINT uiCmdId);

int RemoveButton(
    LPCTSTR lpszCategory,
    UINT uiCmdId);
```

### Parameters

*uiCategoryId*<br/>
[in] Specifies the category ID from which to remove the button.

*uiCmdId*<br/>
[in] Specifies the command ID of the button.

*lpszCategory*<br/>
[in] Specifies the name of the category from which to remove the button.

### Return Value

The zero-based index of the removed button, or -1 if the specified command ID was not found in the specified category. If *uiCategoryId* is -1, the return value is 0.

### Remarks

To remove a button from all categories, call the first overload of this method and set *uiCategoryId* to -1.

## <a name="renamecategory"></a> CMFCToolBarsCustomizeDialog::RenameCategory

Renames a category in the list box of categories on the **Commands** page.

```
BOOL RenameCategory(
    LPCTSTR lpszCategoryOld,
    LPCTSTR lpszCategoryNew);
```

### Parameters

*lpszCategoryOld*<br/>
[in] The category name to change.

*lpszCategoryNew*<br/>
[in] The new category name.

### Return Value

TRUE if the method was successful; otherwise FALSE.

### Remarks

The category name must be unique.

## <a name="replacebutton"></a> CMFCToolBarsCustomizeDialog::ReplaceButton

Replaces a toolbar button in the list box of commands on the **Commands** page.

```cpp
void ReplaceButton(
    UINT uiCmd,
    const CMFCToolBarButton& button);
```

### Parameters

*uiCmd*<br/>
[in] Specifies the command of the button to be replaced.

*button*<br/>
[in] A **`const`** reference to the toolbar button object that replaces the old button.

### Remarks

When [CMFCToolBarsCustomizeDialog::AddMenu](#addmenu), [CMFCToolBarsCustomizeDialog::AddMenuCommands](#addmenucommands), or [CMFCToolBarsCustomizeDialog::AddToolBar](#addtoolbar) adds a command to the **Commands** page, that command is in the form of a [CMFCToolBarButton Class](../../mfc/reference/cmfctoolbarbutton-class.md) object (or a [CMFCToolBarMenuButton Class](../../mfc/reference/cmfctoolbarmenubutton-class.md) object for a menu item that contains a submenu added by `AddMenuCommands`). The framework also calls these three methods to add commands automatically. If you want a command to be represented by a derived type instead, call `ReplaceButton` and pass in a button of the derived type.

### Example

The following example demonstrates how to use the `ReplaceButton` method in the `CMFCToolBarsCustomizeDialog` class. This code snippet is part of the [Visual Studio Demo sample](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_VisualStudioDemo#34](../../mfc/codesnippet/cpp/cmfctoolbarscustomizedialog-class_5.cpp)]

## <a name="setusercategory"></a> CMFCToolBarsCustomizeDialog::SetUserCategory

Specifies which category in the list of categories on the **Commands** page is the user category. You must call this function before you call [CMFCToolBarsCustomizeDialog::Create](#create).

```
BOOL SetUserCategory(LPCTSTR lpszCategory);
```

### Parameters

*lpszCategory*<br/>
[in] The name of the category.

### Return Value

TRUE if the method is successful; otherwise FALSE.

### Remarks

The user category setting is not currently used by the framework.

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CPropertySheet Class](../../mfc/reference/cpropertysheet-class.md)
