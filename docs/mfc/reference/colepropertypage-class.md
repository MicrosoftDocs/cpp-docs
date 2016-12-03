---
title: "COlePropertyPage Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "COlePropertyPage"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "OLE property pages"
  - "custom controls [MFC], properties"
  - "COlePropertyPage class"
  - "properties [C++], displaying"
  - "displaying properties"
  - "property pages, OLE"
ms.assetid: e9972872-8e6b-4550-905e-d36a274d64dc
caps.latest.revision: 23
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
# COlePropertyPage Class
Used to display the properties of a custom control in a graphical interface, similar to a dialog box.  
  
## Syntax  
  
```  
class AFX_NOVTABLE COlePropertyPage : public CDialog  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[COlePropertyPage::COlePropertyPage](#colepropertypage__colepropertypage)|Constructs a `COlePropertyPage` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[COlePropertyPage::GetControlStatus](#colepropertypage__getcontrolstatus)|Indicates whether the user has modified the value in the control.|  
|[COlePropertyPage::GetObjectArray](#colepropertypage__getobjectarray)|Returns the array of objects being edited by the property page.|  
|[COlePropertyPage::GetPageSite](#colepropertypage__getpagesite)|Returns a pointer to the property page's `IPropertyPageSite` interface.|  
|[COlePropertyPage::IgnoreApply](#colepropertypage__ignoreapply)|Determines which controls do not enable the Apply button.|  
|[COlePropertyPage::IsModified](#colepropertypage__ismodified)|Indicates whether the user has modified the property page.|  
|[COlePropertyPage::OnEditProperty](#colepropertypage__oneditproperty)|Called by the framework when the user edits a property.|  
|[COlePropertyPage::OnHelp](#colepropertypage__onhelp)|Called by the framework when the user invokes help.|  
|[COlePropertyPage::OnInitDialog](#colepropertypage__oninitdialog)|Called by the framework when the property page is initialized.|  
|[COlePropertyPage::OnObjectsChanged](#colepropertypage__onobjectschanged)|Called by the framework when another OLE control, with new properties, is chosen.|  
|[COlePropertyPage::OnSetPageSite](#colepropertypage__onsetpagesite)|Called by the framework when the property frame provides the page's site.|  
|[COlePropertyPage::SetControlStatus](#colepropertypage__setcontrolstatus)|Sets a flag indicating whether the user has modified the value in the control.|  
|[COlePropertyPage::SetDialogResource](#colepropertypage__setdialogresource)|Sets the property page's dialog resource.|  
|[COlePropertyPage::SetHelpInfo](#colepropertypage__sethelpinfo)|Sets the property page's brief help text, the name of its help file, and its help context.|  
|[COlePropertyPage::SetModifiedFlag](#colepropertypage__setmodifiedflag)|Sets a flag indicating whether the user has modified the property page.|  
|[COlePropertyPage::SetPageName](#colepropertypage__setpagename)|Sets the property page's name (caption).|  
  
## Remarks  
 For instance, a property page may include an edit control that allows the user to view and modify the control's caption property.  
  
 Each custom or stock control property can have a dialog control that allows the control's user to view the current property value and modify that value if needed.  
  
 For more information on using `COlePropertyPage`, see the article [ActiveX Controls: Property Pages](../../mfc/mfc-activex-controls-property-pages.md).  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CDialog](../../mfc/reference/cdialog-class.md)  
  
 `COlePropertyPage`  
  
## Requirements  
 **Header:** afxctl.h  
  
##  <a name="colepropertypage__colepropertypage"></a>  COlePropertyPage::COlePropertyPage  
 Constructs a `COlePropertyPage` object.  
  
```  
COlePropertyPage(
    UINT idDlg,  
    UINT idCaption);
```  
  
### Parameters  
 *idDlg*  
 Resource ID of the dialog template.  
  
 *idCaption*  
 Resource ID of the property page's caption.  
  
### Remarks  
 When you implement a subclass of `COlePropertyPage`, your subclass's constructor should use the `COlePropertyPage` constructor to identify the dialog-template resource on which the property page is based and the string resource containing its caption.  
  
##  <a name="colepropertypage__getcontrolstatus"></a>  COlePropertyPage::GetControlStatus  
 Determines whether the user has modified the value of the property page control with the specified resource ID.  
  
```  
BOOL GetControlStatus(UINT nID);
```  
  
### Parameters  
 `nID`  
 Resource ID of a property page control.  
  
### Return Value  
 **TRUE** if the control value has been modified; otherwise **FALSE**.  
  
##  <a name="colepropertypage__getobjectarray"></a>  COlePropertyPage::GetObjectArray  
 Returns the array of objects being edited by the property page.  
  
```  
LPDISPATCH* GetObjectArray(ULONG* pnObjects);
```  
  
### Parameters  
 `pnObjects`  
 Pointer to an unsigned long integer that will receive the number of objects being edited by the page.  
  
### Return Value  
 Pointer to an array of `IDispatch` pointers, which are used to access the properties of each control on the property page. The caller must not release these interface pointers.  
  
### Remarks  
 Each property page object maintains an array of pointers to the `IDispatch` interfaces of the objects being edited by the page. This function sets its `pnObjects` argument to the number of elements in that array and returns a pointer to the first element of the array.  
  
##  <a name="colepropertypage__getpagesite"></a>  COlePropertyPage::GetPageSite  
 Gets a pointer to the property page's `IPropertyPageSite` interface.  
  
```  
LPPROPERTYPAGESITE GetPageSite();
```  
  
### Return Value  
 A pointer to the property page's `IPropertyPageSite` interface.  
  
### Remarks  
 Controls and containers cooperate so that users can browse and edit control properties. The control provides property pages, each of which is an OLE object that allows the user to edit a related set of properties. The container provides a property frame that displays the property pages. For each page, the property frame provides a page site, which supports the `IPropertyPageSite` interface.  
  
##  <a name="colepropertypage__ignoreapply"></a>  COlePropertyPage::IgnoreApply  
 Determines which controls do not enable the Apply button.  
  
```  
void IgnoreApply(UINT nID);
```  
  
### Parameters  
 `nID`  
 ID of the control to be ignored.  
  
### Remarks  
 The property page's Apply button is enabled only when values of property page controls have been changed. Use this function to specify controls that do not cause the Apply button to be enabled when their values change.  
  
##  <a name="colepropertypage__ismodified"></a>  COlePropertyPage::IsModified  
 Determines whether the user has changed any values on the property page.  
  
```  
BOOL IsModified();
```  
  
### Return Value  
 **TRUE** if the property page has been modified.  
  
##  <a name="colepropertypage__oneditproperty"></a>  COlePropertyPage::OnEditProperty  
 The framework calls this function when a specific property is to be edited.  
  
```  
virtual BOOL OnEditProperty(DISPID dispid);
```  
  
### Parameters  
 `dispid`  
 Dispatch ID of the property being edited.  
  
### Return Value  
 The default implementation returns **FALSE**. Overrides of this function should return **TRUE**.  
  
### Remarks  
 You can override it to set the focus to the appropriate control on the page. The default implementation does nothing and returns **FALSE**.  
  
##  <a name="colepropertypage__onhelp"></a>  COlePropertyPage::OnHelp  
 The framework calls this function when the user requests online help.  
  
```  
virtual BOOL OnHelp(LPCTSTR lpszHelpDir);
```  
  
### Parameters  
 *lpszHelpDir*  
 Directory containing the property page's help file.  
  
### Return Value  
 The default implementation returns **FALSE**.  
  
### Remarks  
 Override it if your property page must perform any special action when the user accesses help. The default implementation does nothing and returns **FALSE**, which instructs the framework to call WinHelp.  
  
##  <a name="colepropertypage__oninitdialog"></a>  COlePropertyPage::OnInitDialog  
 The framework calls this function when the property page's dialog is initialized.  
  
```  
virtual BOOL OnInitDialog();
```  
  
### Return Value  
 The default implementation returns **FALSE**.  
  
### Remarks  
 Override it if any special action is required when the dialog is initialized. The default implementation calls `CDialog::OnInitDialog` and returns **FALSE**.  
  
##  <a name="colepropertypage__onobjectschanged"></a>  COlePropertyPage::OnObjectsChanged  
 Called by the framework when another OLE control, with new properties, is chosen.  
  
```  
virtual void OnObjectsChanged();
```  
  
### Remarks  
 When viewing the properties of an OLE control in the developer environment, a modeless dialog box is used to display its property pages. If another control is selected, a different set of property pages must be displayed for the new set of properties. The framework calls this function to notify the property page of the change.  
  
 Override this function to receive notification of this action and perform any special actions.  
  
##  <a name="colepropertypage__onsetpagesite"></a>  COlePropertyPage::OnSetPageSite  
 The framework calls this function when the property frame provides the property page's page site.  
  
```  
virtual void OnSetPageSite();
```  
  
### Remarks  
 The default implementation loads the page's caption and attempts to determine the page's size from the dialog resource. Override this function if your property page requires any further action; your override should call the base-class implementation.  
  
##  <a name="colepropertypage__setcontrolstatus"></a>  COlePropertyPage::SetControlStatus  
 Changes the status of a property page control.  
  
```  
BOOL SetControlStatus(
    UINT nID,  
    BOOL bDirty);
```  
  
### Parameters  
 `nID`  
 Contains the ID of a property page control.  
  
 `bDirty`  
 Specifies if a field of the property page has been modified. Set to **TRUE** if the field has been modified, **FALSE** if it has not been modified.  
  
### Return Value  
 **TRUE**, if the specified control was set; otherwise **FALSE**.  
  
### Remarks  
 If the status of a property page control is dirty when the property page is closed or the Apply button is chosen, the control's property will be updated with the appropriate value.  
  
##  <a name="colepropertypage__setdialogresource"></a>  COlePropertyPage::SetDialogResource  
 Sets the property page's dialog resource.  
  
```  
void SetDialogResource(HGLOBAL hDialog);
```  
  
### Parameters  
 *hDialog*  
 Handle to the property page's dialog resource.  
  
##  <a name="colepropertypage__sethelpinfo"></a>  COlePropertyPage::SetHelpInfo  
 Specifies tooltip information, the help filename, and the help context for your property page.  
  
```  
void SetHelpInfo(
    LPCTSTR lpszDocString,  
    LPCTSTR lpszHelpFile = NULL,  
    DWORD dwHelpContext = 0);
```  
  
### Parameters  
 *lpszDocString*  
 A string containing brief help information for display in a status bar or other location.  
  
 `lpszHelpFile`  
 Name of the property page's help file.  
  
 *dwHelpContext*  
 Help context for the property page.  
  
##  <a name="colepropertypage__setmodifiedflag"></a>  COlePropertyPage::SetModifiedFlag  
 Indicates whether the user has modified the property page.  
  
```  
void SetModifiedFlag(BOOL bModified = TRUE);
```  
  
### Parameters  
 `bModified`  
 Specifies the new value for the property page's modified flag.  
  
##  <a name="colepropertypage__setpagename"></a>  COlePropertyPage::SetPageName  
 Sets the property page's name, which the property frame will typically display on the page's tab.  
  
```  
void SetPageName(LPCTSTR lpszPageName);
```  
  
### Parameters  
 *lpszPageName*  
 Pointer to a string containing the property page's name.  
  
## See Also  
 [MFC Sample CIRC3](../../visual-cpp-samples.md)   
 [MFC Sample TESTHELP](../../visual-cpp-samples.md)   
 [CDialog Class](../../mfc/reference/cdialog-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [CDialog Class](../../mfc/reference/cdialog-class.md)
