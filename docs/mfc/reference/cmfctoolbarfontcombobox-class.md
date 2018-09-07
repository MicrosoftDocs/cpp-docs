---
title: "CMFCToolBarFontComboBox Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "reference"
f1_keywords: ["CMFCToolBarFontComboBox", "AFXTOOLBARFONTCOMBOBOX/CMFCToolBarFontComboBox", "AFXTOOLBARFONTCOMBOBOX/CMFCToolBarFontComboBox::CMFCToolBarFontComboBox", "AFXTOOLBARFONTCOMBOBOX/CMFCToolBarFontComboBox::GetFontDesc", "AFXTOOLBARFONTCOMBOBOX/CMFCToolBarFontComboBox::SetFont"]
dev_langs: ["C++"]
helpviewer_keywords: ["CMFCToolBarFontComboBox [MFC], CMFCToolBarFontComboBox", "CMFCToolBarFontComboBox [MFC], GetFontDesc", "CMFCToolBarFontComboBox [MFC], SetFont"]
ms.assetid: 25f8e08c-aadd-4cb5-9581-a99d49d444b1
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# CMFCToolBarFontComboBox Class
A toolbar button that contains a combo box control that enables the user to select a font from a list of system fonts.  
  
## Syntax  
  
```  
class CMFCToolBarFontComboBox : public CMFCToolBarComboBoxButton  
```  
  
## Members  
  
### Protected Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCToolBarFontComboBox::CMFCToolBarFontComboBox](#cmfctoolbarfontcombobox)|Constructs a `CMFCToolBarFontComboBox` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCToolBarFontComboBox::GetFontDesc](#getfontdesc)|Returns a pointer to the `CMFCFontInfo` object for a specified index in the combo box.|  
|[CMFCToolBarFontComboBox::SetFont](#setfont)|Selects a font in the font combo box according to either the name of the font, or the prefix and character set of the font.|  
  
### Data Members  
 [CMFCToolBarFontComboBox::m_nFontHeight](#m_nfontheight)  
 The height of the characters in the font combo box.  
  
## Remarks  
 To add a font combo box button to a toolbar, follow these steps:  
  
1.  Reserve a dummy resource ID for the button in the parent toolbar resource.  
  
2.  Construct a `CMFCToolBarFontComboBox` object.  
  
3.  In the message handler that processes the AFX_WM_RESETTOOLBAR message, replace the original button with the new combo box button by using [CMFCToolBar::ReplaceButton](../../mfc/reference/cmfctoolbar-class.md#replacebutton).  
  
4.  Synchronize the font that is selected in the combo box with the font in the document by using the [CMFCToolBarFontComboBox::SetFont](#setfont) method.  
  
 To synchronize the document's font with the font selected in the combo box, use the [CMFCToolBarFontComboBox::GetFontDesc](#getfontdesc) method to retrieve the attributes of the selected font, and use those attributes to create a [CFont Class](../../mfc/reference/cfont-class.md) object.  
  
 The font combo box button calls the Win32 function [EnumFontFamiliesEx](/windows/desktop/api/wingdi/nf-wingdi-enumfontfamiliesexa) to determine the screen and printer fonts available to the system.  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)  
  
 [CMFCToolBarComboBoxButton](../../mfc/reference/cmfctoolbarcomboboxbutton-class.md)  
  
 [CMFCToolBarFontComboBox](../../mfc/reference/cmfctoolbarfontcombobox-class.md)  
  
## Requirements  
 **Header:** afxtoolbarfontcombobox.h  
  
##  <a name="cmfctoolbarfontcombobox"></a>  CMFCToolBarFontComboBox::CMFCToolBarFontComboBox  
 Constructs a [CMFCToolBarFontComboBox](../../mfc/reference/cmfctoolbarfontcombobox-class.md) object.  
  
```  
public:  
CMFCToolBarFontComboBox(
    UINT uiID,  
    int iImage,  
    int nFontType = DEVICE_FONTTYPE | RASTER_FONTTYPE | TRUETYPE_FONTTYPE,  
    BYTE nCharSet = DEFAULT_CHARSET,  
    DWORD dwStyle = CBS_DROPDOWN,  
    int iWidth = 0,  
    BYTE nPitchAndFamily = DEFAULT_PITCH);

 
protected:  
CMFCToolBarFontComboBox(
    CObList* pLstFontsExternal,  
    int nFontType,  
    BYTE nCharSet,  
    BYTE nPitchAndFamily);  
  
CMFCToolBarFontComboBox();
```  
  
### Parameters  
 [in] *uiID*  
 The command ID of the combo box.  
  
 [in] *iImage*  
 The zero-based index of a toolbar image. The image is located in the [CMFCToolBarImages Class](../../mfc/reference/cmfctoolbarimages-class.md) object that [CMFCToolBar Class](../../mfc/reference/cmfctoolbar-class.md) class maintains.  
  
 [in] *nFontType*  
 The types of fonts that the combo box contains. This parameter can be a combination (boolean OR) of the following values:  
  
 DEVICE_FONTTYPE  
  
 RASTER_FONTTYPE  
  
 TRUETYPE_FONTTYPE  
  
 [in] *nCharSet*  
 If set to DEFAULT_CHARSET, the combo box contains all uniquely-named fonts in all character sets. (If there are two fonts with the same name, the combo box contains one of them.) If set to a valid character set value, the combo box contains only fonts in the specified character set. See [LOGFONT](/windows/desktop/api/wingdi/ns-wingdi-taglogfonta) for a listing of possible character sets.  
  
 [in] *dwStyle*  
 The style of the combo box. (see [Combo-Box Styles](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles))  
  
 [in] *iWidth*  
 The width in pixels of the edit control.  
  
 [in] *nPitchAndFamily*  
 If set to DEFAULT_PITCH, the combo box contains fonts regardless of pitch. If set to FIXED_PITCH or VARIABLE_PITCH, the combo box contains only fonts with that pitch type. Filtering based on font family is not currently supported.  
  
 [out] *pLstFontsExternal*  
 Pointer to a [CObList Class](../../mfc/reference/coblist-class.md) object that stores the available fonts.  
  
### Remarks  
 Usually, `CMFCToolBarFontComboBox` objects store the list of available fonts in a single shared `CObList` object. If you use the second overload of the constructor and provide a valid pointer to *pLstFontsExternal*, that `CMFCToolBarFontComboBox` object will instead fill the `CObList` that *pLstFontsExternal* points to with available fonts.  
  
### Example  
 The following example demonstrates how to construct a `CMFCToolBarFontComboBox` object. This code snippet is part of the [Word Pad sample](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_WordPad#7](../../mfc/reference/codesnippet/cpp/cmfctoolbarfontcombobox-class_1.cpp)]  
  
##  <a name="getfontdesc"></a>  CMFCToolBarFontComboBox::GetFontDesc  
 Returns a pointer to the `CMFCFontInfo` object for a specified index in the combo box.  
  
```  
const CMFCFontInfo* GetFontDesc(int iIndex=-1) const;  
```  
  
### Parameters  
 [in] *iIndex*  
 Specifies the zero-based index of a combo box item.  
  
### Return Value  
 A pointer to a `CMFCFontInfo` object. If *iIndex* does not specify a valid item index, the return value is NULL.  
  
##  <a name="m_nfontheight"></a>  CMFCToolBarFontComboBox::m_nFontHeight  
 Specifies the height, in pixels, of characters in the font combo box if the combo box has owner draw style.  
  
```  
static int m_nFontHeight  
```  
  
### Remarks  
 If the `m_nFontHeight` variable is 0, the height is calculated automatically according to the default font of the combo box. The height includes both the ascent of characters above the baseline and the descent of characters underneath the baseline.  
  
##  <a name="setfont"></a>  CMFCToolBarFontComboBox::SetFont  
 Selects the font in the font combo box according to the font name and character set that are specified in the parameters.  
  
```  
BOOL SetFont(
    LPCTSTR lpszName,  
    BYTE nCharSet=DEFAULT_CHARSET,  
    BOOL bExact=FALSE);
```  
  
### Parameters  
 [in] *lpszName*  
 Specifies the font name or prefix.  
  
 [in] *nCharSet*  
 Specifies the character set.  
  
 [in] *bExact*  
 Specifies whether *lpszName* contains the font name or the font prefix.  
  
### Return Value  
 Nonzero if the font was selected successfully; otherwise 0.  
  
### Remarks  
 If *bExact* is TRUE, this method selects a font that exactly matches the name that you specified as *lpszName*. If *bExact* is FALSE, this method selects a font that starts with the text specified as *lpszName* and that uses the character set that you specified as *nCharSet*. If *nCharSet* is set to DEFAULT_CHARSET, the character set will be ignored and only *lpszName* will be used to select a font.  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CMFCToolBar Class](../../mfc/reference/cmfctoolbar-class.md)   
 [CMFCToolBarButton Class](../../mfc/reference/cmfctoolbarbutton-class.md)   
 [CMFCToolBarComboBoxButton Class](../../mfc/reference/cmfctoolbarcomboboxbutton-class.md)   
 [CMFCFontInfo Class](../../mfc/reference/cmfcfontinfo-class.md)   
 [CMFCToolBar::ReplaceButton](../../mfc/reference/cmfctoolbar-class.md#replacebutton)   
 [Walkthrough: Putting Controls On Toolbars](../../mfc/walkthrough-putting-controls-on-toolbars.md)



