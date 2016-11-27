---
title: "CMFCPropertyGridProperty Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCPropertyGridProperty"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCPropertyGridProperty class"
ms.assetid: 36f3fabe-0efe-468b-8a0b-5a7956db38a2
caps.latest.revision: 35
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
# CMFCPropertyGridProperty Class
A `CMFCPropertyGridProperty` object represents a list item in a property list control.  
  
## Syntax  
  
```  
class CMFCPropertyGridProperty : public CObject  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCPropertyGridProperty::CMFCPropertyGridProperty](#cmfcpropertygridproperty__cmfcpropertygridproperty)|Constructs a `CMFCPropertyGridProperty` object.|  
|`CMFCPropertyGridProperty::~CMFCPropertyGridProperty`|Destructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCPropertyGridProperty::AddOption](#cmfcpropertygridproperty__addoption)|Adds a new list item to a property list control.|  
|[CMFCPropertyGridProperty::AddSubItem](#cmfcpropertygridproperty__addsubitem)|Adds a child item to a property.|  
|[CMFCPropertyGridProperty::AdjustButtonRect](#cmfcpropertygridproperty__adjustbuttonrect)|Called by the parent property list control to tell a property to resize the bounding rectangle of an embedded button.|  
|[CMFCPropertyGridProperty::AdjustInPlaceEditRect](#cmfcpropertygridproperty__adjustinplaceeditrect)|Retrieves the boundaries of the text box and optional spin button control that are used to set a property value.|  
|[CMFCPropertyGridProperty::AllowEdit](#cmfcpropertygridproperty__allowedit)|Makes a property either editable or read-only.|  
|[CMFCPropertyGridProperty::CreateInPlaceEdit](#cmfcpropertygridproperty__createinplaceedit)|Called by the framework to create an editable control for a property.|  
|[CMFCPropertyGridProperty::CreateSpinControl](#cmfcpropertygridproperty__createspincontrol)|Called by the framework to create an editable spin button control.|  
|[CMFCPropertyGridProperty::Enable](#cmfcpropertygridproperty__enable)|Enables or disables a property.|  
|[CMFCPropertyGridProperty::EnableSpinControl](#cmfcpropertygridproperty__enablespincontrol)|Enables or disables a spin button control that is used to modify a property value.|  
|[CMFCPropertyGridProperty::Expand](#cmfcpropertygridproperty__expand)|Expands or collapses a property that contains sub-properties.|  
|[CMFCPropertyGridProperty::FormatProperty](#cmfcpropertygridproperty__formatproperty)|Formats the text representation of a property value.|  
|[CMFCPropertyGridProperty::GetData](#cmfcpropertygridproperty__getdata)|Retrieves a `DWORD` value that is associated with a property.|  
|[CMFCPropertyGridProperty::GetDescription](#cmfcpropertygridproperty__getdescription)|Retrieves a property description.|  
|[CMFCPropertyGridProperty::GetExpandedSubItems](#cmfcpropertygridproperty__getexpandedsubitems)|Retrieves the number of expanded sub-items.|  
|[CMFCPropertyGridProperty::GetHierarchyLevel](#cmfcpropertygridproperty__gethierarchylevel)|Retrieves the zero-based index of the property's hierarchy level.|  
|[CMFCPropertyGridProperty::GetName](#cmfcpropertygridproperty__getname)|Retrieves the name of the property.|  
|[CMFCPropertyGridProperty::GetNameTooltip](#cmfcpropertygridproperty__getnametooltip)|Called by the framework to display the name of the property in a tooltip.|  
|[CMFCPropertyGridProperty::GetOption](#cmfcpropertygridproperty__getoption)|Retrieves the text of the option that is specified by an index.|  
|[CMFCPropertyGridProperty::GetOptionCount](#cmfcpropertygridproperty__getoptioncount)|Retrieves the number of options that belong to a property.|  
|[CMFCPropertyGridProperty::GetOriginalValue](#cmfcpropertygridproperty__getoriginalvalue)|Retrieves the initial value of the current property.|  
|[CMFCPropertyGridProperty::GetParent](#cmfcpropertygridproperty__getparent)|Retrieves a pointer to a parent property.|  
|[CMFCPropertyGridProperty::GetRect](#cmfcpropertygridproperty__getrect)|Retrieves the bounding rectangle of a property.|  
|[CMFCPropertyGridProperty::GetSubItem](#cmfcpropertygridproperty__getsubitem)|Retrieves a sub-property identified by a zero-based index.|  
|[CMFCPropertyGridProperty::GetSubItemsCount](#cmfcpropertygridproperty__getsubitemscount)|Retrieves the number of sub-items.|  
|`CMFCPropertyGridProperty::GetThisClass`|Used by the framework to obtain a pointer to the [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) object that is associated with this class type.|  
|[CMFCPropertyGridProperty::GetValue](#cmfcpropertygridproperty__getvalue)|Retrieves a property value.|  
|[CMFCPropertyGridProperty::GetValueTooltip](#cmfcpropertygridproperty__getvaluetooltip)|Called by the framework to retrieve the text representation of the property value that is then displayed in a tooltip.|  
|[CMFCPropertyGridProperty::HitTest](#cmfcpropertygridproperty__hittest)|Points to the property object that corresponds to the property list item that corresponds to a point.|  
|[CMFCPropertyGridProperty::IsAllowEdit](#cmfcpropertygridproperty__isallowedit)|Indicates whether a property is editable.|  
|[CMFCPropertyGridProperty::IsEnabled](#cmfcpropertygridproperty__isenabled)|Indicates whether a property is enabled or disabled.|  
|[CMFCPropertyGridProperty::IsExpanded](#cmfcpropertygridproperty__isexpanded)|Indicates whether a property is expanded or collapsed.|  
|[CMFCPropertyGridProperty::IsGroup](#cmfcpropertygridproperty__isgroup)|Indicates whether the current property represents a group.|  
|[CMFCPropertyGridProperty::IsInPlaceEditing](#cmfcpropertygridproperty__isinplaceediting)|Indicates whether the current property is editable.|  
|[CMFCPropertyGridProperty::IsModified](#cmfcpropertygridproperty__ismodified)|Indicates whether the current property is modified.|  
|[CMFCPropertyGridProperty::IsParentExpanded](#cmfcpropertygridproperty__isparentexpanded)|Indicates whether the parents of the current property are expanded.|  
|[CMFCPropertyGridProperty::IsSelected](#cmfcpropertygridproperty__isselected)|Indicates whether the current property is selected.|  
|[CMFCPropertyGridProperty::IsVisible](#cmfcpropertygridproperty__isvisible)|Indicates whether the current property is visible.|  
|[CMFCPropertyGridProperty::OnClickButton](#cmfcpropertygridproperty__onclickbutton)|Called by the framework when the user clicks a button that is contained in a property.|  
|[CMFCPropertyGridProperty::OnClickName](#cmfcpropertygridproperty__onclickname)|Called by a parent property list control when a user clicks the name field of a property.|  
|[CMFCPropertyGridProperty::OnClickValue](#cmfcpropertygridproperty__onclickvalue)|Called by a parent property list control when a user clicks the value field of a property.|  
|[CMFCPropertyGridProperty::OnCloseCombo](#cmfcpropertygridproperty__onclosecombo)|Called by the framework when a combo box that is contained in a property is closed.|  
|[CMFCPropertyGridProperty::OnDblClk](#cmfcpropertygridproperty__ondblclk)|Called by the framework when the user double clicks a property.|  
|[CMFCPropertyGridProperty::OnDrawButton](#cmfcpropertygridproperty__ondrawbutton)|Called by the framework to draw a button that is contained in a property.|  
|[CMFCPropertyGridProperty::OnDrawDescription](#cmfcpropertygridproperty__ondrawdescription)|Called by the framework to display the property description.|  
|[CMFCPropertyGridProperty::OnDrawExpandBox](#cmfcpropertygridproperty__ondrawexpandbox)|Called by the framework to draw an expand box control near a property that contains sub-properties.|  
|[CMFCPropertyGridProperty::OnDrawName](#cmfcpropertygridproperty__ondrawname)|Called by the framework to display the property name.|  
|[CMFCPropertyGridProperty::OnDrawValue](#cmfcpropertygridproperty__ondrawvalue)|Called by the framework to display the property value.|  
|[CMFCPropertyGridProperty::OnEdit](#cmfcpropertygridproperty__onedit)|Called by the framework when the user is about to modify a property value.|  
|[CMFCPropertyGridProperty::OnEndEdit](#cmfcpropertygridproperty__onendedit)|Called by the framework when the user is finished modifying a property value.|  
|[CMFCPropertyGridProperty::OnKillSelection](#cmfcpropertygridproperty__onkillselection)||  
|[CMFCPropertyGridProperty::OnPosSizeChanged](#cmfcpropertygridproperty__onpossizechanged)||  
|[CMFCPropertyGridProperty::OnRClickName](#cmfcpropertygridproperty__onrclickname)|Called by the framework when the user clicks the right mouse button in the property name area.|  
|[CMFCPropertyGridProperty::OnRClickValue](#cmfcpropertygridproperty__onrclickvalue)|Called by the framework when the user clicks the right mouse button in the property value area.|  
|[CMFCPropertyGridProperty::OnSelectCombo](#cmfcpropertygridproperty__onselectcombo)|Called by the framework when the user selects an item from the editable combo box.|  
|[CMFCPropertyGridProperty::OnSetCursor](#cmfcpropertygridproperty__onsetcursor)|Called by the framework when the mouse pointer moves to a property item.|  
|[CMFCPropertyGridProperty::OnSetSelection](#cmfcpropertygridproperty__onsetselection)||  
|[CMFCPropertyGridProperty::OnUpdateValue](#cmfcpropertygridproperty__onupdatevalue)|Called by the framework when the value of an editable property has changed.|  
|[CMFCPropertyGridProperty::PushChar](#cmfcpropertygridproperty__pushchar)|Called from the property list control when the property is selected and the user enters a new character.|  
|[CMFCPropertyGridProperty::Redraw](#cmfcpropertygridproperty__redraw)|Redraws the property.|  
|[CMFCPropertyGridProperty::RemoveAllOptions](#cmfcpropertygridproperty__removealloptions)|Removes all options (items) from a property.|  
|[CMFCPropertyGridProperty::RemoveSubItem](#cmfcpropertygridproperty__removesubitem)|Removes the specified sub-item.|  
|[CMFCPropertyGridProperty::ResetOriginalValue](#cmfcpropertygridproperty__resetoriginalvalue)|Restores the original value of an edited property.|  
|[CMFCPropertyGridProperty::SetData](#cmfcpropertygridproperty__setdata)|Associates a `DWORD` value with a property.|  
|[CMFCPropertyGridProperty::SetDescription](#cmfcpropertygridproperty__setdescription)|Specifies the text that describes the current property.|  
|[CMFCPropertyGridProperty::SetName](#cmfcpropertygridproperty__setname)|Sets the name of a property.|  
|[CMFCPropertyGridProperty::SetOriginalValue](#cmfcpropertygridproperty__setoriginalvalue)|Sets the original value of an editable property.|  
|[CMFCPropertyGridProperty::SetValue](#cmfcpropertygridproperty__setvalue)|Sets the value of a property grid property.|  
|[CMFCPropertyGridProperty::Show](#cmfcpropertygridproperty__show)|Shows or hides a property.|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCPropertyGridProperty::CreateCombo](#cmfcpropertygridproperty__createcombo)|Called by the framework to add a combo box to a property.|  
|[CMFCPropertyGridProperty::HasButton](#cmfcpropertygridproperty__hasbutton)|Indicates whether a property contains a button.|  
|[CMFCPropertyGridProperty::Init](#cmfcpropertygridproperty__init)|Called by the framework to initialize a property object.|  
|[CMFCPropertyGridProperty::IsSubItem](#cmfcpropertygridproperty__issubitem)|Indicates whether the specified property is a sub-item of the current property.|  
|[CMFCPropertyGridProperty::IsValueChanged](#cmfcpropertygridproperty__isvaluechanged)|Indicates whether the value of the current property has changed.|  
|[CMFCPropertyGridProperty::OnCtlColor](#cmfcpropertygridproperty__onctlcolor)|Called by the framework when it must retrieve a brush to fill the background color of a property.|  
|[CMFCPropertyGridProperty::OnDestroyWindow](#cmfcpropertygridproperty__ondestroywindow)|Called by the framework when a property is destroyed or when editing is finished.|  
|[CMFCPropertyGridProperty::OnKillFocus](#cmfcpropertygridproperty__onkillfocus)|Called by the framework when the property loses the input focus.|  
  
### Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCPropertyGridProperty::m_strFormatDouble](#cmfcpropertygridproperty__m_strformatdouble)|Format string for a value of type double.|  
|[CMFCPropertyGridProperty::m_strFormatFloat](#cmfcpropertygridproperty__m_strformatfloat)|Format string for a value of type float.|  
|[CMFCPropertyGridProperty::m_strFormatLong](#cmfcpropertygridproperty__m_strformatlong)|Format string for a value of type long.|  
|[CMFCPropertyGridProperty::m_strFormatShort](#cmfcpropertygridproperty__m_strformatshort)|Format string for a value of type short.|  
  
## Remarks  
 Use a `CMFCPropertyGridProperty` object to represent a property, which you then add to a property list control. For more information, see [CMFCPropertyGridCtrl Class](../../mfc/reference/cmfcpropertygridctrl-class.md).  
  
 A property object can represent data types such as strings, dates, and Boolean or integer values. It can contain child properties, or it can contain a control such as a combo box or a button control.  
  
## Example  
 The following example demonstrates how to construct a `CMFCPropertyGridProperty` object. The example also demonstrates how to use various methods in the `CMFCPropertyGridProperty` class to add an option, add a sub-item, enable a property, and show a property. This example is part of the [New Controls sample](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_NewControls#27](../../mfc/reference/codesnippet/cpp/cmfcpropertygridproperty-class_1.cpp)]  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCPropertyGridProperty](../../mfc/reference/cmfcpropertygridproperty-class.md)  
  
## Requirements  
 **Header:** afxpropertygridctrl.h  
  
##  <a name="cmfcpropertygridproperty__addoption"></a>  CMFCPropertyGridProperty::AddOption  
 Adds a new list item to a property list control.  
  
```  
BOOL AddOption(
    LPCTSTR lpszOption,  
    BOOL bInsertUnique=TRUE);
```  
  
### Parameters  
 [in] `lpszOption`  
 The list item (option) to add.  
  
 [in] `bInsertUnique`  
 `TRUE` to add the list item only if it does not already exist; otherwise, `FALSE`. The default value is `TRUE`.  
  
### Return Value  
 `TRUE`, which means that the list item is added. Otherwise, `FALSE`, which means that the list item is not added because the `bInsertUnique` parameter is `TRUE` and the list item specified by the `lpszOption` parameter already exists.  
  
### Remarks  
  
##  <a name="cmfcpropertygridproperty__addsubitem"></a>  CMFCPropertyGridProperty::AddSubItem  
 Adds a child item to a property.  
  
```  
BOOL AddSubItem(CMFCPropertyGridProperty* pProp);
```  
  
### Parameters  
 [in] `pProp`  
 Pointer to a property to add.  
  
### Return Value  
 `TRUE` if the specified property is successfully added as a child property. `FALSE` if the property is not added because it already occurs in the parent property.  
  
### Remarks  
 Use this method to create a hierarchical list of parent and child properties. After a child property is added, the parent property automatically displays an expand box control that is designated by a plus sign (+). When the user clicks the plus sign, the parent property expands and displays any child property items.  
  
##  <a name="cmfcpropertygridproperty__adjustbuttonrect"></a>  CMFCPropertyGridProperty::AdjustButtonRect  
 Called by the parent property list control to tell a property to resize the bounding rectangle of an embedded button.  
  
```  
virtual void AdjustButtonRect();
```  
  
### Remarks  
 By default, this method:  
  
-   Adjusts the width of the button equal to the height of the button plus 3 pixels.  
  
-   Moves the bounding rectangle of the button to the right edge of the property  
  
-   Shifts the button 1 pixel below the top edge of the property.  
  
##  <a name="cmfcpropertygridproperty__adjustinplaceeditrect"></a>  CMFCPropertyGridProperty::AdjustInPlaceEditRect  
 Retrieves the boundaries of the text box and optional spin button control that are used to set a property value.  
  
```  
virtual void AdjustInPlaceEditRect(
    CRect& rectEdit,  
    CRect& rectSpin);
```  
  
### Parameters  
 [out] `rectEdit`  
 When this method returns, a rectangle that specifies the boundaries of the text box for the property value.  
  
 [out] `rectSpin`  
 When this method returns, a rectangle that specifies the boundaries of the spin button control for the property value. Or, if the property does not support a spin button, an empty rectangle.  
  
### Remarks  
 The value area of a property consists of a text box and possibly an *option button*, such as a spin button control. This method calculates the dimensions of the text box and option button and then returns those values in the specified parameters.  
  
##  <a name="cmfcpropertygridproperty__allowedit"></a>  CMFCPropertyGridProperty::AllowEdit  
 Makes a property either editable or read-only.  
  
```  
void AllowEdit(BOOL bAllow=TRUE);
```  
  
### Parameters  
 [in] `bAllow`  
 `TRUE` to make the property editable; `FALSE` to make the property read-only. The default value is `TRUE`.  
  
### Remarks  
  
##  <a name="cmfcpropertygridproperty__cmfcpropertygridproperty"></a>  CMFCPropertyGridProperty::CMFCPropertyGridProperty  
 Constructs a `CMFCPropertyGridProperty` object.  
  
```  
CMFCPropertyGridProperty(
    const CString& strGroupName,  
    DWORD_PTR dwData=0,  
    BOOL bIsValueList=FALSE);

 
CMFCPropertyGridProperty(
    const CString& strName,  
    const _variant_t& varValue,  
    LPCTSTR lpszDescr=NULL,  
    DWORD_PTR dwData=0,  
    LPCTSTR lpszEditMask=NULL,  
    LPCTSTR lpszEditTemplate=NULL,  
    LPCTSTR lpszValidChars=NULL);
```  
  
### Parameters  
 [in] `strGroupName`  
 The group name. A *group* is a collection of related properties in a property grid control. If the control is displayed hierarchically, the *group name* is displayed as a category title in the row above the group.  
  
 [in] `dwData`  
 Application-specific data, such as an integer or a pointer to other data that is associated with the property. The default value is 0.  
  
 [in] `strName`  
 The name of the property.  
  
 [in] `varValue`  
 The property value.  
  
 [in] `lpszDescr`  
 The property description. The default value is `NULL`.  
  
 [in] `lpszEditMask`  
 The edit mask, if the property is a masked edit control. The default value is `NULL`.  
  
 [in] `lpszEditTemplate`  
 The edit template, if the property is a masked edit control. The default value is `NULL`.  
  
 [in] `lpszValidChars`  
 A list of valid characters, if the property is a masked edit control. The default value is `NULL`.  
  
 [in] `bIsValueList`  
 `TRUE` if the property represents a list of values; `FALSE` if the property represents a single value. The default value is `FALSE`.  
  
### Remarks  
  
##  <a name="cmfcpropertygridproperty__createcombo"></a>  CMFCPropertyGridProperty::CreateCombo  
 Called by the framework to add a combo box to a property.  
  
```  
virtual CComboBox* CreateCombo(
    CWnd* pWndParent,  
    CRect rect);
```  
  
### Parameters  
 [in] `pWndParent`  
 Pointer to the parent window of the combo box.  
  
 [in] `rect`  
 The bounding rectangle of the combo box.  
  
### Return Value  
 Pointer to a new [CComboBox](../../mfc/reference/ccombobox-class.md) object.  
  
### Remarks  
  
##  <a name="cmfcpropertygridproperty__createinplaceedit"></a>  CMFCPropertyGridProperty::CreateInPlaceEdit  
 Called by the framework to create an editable control for a property.  
  
```  
virtual CWnd* CreateInPlaceEdit(
    CRect rectEdit,  
    BOOL& bDefaultFormat);
```  
  
### Parameters  
 [in] `rectEdit`  
 The bounding rectangle of the editable control.  
  
 [in] `bDefaultFormat`  
 `TRUE` to use the default property format to set the text of the editable control; otherwise, `FALSE`.  
  
### Return Value  
 A pointer to the editable control if this method succeeds; otherwise, `NULL`.  
  
### Remarks  
 This method uses the values of the `varValue`, `lpszEditMask`, `lpszEditTemplate`, and `lpszValidChars` parameters that are specified in the [CMFCPropertyGridProperty](../../mfc/reference/cmfcpropertygridproperty-class.md) class constructor. By default, this method supports the `varValue` variant types. This includes `VT_BSTR`, `VT_R4`, `VT_R8`, `VT_UI1`, `VT_I2`, `VT_INT`, `VT_UINT`, `VT_I4`, `VT_UI2`, `VT_UI4`, and `VT_BOOL`.  
  
 This method creates a [CMFCMaskedEdit](../../mfc/reference/cmfcmaskededit-class.md) control if one or more of the `lpszEditMask`, `lpszEditTemplate`, or `lpszValidChars` parameters are specified; otherwise, it creates a [CEdit](../../mfc/reference/cedit-class.md) control.  
  
##  <a name="cmfcpropertygridproperty__createspincontrol"></a>  CMFCPropertyGridProperty::CreateSpinControl  
 Called by the framework to create an editable spin button control.  
  
```  
virtual CSpinButtonCtrl* CreateSpinControl(CRect rectSpin);
```  
  
### Parameters  
 [in] `rectSpin`  
 A rectangle that defines where the editable spin button control is created.  
  
### Return Value  
 A pointer to a new [CMFCSpinButtonCtrl](../../mfc/reference/cmfcspinbuttonctrl-class.md) object that is cast as a pointer to a [CSpinButtonCtrl](../../mfc/reference/cspinbuttonctrl-class.md) object.  
  
### Remarks  
 Call the [CMFCPropertyGridProperty::EnableSpinControl](#cmfcpropertygridproperty__enablespincontrol) method to display an editable spin button control at the right edge of the property.  
  
##  <a name="cmfcpropertygridproperty__enable"></a>  CMFCPropertyGridProperty::Enable  
 Enables or disables a property.  
  
```  
void Enable(BOOL bEnable=TRUE);
```  
  
### Parameters  
 [in] `bEnable`  
 `TRUE` to enable the property; `FALSE` to disable the property. Disabled properties do not respond to mouse or keyboard input. The default value is `TRUE`.  
  
### Remarks  
  
##  <a name="cmfcpropertygridproperty__enablespincontrol"></a>  CMFCPropertyGridProperty::EnableSpinControl  
 Enables or disables a spin button control that is used to modify a property value.  
  
```  
void EnableSpinControl(
    BOOL bEnable=TRUE,  
    int nMin=0,  
    int nMax=0);
```  
  
### Parameters  
 [in] `bEnable`  
 `TRUE` to enable the spin button control; `FALSE` to disable the spin button control. The default value is `TRUE`.  
  
 [in] `nMin`  
 The minimum value of the spin button control. The default value is 0.  
  
 [in] `nMax`  
 The maximum value of the spin button control. The default value is 0.  
  
### Remarks  
 The framework automatically creates a spin button control when a property is about to be edited.  
  
 The property type, which is specified by the `varValue` parameter of the [CMFCPropertyGridProperty::CMFCPropertyGridProperty](#cmfcpropertygridproperty__cmfcpropertygridproperty) constructor, must be a supported variant type. Otherwise, this method asserts in debug mode. The supported types include `VT_INT`, `VT_UINT`, `VT_I2`, `VT_I4`, `VT_UI2`, and `VT_UI4`.  
  
##  <a name="cmfcpropertygridproperty__expand"></a>  CMFCPropertyGridProperty::Expand  
 Expands or collapses a property that contains sub-properties.  
  
```  
void Expand(BOOL bExpand=TRUE);
```  
  
### Parameters  
 [in] `bExpand`  
 `TRUE` to expand the property; FALSE to collapse the property. The default value is `TRUE`.  
  
### Remarks  
  
##  <a name="cmfcpropertygridproperty__formatproperty"></a>  CMFCPropertyGridProperty::FormatProperty  
 Formats the text representation of a property value.  
  
```  
virtual CString FormatProperty();
```  
  
### Return Value  
 The text representation of the property value.  
  
### Remarks  
 This method is called by the framework before the property value is displayed.  
  
##  <a name="cmfcpropertygridproperty__getdata"></a>  CMFCPropertyGridProperty::GetData  
 Retrieves a `DWORD` value that is associated with a property.  
  
```  
DWORD_PTR GetData() const;

 
```  
  
### Return Value  
 A `DWORD` value.  
  
### Remarks  
 The data that is returned is an application-specific value, such as a number or a pointer to other data. Specify the data value when you construct the property or when you call the [CMFCPropertyGridProperty::SetData](#cmfcpropertygridproperty__setdata) method.  
  
##  <a name="cmfcpropertygridproperty__getdescription"></a>  CMFCPropertyGridProperty::GetDescription  
 Retrieves a property description.  
  
```  
const CString& GetDescription() const;

 
```  
  
### Return Value  
 A text string that contains the property description.  
  
### Remarks  
 Property list control also uses this method to display the description of the property.  
  
##  <a name="cmfcpropertygridproperty__getexpandedsubitems"></a>  CMFCPropertyGridProperty::GetExpandedSubItems  
 Retrieves the number of expanded sub-items.  
  
```  
int GetExpandedSubItems(BOOL bIncludeHidden=TRUE) const;

 
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[in] `bIncludeHidden`|`TRUE` to include the hidden sub-items in the count; otherwise, `FALSE`. The default value is `TRUE`.|  
  
### Return Value  
 The number of expanded sub-items.  
  
### Remarks  
  
##  <a name="cmfcpropertygridproperty__gethierarchylevel"></a>  CMFCPropertyGridProperty::GetHierarchyLevel  
 Retrieves the zero-based index of the property's hierarchy level.  
  
```  
int GetHierarchyLevel() const;

 
```  
  
### Return Value  
 The property's hierarchical level.  
  
### Remarks  
  
##  <a name="cmfcpropertygridproperty__getname"></a>  CMFCPropertyGridProperty::GetName  
 Retrieves the name of the property.  
  
```  
LPCTSTR GetName() const;

 
```  
  
### Return Value  
 Pointer to a string that contains the name of the property.  
  
### Remarks  
  
##  <a name="cmfcpropertygridproperty__getnametooltip"></a>  CMFCPropertyGridProperty::GetNameTooltip  
 Called by the framework to display the name of the property in a tooltip.  
  
```  
virtual CString GetNameTooltip();
```  
  
### Return Value  
 A string that contains the property name. By default, the return value is the empty string.  
  
### Remarks  
  
##  <a name="cmfcpropertygridproperty__getoption"></a>  CMFCPropertyGridProperty::GetOption  
 Retrieves the text of the option that is specified by an index.  
  
```  
LPCTSTR GetOption(int nIndex) const;

 
```  
  
### Parameters  
 `nIndex`  
 The zero-based index of the property list item (option) to retrieve.  
  
### Return Value  
 Pointer to a string that contains the option text.  
  
### Remarks  
  
##  <a name="cmfcpropertygridproperty__getoptioncount"></a>  CMFCPropertyGridProperty::GetOptionCount  
 Retrieves the number of options that belong to a property.  
  
```  
int GetOptionCount() const;

 
```  
  
### Return Value  
 The number of property list items (options) that are contained in the property control.  
  
### Remarks  
 Call the [CMFCPropertyGridProperty::AddOption](#cmfcpropertygridproperty__addoption) method to add items to the property list. Call the [CMFCPropertyGridProperty::RemoveAllOptions](#cmfcpropertygridproperty__removealloptions) method to remove all items.  
  
##  <a name="cmfcpropertygridproperty__getoriginalvalue"></a>  CMFCPropertyGridProperty::GetOriginalValue  
 Retrieves the initial value of the current property.  
  
```  
const COleVariant& GetOriginalValue() const;

 
```  
  
### Return Value  
 The original value of the current property.  
  
### Remarks  
 Use this method to undo the effect of an edit operation that changes the value of the current property.  
  
 The original value of the current property is set by the [CMFCPropertyGridProperty::CMFCPropertyGridProperty](#cmfcpropertygridproperty__cmfcpropertygridproperty) constructor, modified by the [CMFCPropertyGridProperty::SetOriginalValue](#cmfcpropertygridproperty__setoriginalvalue) method, and reset by the [CMFCPropertyGridProperty::ResetOriginalValue](#cmfcpropertygridproperty__resetoriginalvalue) method.  
  
##  <a name="cmfcpropertygridproperty__getparent"></a>  CMFCPropertyGridProperty::GetParent  
 Retrieves a pointer to a parent property.  
  
```  
CMFCPropertyGridProperty* GetParent() const;

 
```  
  
### Return Value  
 A pointer to a parent property object, or `NULL` for the top-level property.  
  
### Remarks  
  
##  <a name="cmfcpropertygridproperty__getrect"></a>  CMFCPropertyGridProperty::GetRect  
 Retrieves the bounding rectangle of a property.  
  
```  
CRect GetRect() const;

 
```  
  
### Return Value  
 A [CRect](../../atl-mfc-shared/reference/crect-class.md) object that describes the bounding rectangle.  
  
### Remarks  
  
##  <a name="cmfcpropertygridproperty__getsubitem"></a>  CMFCPropertyGridProperty::GetSubItem  
 Retrieves a sub-property identified by a zero-based index.  
  
```  
CMFCPropertyGridProperty* GetSubItem(int nIndex) const;

 
```  
  
### Parameters  
 [in] `nIndex`  
 The zero-based index of the property to retrieve. This parameter is invalid if it is less than zero or greater than or equal to the number of sub-properties.  
  
### Return Value  
 A pointer to a property object that is a child item of this property.  
  
 -or-  
  
 In retail mode, `NULL` if the `nIndex` parameter is invalid. In debug mode, this method asserts.  
  
### Remarks  
  
##  <a name="cmfcpropertygridproperty__getsubitemscount"></a>  CMFCPropertyGridProperty::GetSubItemsCount  
 Retrieves the number of sub-items.  
  
```  
int GetSubItemsCount() const;

 
```  
  
### Return Value  
 The number of child items.  
  
### Remarks  
  
##  <a name="cmfcpropertygridproperty__getvalue"></a>  CMFCPropertyGridProperty::GetValue  
 Retrieves a property value.  
  
```  
virtual const _variant_t& GetValue() const;

 
```  
  
### Return Value  
 A variant that contains the property value.  
  
### Remarks  
  
##  <a name="cmfcpropertygridproperty__getvaluetooltip"></a>  CMFCPropertyGridProperty::GetValueTooltip  
 Called by the framework to retrieve the text representation of the property value that is then displayed in a tooltip.  
  
```  
virtual CString GetValueTooltip();
```  
  
### Return Value  
 A `CString` object containing the textual representation of the property value. By default, this value is the empty string.  
  
### Remarks  
  
##  <a name="cmfcpropertygridproperty__hasbutton"></a>  CMFCPropertyGridProperty::HasButton  
 Indicates whether a property contains a button.  
  
```  
virtual BOOL HasButton() const;

 
```  
  
### Return Value  
 `TRUE` if a property contains a button (or property list); otherwise, `FALSE`.  
  
### Remarks  
  
##  <a name="cmfcpropertygridproperty__hittest"></a>  CMFCPropertyGridProperty::HitTest  
 Points to the property object that corresponds to the property list item that corresponds to a point.  
  
```  
CMFCPropertyGridProperty* HitTest(
    CPoint point,  
    CMFCPropertyGridProperty::ClickArea* pnArea=NULL);

 
CMFCPropertyGridProperty* HitTest(
    CPoint pt,  
    CMFCPropertyGridProperty::ClickArea* pnArea=NULL,  
    BOOL bPropsOnly=FALSE) const;

 
```  
  
### Parameters  
 [in] `point`  
 The point to test, in client coordinates. This parameter is typically the current mouse pointer location.  
  
 [in] `pt`  
 The point to test, in client coordinates.  
  
 [out] `pnArea`  
 When this method returns, indicates the area that contains the specified point. For more information, see Remarks. The default value is `NULL`.  
  
 [in] `bPropsOnly`  
 `TRUE` to test any area in the property control; `FALSE` to test only the description area. The default value is `FALSE`.  
  
### Return Value  
 A pointer to a property object or `NULL`.  
  
### Remarks  
 By default, this method tests property sub-items if the specified point is not found within any of the property items.  
  
 The following table lists the values that can be returned to the `pnArea` parameter.  
  
|Area|Description|  
|----------|-----------------|  
|`ClickArea::ClickExpandBox`|The expand box control, which is designated by a plus sign (+).|  
|`ClickArea::ClickName`|The property name.|  
|`ClickArea::ClickValue`|The property value.|  
  
##  <a name="cmfcpropertygridproperty__init"></a>  CMFCPropertyGridProperty::Init  
 Called by the framework to initialize a property object.  
  
```  
void Init();
```  
  
### Remarks  
  
##  <a name="cmfcpropertygridproperty__isallowedit"></a>  CMFCPropertyGridProperty::IsAllowEdit  
 Indicates whether a property is editable.  
  
```  
BOOL IsAllowEdit() const;

 
```  
  
### Return Value  
 `TRUE` if the property is editable; otherwise `FALSE`.  
  
### Remarks  
  
##  <a name="cmfcpropertygridproperty__isenabled"></a>  CMFCPropertyGridProperty::IsEnabled  
 Indicates whether a property is enabled or disabled.  
  
```  
BOOL IsEnabled() const;

 
```  
  
### Return Value  
 `TRUE` if the property is enabled; `FALSE` if the property is disabled.  
  
### Remarks  
 Tells whether a property is enabled or disabled.  
  
##  <a name="cmfcpropertygridproperty__isexpanded"></a>  CMFCPropertyGridProperty::IsExpanded  
 Indicates whether a property is expanded or collapsed.  
  
```  
BOOL IsExpanded() const;

 
```  
  
### Return Value  
 `TRUE` if the property is expanded; `FALSE` if the property is collapsed.  
  
### Remarks  
  
##  <a name="cmfcpropertygridproperty__isgroup"></a>  CMFCPropertyGridProperty::IsGroup  
 Indicates whether the current property represents a group.  
  
```  
BOOL IsGroup() const;

 
```  
  
### Return Value  
 `TRUE` if the current property object represents a group; `FALSE` if the property represents a value.  
  
### Remarks  
 A *group* is a collection of related properties in a property grid control. If the control is displayed hierarchically, the *group name* is displayed as a category title in the row above the group.  
  
##  <a name="cmfcpropertygridproperty__isinplaceediting"></a>  CMFCPropertyGridProperty::IsInPlaceEditing  
 Indicates whether the current property is editable.  
  
```  
BOOL IsInPlaceEditing() const;

 
```  
  
### Return Value  
 `TRUE` if the current property is editable; otherwise, `FALSE`.  
  
### Remarks  
  
##  <a name="cmfcpropertygridproperty__ismodified"></a>  CMFCPropertyGridProperty::IsModified  
 Indicates whether the current property is modified.  
  
```  
BOOL IsModified() const;

 
```  
  
### Return Value  
 `TRUE` if the property is modified; otherwise, `FALSE`.  
  
### Remarks  
  
##  <a name="cmfcpropertygridproperty__isparentexpanded"></a>  CMFCPropertyGridProperty::IsParentExpanded  
 Indicates whether the parents of the current property are expanded.  
  
```  
BOOL IsParentExpanded() const;

 
```  
  
### Return Value  
 `TRUE` if all parents of the current property are expanded; `FALSE` if the parent properties are collapsed.  
  
### Remarks  
  
##  <a name="cmfcpropertygridproperty__isselected"></a>  CMFCPropertyGridProperty::IsSelected  
 Indicates whether the current property is selected.  
  
```  
virtual BOOL IsSelected() const;

 
```  
  
### Return Value  
 `TRUE` if the current property is selected; otherwise, `FALSE`.  
  
### Remarks  
  
##  <a name="cmfcpropertygridproperty__issubitem"></a>  CMFCPropertyGridProperty::IsSubItem  
 Indicates whether the specified property is a sub-item of the current property.  
  
```  
BOOL IsSubItem(CMFCPropertyGridProperty* pProp) const;

 
```  
  
### Parameters  
 [in] `pProp`  
 A pointer to a property.  
  
### Return Value  
 `TRUE` if the specified property is a sub-item of the current property; otherwise, `FALSE`.  
  
##  <a name="cmfcpropertygridproperty__isvaluechanged"></a>  CMFCPropertyGridProperty::IsValueChanged  
 Indicates whether the value of the current property has changed.  
  
```  
virtual BOOL IsValueChanged() const;

 
```  
  
### Return Value  
 `TRUE` if the value of the current property has changed; otherwise, `FALSE`.  
  
### Remarks  
  
##  <a name="cmfcpropertygridproperty__isvisible"></a>  CMFCPropertyGridProperty::IsVisible  
 Indicates whether the current property is visible.  
  
```  
BOOL IsVisible() const;

 
```  
  
### Return Value  
 `TRUE` if the current property is visible; otherwise; `FALSE`.  
  
### Remarks  
  
##  <a name="cmfcpropertygridproperty__m_strformatdouble"></a>  CMFCPropertyGridProperty::m_strFormatDouble  
 Holds a format string for a value of type double.  
  
```  
static CString m_strFormatDouble;  
```  
  
### Remarks  
  
##  <a name="cmfcpropertygridproperty__m_strformatfloat"></a>  CMFCPropertyGridProperty::m_strFormatFloat  
 Holds a format string for a value of type float.  
  
```  
static CString m_strFormatFloat;  
```  
  
### Remarks  
  
##  <a name="cmfcpropertygridproperty__m_strformatlong"></a>  CMFCPropertyGridProperty::m_strFormatLong  
 Holds a format string for a value of type long.  
  
```  
static CString m_strFormatLong;  
```  
  
### Remarks  
  
##  <a name="cmfcpropertygridproperty__m_strformatshort"></a>  CMFCPropertyGridProperty::m_strFormatShort  
 Holds a format string for a value of type short.  
  
```  
static CString m_strFormatShort;  
```  
  
### Remarks  
  
##  <a name="cmfcpropertygridproperty__onclickbutton"></a>  CMFCPropertyGridProperty::OnClickButton  
 Called by the framework when the user clicks a button that is contained in a property.  
  
```  
virtual void OnClickButton(CPoint point);
```  
  
### Parameters  
 [in] `point`  
 A point, in client coordinates.  
  
### Remarks  
 By default, this method does nothing.  
  
##  <a name="cmfcpropertygridproperty__onclickname"></a>  CMFCPropertyGridProperty::OnClickName  
 Called by a parent property list control when a user clicks the name field of a property.  
  
```  
virtual void OnClickName(CPoint C);
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[in] `C`|A point, in client coordinates.|  
  
### Remarks  
 By default, this method does nothing.  
  
##  <a name="cmfcpropertygridproperty__onclickvalue"></a>  CMFCPropertyGridProperty::OnClickValue  
 Called by a parent property list control when a user clicks the value field of a property.  
  
```  
virtual BOOL OnClickValue(
    UINT uiMsg,  
    CPoint point);
```  
  
### Parameters  
 [in] `uiMsg`  
 A mouse message.  
  
 [in] `point`  
 A point, in client coordinates.  
  
### Return Value  
 `TRUE` if the specified mouse message is processed by this method; otherwise, `FALSE`.  
  
### Remarks  
 By default, this method returns `FALSE` if the current property is not editable. Otherwise, the edit or spin control that is associated with this property processes the specified mouse message, and then this method returns `TRUE`.  
  
##  <a name="cmfcpropertygridproperty__onclosecombo"></a>  CMFCPropertyGridProperty::OnCloseCombo  
 Called by the framework when a combo box that is contained in a property is closed.  
  
```  
virtual void OnCloseCombo();
```  
  
### Remarks  
  
##  <a name="cmfcpropertygridproperty__onctlcolor"></a>  CMFCPropertyGridProperty::OnCtlColor  
 Called by the framework when it must retrieve a brush to fill the background color of a property.  
  
```  
virtual HBRUSH OnCtlColor(
    CDC* pDC,  
    UINT nCtlColor);
```  
  
### Parameters  
 [in] `pDC`  
 Pointer to a device context.  
  
 [in] `nCtlColor`  
 (This parameter is not used.)  
  
### Return Value  
 The handle to a brush if this method is successful; otherwise, `NULL`.  
  
### Remarks  
  
##  <a name="cmfcpropertygridproperty__ondblclk"></a>  CMFCPropertyGridProperty::OnDblClk  
 Called by the framework when the user double clicks a property.  
  
```  
virtual BOOL OnDblClk(CPoint point);
```  
  
### Parameters  
 [in] `point`  
 A point, in client coordinates.  
  
### Return Value  
 `TRUE` if this method is successful; otherwise, `FALSE`.  
  
### Remarks  
 By default, this method selects the next property item in the property list control.  
  
##  <a name="cmfcpropertygridproperty__ondestroywindow"></a>  CMFCPropertyGridProperty::OnDestroyWindow  
 Called by the framework when a property is destroyed or when editing is finished.  
  
```  
virtual void OnDestroyWindow();
```  
  
### Remarks  
  
##  <a name="cmfcpropertygridproperty__ondrawbutton"></a>  CMFCPropertyGridProperty::OnDrawButton  
 Called by the framework to draw a button that is contained in a property.  
  
```  
virtual void OnDrawButton(
    CDC* pDC,  
    CRect rectButton);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `rectButton`  
 A bounding rectangle that specifies where to draw a button.  
  
### Remarks  
  
##  <a name="cmfcpropertygridproperty__ondrawdescription"></a>  CMFCPropertyGridProperty::OnDrawDescription  
 Called by the framework to draw the property description.  
  
```  
virtual void OnDrawDescription(
    CDC* pDC,  
    CRect rect);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `rect`  
 A bounding rectangle that specifies where to draw the property description.  
  
### Remarks  
 By default, this method draws the property name and description in the font used by the parent property list control. The property description is drawn in regular style and the property name is drawn in bold style.  
  
##  <a name="cmfcpropertygridproperty__ondrawexpandbox"></a>  CMFCPropertyGridProperty::OnDrawExpandBox  
 Called by the framework to draw an expand box control near a property that contains sub-properties.  
  
```  
virtual void OnDrawExpandBox(
    CDC* pDC,  
    CRect rectExpand);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `rectExpand`  
 A bounding rectangle that specifies where to draw the expand box control.  
  
### Remarks  
 Click the expand box control to expand or collapse a list of sub-properties. The expand box control is designated by a square that contains a plus (+) or minus (-) sign. A plus sign indicates that the property can be expanded to show a list of sub-properties. A minus sign indicates that the list can be collapsed to show only the property.  
  
##  <a name="cmfcpropertygridproperty__ondrawname"></a>  CMFCPropertyGridProperty::OnDrawName  
 Called by the framework to display the property name.  
  
```  
virtual void OnDrawName(
    CDC* pDC,  
    CRect rect);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `rect`  
 A bounding rectangle that specifies where to draw the property name.  
  
### Remarks  
  
##  <a name="cmfcpropertygridproperty__ondrawvalue"></a>  CMFCPropertyGridProperty::OnDrawValue  
 Called by the framework to display the property value.  
  
```  
virtual void OnDrawValue(
    CDC* pDC,  
    CRect rect);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `rect`  
 A bounding rectangle that specifies where to draw the property value.  
  
### Remarks  
  
##  <a name="cmfcpropertygridproperty__onedit"></a>  CMFCPropertyGridProperty::OnEdit  
 Called by the framework when the user is about to modify a property value.  
  
```  
virtual BOOL OnEdit(LPPOINT lptClick);
```  
  
### Parameters  
 [in] `lptClick`  
 (This parameter is not used.) A pointer to a point, in client coordinates.  
  
### Return Value  
 `TRUE` if the edit operation starts successfully; otherwise, `FALSE`.  
  
### Remarks  
 This function is called by the framework when the user is about to modify a property value. By default, this method starts the appropriate editor for a combo box control or a spin control.  
  
##  <a name="cmfcpropertygridproperty__onendedit"></a>  CMFCPropertyGridProperty::OnEndEdit  
 Called by the framework when the user is finished modifying a property value.  
  
```  
virtual BOOL OnEndEdit();
```  
  
### Return Value  
 This method always returns `TRUE`.  
  
### Remarks  
 By default, this method destroys the current editing control and then returns `TRUE`.  
  
##  <a name="cmfcpropertygridproperty__onkillfocus"></a>  CMFCPropertyGridProperty::OnKillFocus  
 Called by the framework when the property loses the input focus.  
  
```  
virtual BOOL OnKillFocus(CWnd*);
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[in] `CWnd`|(Not used.) Pointer to a window.|  
  
### Return Value  
 This method always returns `TRUE`.  
  
### Remarks  
 By default, this method does nothing and then returns `TRUE`. If you override this method, return `TRUE` if the framework can end the edit operation when the property loses the input focus.  
  
##  <a name="cmfcpropertygridproperty__onkillselection"></a>  CMFCPropertyGridProperty::OnKillSelection  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnKillSelection(CMFCPropertyGridProperty*);
```  
  
### Parameters  
 [in] `CMFCPropertyGridProperty*`  
  
### Remarks  
 By default, this method does nothing.  
  
##  <a name="cmfcpropertygridproperty__onpossizechanged"></a>  CMFCPropertyGridProperty::OnPosSizeChanged  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnPosSizeChanged(CRect);
```  
  
### Parameters  
 [in] `CRect`  
  
### Remarks  
 By default, this method does nothing.  
  
##  <a name="cmfcpropertygridproperty__onrclickname"></a>  CMFCPropertyGridProperty::OnRClickName  
 Called by the framework when the user clicks the right mouse button in the property name area.  
  
```  
virtual void OnRClickName(CPoint C);
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[in] `C`|A point, in client coordinates.|  
  
### Remarks  
 By default, this method does nothing.  
  
##  <a name="cmfcpropertygridproperty__onrclickvalue"></a>  CMFCPropertyGridProperty::OnRClickValue  
 Called by the framework when the user clicks the right mouse button in the property value area.  
  
```  
virtual void OnRClickValue(
    CPoint C,  
    BOOL B);
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[in] `C`|A point, in client coordinates.|  
|[in] `B`|A Boolean.|  
  
### Remarks  
 By default, this method does nothing and the `B` parameter has no predefined purpose.  
  
##  <a name="cmfcpropertygridproperty__onselectcombo"></a>  CMFCPropertyGridProperty::OnSelectCombo  
 Called by the framework when the user selects an item from the editable combo box.  
  
```  
virtual void OnSelectCombo();
```  
  
### Remarks  
 By default, this method uses the text of the selected item to update the property value.  
  
##  <a name="cmfcpropertygridproperty__onsetcursor"></a>  CMFCPropertyGridProperty::OnSetCursor  
 Called by the framework when the mouse pointer moves to a property item.  
  
```  
virtual BOOL OnSetCursor() const;

 
```  
  
### Return Value  
 `TRUE` if the current property is a variant type or a list of values, and this method successfully loads the insertion point (I-beam) mouse cursor; otherwise, `FALSE`.  
  
### Remarks  
 This method supports the following variant types: `VT_INT`, `VT_I2`, `VT_I4`, `VT_UINT`, `VT_UI1`, `VT_UI2`, `VT_UI4`, `VT_R4`, `VT_R8`, and `VT_BSTR`.  
  
##  <a name="cmfcpropertygridproperty__onsetselection"></a>  CMFCPropertyGridProperty::OnSetSelection  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnSetSelection(CMFCPropertyGridProperty*);
```  
  
### Parameters  
 [in] `CMFCPropertyGridProperty*`  
  
### Remarks  
 By default, this method does nothing.  
  
##  <a name="cmfcpropertygridproperty__onupdatevalue"></a>  CMFCPropertyGridProperty::OnUpdateValue  
 Called by the framework when the value of an editable property has changed.  
  
```  
virtual BOOL OnUpdateValue();
```  
  
### Return Value  
 `TRUE` if this method is successful; otherwise, `FALSE`.  
  
### Remarks  
  
##  <a name="cmfcpropertygridproperty__pushchar"></a>  CMFCPropertyGridProperty::PushChar  
 Called from the property list control when the property is selected and the user enters a new character.  
  
```  
virtual BOOL PushChar(UINT nChar);
```  
  
### Parameters  
 [in] `nChar`  
 A character.  
  
### Return Value  
 `TRUE` if the edit operation is continuing; otherwise, `FALSE`.  
  
### Remarks  
 This method supports a property that is either a list of values or one of the following variant types: `VT_INT`, `VT_I2`, `VT_I4`, `VT_UINT`, `VT_UI1`, `VT_UI2`, `VT_UI4`, `VT_R4`, `VT_R8`, and `VT_BSTR`.  
  
##  <a name="cmfcpropertygridproperty__redraw"></a>  CMFCPropertyGridProperty::Redraw  
 Redraws the property.  
  
```  
void Redraw();
```  
  
### Remarks  
  
##  <a name="cmfcpropertygridproperty__removealloptions"></a>  CMFCPropertyGridProperty::RemoveAllOptions  
 Removes all options (items) from a property.  
  
```  
void RemoveAllOptions();
```  
  
### Remarks  
 Options are also known as the list items of a property list control.  
  
##  <a name="cmfcpropertygridproperty__removesubitem"></a>  CMFCPropertyGridProperty::RemoveSubItem  
 Removes the specified sub-item.  
  
```  
BOOL RemoveSubItem(
    CMFCPropertyGridProperty*& pProp,  
    BOOL bDelete=TRUE);
```  
  
### Parameters  
 [in] `pProp`  
 Pointer to a property sub-item.  
  
 [in] `bDelete`  
 `TRUE` to delete the property object that is specified by the `pProp` parameter; otherwise, `FALSE`. The default value is `TRUE`.  
  
### Return Value  
  
### Remarks  
 Specify `FALSE` for the `bDelete` parameter if you intend to move the specified sub-item; that is, remove the sub-item and then add it elsewhere.  
  
##  <a name="cmfcpropertygridproperty__resetoriginalvalue"></a>  CMFCPropertyGridProperty::ResetOriginalValue  
 Restores the original value of an edited property.  
  
```  
virtual void ResetOriginalValue();
```  
  
### Remarks  
  
##  <a name="cmfcpropertygridproperty__setdata"></a>  CMFCPropertyGridProperty::SetData  
 Associates a `DWORD` value with a property.  
  
```  
void SetData(DWORD_PTR dwData);
```  
  
### Parameters  
 [in] `dwData`  
 An application-specific 32-bit value, such as an integer or a pointer to other data.  
  
### Remarks  
 Use the [CMFCPropertyGridProperty::GetData](#cmfcpropertygridproperty__getdata) method to retrieve the `DWORD` value. Use the [CMFCPropertyGridCtrl::FindItemByData](../../mfc/reference/cmfcpropertygridctrl-class.md#cmfcpropertygridctrl__finditembydata) method to locate the property list item that is associated with the specified `DWORD` value.  
  
##  <a name="cmfcpropertygridproperty__setdescription"></a>  CMFCPropertyGridProperty::SetDescription  
 Specifies the text that describes the current property.  
  
```  
void SetDescription(const CString& strDescr);
```  
  
### Parameters  
 [in] `strDescr`  
 Text that describes the current property.  
  
### Remarks  
  
##  <a name="cmfcpropertygridproperty__setname"></a>  CMFCPropertyGridProperty::SetName  
 Sets the name of a property.  
  
```  
void SetName(
    LPCTSTR lpszName,  
    BOOL bRedraw=TRUE);
```  
  
### Parameters  
 [in] `lpszName`  
 The property name.  
  
 [in] `bRedraw`  
 `TRUE` to redraw the property immediately; otherwise, `FALSE`. The default value is `TRUE`.  
  
### Remarks  
  
##  <a name="cmfcpropertygridproperty__setoriginalvalue"></a>  CMFCPropertyGridProperty::SetOriginalValue  
 Sets the original value of an editable property.  
  
```  
virtual void SetOriginalValue(const COleVariant& varValue);
```  
  
### Parameters  
 [in] `varValue`  
 A value.  
  
### Remarks  
 Use the [CMFCPropertyGridProperty::ResetOriginalValue](#cmfcpropertygridproperty__resetoriginalvalue) method to reset the original value of an edited property.  
  
##  <a name="cmfcpropertygridproperty__setvalue"></a>  CMFCPropertyGridProperty::SetValue  
 Sets the value of a property grid property.  
  
```  
virtual void SetValue(const _variant_t& varValue);
```  
  
### Parameters  
 [in] `varValue`  
 A reference to a value.  
  
### Remarks  
  
##  <a name="cmfcpropertygridproperty__show"></a>  CMFCPropertyGridProperty::Show  
 Shows or hides a property.  
  
```  
void Show(
    BOOL bShow=TRUE,  
    BOOL bAdjustLayout=TRUE);
```  
  
### Parameters  
 [in] `bShow`  
 `TRUE` to display the current property and its sub-items; `FALSE` to hide the current property and its sub-items. The default value is `TRUE`.  
  
 [in] `bAdjustLayout`  
 `TRUE` to recalculate how to draw the label and value of a property and then draw the property; `FALSE` to use existing calculations to draw the property. The default value is `TRUE`.  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CMFCPropertyGridCtrl Class](../../mfc/reference/cmfcpropertygridctrl-class.md)
