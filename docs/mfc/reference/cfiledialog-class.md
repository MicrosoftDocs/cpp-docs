---
title: "CFileDialog Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CFileDialog"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CFileDialog class"
  - "common file dialog boxes"
  - "dialog boxes, common"
ms.assetid: fda4fd3c-08b8-4ce0-8e9d-7bab23f8c6c0
caps.latest.revision: 47
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
# CFileDialog Class
Encapsulates the common dialog box that is used for file open or file save operations.  
  
## Syntax  
  
```  
class CFileDialog : public CCommonDialog  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CFileDialog::CFileDialog](#cfiledialog__cfiledialog)|Constructs a `CFileDialog` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CFileDialog::AddCheckButton](#cfiledialog__addcheckbutton)|Adds a check button to the dialog.|  
|[CFileDialog::AddComboBox](#cfiledialog__addcombobox)|Adds a combo box to the dialog.|  
|[CFileDialog::AddControlItem](#cfiledialog__addcontrolitem)|Adds an item to a container control in the dialog.|  
|[CFileDialog::AddEditBox](#cfiledialog__addeditbox)|Adds an edit box to the dialog.|  
|[CFileDialog::AddMenu](#cfiledialog__addmenu)|Adds a menu to the dialog.|  
|[CFileDialog::AddPlace](#cfiledialog__addplace)|Overloaded. Adds a folder to the list of places available for the user to open or save items.|  
|[CFileDialog::AddPushButton](#cfiledialog__addpushbutton)|Adds a button to the dialog.|  
|[CFileDialog::AddRadioButtonList](#cfiledialog__addradiobuttonlist)|Adds an option button (also known as radio button) group to the dialog.|  
|[CFileDialog::AddSeparator](#cfiledialog__addseparator)|Adds a separator to the dialog.|  
|[CFileDialog::AddText](#cfiledialog__addtext)|Adds text content to the dialog.|  
|[CFileDialog::ApplyOFNToShellDialog](#cfiledialog__applyofntoshelldialog)|Updates the state of the `CFileDialog` to match the parameters and flags stored in the `m_ofn` member variable.|  
|[CFileDialog::DoModal](#cfiledialog__domodal)|Displays the dialog box and enables the user to make a selection.|  
|[CFileDialog::EnableOpenDropDown](#cfiledialog__enableopendropdown)|Enables a drop-down list on the **Open** or **Save** button in the dialog.|  
|[CFileDialog::EndVisualGroup](#cfiledialog__endvisualgroup)|Stops the addition of elements to a visual group in the dialog.|  
|[CFileDialog::GetCheckButtonState](#cfiledialog__getcheckbuttonstate)|Gets the current state of a check button (check box) in the dialog.|  
|[CFileDialog::GetControlItemState](#cfiledialog__getcontrolitemstate)|Gets the current state of an item in a container control found in the dialog.|  
|[CFileDialog::GetControlState](#cfiledialog__getcontrolstate)|Gets the current visibility and enabled states of a given control.|  
|[CFileDialog::GetEditBoxText](#cfiledialog__geteditboxtext)|Gets the current text in an edit box control.|  
|[CFileDialog::GetFileExt](#cfiledialog__getfileext)|Returns the extension of the selected file.|  
|[CFileDialog::GetFileName](#cfiledialog__getfilename)|Returns the file name of the selected file.|  
|[CFileDialog::GetFileTitle](#cfiledialog__getfiletitle)|Returns the title of the selected file.|  
|[CFileDialog::GetFolderPath](#cfiledialog__getfolderpath)|Retrieves the path of the currently open folder or directory for an Explorer-style **Open** or **Save As** common dialog box.|  
|[CFileDialog::GetIFileDialogCustomize](#cfiledialog__getifiledialogcustomize)|Retrieves the internal COM object for a customized `CFileDialog` object.|  
|[CFileDialog::GetIFileOpenDialog](#cfiledialog__getifileopendialog)|Retrieves the internal COM object for a `CFileDialog` that is used as an **Open** file dialog box.|  
|[CFileDialog::GetIFileSaveDialog](#cfiledialog__getifilesavedialog)|Retrieves the internal COM object for a `CFileDialog` that is used as a **Save** file dialog box.|  
|[CFileDialog::GetNextPathName](#cfiledialog__getnextpathname)|Returns the full path of the next selected file.|  
|[CFileDialog::GetOFN](#cfiledialog__getofn)|Retrieves the `OPENFILENAME` structure of the `CFileDialog` object.|  
|[CFileDialog::GetPathName](#cfiledialog__getpathname)|Returns the full path of the selected file.|  
|[CFileDialog::GetReadOnlyPref](#cfiledialog__getreadonlypref)|Returns the read-only status of the selected file.|  
|[CFileDialog::GetResult](#cfiledialog__getresult)|Gets the choice that the user made in the dialog.|  
|[CFileDialog::GetResults](#cfiledialog__getresults)|Gets the user's choices in a dialog that allows multiple selection.|  
|[CFileDialog::GetSelectedControlItem](#cfiledialog__getselectedcontrolitem)|Gets a particular item from specified container controls in the dialog.|  
|[CFileDialog::GetStartPosition](#cfiledialog__getstartposition)|Returns the position of the first element of the file name list.|  
|[CFileDialog::HideControl](#cfiledialog__hidecontrol)|Hides the specified control in an Explorer-style **Open** or **Save As** common dialog box.|  
|[CFileDialog::IsPickFoldersMode](#cfiledialog__ispickfoldersmode)|Determines if the current dialog in folder picker mode.|  
|[CFileDialog::MakeProminent](#cfiledialog__makeprominent)|Places a control in the dialog so that it stands out compared to other added controls.|  
|[CFileDialog::RemoveControlItem](#cfiledialog__removecontrolitem)|Removes an item from a container control in the dialog.|  
|[CFileDialog::SetCheckButtonState](#cfiledialog__setcheckbuttonstate)|Sets the current state of a check button (check box) in the dialog.|  
|[CFileDialog::SetControlItemState](#cfiledialog__setcontrolitemstate)|Sets the current state of an item in a container control found in the dialog.|  
|[CFileDialog::SetControlItemText](#cfiledialog__setcontrolitemtext)|Sets the text of a control item. For example, the text that accompanies a radio button or an item in a menu.|  
|[CFileDialog::SetControlLabel](#cfiledialog__setcontrollabel)|Sets the text associated with a control, such as button text or an edit box label.|  
|[CFileDialog::SetControlState](#cfiledialog__setcontrolstate)|Sets the current visibility and enabled states of a given control.|  
|[CFileDialog::SetControlText](#cfiledialog__setcontroltext)|Sets the text for the specified control in an Explorer-style **Open** or **Save As** common dialog box.|  
|[CFileDialog::SetDefExt](#cfiledialog__setdefext)|Sets the default file name extension for an Explorer-style **Open** or **Save As** common dialog box.|  
|[CFileDialog::SetEditBoxText](#cfiledialog__seteditboxtext)|Sets the current text in an edit box control.|  
|[CFileDialog::SetProperties](#cfiledialog__setproperties)|Provides a property store that defines the default values to be used for the item being saved.|  
|[CFileDialog::SetSelectedControlItem](#cfiledialog__setselectedcontrolitem)|Sets the selected state of a particular item in an option button group or a combo box found in the dialog.|  
|[CFileDialog::SetTemplate](#cfiledialog__settemplate)|Sets the dialog box template for the `CFileDialog` object.|  
|[CFileDialog::StartVisualGroup](#cfiledialog__startvisualgroup)|Declares a visual group in the dialog. Subsequent calls to any "add" method add those elements to this group.|  
|[CFileDialog::UpdateOFNFromShellDialog](#cfiledialog__updateofnfromshelldialog)|Updates the data stored in the `m_ofn` member variable to match the current state of the file dialog box.|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CFileDialog::OnButtonClicked](#cfiledialog__onbuttonclicked)|Called when the button is clicked.|  
|[CFileDialog::OnCheckButtonToggled](#cfiledialog__oncheckbuttontoggled)|Called when the check box is checked/unchecked.|  
|[CFileDialog::OnControlActivating](#cfiledialog__oncontrolactivating)|Called when the control is being active.|  
|[CFileDialog::OnFileNameChange](#cfiledialog__onfilenamechange)|Handles the `WM_NOTIFY CDN_SELCHANGE` message.|  
|[CFileDialog::OnFileNameOK](#cfiledialog__onfilenameok)|Validates the file name entered in the dialog box.|  
|[CFileDialog::OnFolderChange](#cfiledialog__onfolderchange)|Handles the `WM_NOTIFY CDN_FOLDERCHANGE` message.|  
|[CFileDialog::OnInitDone](#cfiledialog__oninitdone)|Handles the `WM_NOTIFY CDN_INITDONE` message.|  
|[CFileDialog::OnItemSelected](#cfiledialog__onitemselected)|Called when the container item is being selected.|  
|[CFileDialog::OnLBSelChangedNotify](#cfiledialog__onlbselchangednotify)|Allows you to perform custom actions when the file selection changes.|  
|[CFileDialog::OnShareViolation](#cfiledialog__onshareviolation)|Handles share violations.|  
|[CFileDialog::OnTypeChange](#cfiledialog__ontypechange)|Handles the `WM_NOTIFY CDN_TYPECHANGE` message.|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CFileDialog::m_ofn](#cfiledialog__m_ofn)|The Windows `OPENFILENAME` structure. Provides access to basic file dialog box parameters.|  
  
## Remarks  
 Common file dialog boxes let you implement file-selection dialog boxes, for example, **Open File** and **Save As**, in a manner that is consistent with Windows standards.  
  
 You can use [CFileDialog](../../mfc/reference/cfiledialog-class.md) as is with the constructor provided, or you can derive your own dialog box class from `CFileDialog` and write a constructor to suit your needs. In either case, these dialog boxes will behave like standard MFC dialog boxes because they are derived from the [CCommonDialog Class](../../mfc/reference/ccommondialog-class.md). `CFileDialog` relies on the COMMDLG.DLL file that is included in Windows.  
  
 Both the appearance and the functionality of the `CFileDialog` with [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)] differ from the earlier versions of Windows. The default `CFileDialog` automatically uses the new [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)] style without code changes if a program is compiled and run under [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)]. Use the `bVistaStyle` parameter in the constructor to manually override this automatic update. The exception to the automatic update is customized dialog boxes. They will not be converted to the new style. For more information about the constructor, see [CFileDialog::CFileDialog](#cfiledialog__cfiledialog).  
  
> [!NOTE]
>  The control ID system differs in [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)] from earlier versions of Windows when you use a `CFileDialog`. You must update all references to `CFileDialog` controls in code before you can port your project from an earlier version of Windows.  
  
 Some `CFileDialog` methods are not supported under [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)]. Check the individual method topic for information about whether the method is supported. In addition, the following inherited functions are not supported under [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)]:  
  
- [CDialog::OnInitDialog](../../mfc/reference/cdialog-class.md#cdialog__oninitdialog)  
  
- [CDialog::OnSetFont](../../mfc/reference/cdialog-class.md#cdialog__onsetfont)  
  
 The windows messages for the `CFileDialog` class vary based on what operating system you are using. For example, Windows XP does not support [CDialog::OnCancel](../../mfc/reference/cdialog-class.md#cdialog__oncancel) and [CDialog::OnOK](../../mfc/reference/cdialog-class.md#cdialog__onok) for the `CFileDialog` class. However, [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)] does support them. For more information about the different messages that are generated and the order in which they are received, see [CFileDialog Sample: Logging Event Order](../../visual-cpp-samples.md).  
  
 To use a `CFileDialog` object, first create the object by using the `CFileDialog` constructor. After the dialog box has been constructed, you can set or modify any values in the [CFileDialog::m_ofn](#cfiledialog__m_ofn) structure to initialize the values or states of the dialog box controls. The `m_ofn` structure is of type `OPENFILENAME`. For more information, see the [OPENFILENAME](http://msdn.microsoft.com/library/windows/desktop/ms646839) structure in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 After you initialize the dialog box controls, call the [CFileDialog::DoModal](#cfiledialog__domodal) method to display the dialog box so that the user can type the path and file name. `DoModal` returns whether the user clicked the OK (IDOK) or the Cancel (IDCANCEL) button. If `DoModal` returns IDOK, you can use one of the `CFileDialog` public member functions to retrieve the information put in by the user.  
  
> [!NOTE]
>  Under [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)], multiple calls to [IFileDialog::SetFileTypes](http://msdn.microsoft.com/library/windows/desktop/bb775980) causes an error. The second call to `SetFileTypes` for any instance of a `CFileDialog` will return `E_UNEXPECTED` in [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)]. Some `CFileDialog` method functions call `SetFileTypes`. For example, two calls to `CFileDialog::DoModal` for the same instance of a `CFileDialog` generates [ASSERT](http://msdn.microsoft.com/library/1e70902d-d58c-4e7b-9f69-2aeb6cbe476c).  
  
 `CFileDialog` includes several protected members that let you do custom handling of share violations, file name validation, and list-box change notification. These protected members are callback functions that most applications do not have to use because default handling is performed automatically. Message-map entries for these functions are not required because they are standard virtual functions.  
  
 You can use the Windows [CommDlgExtendedError](http://msdn.microsoft.com/library/windows/desktop/ms646916) function to determine whether an error occurred during initialization of the dialog box and to learn more about the error.  
  
 The destruction of `CFileDialog` objects is handled automatically. You do not have to call [CDialog::EndDialog](../../mfc/reference/cdialog-class.md#cdialog__enddialog).  
  
 To let the user select multiple files, set the `OFN_ALLOWMULTISELECT` flag before you call `DoModal`. You must supply your own file name buffer to accommodate the returned list of multiple file names. Do this by replacing `m_ofn.lpstrFile` with a pointer to a buffer you have allocated, after you construct the `CFileDialog`, but before you call `DoModal`.  
  
 Additionally, you must set `m_ofn.nMaxFile` by using the number of characters in the buffer pointed to by `m_ofn.lpstrFile`. If you set the maximum number of files to be selected to `n`, the required buffer size is `n * (_MAX_PATH + 1) + 1`. The first item returned in the buffer is the path to the folder where the files were selected. For [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)]-style dialog boxes, the directory and file name strings are null-terminated, with an extra null character after the last file name. This format enables the Explorer-style dialog boxes to return long file names that include spaces. For old-style dialog boxes, the directory and file name strings are separated by spaces and the function uses short file names for file names with spaces.  
  
 The following example demonstrates how to use a buffer to retrieve and list multiple file names.  
  
 [!code-cpp[NVC_MFCFiles#23](../../atl-mfc-shared/reference/codesnippet/cpp/cfiledialog-class_1.cpp)]  
  
 To change the buffer size in response to the user selecting multiple file names, you must derive a new class from `CFileDialog` and override the [CFileDialog::OnFileNameChange](#cfiledialog__onfilenamechange) method.  
  
 If you derive a new class from `CFileDialog`, you can use a message map to handle any messages. To extend the default message handling, derive a class from `CFileDialog`, add a message map to the new class, and provide member functions for the new messages. You do not have to provide a hook function to customize the dialog box.  
  
 To customize the dialog box, derive a class from `CFileDialog`, provide a custom dialog box template, and add a message map to process the notification messages from the extended controls. Pass any unprocessed messages to the base class. You do not have to customize the hook function.  
  
 When you are using the [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)] style of the `CFileDialog`, you cannot use message maps and dialog box templates. Instead, you must use the COM interfaces for similar functionality.  
  
 For more information about how to use `CFileDialog`, see [Common Dialog Classes](../../mfc/common-dialog-classes.md).  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CDialog](../../mfc/reference/cdialog-class.md)  
  
 [CCommonDialog](../../mfc/reference/ccommondialog-class.md)  
  
 `CFileDialog`  
  
## Requirements  
 **Header:** afxdlgs.h  
  
##  <a name="cfiledialog__addcheckbutton"></a>  CFileDialog::AddCheckButton  
 Adds a check button to the dialog.  
  
```  
HRESULT AddCheckButton(
    DWORD dwIDCtl,  
    const CString& strLabel,  
    BOOL bChecked);
```  
  
### Parameters  
 `dwIDCtl`  
 The ID of the check button to add.  
  
 `strLabel`  
 The check button name.  
  
 `bChecked`  
 A Boolean indicating the current state of the check button. `TRUE` if checked; `FALSE` otherwise  
  
### Remarks  
  
##  <a name="cfiledialog__addcombobox"></a>  CFileDialog::AddComboBox  
 Adds a combo box to the dialog.  
  
```  
HRESULT AddComboBox(DWORD dwIDCtl);
```  
  
### Parameters  
 `dwIDCtl`  
 The ID of the combo box to add.  
  
### Remarks  
  
##  <a name="cfiledialog__addcontrolitem"></a>  CFileDialog::AddControlItem  
 Adds an item to a container control in the dialog.  
  
```  
HRESULT AddControlItem(
    DWORD dwIDCtl,  
    DWORD dwIDItem,  
    const CString& strLabel);
```  
  
### Parameters  
 `dwIDCtl`  
 The ID of the container control to add the item to.  
  
 `dwIDItem`  
 The ID of the item.  
  
 `strLabel`  
 Item's text.  
  
### Remarks  
  
##  <a name="cfiledialog__addeditbox"></a>  CFileDialog::AddEditBox  
 Adds an edit box to the dialog.  
  
```  
HRESULT AddEditBox(
    DWORD dwIDCtl,  
    const CString& strText);
```  
  
### Parameters  
 `dwIDCtl`  
 The ID of the edit box to add.  
  
 `strText`  
 The edit box name.  
  
### Remarks  
  
##  <a name="cfiledialog__addmenu"></a>  CFileDialog::AddMenu  
 Adds a menu to the dialog.  
  
```  
HRESULT AddMenu(
    DWORD dwIDCtl,  
    const CString& strLabel);
```  
  
### Parameters  
 `dwIDCtl`  
 The ID of the menu to add.  
  
 `strLabel`  
 The menu name.  
  
### Remarks  
  
##  <a name="cfiledialog__addplace"></a>  CFileDialog::AddPlace  
 Adds a folder to the list of places available for the user to open or save items.  
  
```  
void AddPlace(
    LPCWSTR lpszFolder,  
    FDAP fdap = FDAP_TOP) throw();

 
void AddPlace(
    IShellItem* psi,  
    FDAP fdap = FDAP_TOP) throw();
```  
  
### Parameters  
 `lpszFolder`  
 A path to the folder to be made available to the user. This can only be a folder.  
  
 `fdap`  
 Specifies where the folder is placed within the list.  
  
 `psi`  
 A pointer to an IShellItem that represents the folder to be made available to the user. This can only be a folder.  
  
### Remarks  
  
##  <a name="cfiledialog__addpushbutton"></a>  CFileDialog::AddPushButton  
 Adds a button to the dialog.  
  
```  
HRESULT AddPushButton(
    DWORD dwIDCtl,  
    const CString& strLabel);
```  
  
### Parameters  
 `dwIDCtl`  
 The ID of the button to add.  
  
 `strLabel`  
 The button name.  
  
### Remarks  
  
##  <a name="cfiledialog__addradiobuttonlist"></a>  CFileDialog::AddRadioButtonList  
 Adds an option button (also known as radio button) group to the dialog.  
  
```  
HRESULT AddRadioButtonList(DWORD dwIDCtl);
```  
  
### Parameters  
 `dwIDCtl`  
 The ID of the option button group to add.  
  
### Remarks  
  
##  <a name="cfiledialog__addseparator"></a>  CFileDialog::AddSeparator  
 Adds a separator to the dialog.  
  
```  
HRESULT AddSeparator(DWORD dwIDCtl);
```  
  
### Parameters  
 `dwIDCtl`  
 The ID of the separator add.  
  
### Remarks  
  
##  <a name="cfiledialog__addtext"></a>  CFileDialog::AddText  
 Adds text to the dialog.  
  
```  
HRESULT AddText(
    DWORD dwIDCtl,  
    const CString& strText);
```  
  
### Parameters  
 `dwIDCtl`  
 The ID of the text to add.  
  
 `strText`  
 The text name.  
  
### Remarks  
  
##  <a name="cfiledialog__applyofntoshelldialog"></a>  CFileDialog::ApplyOFNToShellDialog  
 Updates the current state of the [CFileDialog](../../mfc/reference/cfiledialog-class.md) based on the values stored in the `m_ofn` data structure.  
  
```  
void ApplyOFNToShellDialog();
```  
  
### Remarks  
 In versions of Windows before [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)], the member [OPENFILENAME](https://msdn.microsoft.com/library/ms911906.aspx) data structure was continuously synchronized with the state of the `CFileDialog`. Any changes to the [m_ofn](#cfiledialog__m_ofn) member variable were immediately reflected in the state of the dialog box. Also, any changes to the state of the dialog box immediately update the `m_ofn` member variable.  
  
 In [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)], the values in the `m_ofn` member variable and state of the `CFileDialog` are not guaranteed to be synchronized. This function forces the state of the `CFileDialog` to be updated to match the `m_ofn` structure. Windows calls this function automatically during [CFileDialog::DoModal](#cfiledialog__domodal).  
  
 For more information about how to use the `CFileDialog` class under [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)], see [CFileDialog Class](../../mfc/reference/cfiledialog-class.md).  
  
### Example  
  See the example for [CFileDialog::UpdateOFNFromShellDialog](#cfiledialog__updateofnfromshelldialog).  
  
##  <a name="cfiledialog__cfiledialog"></a>  CFileDialog::CFileDialog  
 Call this function to construct a standard Windows file dialog box.  
  
```  
explicit CFileDialog(
    BOOL bOpenFileDialog,  
    LPCTSTR lpszDefExt = NULL,  
    LPCTSTR lpszFileName = NULL,  
    DWORD dwFlags = OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT,  
    LPCTSTR lpszFilter = NULL,  
    CWnd* pParentWnd = NULL,  
    DWORD dwSize = 0,  
    BOOL bVistaStyle = TRUE);
```  
  
### Parameters  
 [in] `bOpenFileDialog`  
 The parameter that specifies what type of dialog box to create. Set it to `TRUE` to construct a **File Open** dialog box. Set it to `FALSE` to construct a **File Save As** dialog box.  
  
 [in] `lpszDefExt`  
 The default file name extension. If the user does not include a known extension (one that has an association on the user’s computer) in the Filename box, the extension specified by `lpszDefExt` is automatically appended to the file name. If this parameter is `NULL`, no extension is appended.  
  
 [in] `lpszFileName`  
 The initial file name that appears in the Filename box. If `NULL`, no initial file name appears.  
  
 [in] `dwFlags`  
 A combination of one or more flags that you can use to customize the dialog box. For a description of these flags, see the [OPENFILENAME](http://msdn.microsoft.com/library/windows/desktop/ms646839) structure in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]. If you modify the `m_ofn.Flags` structure member, use a bitwise-OR operator in your changes to keep the default behavior intact.  
  
 [in] `lpszFilter`  
 A series of string pairs that specify filters you can apply to the file. If you specify file filters, only files that match filter criteria will appear in the Files list. See the Remarks section for more information about how to work with file filters.  
  
 [in] `pParentWnd`  
 A pointer to the parent or owner window of the file dialog box.  
  
 [in] `dwSize`  
 The size of the `OPENFILENAME` structure. This value depends on the operating system version. MFC used this parameter to determine the appropriate kind of dialog box to create (for example, new [!INCLUDE[Win2kFamily](../../c-runtime-library/includes/win2kfamily_md.md)] dialog boxes instead of NT4 dialog boxes). The default size of 0 means that the MFC code will determine the correct dialog box size to use based on the operating system version on which the program is run.  
  
 [in] `bVistaStyle`  
 **Note** This parameter is available in Visual Studio 2008 and later and is will cause the new-style dialog to be used only if you are running in [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)] or later.  
  
 The parameter that specifies the style of the file dialog. Set it to `TRUE` to use the new Vista style file dialogs. Otherwise, the old style of dialog boxes will be used. See the Remarks section for more information about running under Vista.  
  
### Remarks  
 Either a **File Open** or **File Save As** dialog box is constructed, depending on the value of `bOpenFileDialog`.  
  
 Specifying a default extension using `lpszDefExt` may not produce the behavior that you expect, because it is seldom predictable what extensions have file associations on the user’s computer. If you need more control over the appending of a default extension, you can derive your own class from `CFileDialog`, and override the `CFileDialog::OnFileNameOK` method to perform your own extension handling.  
  
 To enable the user to select multiple files, set the `OFN_ALLOWMULTISELECT` flag before you call [DoModal](#cfiledialog__domodal). You must supply your own file name buffer to store the returned list of multiple file names. Do this by replacing `m_ofn.lpstrFile` with a pointer to a buffer you have allocated, after you construct the [CFileDialog](../../mfc/reference/cfiledialog-class.md), but before you call `DoModal`. Additionally, you must set `m_ofn.nMaxFile` with the number of characters in the buffer pointed to by `m_ofn.lpstrFile`. If you set the maximum number of files to be selected to `n`, the necessary buffer size is `n`*(_MAX_PATH + 1) + 1. For example:  
  
 [!code-cpp[NVC_MFCFiles#23](../../atl-mfc-shared/reference/codesnippet/cpp/cfiledialog-class_1.cpp)]  
  
 To enable the user to resize an Explorer-style dialog box by using either the mouse or keyboard, set the `OFN_ENABLESIZING` flag. Setting this flag is necessary only if you provide a hook procedure or custom template. The flag works only with an Explorer-style dialog box; old-style dialog boxes cannot be resized.  
  
 The `lpszFilter` parameter is used to determine the type of file name a file must have to be displayed in the file list. The first string in the string pair describes the filter; the second string indicates the file name extension to use. Multiple extensions may be specified by using a semicolon (the ';' character) as the delimiter. The string ends with two '&#124;' characters, followed by a `NULL` character. You can also use a [CString](../../atl-mfc-shared/using-cstring.md) object for this parameter.  
  
 For example, [!INCLUDE[ofprexcel](../../mfc/reference/includes/ofprexcel_md.md)] allows users to open files that have extensions .xlc (chart) or .xls (worksheet), among others. The filter for Excel could be written as:  
  
 [!code-cpp[NVC_MFCFiles#24](../../atl-mfc-shared/reference/codesnippet/cpp/cfiledialog-class_2.cpp)]  
  
 However, if you plan to use this string to directly update the `OPENFILENAME` structure, you should delimit your strings with the null character, '\0', instead of the vertical bars ('&#124;').  
  
 The `bVistaStyle` parameter is applicable only when running under [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)]. Under earlier versions of Windows, this parameter is ignored. If `bVistaStyle` is set to `TRUE`, when you compile a program with [!INCLUDE[vs_orcas_long](../../atl/reference/includes/vs_orcas_long_md.md)] or later, the new Vista style **File Dialog** will be used. Otherwise, the previous MFC style **File Dialog** will be used. See [CFileDialog Class](../../mfc/reference/cfiledialog-class.md) for more information.  
  
 Dialog templates are not supported on dialogs based on `bVistaStyle`  
  
### Example  
  See the example for [CFileDialog::DoModal](#cfiledialog__domodal).  
  
##  <a name="cfiledialog__domodal"></a>  CFileDialog::DoModal  
 Call this function to display the Windows common file dialog box and allow the user to browse files and directories and enter a filename.  
  
```  
virtual INT_PTR DoModal();
```  
  
### Return Value  
 **IDOK** or **IDCANCEL**. If **IDCANCEL** is returned, call the Windows [CommDlgExtendedError](http://msdn.microsoft.com/library/windows/desktop/ms646916) function to determine whether an error occurred.  
  
 **IDOK** and **IDCANCEL** are constants that indicate whether the user selected the OK or Cancel button.  
  
### Remarks  
 If you want to initialize the various file dialog-box options by setting members of the **m_ofn** structure, you should do this before calling `DoModal`, but after the dialog object is constructed.  
  
 For example, if you want to allow the user to select multiple files, set the `OFN_ALLOWMULTISELECT` flag before calling `DoModal`, as shown in the code example in [CFileDialog Class](../../mfc/reference/cfiledialog-class.md).  
  
 When the user clicks the dialog box's OK or Cancel buttons, or selects the Close option from the dialog box's control menu, control is returned to your application. You can then call other member functions to retrieve the settings or information the user inputs into the dialog box.  
  
 `DoModal` is a virtual function overridden from class `CDialog`.  
  
### Example  
 [!code-cpp[NVC_MFCFiles#25](../../atl-mfc-shared/reference/codesnippet/cpp/cfiledialog-class_3.cpp)]  
  
##  <a name="cfiledialog__enableopendropdown"></a>  CFileDialog::EnableOpenDropDown  
 Enables a drop-down list on the Open or Save button in the dialog.  
  
```  
HRESULT EnableOpenDropDown(DWORD dwIDCtl);
```  
  
### Parameters  
 `dwIDCtl`  
 The ID of the drop-down list.  
  
### Remarks  
  
##  <a name="cfiledialog__endvisualgroup"></a>  CFileDialog::EndVisualGroup  
 Stops the addition of elements to a visual group in the dialog.  
  
```  
HRESULT EndVisualGroup();
```  
  
### Return Value  
 Returns S_OK if successful; an error value otherwise.  
  
### Remarks  
  
##  <a name="cfiledialog__getcheckbuttonstate"></a>  CFileDialog::GetCheckButtonState  
 Retrieves the current state of a check button (check box) in the dialog.  
  
```  
HRESULT GetCheckButtonState(
    DWORD dwIDCtl,  
    BOOL& bChecked);
```  
  
### Parameters  
 `dwIDCtl`  
 The ID of the check box.  
  
 `bChecked`  
 The state of the check box. `TRUE` indicates checked; `FALSE` indicates unchecked.  
  
### Remarks  
  
##  <a name="cfiledialog__getcontrolitemstate"></a>  CFileDialog::GetControlItemState  
 Retrieves the current state of an item in a container control found in the dialog.  
  
```  
HRESULT GetControlItemState(
    DWORD dwIDCtl,  
    DWORD dwIDItem,  
    CDCONTROLSTATEF& dwState);
```  
  
### Parameters  
 `dwIDCtl`  
 The ID of the container control.  
  
 `dwIDItem`  
 The ID of the item.  
  
 `dwState`  
 A reference to a variable that receives one of more values from the CDCONTROLSTATE enumeration that indicates the current state of the control.  
  
### Remarks  
  
##  <a name="cfiledialog__getcontrolstate"></a>  CFileDialog::GetControlState  
 Retrieves the current visibility and enabled states of a given control.  
  
```  
HRESULT GetControlState(
    DWORD dwIDCtl,  
    CDCONTROLSTATEF& dwState);
```  
  
### Parameters  
 `dwIDCtl`  
 The ID of the control.  
  
 `dwState`  
 A reference to a variable that receives one or more values from the CDCONTROLSTATE enumeration that indicates the current state of the control.  
  
### Remarks  
  
##  <a name="cfiledialog__geteditboxtext"></a>  CFileDialog::GetEditBoxText  
 Retrieves the current text in an edit box control.  
  
```  
HRESULT GetEditBoxText(
    DWORD dwIDCtl,  
    CString& strText);
```  
  
### Parameters  
 `dwIDCtl`  
 The ID of the edit box.  
  
 `strText`  
 The text value.  
  
### Remarks  
  
##  <a name="cfiledialog__getfileext"></a>  CFileDialog::GetFileExt  
 Call this function to retrieve the extension of the filename entered into the dialog box.  
  
```  
CString GetFileExt() const;

 
```  
  
### Return Value  
 The extension of the filename.  
  
### Remarks  
 For example, if the name of the file entered is DATA.TXT, `GetFileExt` returns "TXT".  
  
 If `m_ofn.Flags` has the `OFN_ALLOWMULTISELECT` flag set, this string contains a sequence of null-terminated strings, with the first string being the directory path of the file group selected, followed by the names of all files selected by the user. To retrieve file pathnames, use the [GetStartPosition](#cfiledialog__getstartposition) and [GetNextPathName](#cfiledialog__getnextpathname) member functions.  
  
##  <a name="cfiledialog__getfilename"></a>  CFileDialog::GetFileName  
 Call this function to retrieve the name of the filename entered in the dialog box.  
  
```  
CString GetFileName() const;

 
```  
  
### Return Value  
 The name of the file.  
  
### Remarks  
 The name of the file includes both the prefix and the extension. For example, `GetFileName` will return "TEXT.DAT" for the file C:\FILES\TEXT.DAT.  
  
 If `m_ofn.Flags` has the `OFN_ALLOWMULTISELECT` flag set, you should call [GetStartPosition](#cfiledialog__getstartposition) and [GetNextPathName](#cfiledialog__getnextpathname) to retrieve a file pathname.  
  
##  <a name="cfiledialog__getfiletitle"></a>  CFileDialog::GetFileTitle  
 Call this function to retrieve the title of the file entered in the dialog box.  
  
```  
CString GetFileTitle() const;

 
```  
  
### Return Value  
 The title of the file.  
  
### Remarks  
 The title of the file includes only its prefix, without the path or the extension. For example, `GetFileTitle` will return "TEXT" for the file C:\FILES\TEXT.DAT.  
  
 If `m_ofn.Flags` has the `OFN_ALLOWMULTISELECT` flag set, this string contains a sequence of null-terminated strings, with the first string being the directory path of the file group selected, followed by the names of all files selected by the user. For this reason, use the [GetStartPosition](#cfiledialog__getstartposition) and [GetNextPathName](#cfiledialog__getnextpathname) member functions to retrieve the next file name in the list.  
  
### Example  
  See the example for [CFileDialog::DoModal](#cfiledialog__domodal).  
  
##  <a name="cfiledialog__getfolderpath"></a>  CFileDialog::GetFolderPath  
 Call this member function to retrieve the path of the currently open folder or directory for an Explorer-style Open or Save As common dialog box.  
  
```  
CString GetFolderPath() const;

 
```  
  
### Return Value  
 A [CString](../../atl-mfc-shared/reference/cstringt-class.md) object containing the currently open folder or directory.  
  
### Remarks  
 The dialog box must have been created with the **OFN_EXPLORER** style; otherwise, the method will fail with an assertion.  
  
 You can call this method only while the dialog box is being displayed. After the dialog box has been closed, this function will no longer work, and the method will fail with an assertion.  
  
##  <a name="cfiledialog__getifiledialogcustomize"></a>  CFileDialog::GetIFileDialogCustomize  
 Retrieves a pointer to the internal COM object for a given [CFileDialog](../../mfc/reference/cfiledialog-class.md).  
  
```  
IFileDialogCustomize* GetIFileDialogCustomize();
```  
  
### Return Value  
 The pointer to the internal COM object for the `CFileDialog`. It is your responsibility to release this pointer appropriately.  
  
### Remarks  
 Use this function only under [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)] with an object that has `bVistaStyle` set to `true`. If you use this function when `bVistaStyle` is `false`, it will return `NULL` in release mode and throw an assertion in debug mode.  
  
 For more information about the `IFileDialogCustomize` interface,  see [IFileDialogCustomize](http://msdn.microsoft.com/library/windows/desktop/bb775912).  
  
### Example  
 This example retrieves the internal COM object. To run this code example, you must compile it under [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)].  
  
 [!code-cpp[NVC_MFC_CFileDialog#4](../../mfc/reference/codesnippet/cpp/cfiledialog-class_4.cpp)]  
  
##  <a name="cfiledialog__getifileopendialog"></a>  CFileDialog::GetIFileOpenDialog  
 Retrieves a pointer to the internal COM object for a given `CFileDialog`.  
  
```  
IFileOpenDialog* GetIFileOpenDialog();
```  
  
### Return Value  
 The pointer to the internal COM object for the `CFileDialog`. It is your responsibility to release this pointer appropriately.  
  
### Remarks  
 Use this function only under [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)] with an object that has `bVistaStyle` set to `true`. This function returns `NULL` if the `CFileDialog` is not an **Open** dialog box or if `bVistaStyle` is set to `false`. In this final case, the function only returns `NULL` in release mode - in debug mode it will throw an assertion.  
  
 For more information about the `IFileOpenDialog` interface, see [IFileOpenDialog](http://msdn.microsoft.com/library/windows/desktop/bb775834).  
  
### Example  
 This example retrieves the internal COM object. To run this code, you must compile it under [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)].  
  
 [!code-cpp[NVC_MFC_CFileDialog#2](../../mfc/reference/codesnippet/cpp/cfiledialog-class_5.cpp)]  
  
##  <a name="cfiledialog__getifilesavedialog"></a>  CFileDialog::GetIFileSaveDialog  
 Retrieves a pointer to the internal COM object for a given `CFileDialog`.  
  
```  
IFileSaveDialog* GetIFileSaveDialog();
```  
  
### Return Value  
 The pointer to the internal COM object for the `CFileDialog`. It is your responsibility to release this pointer appropriately.  
  
### Remarks  
 Use this function only under [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)] with an object that has `bVistaStyle` set to `true`. This function will return `NULL` if the `CFileDialog` is not a **Save** dialog box or if `bVistaStyle` is set to `false`. In this final case, the function only returns `NULL` in release mode - in debug mode it will throw an assertion.  
  
 For more information about the `IFileSaveDialog` interface, see [IFileSaveDialog](http://msdn.microsoft.com/library/windows/desktop/bb775688).  
  
### Example  
 This example retrieves the internal COM object. To run this code example, you must compile it under [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)].  
  
 [!code-cpp[NVC_MFC_CFileDialog#3](../../mfc/reference/codesnippet/cpp/cfiledialog-class_6.cpp)]  
  
##  <a name="cfiledialog__getnextpathname"></a>  CFileDialog::GetNextPathName  
 Call this function to retrieve the next filename from the group selected in the dialog box.  
  
```  
CString GetNextPathName(POSITION& pos) const;

 
```  
  
### Parameters  
 `pos`  
 A reference to a **POSITION** value returned by a previous `GetNextPathName` or `GetStartPosition` function call. **NULL** if the end of the list has been reached.  
  
### Return Value  
 The full path of the file.  
  
### Remarks  
 The path of the filename includes the file's title plus the entire directory path. For example, `GetNextPathName` will return "C:\FILES\TEXT.DAT" for the file C:\FILES\TEXT.DAT. You can use `GetNextPathName` in a forward iteration loop if you establish the initial position with a call to `GetStartPosition`.  
  
 If the selection consists of only one file, that file name will be returned.  
  
##  <a name="cfiledialog__getofn"></a>  CFileDialog::GetOFN  
 Retrieves the associated **OPENFILENAME** structure.  
  
```  
const OPENFILENAME& GetOFN() const;

 
 
OPENFILENAME& GetOFN();
```  
  
### Return Value  
 An [OPENFILENAME](http://msdn.microsoft.com/library/windows/desktop/ms646839) structure.  
  
### Remarks  
 Use the second version of this function to initialize the appearance of a **File Open** or **File Save As** dialog box after it is constructed but before it is displayed with the `DoModal` member function. For example, you can set the **lpstrTitle** member of **m_ofn** to the caption you want the dialog box to have.  
  
##  <a name="cfiledialog__getpathname"></a>  CFileDialog::GetPathName  
 Call this function to retrieve the full path of the file entered in the dialog box.  
  
```  
CString GetPathName() const;

 
```  
  
### Return Value  
 The full path of the file.  
  
### Remarks  
 The path of the filename includes the file's title plus the entire directory path. For example, `GetPathName` will return "C:\FILES\TEXT.DAT" for the file C:\FILES\TEXT.DAT.  
  
 If `m_ofn.Flags` has the `OFN_ALLOWMULTISELECT` flag set, this string contains a sequence of null-teminated strings, with the first string being the directory path of the file group selected, followed by the names of all files selected by the user. For this reason, use the [GetStartPosition](#cfiledialog__getstartposition) and [GetNextPathName](#cfiledialog__getnextpathname) member functions to retrieve the next file name in the list.  
  
### Example  
  See the example for [CFileDialog::DoModal](#cfiledialog__domodal).  
  
##  <a name="cfiledialog__getreadonlypref"></a>  CFileDialog::GetReadOnlyPref  
 Call this function to determine whether the Read Only check box has been selected in the Windows standard File Open and File Save As dialog boxes.  
  
```  
BOOL GetReadOnlyPref() const;

 
```  
  
### Return Value  
 Non-zero if the Read Only check box in the dialog box is selected; otherwise 0.  
  
### Remarks  
 You can hide the Read Only check box by setting the `OFN_HIDEREADONLY` style in the [CFileDialog](../../mfc/reference/cfiledialog-class.md) constructor.  
  
> [!NOTE]
> [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)] style `CFileDialog` objects do not support this function. Attempting to use this function on a [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)] style `CFileDialog` will throw [CNotSupportedException](../../mfc/reference/cnotsupportedexception-class.md). See [CFileDialog Class](../../mfc/reference/cfiledialog-class.md) for more information.  
  
##  <a name="cfiledialog__getresult"></a>  CFileDialog::GetResult  
 Retrieves the choice that the user made in the dialog.  
  
```  
IShellItem* GetResult() throw();
```  
  
### Return Value  
 A pointer to an IShellItem that represents the user's choice.  
  
### Remarks  
  
##  <a name="cfiledialog__getresults"></a>  CFileDialog::GetResults  
 Retrieves the user's choices in a dialog that allows multiple selection.  
  
```  
IShellItemArray* GetResults() throw();
```  
  
### Return Value  
 A pointer to an IShellItemArray through which the items selected in the dialog can be accessed.  
  
### Remarks  
  
##  <a name="cfiledialog__getselectedcontrolitem"></a>  CFileDialog::GetSelectedControlItem  
 Retrieves a particular item from the specified container control in the dialog.  
  
```  
HRESULT GetSelectedControlItem(
    DWORD dwIDCtl,  
    DWORD& dwIDItem);
```  
  
### Parameters  
 `dwIDCtl`  
 The ID of the container control.  
  
 `dwIDItem`  
 The ID of the item that the user selected in the control.  
  
### Remarks  
  
##  <a name="cfiledialog__getstartposition"></a>  CFileDialog::GetStartPosition  
 Call this member function to retrieve the position of the first file pathname in the list, if `m_ofn.Flags` has the `OFN_ALLOWMULTISELECT` flag set.  
  
```  
POSITION GetStartPosition() const;

 
```  
  
### Return Value  
 A **POSITION** value that can be used for iteration; **NULL** if the list is empty.  
  
##  <a name="cfiledialog__hidecontrol"></a>  CFileDialog::HideControl  
 Call this member function to hide the specified control in an Explorer-style Open or Save As common dialog box.  
  
```  
void HideControl(int nID);
```  
  
### Parameters  
 `nID`  
 The ID of the control to hide.  
  
### Remarks  
 The dialog box must have been created with the **OFN_EXPLORER** style; otherwise, the function will fail with an assertion.  
  
##  <a name="cfiledialog__ispickfoldersmode"></a>  CFileDialog::IsPickFoldersMode  
 Determines if the current dialog is in folder picker mode.  
  
```  
BOOL IsPickFoldersMode() const;

 
```  
  
### Return Value  
 `TRUE` if the dialog is in folder picker mode; otherwise `FALSE`.  
  
### Remarks  
  
##  <a name="cfiledialog__m_ofn"></a>  CFileDialog::m_ofn  
 `m_ofn` is a structure of type `OPENFILENAME`. The data in this structure represents the current state of the `CFileDialog`.  
  
### Remarks  
 Use this structure to initialize the appearance of a **File Open** or **File Save As** dialog box after you construct it but before you display it with the [DoModal](#cfiledialog__domodal) method. For example, you can set the `lpstrTitle` member of `m_ofn` to the caption you want the dialog box to have.  
  
 With the [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)] style of [CFileDialog](../../mfc/reference/cfiledialog-class.md), `m_ofn` is not guaranteed to always match the state of the dialog box. It is synchronized with the dialog box in earlier versions of Windows. See [CFileDialog::ApplyOFNToShellDialog](#cfiledialog__applyofntoshelldialog) and [CFileDialog::UpdateOFNFromShellDialog](#cfiledialog__updateofnfromshelldialog) for more information about synchronizing the `m_ofn` structure and the `CFileDialog` state under [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)].  
  
 [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)] style file dialogs do not support certain members and flags of the `CFileDialog`. As a result, these will have no effect.  
  
 The following is a list of the members that are not supported by [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)]:  
  
- `lpstrCustomFilter`  
  
- `lpstrInitialDir`  
  
- `lCustData`  
  
- `lpfnHook`  
  
- `lpTemplateName`  
  
 The following flags are not supported and therefore have no effect when you use the [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)] style of `CFileDialog`:  
  
-   OFN_ENABLEHOOK  
  
-   OFN_ENABLEINCLUDENOTIFY  
  
-   OFN_ENABLETEMPLATE  
  
-   OFN_ENABLETEMPLATEHANDLE  
  
-   OFN_EXPLORER  
  
-   OFN_EXTENSIONDIFFERENT  
  
-   OFN_HIDEREADONLY  
  
-   OFN_LONGNAMES - effectively always on in [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)]  
  
-   OFN_NOLONGNAMES - effectively always off in [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)]  
  
-   OFN_NONETWORKBUTTON - effectively always on in [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)]  
  
-   OFN_READONLY  
  
-   OFN_SHOWHELP  
  
 For more information about this structure, see the [OPENFILENAME](http://msdn.microsoft.com/library/windows/desktop/ms646839) structure in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]. For more information about the different behavior of the `CFileDialog` under [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)], see [CFileDialog Class](../../mfc/reference/cfiledialog-class.md).  
  
##  <a name="cfiledialog__makeprominent"></a>  CFileDialog::MakeProminent  
 Places a control in the dialog so that it stands out compared to other controls.  
  
```  
HRESULT MakeProminent(DWORD dwIDCtl);
```  
  
### Parameters  
 `dwIDCtl`  
 The ID of the control.  
  
### Remarks  
  
##  <a name="cfiledialog__onbuttonclicked"></a>  CFileDialog::OnButtonClicked  
 Called when the button is clicked.  
  
```  
virtual void OnButtonClicked(DWORD dwIDCtl);
```  
  
### Parameters  
 `dwIDCtl`  
 The ID of the button.  
  
### Remarks  
  
##  <a name="cfiledialog__oncheckbuttontoggled"></a>  CFileDialog::OnCheckButtonToggled  
 Called when the check box is checked or unchecked.  
  
```  
virtual void OnCheckButtonToggled(
    DWORD dwIDCtl,  
    BOOL bChecked);
```  
  
### Parameters  
 `dwIDCtl`  
 The ID of the check box.  
  
 `bChecked`  
 Checked or unchecked.  
  
### Remarks  
  
##  <a name="cfiledialog__oncontrolactivating"></a>  CFileDialog::OnControlActivating  
 Called when the control is activated.  
  
```  
virtual void OnControlActivating(DWORD dwIDCtl);
```  
  
### Parameters  
 `dwIDCtl`  
 The ID of the control.  
  
### Remarks  
  
##  <a name="cfiledialog__onfilenamechange"></a>  CFileDialog::OnFileNameChange  
 Override this method if you want to handle the `WM_NOTIFY``CDN_SELCHANGE` message.  
  
```  
virtual void OnFileNameChange();
```  
  
### Remarks  
 The system sends the `CDN_SELCHANGE` message when the user selects a new file or folder in the file list of the **Open** or **Save As** dialog box. Override this method if you want to perform any actions in response to this message.  
  
 The system sends this message only if the dialog box was created with the OFN_EXPLORER flag turned on. For more information about the notification, see [CDN_SELCHANGE](http://msdn.microsoft.com/library/windows/desktop/ms646865). For information about the OFN_EXPLORER flag, see the [OPENFILENAME](http://msdn.microsoft.com/library/windows/desktop/ms646839) structure and [Open and Save As Dialog Boxes](http://msdn.microsoft.com/library/windows/desktop/ms646960).  
  
##  <a name="cfiledialog__onfilenameok"></a>  CFileDialog::OnFileNameOK  
 Override this function only if you want to provide custom validation of filenames that are entered into a common file dialog box.  
  
```  
virtual BOOL OnFileNameOK();
```  
  
### Return Value  
 1 if the filename is not a valid filename; otherwise 0.  
  
### Remarks  
 This function allows you to reject a filename for any application-specific reason. Normally, you do not need to use this function because the framework provides default validation of filenames and displays a message box if an invalid filename is entered.  
  
 If 1 is returned, the dialog box will remain displayed for the user to enter another filename. The dialog procedure dismisses the dialog if the return is 0. Other nonzero return values are currently reserved and should not be used.  
  
##  <a name="cfiledialog__onfolderchange"></a>  CFileDialog::OnFolderChange  
 Override this function to handle the **WM_NOTIFYCDN_FOLDERCHANGE** message.  
  
```  
virtual void OnFolderChange();
```  
  
### Remarks  
 The notification message is sent when a new folder is opened in the Open or Save As dialog box.  
  
 Notification is sent only if the dialog box was created with the OFN_EXPLORER style. For more information about the notification, see [CDN_FOLDERCHANGE](http://msdn.microsoft.com/library/windows/desktop/ms646859). For information about the OFN_EXPLORER style, see the [OPENFILENAME](http://msdn.microsoft.com/library/windows/desktop/ms646839) structure and [Open and Save As Dialog Boxes](http://msdn.microsoft.com/library/windows/desktop/ms646960).  
  
##  <a name="cfiledialog__oninitdone"></a>  CFileDialog::OnInitDone  
 Override this function to handle the `WM_NOTIFY``CDN_INITDONE` message.  
  
```  
virtual void OnInitDone();
```  
  
### Remarks  
 The system sends this notification message when the system has finished arranging controls in the **Open** or **Save As** dialog box to make room for the controls of the child dialog box.  
  
 The system sends this only if the dialog box was created with the OFN_EXPLORER style. For more information about the notification, see [CDN_INITDONE](http://msdn.microsoft.com/library/windows/desktop/ms646863). For information about the OFN_EXPLORER style, see the [OPENFILENAME](http://msdn.microsoft.com/library/windows/desktop/ms646839) structure and [Open and Save As Dialog Boxes](http://msdn.microsoft.com/library/windows/desktop/ms646960).  
  
> [!NOTE]
> [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)] style file dialogs do not support this function. Attempting to use this function on a [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)] style file dialog will throw [CNotSupportedException](../../mfc/reference/cnotsupportedexception-class.md). See [CFileDialog Class](../../mfc/reference/cfiledialog-class.md) for more information.  
  
##  <a name="cfiledialog__onitemselected"></a>  CFileDialog::OnItemSelected  
 Called when the container item is selected.  
  
```  
virtual void OnItemSelected(
    DWORD dwIDCtl,  
    DWORD dwIDItem);
```  
  
### Parameters  
 `dwIDCtl`  
 The ID of the container control.  
  
 `dwIDItem`  
 The ID of the item.  
  
### Remarks  
  
##  <a name="cfiledialog__onlbselchangednotify"></a>  CFileDialog::OnLBSelChangedNotify  
 This function is called whenever the current selection in a list box is about to change.  
  
```  
virtual void OnLBSelChangedNotify(
    UINT nIDBox,  
    UINT iCurSel,  
    UINT nCode);
```  
  
### Parameters  
 *nIDBox*  
 The ID of the list box or combo box in which the selection occurred.  
  
 `iCurSel`  
 The index of the current selection.  
  
 `nCode`  
 The control notification code. This parameter must have one of the following values:  
  
- **CD_LBSELCHANGE** Specifies `iCurSel` is the selected item in a single-selection list box.  
  
- **CD_LBSELSUB** Specifies that `iCurSel` is no longer selected in a multiselection list box.  
  
- **CD_LBSELADD** Specifies that `iCurSel` is selected in a multiselection list box.  
  
- **CD_LBSELNOITEMS** Specifies that no selection exists in a multiselection list box.  
  
### Remarks  
 Override this function to provide custom handling of selection changes in the list box. For example, you can use this function to display the access rights or date-last-modified of each file the user selects.  
  
##  <a name="cfiledialog__onshareviolation"></a>  CFileDialog::OnShareViolation  
 Override this function to provide custom handling of share violations.  
  
```  
virtual UINT OnShareViolation(LPCTSTR lpszPathName);
```  
  
### Parameters  
 `lpszPathName`  
 The path of the file on which the share violation occurred.  
  
### Return Value  
 One of the following values:  
  
- **OFN_SHAREFALLTHROUGH** The filename is returned from the dialog box.  
  
- **OFN_SHARENOWARN** No further action needs to be taken.  
  
- **OFN_SHAREWARN** The user receives the standard warning message for this error.  
  
### Remarks  
 Normally, you do not need to use this function because the framework provides default checking of share violations and displays a message box if a share violation occurs.  
  
 If you want to disable share violation checking, use the bitwise OR operator to combine the flag **OFN_SHAREAWARE** with `m_ofn.Flags`.  
  
##  <a name="cfiledialog__ontypechange"></a>  CFileDialog::OnTypeChange  
 Override this function to handle the **WM_NOTIFYCDN_TYPECHANGE** message.  
  
```  
virtual void OnTypeChange();
```  
  
### Remarks  
 The notification message is sent when the user selects a new file type from the list of file types in the Open or Save As dialog box.  
  
 Notification is sent only if the dialog box was created with the OFN_EXPLORER style. For more information about the notification, see [CDN_TYPECHANGE](http://msdn.microsoft.com/library/windows/desktop/ms646868). For information about the OFN_EXPLORER style, see the [OPENFILENAME](http://msdn.microsoft.com/library/windows/desktop/ms646839) structure and [Open and Save As Dialog Boxes](http://msdn.microsoft.com/library/windows/desktop/ms646960).  
  
##  <a name="cfiledialog__removecontrolitem"></a>  CFileDialog::RemoveControlItem  
 Removes an item from a container control in the dialog.  
  
```  
HRESULT RemoveControlItem(
    DWORD dwIDCtl,  
    DWORD dwIDItem);
```  
  
### Parameters  
 `dwIDCtl`  
 The ID of the container control to remove the item from.  
  
 `dwIDItem`  
 The ID of the item.  
  
### Remarks  
  
##  <a name="cfiledialog__setcheckbuttonstate"></a>  CFileDialog::SetCheckButtonState  
 Sets the current state of a check button (check box) in the dialog.  
  
```  
HRESULT SetCheckButtonState(
    DWORD dwIDCtl,  
    BOOL bChecked);
```  
  
### Parameters  
 `dwIDCtl`  
 The ID of the check box.  
  
 `bChecked`  
 The state of the check box. `TRUE` indicates checked; `FALSE` indicates Unchecked.  
  
### Remarks  
  
##  <a name="cfiledialog__setcontrolitemstate"></a>  CFileDialog::SetControlItemState  
 Sets the current state of an item in a container control found in the dialog.  
  
```  
HRESULT SetControlItemState(
    DWORD dwIDCtl,  
    DWORD dwIDItem,  
    CDCONTROLSTATEF dwState);
```  
  
### Parameters  
 `dwIDCtl`  
 The ID of the container control.  
  
 `dwIDItem`  
 The ID of the item.  
  
 `dwState`  
 One or more values from the CDCONTROLSTATE enumeration that indicate the new state of the control.  
  
### Remarks  
  
##  <a name="cfiledialog__setcontrolitemtext"></a>  CFileDialog::SetControlItemText  
 Sets the text of a control item. For example, the text that accompanies a radio button or an item in a menu.  
  
```  
HRESULT SetControlItemText(
    DWORD dwIDCtl,  
    DWORD dwIDItem,  
    const CString& strLabel);
```  
  
### Parameters  
 `dwIDCtl`  
 The ID of the container control.  
  
 `dwIDItem`  
 The ID of the item.  
  
 `strLabel`  
 Item's text.  
  
### Remarks  
  
##  <a name="cfiledialog__setcontrollabel"></a>  CFileDialog::SetControlLabel  
 Sets the text associated with a control, such as button text or an edit box label.  
  
```  
HRESULT SetControlLabel(
    DWORD dwIDCtl,  
    const CString& strLabel);
```  
  
### Parameters  
 `dwIDCtl`  
 The ID of the control.  
  
 `strLabel`  
 The control name.  
  
### Remarks  
  
##  <a name="cfiledialog__setcontrolstate"></a>  CFileDialog::SetControlState  
 Sets the current visibility and enabled states of a given control.  
  
```  
HRESULT SetControlState(
    DWORD dwIDCtl,  
    CDCONTROLSTATEF dwState);
```  
  
### Parameters  
 `dwIDCtl`  
 The ID of the control.  
  
 `dwState`  
 One or more values from the CDCONTROLSTATE enumeration that indicate the current state of the control.  
  
### Remarks  
  
##  <a name="cfiledialog__setcontroltext"></a>  CFileDialog::SetControlText  
 Call this method to set the text for the specified control in an Explorer-style **Open** or **Save As** dialog box.  
  
```  
void SetControlText(
    int nID,  
    LPCSTR lpsz);

 
void SetControlText(
    int nID,  
    const wchar_t *lpsz);
```  
  
### Parameters  
 [in] `nID`  
 The ID of the control for which to set the text.  
  
 [in] `lpsz`  
 A pointer to the string that contains the text to set for the control.  
  
### Remarks  
 Both versions of this function are valid for applications that use Unicode. However, only the version with the LPCSTR type is valid for applications that use [!INCLUDE[vcpransi](../../atl-mfc-shared/reference/includes/vcpransi_md.md)].  
  
 To use this method, you must create the dialog box with the OFN_EXPLORER style. Otherwise, the function will fail with an assertion.  
  
##  <a name="cfiledialog__setdefext"></a>  CFileDialog::SetDefExt  
 Call this function to set the default file name extension for an Explorer-style Open or Save As common dialog box.  
  
```  
void SetDefExt(LPCSTR lpsz);
```  
  
### Parameters  
 `lpsz`  
 A pointer to a string containing the default extension to use for the dialog box object. This string must not contain a period (.).  
  
### Remarks  
 The dialog box must have been created with the **OFN_EXPLORER** style; otherwise, the function will fail with an assertion.  
  
##  <a name="cfiledialog__seteditboxtext"></a>  CFileDialog::SetEditBoxText  
 Sets the current text in an edit box control.  
  
```  
HRESULT SetEditBoxText(
    DWORD dwIDCtl,  
    const CString& strText);
```  
  
### Parameters  
 `dwIDCtl`  
 The ID of the edit box.  
  
 `strText`  
 The text value.  
  
### Remarks  
  
##  <a name="cfiledialog__setproperties"></a>  CFileDialog::SetProperties  
 Provides a property store that defines the default values to be used for the item being saved.  
  
```  
BOOL SetProperties(LPCWSTR lpszPropList);
```  
  
### Parameters  
 `lpszPropList`  
 A list of predefined properties separated by ";". For a list of the flags, see the `Flags` section of [OPENFILENAME](http://msdn.microsoft.com/en-us/8cecfd45-f7c1-4f8d-81a0-4e7fecc3b104).  
  
### Remarks  
  
##  <a name="cfiledialog__setselectedcontrolitem"></a>  CFileDialog::SetSelectedControlItem  
 Sets the selected state of a particular item in an option button group or a combo box found in the dialog.  
  
```  
HRESULT SetSelectedControlItem(
    DWORD dwIDCtl,  
    DWORD dwIDItem);
```  
  
### Parameters  
 `dwIDCtl`  
 The ID of the container control.  
  
 `dwIDItem`  
 The ID of the item that the user selected in the control.  
  
### Remarks  
  
##  <a name="cfiledialog__settemplate"></a>  CFileDialog::SetTemplate  
 Sets the dialog box template for the [CFileDialog](../../mfc/reference/cfiledialog-class.md) object.  
  
```  
void SetTemplate(
    UINT nWin3ID,  
    UINT nWin4ID);

 
void SetTemplate(
    LPCTSTR lpWin3ID,  
    LPCTSTR lpWin4ID);
```  
  
### Parameters  
 [in] `nWin3ID`  
 Contains the ID number of the template resource for the non-Explorer `CFileDialog` object. This template is only used on Windows NT 3.51 or when the OFN_EXPLORER style is not present.  
  
 [in] `nWin4ID`  
 Contains the ID number of the template resource for the Explorer `CFileDialog` object. This template is used only on [!INCLUDE[WinNt4Family](../../mfc/reference/includes/winnt4family_md.md)] and later versions, Windows 95 and later versions, or when the OFN_EXPLORER style is present.  
  
 [in] `lpWin3ID`  
 Contains the name of the template resource for the non-Explorer `CFileDialog` object. This template is only used on Windows NT 3.51 or when the OFN_EXPLORER style is not present.  
  
 [in] `lpWin4ID`  
 Contains the name of the template resource of the Explorer `CFileDialog` object. This template is used only on [!INCLUDE[WinNt4Family](../../mfc/reference/includes/winnt4family_md.md)] and later versions, Windows 95 and later versions, or when the OFN_EXPLORER style is present.  
  
### Remarks  
 The system will use only one of the specified templates. The system determines which template to use based on the presence of the OFN_EXPLORER style and the operating system that the application is running on. By specifying both a non-Explorer and Explorer-style template, it is easy to support Windows NT 3.51, [!INCLUDE[WinNt4Family](../../mfc/reference/includes/winnt4family_md.md)] and later versions, and Windows 95 and later versions.  
  
> [!NOTE]
> [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)] style file dialog boxes do not support this function. Attempting to use this function on a [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)] style file dialog box will throw [CNotSupportedException](../../mfc/reference/cnotsupportedexception-class.md). See [CFileDialog Class](../../mfc/reference/cfiledialog-class.md) for more information. An alternative is to use a customized dialog. For more information about using a custom `CFileDialog`, see [IFileDialogCustomize](http://msdn.microsoft.com/library/windows/desktop/bb775912).  
  
##  <a name="cfiledialog__startvisualgroup"></a>  CFileDialog::StartVisualGroup  
 Declares a visual group in the dialog. Subsequent calls to any "add" method add those elements to this group.  
  
```  
HRESULT StartVisualGroup(
    DWORD dwIDCtl,  
    const CString& strLabel);
```  
  
### Parameters  
 `dwIDCtl`  
 The ID of the visual group.  
  
 `strLabel`  
 The group name.  
  
### Remarks  
  
##  <a name="cfiledialog__updateofnfromshelldialog"></a>  CFileDialog::UpdateOFNFromShellDialog  
 Updates the `m_ofn` data structure of the [CFileDialog](../../mfc/reference/cfiledialog-class.md) based on the current state of the internal object.  
  
```  
void UpdateOFNFromShellDialog();
```  
  
### Remarks  
 In versions of Windows before [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)], the member [OPENFILENAME](https://msdn.microsoft.com/library/ms911906.aspx) data structure was continuously synchronized with the state of the `CFileDialog`. Any changes to the [m_ofn](#cfiledialog__m_ofn) member variable directly affected the state of the dialog box. Also, any changes to the state of the dialog immediately updated the m_ofn member variable.  
  
 In [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)], the `m_ofn` data structure is not automatically updated. To guarantee the accuracy of the data in the `m_ofn` member variable, you should call the `UpdateOFNFromShellDialog` function before accessing the data. Windows calls this function automatically during the processing of [IFileDialog::OnFileOK](http://msdn.microsoft.com/library/windows/desktop/bb775879).  
  
 For more information about how to use the `CFileDialog` class under [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)], see [CFileDialog Class](../../mfc/reference/cfiledialog-class.md).  
  
### Example  
 This example updates the `CFileDialog` before displaying it. Before updating the `m_ofn` member variable, we need to synchronize it to the current state of the dialog box.  
  
 [!code-cpp[NVC_MFC_CFileDialog#1](../../mfc/reference/codesnippet/cpp/cfiledialog-class_7.cpp)]  
  
## See Also  
 [CCommonDialog Class](../../mfc/reference/ccommondialog-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)

