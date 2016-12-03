---
title: "CMFCPropertyGridCtrl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCPropertyGridCtrl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCPropertyGridCtrl::get_accValue method"
  - "CMFCPropertyGridCtrl::accHitTest method"
  - "CMFCPropertyGridCtrl::get_accState method"
  - "CMFCPropertyGridCtrl::accLocation method"
  - "CMFCPropertyGridCtrl::get_accChild method"
  - "CMFCPropertyGridCtrl::get_accName method"
  - "CMFCPropertyGridCtrl::PreTranslateMessage method"
  - "CMFCPropertyGridCtrl::get_accRole method"
  - "CMFCPropertyGridCtrl::get_accDefaultAction method"
  - "CMFCPropertyGridCtrl class"
  - "CMFCPropertyGridCtrl::get_accDescription method"
ms.assetid: 95877cae-2311-4a2a-9031-0c8c3cf0a5f9
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
# CMFCPropertyGridCtrl Class
[!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
 Supports an editable property grid control that can display properties in alphabetical or hierarchical order.  
  
## Syntax  
  
```  
class CMFCPropertyGridCtrl : public CWnd  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCPropertyGridCtrl::CMFCPropertyGridCtrl](#cmfcpropertygridctrl__cmfcpropertygridctrl)|Constructs a `CMFCPropertyGridCtrl` object.|  
|`CMFCPropertyGridCtrl::~CMFCPropertyGridCtrl`|Destructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|`CMFCPropertyGridCtrl::accHitTest`|Called by the framework to retrieve the child element or child object at a given point on the screen. (Overrides [CWnd::accHitTest](../../mfc/reference/cwnd-class.md#cwnd__acchittest).)|  
|`CMFCPropertyGridCtrl::accLocation`|Called by the framework to retrieve the specified object's current screen location. (Overrides [CWnd::accLocation](../../mfc/reference/cwnd-class.md#cwnd__acclocation).)|  
|[CMFCPropertyGridCtrl::accSelect](#cmfcpropertygridctrl__accselect)|Called by the framework to modify the selection or move the keyboard focus of the specified object. (Overrides [CWnd::accSelect](../../mfc/reference/cwnd-class.md#cwnd__accselect).)|  
|[CMFCPropertyGridCtrl::AddProperty](#cmfcpropertygridctrl__addproperty)|Adds a new property to a property grid control.|  
|[CMFCPropertyGridCtrl::AlwaysShowUserToolTip](#cmfcpropertygridctrl__alwaysshowusertooltip)||  
|[CMFCPropertyGridCtrl::CloseColorPopup](#cmfcpropertygridctrl__closecolorpopup)|Closes the color selection dialog box.|  
|[CMFCPropertyGridCtrl::Create](#cmfcpropertygridctrl__create)|Creates a property grid control and attaches it to the property grid control object.|  
|[CMFCPropertyGridCtrl::DeleteProperty](#cmfcpropertygridctrl__deleteproperty)|Deletes the specified property from the property grid control.|  
|[CMFCPropertyGridCtrl::DrawControlBarColors](#cmfcpropertygridctrl__drawcontrolbarcolors)||  
|[CMFCPropertyGridCtrl::EnableDescriptionArea](#cmfcpropertygridctrl__enabledescriptionarea)|Enables or disables the description area that is displayed underneath the list of properties.|  
|[CMFCPropertyGridCtrl::EnableHeaderCtrl](#cmfcpropertygridctrl__enableheaderctrl)|Enables or disables the header control at the top of the property grid control.|  
|[CMFCPropertyGridCtrl::EnsureVisible](#cmfcpropertygridctrl__ensurevisible)|Scrolls a property grid control and expands property items until the specified property is visible.|  
|[CMFCPropertyGridCtrl::ExpandAll](#cmfcpropertygridctrl__expandall)|Expands or collapses all property grid control nodes.|  
|[CMFCPropertyGridCtrl::FindItemByData](#cmfcpropertygridctrl__finditembydata)|Retrieves the property that is associated with a user-defined `DWORD` value.|  
|`CMFCPropertyGridCtrl::get_accChild`|Called by the framework to retrieve the address of an `IDispatch` interface for the specified child. (Overrides [CWnd::get_accChild](../../mfc/reference/cwnd-class.md#cwnd__get_accchild).)|  
|[CMFCPropertyGridCtrl::get_accChildCount](#cmfcpropertygridctrl__get_accchildcount)|Called by the framework to retrieve the number of children belonging to this object. (Overrides [CWnd::get_accChildCount](../../mfc/reference/cwnd-class.md#cwnd__get_accchildcount).)|  
|`CMFCPropertyGridCtrl::get_accDefaultAction`|Called by the framework to retrieve a string that describes the object's default action. (Overrides [CWnd::get_accDefaultAction](../../mfc/reference/cwnd-class.md#cwnd__get_accdefaultaction).)|  
|`CMFCPropertyGridCtrl::get_accDescription`|Called by framework to retrieve a string that describes the visual appearance of the specified object. (Overrides [CWnd::get_accDescription](../../mfc/reference/cwnd-class.md#cwnd__get_accdescription).)|  
|[CMFCPropertyGridCtrl::get_accFocus](#cmfcpropertygridctrl__get_accfocus)|Called by the framework to retrieve the object that has the keyboard focus. (Overrides [CWnd::get_accFocus](../../mfc/reference/cwnd-class.md#cwnd__get_accfocus).)|  
|[CMFCPropertyGridCtrl::get_accHelp](#cmfcpropertygridctrl__get_acchelp)|Called by the framework to retrieve an object's `Help` property string. (Overrides [CWnd::get_accHelp](../../mfc/reference/cwnd-class.md#cwnd__get_acchelp).)|  
|[CMFCPropertyGridCtrl::get_accHelpTopic](#cmfcpropertygridctrl__get_acchelptopic)|Called by the framework to retrieve the full path of the `WinHelp`file associated with the specified object and the identifier of the appropriate topic within that file. (Overrides [CWnd::get_accHelpTopic](../../mfc/reference/cwnd-class.md#cwnd__get_acchelptopic).)|  
|[CMFCPropertyGridCtrl::get_accKeyboardShortcut](#cmfcpropertygridctrl__get_acckeyboardshortcut)|Called by the framework to retrieve the specified object's shortcut key or access key. (Overrides [CWnd::get_accKeyboardShortcut](../../mfc/reference/cwnd-class.md#cwnd__get_acckeyboardshortcut).)|  
|`CMFCPropertyGridCtrl::get_accName`|Called by the framework to retrieve the name of the specified object. (Overrides [CWnd::get_accName](../../mfc/reference/cwnd-class.md#cwnd__get_accname).)|  
|`CMFCPropertyGridCtrl::get_accRole`|Called by the framework to retrieve information that describes the role of the specified object. (Overrides [CWnd::get_accRole](../../mfc/reference/cwnd-class.md#cwnd__get_accrole).)|  
|[CMFCPropertyGridCtrl::get_accSelection](#cmfcpropertygridctrl__get_accselection)|Called by the framework to retrieve the selected children of this object. (Overrides [CWnd::get_accSelection](../../mfc/reference/cwnd-class.md#cwnd__get_accselection).)|  
|`CMFCPropertyGridCtrl::get_accState`|Called by the framework to retrieve the current state of the specified object. (Overrides [CWnd::get_accState](../../mfc/reference/cwnd-class.md#cwnd__get_accstate).)|  
|`CMFCPropertyGridCtrl::get_accValue`|Called by the framework to retrieve the value of the specified object. (Overrides [CWnd::get_accValue](../../mfc/reference/cwnd-class.md#cwnd__get_accvalue).)|  
|[CMFCPropertyGridCtrl::GetBkColor](#cmfcpropertygridctrl__getbkcolor)|Retrieves the background color of the current property grid control.|  
|[CMFCPropertyGridCtrl::GetBoldFont](#cmfcpropertygridctrl__getboldfont)|Retrieves the Windows font that of text in the current property grid control in bold style.|  
|[CMFCPropertyGridCtrl::GetCurSel](#cmfcpropertygridctrl__getcursel)|Retrieves the currently selected property.|  
|[CMFCPropertyGridCtrl::GetCustomColors](#cmfcpropertygridctrl__getcustomcolors)|Retrieves the custom colors that are currently defined for property grid control elements.|  
|[CMFCPropertyGridCtrl::GetDescriptionHeight](#cmfcpropertygridctrl__getdescriptionheight)|Retrieves the height of the description area located at the bottom of the property grid control.|  
|[CMFCPropertyGridCtrl::GetDescriptionRows](#cmfcpropertygridctrl__getdescriptionrows)|Retrieves the number of rows in the description area of the current property grid control.|  
|[CMFCPropertyGridCtrl::GetHeaderCtrl](#cmfcpropertygridctrl__getheaderctrl)|Retrieves the internal [CMFCHeaderCtrl](../../mfc/reference/cmfcheaderctrl-class.md) object that the framework uses to display the current property grid control.|  
|[CMFCPropertyGridCtrl::GetHeaderHeight](#cmfcpropertygridctrl__getheaderheight)|Retrieves the height of the property grid control header.|  
|[CMFCPropertyGridCtrl::GetLeftColumnWidth](#cmfcpropertygridctrl__getleftcolumnwidth)|Retrieves the width of the left column of the current property grid control, which contains the name of each property.|  
|[CMFCPropertyGridCtrl::GetListRect](#cmfcpropertygridctrl__getlistrect)|Retrieves the bounding rectangle of the property grid control.|  
|[CMFCPropertyGridCtrl::GetProperty](#cmfcpropertygridctrl__getproperty)|Retrieves a pointer to the property object that corresponds to the specified index of a property grid control item.|  
|[CMFCPropertyGridCtrl::GetPropertyColumnWidth](#cmfcpropertygridctrl__getpropertycolumnwidth)|Retrieves the current width of the column that contains property values.|  
|[CMFCPropertyGridCtrl::GetPropertyCount](#cmfcpropertygridctrl__getpropertycount)|Retrieves the number of properties in a property grid control.|  
|[CMFCPropertyGridCtrl::GetRowHeight](#cmfcpropertygridctrl__getrowheight)|Retrieves the height of a row in the property grid control.|  
|[CMFCPropertyGridCtrl::GetScrollBarCtrl](#cmfcpropertygridctrl__getscrollbarctrl)|Retrieves a pointer to the scroll bar control in the property grid control. (Overrides [CWnd::GetScrollBarCtrl](../../mfc/reference/cwnd-class.md#cwnd__getscrollbarctrl).)|  
|[CMFCPropertyGridCtrl::GetTextColor](#cmfcpropertygridctrl__gettextcolor)|Retrieves the color of the text of property items in the current property grid control.|  
|`CMFCPropertyGridCtrl::GetThisClass`|Used by the framework to obtain a pointer to the [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) object that is associated with this class type.|  
|[CMFCPropertyGridCtrl::HitTest](#cmfcpropertygridctrl__hittest)|Retrieves a pointer to the property object that corresponds to a property grid control item if a specified point is in the item. This method also indicates the area in the property grid control that contains the point.|  
|[CMFCPropertyGridCtrl::InitHeader](#cmfcpropertygridctrl__initheader)|Initializes the internal [CMFCHeaderCtrl](../../mfc/reference/cmfcheaderctrl-class.md) object that the framework uses to display the current property grid control.|  
|[CMFCPropertyGridCtrl::IsAlphabeticMode](#cmfcpropertygridctrl__isalphabeticmode)|Indicates whether a property grid control is in alphabetic mode.|  
|[CMFCPropertyGridCtrl::IsAlwaysShowUserToolTip](#cmfcpropertygridctrl__isalwaysshowusertooltip)||  
|[CMFCPropertyGridCtrl::IsDescriptionArea](#cmfcpropertygridctrl__isdescriptionarea)|Indicates whether the description area of the property grid control is displayed.|  
|[CMFCPropertyGridCtrl::IsGroupNameFullWidth](#cmfcpropertygridctrl__isgroupnamefullwidth)|Indicates whether each property group name is displayed across the width of the current property grid control.|  
|[CMFCPropertyGridCtrl::IsHeaderCtrl](#cmfcpropertygridctrl__isheaderctrl)|Indicates whether the header control is displayed.|  
|[CMFCPropertyGridCtrl::IsMarkModifiedProperties](#cmfcpropertygridctrl__ismarkmodifiedproperties)|Indicates how the property grid control displays modified properties.|  
|[CMFCPropertyGridCtrl::IsShowDragContext](#cmfcpropertygridctrl__isshowdragcontext)|Indicates whether the framework redraws the name and value columns of the current property grid control when a user resizes the columns.|  
|[CMFCPropertyGridCtrl::IsVSDotNetLook](#cmfcpropertygridctrl__isvsdotnetlook)|Indicates whether the appearance of the property grid control is in the style that is used by VS .NET.|  
|[CMFCPropertyGridCtrl::MarkModifiedProperties](#cmfcpropertygridctrl__markmodifiedproperties)|Specifies how to display modified properties.|  
|`CMFCPropertyGridCtrl::PreTranslateMessage`|Used by class [CWinApp](../../mfc/reference/cwinapp-class.md) to translate window messages before they are dispatched to the [TranslateMessage](http://msdn.microsoft.com/library/windows/desktop/ms644955) and [DispatchMessage](http://msdn.microsoft.com/library/windows/desktop/ms644934) Windows functions. (Overrides [CWnd::PreTranslateMessage](../../mfc/reference/cwnd-class.md#cwnd__pretranslatemessage).)|  
|[CMFCPropertyGridCtrl::RemoveAll](#cmfcpropertygridctrl__removeall)|Removes all property objects from a property grid control.|  
|[CMFCPropertyGridCtrl::ResetOriginalValues](#cmfcpropertygridctrl__resetoriginalvalues)|Restores the original value of all properties.|  
|[CMFCPropertyGridCtrl::SetAlphabeticMode](#cmfcpropertygridctrl__setalphabeticmode)|Sets or resets alphabetical mode.|  
|[CMFCPropertyGridCtrl::SetBoolLabels](#cmfcpropertygridctrl__setboollabels)|Specifies the text of Boolean labels.|  
|[CMFCPropertyGridCtrl::SetCurSel](#cmfcpropertygridctrl__setcursel)|Selects a property in a property grid control.|  
|[CMFCPropertyGridCtrl::SetCustomColors](#cmfcpropertygridctrl__setcustomcolors)|Specifies custom colors for various property grid control elements.|  
|[CMFCPropertyGridCtrl::SetDescriptionRows](#cmfcpropertygridctrl__setdescriptionrows)|Specifies the number of rows to display in the description section of the current property grid control.|  
|[CMFCPropertyGridCtrl::SetGroupNameFullWidth](#cmfcpropertygridctrl__setgroupnamefullwidth)|Specifies whether to display the full width of the category name for a group of properties in the current property grid control.|  
|[CMFCPropertyGridCtrl::SetListDelimiter](#cmfcpropertygridctrl__setlistdelimiter)|Defines a character that will be used as a delimiter in a list of property values.|  
|[CMFCPropertyGridCtrl::SetShowDragContext](#cmfcpropertygridctrl__setshowdragcontext)|Specifies whether the framework redraws the name and value columns of the current property grid control when a user resizes the columns.|  
|[CMFCPropertyGridCtrl::SetVSDotNetLook](#cmfcpropertygridctrl__setvsdotnetlook)|Sets the appearance of the property grid control to the style that is used in VS .NET.|  
|[CMFCPropertyGridCtrl::UpdateColor](#cmfcpropertygridctrl__updatecolor)|Sets the color value of the currently selected color property.|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCPropertyGridCtrl::AdjustLayout](#cmfcpropertygridctrl__adjustlayout)|Redraws the property grid control and its properties.|  
|[CMFCPropertyGridCtrl::CompareProps](#cmfcpropertygridctrl__compareprops)|Called by the property grid control to sort properties.|  
|[CMFCPropertyGridCtrl::EditItem](#cmfcpropertygridctrl__edititem)|Called by the framework when the user starts to modify a property.|  
|[CMFCPropertyGridCtrl::EndEditItem](#cmfcpropertygridctrl__endedititem)|Called by the framework when the user stops modifying a property.|  
|[CMFCPropertyGridCtrl::Init](#cmfcpropertygridctrl__init)|Called by the framework to initialize a property grid control.|  
|[CMFCPropertyGridCtrl::OnChangeSelection](#cmfcpropertygridctrl__onchangeselection)|Called by the framework when the current selection is changed.|  
|[CMFCPropertyGridCtrl::OnClickButton](#cmfcpropertygridctrl__onclickbutton)|Called by the framework when a property button is clicked.|  
|[CMFCPropertyGridCtrl::OnDrawBorder](#cmfcpropertygridctrl__ondrawborder)|Called by the framework to draw a border around a property grid control.|  
|[CMFCPropertyGridCtrl::OnDrawDescription](#cmfcpropertygridctrl__ondrawdescription)|Called by the framework to draw the description area and display the description text.|  
|[CMFCPropertyGridCtrl::OnDrawList](#cmfcpropertygridctrl__ondrawlist)|Called by the framework to display the list of properties in the property grid control.|  
|[CMFCPropertyGridCtrl::OnDrawProperty](#cmfcpropertygridctrl__ondrawproperty)|Called by the framework to display a property.|  
|[CMFCPropertyGridCtrl::OnPropertyChanged](#cmfcpropertygridctrl__onpropertychanged)|Called by the framework when the value of a property is changed.|  
|[CMFCPropertyGridCtrl::OnSelectCombo](#cmfcpropertygridctrl__onselectcombo)|Called by the framework when a property that contains a combo box control is selected.|  
|[CMFCPropertyGridCtrl::ValidateItemData](#cmfcpropertygridctrl__validateitemdata)|Called by the framework to validate property data.|  
  
## Remarks  
 The `CMFCPropertyGridCtrl` class displays a property grid control that contains editable properties derived from the [CMFCPropertyGridProperty](../../mfc/reference/cmfcpropertygridproperty-class.md) class. Each property can represent a type and it can contain subitems. The property grid control supports a resizable area at the bottom that can display the description of a selected property.  
  
 To use a property grid control, construct a `CMFCPropertyGridCtrl` object and then call the [CMFCPropertyGridCtrl::Create](#cmfcpropertygridctrl__create) method. Use the [CMFCPropertyGridCtrl::AddProperty](#cmfcpropertygridctrl__addproperty) method to add properties to the list.  
  
## Selection Properties  
 Instead of representing a value, a property item can start a dialog box that enables the user to select a color, file, or font.  
  
 The following table lists four selection property types:  
  
|Class|Description|  
|-----------|-----------------|  
|[CMFCPropertyGridProperty Class](../../mfc/reference/cmfcpropertygridproperty-class.md)|A general purpose property that is used to specify the value of strings, Booleans, dates and so on.|  
|[CMFCPropertyGridColorProperty Class](../../mfc/reference/cmfcpropertygridcolorproperty-class.md)|A property that is used to select a color value.|  
|[CMFCPropertyGridFileProperty Class](../../mfc/reference/cmfcpropertygridfileproperty-class.md)|A property that is used to select a file.|  
|[CMFCPropertyGridFontProperty Class](../../mfc/reference/cmfcpropertygridfontproperty-class.md)|A property that is used to select a font.|  
  
## Illustrations  
 The following illustrations depict a property grid control that displays properties in two ways. The first illustration displays properties hierarchically and the second displays properties alphabetically.  
  
 ![Property List PropertySheet](../../mfc/reference/media/proplist.png "proplist")  
  
## Example  
 The following example demonstrates how to configure a property grid control object by using various methods in the `CMFCPropertyGridCtrl` class. The example demonstrates how to enable the header control, enable the description area, and set the appearance of the property grid control. The example also shows how to set the alphabetic mode for the control whereby the control sorts all the properties it contains by their property name, and how to set the custom colors for various elements of the property grid control. This example is part of the [New Controls sample](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_NewControls#14](../../mfc/reference/codesnippet/cpp/cmfcpropertygridctrl-class_1.h)]  
[!code-cpp[NVC_MFC_NewControls#16](../../mfc/reference/codesnippet/cpp/cmfcpropertygridctrl-class_2.cpp)]  
[!code-cpp[NVC_MFC_NewControls#20](../../mfc/reference/codesnippet/cpp/cmfcpropertygridctrl-class_3.cpp)]  
[!code-cpp[NVC_MFC_NewControls#21](../../mfc/reference/codesnippet/cpp/cmfcpropertygridctrl-class_4.cpp)]  
[!code-cpp[NVC_MFC_NewControls#24](../../mfc/reference/codesnippet/cpp/cmfcpropertygridctrl-class_5.cpp)]  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CMFCPropertyGridCtrl](../../mfc/reference/cmfcpropertygridctrl-class.md)  
  
## Requirements  
 **Header:** afxpropertygridctrl.h  
  
##  <a name="cmfcpropertygridctrl__accselect"></a>  CMFCPropertyGridCtrl::accSelect  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual HRESULT accSelect(
    long flagsSelect,  
    VARIANT varChild);
```  
  
### Parameters  
 [in] `flagsSelect`  
 [in] `varChild`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcpropertygridctrl__addproperty"></a>  CMFCPropertyGridCtrl::AddProperty  
 Adds a new property to a property grid control.  
  
```  
int AddProperty(
    CMFCPropertyGridProperty* pProp,  
    BOOL bRedraw=TRUE,  
    BOOL bAdjustLayout=TRUE);
```  
  
### Parameters  
 [in] `pProp`  
 Pointer to a property.  
  
 [in] `bRedraw`  
 `TRUE` to redraw the property immediately; otherwise, `FALSE`. The default value is `TRUE`.  
  
 [in] `bAdjustLayout`  
 `TRUE` to recalculate how to draw the text and value of the property, and then draw the property; `FALSE` to use existing calculations to draw the property. The default value is `TRUE`.  
  
### Return Value  
 If this method succeeds, the zero-based index of the position in the property grid control where the property is added; otherwise, -1.  
  
### Remarks  
 This method adds a pointer to the specified property to the end of the list of properties in the property grid control. Do not destroy the properties or allow them to go out of scope before the grid control is destroyed. When you are done with the property grid control, call [CMFCPropertyGridCtrl::RemoveAll](#cmfcpropertygridctrl__removeall) to delete all the added properties. The AddProperty method fails if the specified property has already been added to the list.  
  
##  <a name="cmfcpropertygridctrl__adjustlayout"></a>  CMFCPropertyGridCtrl::AdjustLayout  
 Redraws the property grid control and its properties.  
  
```  
virtual void AdjustLayout();
```  
  
### Remarks  
 This method recalculates how to draw the entire property grid control and its properties, including images, fonts, and controls.  
  
##  <a name="cmfcpropertygridctrl__alwaysshowusertooltip"></a>  CMFCPropertyGridCtrl::AlwaysShowUserToolTip  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void AlwaysShowUserToolTip(BOOL bShow = TRUE);
```  
  
### Parameters  
 [in] `bShow`  
  
### Remarks  
  
##  <a name="cmfcpropertygridctrl__closecolorpopup"></a>  CMFCPropertyGridCtrl::CloseColorPopup  
 Closes the color selection dialog box.  
  
```  
virtual void CloseColorPopup();
```  
  
### Remarks  
 For more information about the color selection dialog box, see [CMFCPropertyGridColorProperty Class](../../mfc/reference/cmfcpropertygridcolorproperty-class.md).  
  
##  <a name="cmfcpropertygridctrl__cmfcpropertygridctrl"></a>  CMFCPropertyGridCtrl::CMFCPropertyGridCtrl  
 Constructs a `CMFCPropertyGridCtrl` object.  
  
```  
CMFCPropertyGridCtrl();
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcpropertygridctrl__compareprops"></a>  CMFCPropertyGridCtrl::CompareProps  
 Called by the property grid control to sort properties.  
  
```  
virtual int CompareProps(
    const CMFCPropertyGridProperty* pProp1,  
    const CMFCPropertyGridProperty* pProp2) const;

 
```  
  
### Parameters  
 `pProp1`  
 A pointer to a property.  
  
 `pProp2`  
 A pointer to a property.  
  
### Return Value  
  
|Return Value|Description|  
|------------------|-----------------|  
|< 0|The name of the `pProp1` parameter is less than the name of the `pProp2` parameter.|  
|0|The name of the `pProp1` parameter is equal to the name of the `pProp2` parameter.|  
|> 0|The name of the `pProp1` object is greater than the name of the `pProp2` parameter.|  
  
### Remarks  
 By default, this method uses the [CString::Compare](../../atl-mfc-shared/reference/cstringt-class.md#cstringt__compare) method to compare the `CMFCPropertyGridProperty::m_strName` members of the specified parameters.  
  
##  <a name="cmfcpropertygridctrl__create"></a>  CMFCPropertyGridCtrl::Create  
 Creates a property grid control and attaches it to the property grid control object.  
  
```  
virtual BOOL Create(
    DWORD dwStyle,  
    const RECT& rect,  
    CWnd* pParentWnd,  
    UINT nID);
```  
  
### Parameters  
 [in] `dwStyle`  
 A bitwise combination (OR) of [window styles](../../mfc/reference/window-styles.md).  
  
 [in] `rect`  
 A bounding rectangle that specifies the size and position of the window, in client coordinates of `pParentWnd`.  
  
 [in] `pParentWnd`  
 Pointer to the parent window. Must not be `NULL`.  
  
 [in] `nID`  
 The ID of the child window.  
  
### Return Value  
 `TRUE` if the window was created successfully; otherwise, `FALSE`.  
  
### Remarks  
 To create a property grid control, first call [CMFCPropertyGridCtrl::CMFCPropertyGridCtrl](#cmfcpropertygridctrl__cmfcpropertygridctrl) to construct a property grid object. Then call `CMFCPropertyGridCtrl::Create`.  
  
### Example  
 The following example demonstrates how to use the `Create` method in `CMFCPropertyGridCtrl` class. This example is part of the [New Controls sample](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_NewControls#15](../../mfc/reference/codesnippet/cpp/cmfcpropertygridctrl-class_6.cpp)]  
  
##  <a name="cmfcpropertygridctrl__deleteproperty"></a>  CMFCPropertyGridCtrl::DeleteProperty  
 Deletes the specified property from the property grid control.  
  
```  
BOOL DeleteProperty(
    CMFCPropertyGridProperty*& pProp,  
    BOOL bRedraw=TRUE,  
    BOOL bAdjustLayout=TRUE);
```  
  
### Parameters  
 [in] `pProp`  
 Pointer to a property.  
  
 [in] `bRedraw`  
 `TRUE` to redraw the property grid control; otherwise, `FALSE`. The default value is `TRUE`.  
  
 [in] `bAdjustLayout`  
 `TRUE` to recalculate how to draw all the text, images, and items in the property grid control, and then draw the control; otherwise, `FALSE`. The default value is `TRUE`.  
  
### Return Value  
 `TRUE` if this method is successful; otherwise, `FALSE`.  
  
### Remarks  
 Use this method to delete a property, and any sub-items, from the property grid control.  
  
##  <a name="cmfcpropertygridctrl__drawcontrolbarcolors"></a>  CMFCPropertyGridCtrl::DrawControlBarColors  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL DrawControlBarColors() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcpropertygridctrl__edititem"></a>  CMFCPropertyGridCtrl::EditItem  
 Called by the framework when the user starts to modify a property.  
  
```  
virtual BOOL EditItem(
    CMFCPropertyGridProperty* pProp,  
    LPPOINT lptClick=NULL);
```  
  
### Parameters  
 [in] `pProp`  
 Pointer to a property.  
  
 [in] `lptClick`  
 The point on the property grid control that the user clicked to begin the edit operation. The point is in the client coordinates of the control. The default value is `NULL`.  
  
### Return Value  
 `TRUE` if method is successful; otherwise, `FALSE`.  
  
### Remarks  
  
##  <a name="cmfcpropertygridctrl__enabledescriptionarea"></a>  CMFCPropertyGridCtrl::EnableDescriptionArea  
 Enables or disables the description area that is displayed underneath the list of properties in the property grid control.  
  
```  
void EnableDescriptionArea(BOOL bEnable=TRUE);
```  
  
### Parameters  
 [in] `bEnable`  
 `TRUE` to enable the description area; `FALSE` to disable the description area. The default value is `TRUE`.  
  
### Remarks  
 The description area is displayed at the bottom of the property grid control. By default, the description area is disabled and not visible.  
  
##  <a name="cmfcpropertygridctrl__enableheaderctrl"></a>  CMFCPropertyGridCtrl::EnableHeaderCtrl  
 Enables or disables the header control at the top of the property grid control.  
  
```  
void EnableHeaderCtrl(
    BOOL bEnable=TRUE,  
    LPCTSTR lpszLeftColumn=_T("Property"),  
    LPCTSTR lpszRightColumn=_T("Value"));
```  
  
### Parameters  
 [in] `bEnable`  
 `TRUE` to enable the header control; `FALSE` to disable the header control. The default value is `TRUE`.  
  
 [in] `lpszLeftColumn`  
 The title of the left column of the header control. The default value is **Property**.  
  
 [in] `lpszRightColumn`  
 The title of the right column of the header control. The default value is **Value**.  
  
##  <a name="cmfcpropertygridctrl__endedititem"></a>  CMFCPropertyGridCtrl::EndEditItem  
 Called by the framework when the user finishes modifying a property.  
  
```  
virtual BOOL EndEditItem(BOOL bUpdateData=TRUE);
```  
  
### Parameters  
 [in] `bUpdateData`  
 `TRUE` to specify that the modified property data must be validated when the edit operation is complete; otherwise, `FALSE`. The default value is `TRUE`.  
  
### Return Value  
 `TRUE` if the edit operation ends successfully; `FALSE` if the modified property data is not valid or if the editing operation should continue.  
  
### Remarks  
  
##  <a name="cmfcpropertygridctrl__ensurevisible"></a>  CMFCPropertyGridCtrl::EnsureVisible  
 Scrolls a property grid control and expands property items until the specified property is visible.  
  
```  
void EnsureVisible(
    CMFCPropertyGridProperty* pProp,  
    BOOL bExpandParents=FALSE);
```  
  
### Parameters  
 [in] `pProp`  
 Pointer to a property.  
  
 [in] `bExpandParents`  
 `TRUE` to expand parent items to make the specified property visible; otherwise, `FALSE`. The default is `FALSE`.  
  
### Remarks  
  
##  <a name="cmfcpropertygridctrl__expandall"></a>  CMFCPropertyGridCtrl::ExpandAll  
 Expands or collapses all property grid control nodes.  
  
```  
void ExpandAll(BOOL bExpand=TRUE);
```  
  
### Parameters  
 [in] `bExpand`  
 `TRUE` to expand all nodes; `FALSE` to collapse all nodes. The default value is `TRUE`.  
  
### Remarks  
  
##  <a name="cmfcpropertygridctrl__finditembydata"></a>  CMFCPropertyGridCtrl::FindItemByData  
 Retrieves the property that is associated with a user-defined `DWORD` value.  
  
```  
CMFCPropertyGridProperty* FindItemByData(
    DWORD_PTR dwData,  
    BOOL bSearchSubItems=TRUE) const;

 
```  
  
### Parameters  
 [in] `dwData`  
 A `DWORD` value.  
  
 [in] `bSearchSubItems`  
 `TRUE` to search property sub-items; otherwise, `FALSE`. The default value is `TRUE`.  
  
### Return Value  
 A pointer to the associated property object if this method succeeds; otherwise, `NULL`.  
  
### Remarks  
 Use the [CMFCPropertyGridCtrl::CMFCPropertyGridCtrl](#cmfcpropertygridctrl__cmfcpropertygridctrl) constructor or [CMFCPropertyGridProperty::SetData](../../mfc/reference/cmfcpropertygridproperty-class.md#cmfcpropertygridproperty__setdata) method to associate a `DWORD` with a property.  
  
##  <a name="cmfcpropertygridctrl__get_accchildcount"></a>  CMFCPropertyGridCtrl::get_accChildCount  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual HRESULT get_accChildCount(long* pcountChildren);
```  
  
### Parameters  
 [in] `pcountChildren`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcpropertygridctrl__get_accfocus"></a>  CMFCPropertyGridCtrl::get_accFocus  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual HRESULT get_accFocus(VARIANT* pvarChild);
```  
  
### Parameters  
 [in] `pvarChild`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcpropertygridctrl__get_acchelp"></a>  CMFCPropertyGridCtrl::get_accHelp  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual HRESULT get_accHelp(
    VARIANT varChild,  
    BSTR* pszHelp);
```  
  
### Parameters  
 [in] `varChild`  
 [in] `pszHelp`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcpropertygridctrl__get_acchelptopic"></a>  CMFCPropertyGridCtrl::get_accHelpTopic  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual HRESULT get_accHelpTopic(
    BSTR* pszHelpFile,  
    VARIANT varChild,  
    long* pidTopic);
```  
  
### Parameters  
 [in] `pszHelpFile`  
 [in] `varChild`  
 [in] `pidTopic`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcpropertygridctrl__get_acckeyboardshortcut"></a>  CMFCPropertyGridCtrl::get_accKeyboardShortcut  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual HRESULT get_accKeyboardShortcut(
    VARIANT varChild,  
    BSTR* pszKeyboardShortcut);
```  
  
### Parameters  
 [in] `varChild`  
 [in] `pszKeyboardShortcut`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcpropertygridctrl__get_accselection"></a>  CMFCPropertyGridCtrl::get_accSelection  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual HRESULT get_accSelection(VARIANT* pvarChildren);
```  
  
### Parameters  
 [in] `pvarChildren`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcpropertygridctrl__getbkcolor"></a>  CMFCPropertyGridCtrl::GetBkColor  
 Retrieves the background color of the current property grid control.  
  
```  
COLORREF GetBkColor() const;

 
```  
  
### Return Value  
 An RGB color value.  
  
### Remarks  
 This method retrieves the color that the framework uses to draw the background of the current property grid control. The [CMFCPropertyGridCtrl::GetTextColor](#cmfcpropertygridctrl__gettextcolor) method retrieves the foreground color.  
  
##  <a name="cmfcpropertygridctrl__getboldfont"></a>  CMFCPropertyGridCtrl::GetBoldFont  
 Retrieves the Windows font that is used to draw text in the current property grid control in bold style.  
  
```  
CFont& GetBoldFont();
```  
  
### Return Value  
 A reference to a [CFont](../../mfc/reference/cfont-class.md) object that describes the characteristics of a bold font.  
  
##  <a name="cmfcpropertygridctrl__getcursel"></a>  CMFCPropertyGridCtrl::GetCurSel  
 Retrieves the currently selected property.  
  
```  
CMFCPropertyGridProperty* GetCurSel() const;

 
```  
  
### Return Value  
 A pointer to the property object that corresponds to the selected item in the property grid control.  
  
### Remarks  
  
##  <a name="cmfcpropertygridctrl__getcustomcolors"></a>  CMFCPropertyGridCtrl::GetCustomColors  
 Retrieves the custom colors that are currently defined for property grid control elements.  
  
```  
void GetCustomColors(
    COLORREF& clrBackground,  
    COLORREF& clrText,  
    COLORREF& clrGroupBackground,  
    COLORREF& clrGroupText,  
    COLORREF& clrDescriptionBackground,  
    COLORREF& clrDescriptionText,  
    COLORREF& clrLine);
```  
  
### Parameters  
 [out] `clrBackground`  
 The background color of property values.  
  
 [out] `clrText`  
 The color of property names and property value text.  
  
 [out] `clrGroupBackground`  
 The background color of a property group.  
  
 [out] `clrGroupText`  
 The color of text in the property group.  
  
 [out] `clrDescriptionBackground`  
 The background color of the description area.  
  
 [out] `clrDescriptionText`  
 The color of text in the description area.  
  
 [out] `clrLine`  
 The color of lines that are drawn between properties.  
  
### Remarks  
 Use the [CMFCPropertyGridCtrl::SetCustomColors](#cmfcpropertygridctrl__setcustomcolors) method to set custom colors.  
  
##  <a name="cmfcpropertygridctrl__getdescriptionheight"></a>  CMFCPropertyGridCtrl::GetDescriptionHeight  
 Retrieves the height of the description area, which is located at the bottom of the property grid control.  
  
```  
int GetDescriptionHeight() const;

 
```  
  
### Return Value  
 The height of the description area, in pixels.  
  
### Remarks  
 The height of the description area is calculated automatically and is set to 1/4 the height of the property grid control.  
  
 Use the [CMFCPropertyGridCtrl::EnableDescriptionArea](#cmfcpropertygridctrl__enabledescriptionarea) method to display or hide the description area. Use the [CMFCPropertyGridCtrl::IsDescriptionArea](#cmfcpropertygridctrl__isdescriptionarea) method to determine whether the description area is displayed or hidden.  
  
##  <a name="cmfcpropertygridctrl__getdescriptionrows"></a>  CMFCPropertyGridCtrl::GetDescriptionRows  
 Retrieves the number of rows in the description area of the current property grid control.  
  
```  
int GetDescriptionRows() const;

 
```  
  
### Return Value  
 The number of rows in the description area of the current property grid control.  
  
### Remarks  
 The [CMFCPropertyGridCtrl::CMFCPropertyGridCtrl](#cmfcpropertygridctrl__cmfcpropertygridctrl) constructor initializes the description area to 3 rows.  
  
##  <a name="cmfcpropertygridctrl__getheaderctrl"></a>  CMFCPropertyGridCtrl::GetHeaderCtrl  
 Retrieves the internal [CMFCHeaderCtrl](../../mfc/reference/cmfcheaderctrl-class.md) object that the framework uses to display the current property grid control.  
  
```  
virtual CMFCHeaderCtrl& GetHeaderCtrl();
```  
  
### Return Value  
 A reference to a `CMFCHeaderCtrl` object.  
  
##  <a name="cmfcpropertygridctrl__getheaderheight"></a>  CMFCPropertyGridCtrl::GetHeaderHeight  
 Retrieves the height of the header of a property grid control.  
  
```  
int GetHeaderHeight() const;

 
```  
  
### Return Value  
 The height of the header, in pixels.  
  
### Remarks  
  
##  <a name="cmfcpropertygridctrl__getleftcolumnwidth"></a>  CMFCPropertyGridCtrl::GetLeftColumnWidth  
 Retrieves of the width of the left column of the current property grid control, which contains the name of each property.  
  
```  
int GetLeftColumnWidth() const;

 
```  
  
### Return Value  
 The width of the name column.  
  
### Remarks  
 The right column of a property grid control contains the value of each property.  
  
##  <a name="cmfcpropertygridctrl__getlistrect"></a>  CMFCPropertyGridCtrl::GetListRect  
 Retrieves the bounding rectangle of the property grid control.  
  
```  
CRect GetListRect() const;

 
```  
  
### Return Value  
 The bounding rectangle of the property grid control. This rectange does not include the description area and header.  
  
### Remarks  
  
##  <a name="cmfcpropertygridctrl__getproperty"></a>  CMFCPropertyGridCtrl::GetProperty  
 Retrieves a pointer to the property object that corresponds to the specified index of an item in a property grid control.  
  
```  
CMFCPropertyGridProperty* GetProperty(int nIndex) const;

 
```  
  
### Parameters  
 [in] `nIndex`  
 The zero-based index of a property grid control item.  
  
 This method asserts if the `nIndex` parameter is less than zero or greater than or equal to the number of properties.  
  
### Return Value  
 A pointer to the property object that corresponds to the specified index if this method is successful; otherwise, `NULL`.  
  
### Remarks  
  
##  <a name="cmfcpropertygridctrl__getpropertycolumnwidth"></a>  CMFCPropertyGridCtrl::GetPropertyColumnWidth  
 Retrieves the current width of the column that contains property values.  
  
```  
int GetPropertyColumnWidth() const;

 
```  
  
### Return Value  
 The current width of the column that contains property values.  
  
### Remarks  
 The column on the right in the property grid control contains the property values. A customer can use the split box of the property grid control to change the width of the values column.  
  
##  <a name="cmfcpropertygridctrl__getpropertycount"></a>  CMFCPropertyGridCtrl::GetPropertyCount  
 Retrieves the number of properties in a property grid control.  
  
```  
int GetPropertyCount() const;

 
```  
  
### Return Value  
 The number of properties.  
  
### Remarks  
  
##  <a name="cmfcpropertygridctrl__getrowheight"></a>  CMFCPropertyGridCtrl::GetRowHeight  
 Retrieves the height of a row in the property grid control.  
  
```  
int GetRowHeight() const;

 
```  
  
### Return Value  
 The height of a row.  
  
### Remarks  
 The height of a row is equal to the current font height plus 4 pixels.  
  
##  <a name="cmfcpropertygridctrl__getscrollbarctrl"></a>  CMFCPropertyGridCtrl::GetScrollBarCtrl  
 Retrieves a pointer to the scroll bar control in the property grid control.  
  
```  
virtual CScrollBar* GetScrollBarCtrl(int nBar) const;

 
```  
  
### Parameters  
 [in] `nBar`  
 The orientation of the scroll bar, which must be `SB_VERT`.  
  
### Return Value  
 A pointer to a scroll bar object, or `NULL` if there is no scroll bar or the scroll bar orientation is `SB_HORZ`.  
  
### Remarks  
 Use this method to gain direct access to the vertical scroll bar control.  
  
##  <a name="cmfcpropertygridctrl__gettextcolor"></a>  CMFCPropertyGridCtrl::GetTextColor  
 Retrieves the color that is used to draw the text of property items in the current property grid control.  
  
```  
COLORREF GetTextColor() const;

 
```  
  
### Return Value  
 An RGB color value.  
  
### Remarks  
 This method retrieves the color that the framework uses to draw the foreground of the current property grid control. The [CMFCPropertyGridCtrl::GetBkColor](#cmfcpropertygridctrl__getbkcolor) method retrieves the background color.  
  
##  <a name="cmfcpropertygridctrl__hittest"></a>  CMFCPropertyGridCtrl::HitTest  
 Retrieves a pointer to the property object that corresponds to a property grid control item if a specified point is in the item. This method also indicates the area in the property grid control that contains the point.  
  
```  
CMFCPropertyGridProperty* HitTest(
    CPoint pt,  
    CMFCPropertyGridProperty::ClickArea* pnArea=NULL,  
    BOOL bPropsOnly=FALSE) const;

 
```  
  
### Parameters  
 [in] `pt`  
 A point, in client coordinates.  
  
 [in, out] `pnArea`  
 A pointer to a `ClickArea` variable. When this method returns, the variable indicates the *property area* that contains the specified point. For more information about a property area, see Remarks.  
  
 [in] `bPropsOnly`  
 `TRUE` to test only the property area; `FALSE` to test the *description area* if the specified point is not in the property area. The default value is `FALSE`. For more information about the description area, see Remarks.  
  
### Return Value  
 If the `bPropsOnly` parameter is `TRUE` and the specified point is in a property area, the return value is a pointer to the corresponding property object. In addition, the `pnArea` parameter is set to the particular area that contains the specified point. Otherwise, the return value is `NULL` and the `pnArea` parameter is not modified.  
  
 If the `bPropsOnly` parameter is `FALSE`, the return value is always `NULL`. However, if the specified point is in the description area, the `pnArea` parameter is set to `CMFCPropertyGridProperty::ClickDescription`.  
  
### Remarks  
 The term *property area* refers to any one of the name, value, or expand box areas of a property grid control item. The *description area* is the zone at the bottom of a property grid control. When you click a property grid control item, the description area displays a description of the corresponding property.  
  
 This method sets the value of the variable that the `pnArea` parameter points to. The following table lists the possible values and corresponding areas.  
  
|Value|Area|  
|-----------|----------|  
|`ClickArea::ClickExpandBox`|Property expand box control.|  
|`ClickArea::ClickName`|Property name.|  
|`ClickArea::ClickValue`|Property value.|  
|`CMFCPropertyGridProperty::ClickDescription`|Property grid control description area.|  
  
##  <a name="cmfcpropertygridctrl__init"></a>  CMFCPropertyGridCtrl::Init  
 Called by the framework to initialize a property grid control.  
  
```  
virtual void Init();
```  
  
### Remarks  
  
##  <a name="cmfcpropertygridctrl__initheader"></a>  CMFCPropertyGridCtrl::InitHeader  
 Initializes the internal [CMFCHeaderCtrl](../../mfc/reference/cmfcheaderctrl-class.md) object that the framework uses to display the current property grid control.  
  
```  
virtual void InitHeader();
```  
  
##  <a name="cmfcpropertygridctrl__isalphabeticmode"></a>  CMFCPropertyGridCtrl::IsAlphabeticMode  
 Indicates whether a property grid control is in alphabetic mode.  
  
```  
BOOL IsAlphabeticMode() const;

 
```  
  
### Return Value  
 `TRUE` if the property grid control is in alphabetic mode; otherwise `FALSE`.  
  
### Remarks  
 When the property grid control is in alphabetic mode, all properties are sorted alphabetically by their names. Otherwise, properties are grouped under their parent nodes.  
  
 Use the [CMFCPropertyGridCtrl::SetAlphabeticMode](#cmfcpropertygridctrl__setalphabeticmode) method to enable or disable alphabetic mode.  
  
##  <a name="cmfcpropertygridctrl__isalwaysshowusertooltip"></a>  CMFCPropertyGridCtrl::IsAlwaysShowUserToolTip  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL IsAlwaysShowUserToolTip() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcpropertygridctrl__isdescriptionarea"></a>  CMFCPropertyGridCtrl::IsDescriptionArea  
 Indicates whether the description area of the property grid control is displayed.  
  
```  
BOOL IsDescriptionArea() const;

 
```  
  
### Return Value  
 `TRUE` if the description area is displayed; otherwise, `FALSE`.  
  
### Remarks  
 Use the [CMFCPropertyGridCtrl::EnableDescriptionArea](#cmfcpropertygridctrl__enabledescriptionarea) method to hide or display the description area.  
  
##  <a name="cmfcpropertygridctrl__isgroupnamefullwidth"></a>  CMFCPropertyGridCtrl::IsGroupNameFullWidth  
 Indicates whether each property group name is displayed across the width of the current property grid control.  
  
```  
BOOL IsGroupNameFullWidth() const;

 
```  
  
### Return Value  
 `TRUE` if group names are displayed across the width of the property grid control; `FALSE` if group names are truncated by the right (value) column of the control.  
  
### Remarks  
 A *group* is a collection of related properties in a property grid control. If the control is displayed hierarchically, the *group name* is displayed as a category title in the row above the group.  
  
##  <a name="cmfcpropertygridctrl__isheaderctrl"></a>  CMFCPropertyGridCtrl::IsHeaderCtrl  
 Indicates whether the header control is displayed.  
  
```  
BOOL IsHeaderCtrl() const;

 
```  
  
### Return Value  
 `TRUE` if the header control is displayed; otherwise `FALSE`.  
  
### Remarks  
 Use the [CMFCPropertyGridCtrl::EnableHeaderCtrl](#cmfcpropertygridctrl__enableheaderctrl) method to hide or display the header control.  
  
##  <a name="cmfcpropertygridctrl__ismarkmodifiedproperties"></a>  CMFCPropertyGridCtrl::IsMarkModifiedProperties  
 Indicates how the property grid control displays modified properties.  
  
```  
BOOL IsMarkModifiedProperties() const;

 
```  
  
### Return Value  
 `TRUE` if bold style is used to display modified properties; `FALSE` if regular style is used to display modified properties.  
  
### Remarks  
  
##  <a name="cmfcpropertygridctrl__isshowdragcontext"></a>  CMFCPropertyGridCtrl::IsShowDragContext  
 Indicates whether the framework redraws the name and value columns of the current property grid control when a user resizes the columns.  
  
```  
BOOL IsShowDragContext() const;

 
```  
  
### Return Value  
 `TRUE` if the framework redraws the name and value columns during a resize operation; `FALSE` if the framework redraws the columns after the drag operation is completed.  
  
### Remarks  
 The user can resize the name and value columns of a property grid control by dragging the split bar that is between the columns. If the drag context is displayed, the name and value columns are resized as long as the user drags the split bar. Otherwise, the split bar moves but the columns are not redrawn until the drag operation is completed.  
  
##  <a name="cmfcpropertygridctrl__isvsdotnetlook"></a>  CMFCPropertyGridCtrl::IsVSDotNetLook  
 Indicates whether the appearance of the property grid control is in the style of Visual Studio .NET.  
  
```  
BOOL IsVSDotNetLook() const;

 
```  
  
### Return Value  
 `TRUE` if the property grid control is in the style of Visual Studio .NET; otherwise, `FALSE`.  
  
### Remarks  
 Use the [CMFCPropertyGridCtrl::SetVSDotNetLook](#cmfcpropertygridctrl__setvsdotnetlook) method to set the property grid control to the style of Visual Studio .NET.  
  
##  <a name="cmfcpropertygridctrl__markmodifiedproperties"></a>  CMFCPropertyGridCtrl::MarkModifiedProperties  
 Specifies how to display modified properties.  
  
```  
void MarkModifiedProperties(
    BOOL bMark=TRUE,  
    BOOL bRedraw=TRUE);
```  
  
### Parameters  
 [in] `bMark`  
 `TRUE` to display modified properties in bold style; `FALSE` to display modified properties in regular style. The default value is `TRUE`.  
  
 [in] `bRedraw`  
 `TRUE` to redraw the property grid control immediately; otherwise, `FALSE`. The default value is `TRUE`.  
  
### Remarks  
  
##  <a name="cmfcpropertygridctrl__onchangeselection"></a>  CMFCPropertyGridCtrl::OnChangeSelection  
 Called by the framework when the current selection is changed.  
  
```  
virtual void OnChangeSelection(
    CMFCPropertyGridProperty* pNewSel,   
    CMFCPropertyGridProperty* pOldSel);
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[in] `pNewSel`|Pointer to the newly selected property.|  
|[in] `pOldSel`|Pointer to the previously selected property.|  
  
### Remarks  
 The default implementation of this method does nothing.  
  
##  <a name="cmfcpropertygridctrl__onclickbutton"></a>  CMFCPropertyGridCtrl::OnClickButton  
 Called by the framework when a property button is clicked.  
  
```  
virtual void OnClickButton(CPoint point);
```  
  
### Parameters  
 [in] `point`  
 A point, in client coordinates.  
  
### Remarks  
 By default, this method updates the current property value.  
  
##  <a name="cmfcpropertygridctrl__ondrawborder"></a>  CMFCPropertyGridCtrl::OnDrawBorder  
 Called by the framework to draw a border around a property grid control.  
  
```  
virtual void OnDrawBorder(CDC* pDC);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
### Remarks  
  
##  <a name="cmfcpropertygridctrl__ondrawdescription"></a>  CMFCPropertyGridCtrl::OnDrawDescription  
 Called by the framework to draw the description area and display the description text.  
  
```  
virtual void OnDrawDescription(
    CDC* pDC,  
    CRect rect);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `rect`  
 A rectangle that specifies where to draw the description area.  
  
### Remarks  
 Use the [CMFCPropertyGridCtrl::EnableDescriptionArea](#cmfcpropertygridctrl__enabledescriptionarea) method to display the description area.  
  
##  <a name="cmfcpropertygridctrl__ondrawlist"></a>  CMFCPropertyGridCtrl::OnDrawList  
 Called by the framework to display the list of properties in the property grid control.  
  
```  
virtual void OnDrawList(CDC* pDC);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
### Remarks  
  
##  <a name="cmfcpropertygridctrl__ondrawproperty"></a>  CMFCPropertyGridCtrl::OnDrawProperty  
 Called by the framework to display a property.  
  
```  
virtual int OnDrawProperty(
    CDC* pDC,  
    CMFCPropertyGridProperty* pProp) const;

 
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `pProp`  
 A pointer to a property object.  
  
### Return Value  
 `TRUE` if this method is successful; otherwise, `FALSE`.  
  
### Remarks  
  
##  <a name="cmfcpropertygridctrl__onpropertychanged"></a>  CMFCPropertyGridCtrl::OnPropertyChanged  
 Called by the framework when the value of a property is changed.  
  
```  
virtual void OnPropertyChanged(CMFCPropertyGridProperty* pProp) const;

 
```  
  
### Parameters  
 [in] `pProp`  
 A pointer to a property object whose value has changed.  
  
### Remarks  
 By default, this method sends the [AFX_WM_PROPERTY_CHANGED](../../mfc/reference/afx-messages.md) message to the owner of the property grid control.  
  
##  <a name="cmfcpropertygridctrl__onselectcombo"></a>  CMFCPropertyGridCtrl::OnSelectCombo  
 Called by the framework when a property that contains a combo box control is selected.  
  
```  
void OnSelectCombo();
```  
  
### Remarks  
  
##  <a name="cmfcpropertygridctrl__removeall"></a>  CMFCPropertyGridCtrl::RemoveAll  
 Removes all property objects from a property grid control.  
  
```  
void RemoveAll();
```  
  
### Remarks  
  
##  <a name="cmfcpropertygridctrl__resetoriginalvalues"></a>  CMFCPropertyGridCtrl::ResetOriginalValues  
 Restores the original values of all properties.  
  
```  
void ResetOriginalValues(BOOL bRedraw=TRUE);
```  
  
### Parameters  
 [in] `bRedraw`  
 `TRUE` to redraw the property list; otherwise, `FALSE`. The default value is `TRUE`.  
  
### Remarks  
  
##  <a name="cmfcpropertygridctrl__setalphabeticmode"></a>  CMFCPropertyGridCtrl::SetAlphabeticMode  
 Sets or resets alphabetic mode.  
  
```  
void SetAlphabeticMode(BOOL bSet=TRUE);
```  
  
### Parameters  
 [in] `bSet`  
 `TRUE` to set alphabetic mode; `FALSE` reset alphabetic mode. The default value is `TRUE`.  
  
### Remarks  
 When the property grid control is in alphabetic mode, the control sorts all the properties it contains by their property name.  
  
##  <a name="cmfcpropertygridctrl__setboollabels"></a>  CMFCPropertyGridCtrl::SetBoolLabels  
 Specifies the text of Boolean labels.  
  
```  
void SetBoolLabels(
    LPCTSTR lpszTrue,  
    LPCTSTR lpszFalse);
```  
  
### Parameters  
 [in] `lpszTrue`  
 The text string to display for the Boolean value of true.  
  
 [in] `lpszFalse`  
 The text string to display for the Boolean value of false.  
  
### Remarks  
  
##  <a name="cmfcpropertygridctrl__setcursel"></a>  CMFCPropertyGridCtrl::SetCurSel  
 Selects a property in a property grid control.  
  
```  
void SetCurSel(
    CMFCPropertyGridProperty* pProp,  
    BOOL bRedraw=TRUE);
```  
  
### Parameters  
 [in] `pProp`  
 A pointer to a property object.  
  
 [in] `bRedraw`  
 `TRUE` to redraw the property grid control immediately; otherwise, `FALSE`. The default value is `TRUE`.  
  
### Remarks  
 Use this method to cancel the selection of the current item in the property grid control and then select the item that corresponds to the specified property.  
  
##  <a name="cmfcpropertygridctrl__setcustomcolors"></a>  CMFCPropertyGridCtrl::SetCustomColors  
 Specifies custom colors for various elements of the property grid control.  
  
```  
void SetCustomColors(
    COLORREF clrBackground,  
    COLORREF clrText,  
    COLORREF clrGroupBackground,  
    COLORREF clrGroupText,  
    COLORREF clrDescriptionBackground,  
    COLORREF clrDescriptionText,  
    COLORREF clrLine);
```  
  
### Parameters  
 [in] `clrBackground`  
 The background color of property values.  
  
 [in] `clrText`  
 The color of property names and property value text.  
  
 [in] `clrGroupBackground`  
 The background color of a property group.  
  
 [in] `clrGroupText`  
 The new text color of property group.  
  
 [in] `clrDescriptionBackground`  
 The background color of the description area.  
  
 [in] `clrDescriptionText`  
 The color of text in the description area.  
  
 [in] `clrLine`  
 The color of lines that are drawn between properties.  
  
### Remarks  
 For any parameter, specify the `((COLORREF)-1)` color value to use the default color for that element of the property grid control.  
  
 To customize the appearance of a specific property, derive a class from the [CMFCPropertyGridProperty](../../mfc/reference/cmfcpropertygridproperty-class.md) class and then override the [CMFCPropertyGridProperty::OnDrawName](../../mfc/reference/cmfcpropertygridproperty-class.md#cmfcpropertygridproperty__ondrawname), [CMFCPropertyGridProperty::OnDrawValue](../../mfc/reference/cmfcpropertygridproperty-class.md#cmfcpropertygridproperty__ondrawvalue), [CMFCPropertyGridProperty::OnDrawExpandBox](../../mfc/reference/cmfcpropertygridproperty-class.md#cmfcpropertygridproperty__ondrawexpandbox), and [CMFCPropertyGridProperty::OnDrawButton](../../mfc/reference/cmfcpropertygridproperty-class.md#cmfcpropertygridproperty__ondrawbutton) methods.  
  
##  <a name="cmfcpropertygridctrl__setdescriptionrows"></a>  CMFCPropertyGridCtrl::SetDescriptionRows  
 Specifies the number of rows to display in the description section of the current property grid control.  
  
```  
void SetDescriptionRows(int nDescRows);
```  
  
### Parameters  
 [in] `nDescRows`  
 The number of rows to display in the property description.  
  
##  <a name="cmfcpropertygridctrl__setgroupnamefullwidth"></a>  CMFCPropertyGridCtrl::SetGroupNameFullWidth  
 Specifies whether to display the full width of the category name for a group of properties in the current property grid control.  
  
```  
void SetGroupNameFullWidth(
    BOOL bGroupNameFullWidth = TRUE,  
    BOOL bRedraw = TRUE);
```  
  
### Parameters  
 [in] `bGroupNameFullWidth`  
 `TRUE` to display the complete width of the category name regardless of the width of the property name column. `FALSE` to limit the width of the category name to the width of the property name column. The default value is `TRUE`.  
  
 [in] `bRedraw`  
 `TRUE` to update the property grid control immediately; `FALSE` to update the control when the next redraw event occurs. The default value is `TRUE`.  
  
### Remarks  
 The property grid control consists of a resizable *property name* column and a *property value* column. The end of the name column is also the start of the value column. To resize the columns, drag the border between the columns.  
  
 The terms *group name* and *category name* are used interchangeably in this method. The category name is displayed on a row that heads a set of related properties and values. This method specifies whether the width of the property name column also specifies the width of the displayed category name.  
  
##  <a name="cmfcpropertygridctrl__setlistdelimiter"></a>  CMFCPropertyGridCtrl::SetListDelimiter  
 Defines a character that is used as a delimiter in a list of property values.  
  
```  
void SetListDelimiter(TCHAR c);
```  
  
### Parameters  
 [in] `c`  
 A character to serve as a delimiter.  
  
### Remarks  
 Use this method to define a delimiter character in a list of property values that are used in the [CMFCPropertyGridProperty::CMFCPropertyGridProperty](../../mfc/reference/cmfcpropertygridproperty-class.md#cmfcpropertygridproperty__cmfcpropertygridproperty) constructor. In that constructor, set the `bIsValueList` parameter to `TRUE`.  
  
 By default, the [CMFCPropertyGridCtrl::CMFCPropertyGridCtrl](#cmfcpropertygridctrl__cmfcpropertygridctrl) constructor sets the delimiter character to comma (',').  
  
##  <a name="cmfcpropertygridctrl__setshowdragcontext"></a>  CMFCPropertyGridCtrl::SetShowDragContext  
 Specifies whether the framework redraws the name and value columns of the current property grid control when a user resizes the columns.  
  
```  
void SetShowDragContext(BOOL bShowDragContext = TRUE);
```  
  
### Parameters  
 [in] `bShowDragContext`  
 `TRUE` to redraw the name and value columns during a resize operation; `FALSE` to redraw the columns after the drag operation is completed. The default value is `TRUE`.  
  
### Remarks  
 The user can resize the name and value columns of a property grid control by dragging the split bar that is between the columns. If the drag context is displayed, the name and value columns are resized as long as the user drags the split bar. Otherwise, the split bar moves but the columns are not redrawn until the drag operation is completed.  
  
##  <a name="cmfcpropertygridctrl__setvsdotnetlook"></a>  CMFCPropertyGridCtrl::SetVSDotNetLook  
 Sets the appearance of the property grid control to the style that is used in Visual Studio .NET.  
  
```  
void SetVSDotNetLook(BOOL bSet=TRUE);
```  
  
### Parameters  
 [in] `bSet`  
 `TRUE` to set the property grid control to the style that is used in Visual Studio .NET; otherwise, `FALSE`. The default value is `TRUE`.  
  
### Remarks  
  
##  <a name="cmfcpropertygridctrl__updatecolor"></a>  CMFCPropertyGridCtrl::UpdateColor  
 Sets the color value of the currently selected color property.  
  
```  
virtual void UpdateColor(COLORREF color);
```  
  
### Parameters  
 [in] `color`  
 An RGB color value.  
  
### Remarks  
 This method asserts in debug mode if the currently selected property of the property grid control is not a color property.  
  
##  <a name="cmfcpropertygridctrl__validateitemdata"></a>  CMFCPropertyGridCtrl::ValidateItemData  
 Called by the framework to validate property data.  
  
```  
virtual BOOL ValidateItemData(CMFCPropertyGridProperty* pProp);
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[in] `pProp`|Pointer to a property. This parameter is not used.|  
  
### Return Value  
 Always `TRUE`.  
  
### Remarks  
 The [CMFCPropertyGridCtrl::EndEditItem](#cmfcpropertygridctrl__endedititem) method calls this method to validate data. By default, this method does not use its `pProp` parameter and its return value is always `TRUE`.  
  
 If you override this method, return `TRUE` if the specified property data is valid. Otherwise, return `FALSE`, in which case the framework does not update the property.  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)
