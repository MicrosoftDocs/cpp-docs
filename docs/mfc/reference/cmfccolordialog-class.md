---
title: "CMFCColorDialog Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCColorDialog"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCColorDialog::m_CurrentColor data member"
  - "CMFCColorDialog::m_pPropSheet data member"
  - "CMFCColorDialog::m_btnColorSelect data member"
  - "CMFCColorDialog class"
  - "CMFCColorDialog::m_wndColors data member"
  - "CMFCColorDialog::m_bIsMyPalette data member"
  - "CMFCColorDialog::m_pColourSheetTwo data member"
  - "CMFCColorDialog::m_NewColor data member"
  - "CMFCColorDialog::m_pPalette data member"
  - "CMFCColorDialog::m_wndStaticPlaceHolder data member"
  - "CMFCColorDialog::m_pColourSheetOne data member"
  - "CMFCColorDialog::m_hcurPicker data member"
  - "CMFCColorDialog::PreTranslateMessage method"
  - "CMFCColorDialog::m_bPickerMode data member"
ms.assetid: 235bbbbc-a3b1-46e0-801b-fb55093ec579
caps.latest.revision: 30
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
# CMFCColorDialog Class
The `CMFCColorDialog` class represents a color selection dialog box.  
  
## Syntax  
  
```  
class CMFCColorDialog : public CDialogEx  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCColorDialog::CMFCColorDialog](#cmfccolordialog__cmfccolordialog)|Constructs a `CMFCColorDialog` object.|  
|`CMFCColorDialog::~CMFCColorDialog`|Destructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCColorDialog::GetColor](#cmfccolordialog__getcolor)|Returns the current selected color.|  
|[CMFCColorDialog::GetPalette](#cmfccolordialog__getpalette)|Returns the color's palette.|  
|`CMFCColorDialog::PreTranslateMessage`|Translates window messages before they are dispatched to the [TranslateMessage](http://msdn.microsoft.com/library/windows/desktop/ms644955) and [DispatchMessage](http://msdn.microsoft.com/library/windows/desktop/ms644934) Windows functions. For syntax and more information, see [CWnd::PreTranslateMessage](../../mfc/reference/cwnd-class.md#cwnd__pretranslatemessage). (Overrides `CDialogEx::PreTranslateMessage`.)|  
|[CMFCColorDialog::RebuildPalette](#cmfccolordialog__rebuildpalette)|Derives a palette from the system palette.|  
|[CMFCColorDialog::SetCurrentColor](#cmfccolordialog__setcurrentcolor)|Sets the current selected color.|  
|[CMFCColorDialog::SetNewColor](#cmfccolordialog__setnewcolor)|Sets the color most equivalent to a specified RGB value.|  
|[CMFCColorDialog::SetPageOne](#cmfccolordialog__setpageone)|Selects an RGB value for the first property page.|  
|[CMFCColorDialog::SetPageTwo](#cmfccolordialog__setpagetwo)|Selects an RGB value for the second property page.|  
  
### Protected Data Members  
  
|Name|Description|  
|----------|-----------------|  
|`m_bIsMyPalette`|`TRUE` if the color selection dialog box uses its own color palette, or `FALSE` if the dialog box uses a palette that is specified in the `CMFCColorDialog` constructor.|  
|`m_bPickerMode`|`TRUE` while the user is selecting a color from the selection dialog box; otherwise, `FALSE`.|  
|`m_btnColorSelect`|The color button that the user has selected.|  
|`m_CurrentColor`|The currently selected color.|  
|`m_hcurPicker`|The cursor that is used to pick a color.|  
|`m_NewColor`|The prospective selected color, which can be permanently selected or reverted to the original color.|  
|`m_pColourSheetOne`|A pointer to the first property page of the color selection property sheet.|  
|`m_pColourSheetTwo`|A pointer to the second property page of the color selection property sheet.|  
|`m_pPalette`|The current logical palette.|  
|`m_pPropSheet`|A pointer to the property sheet for the color selection dialog box.|  
|`m_wndColors`|A color picker control object.|  
|`m_wndStaticPlaceHolder`|A static control that is a placeholder for the color picker property sheet.|  
  
## Remarks  
 The color selection dialog box is displayed as a property sheet with two pages. On the first page, you select a standard color from the system palette; on the second page, you select a custom color.  
  
 You can construct a `CMFCColorDialog` object on the stack and then call `DoModal`, passing the initial color as a parameter to the `CMFCColorDialog` constructor. The color selection dialog box then creates several [CMFCColorPickerCtrl Class](../../mfc/reference/cmfccolorpickerctrl-class.md) objects to handle each color palette.  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CDialog](../../mfc/reference/cdialog-class.md)  
  
 [CDialogEx](../../mfc/reference/cdialogex-class.md)  
  
 [CMFCColorDialog](../../mfc/reference/cmfccolordialog-class.md)  
  
## Example  
 The following example demonstrates how to configure a color dialog by using various methods in the `CMFCColorDialog` class. The example shows how to set the current and the new colors of the dialog, and how to set the red, green, and blue components of a selected color on the two property pages of the color dialog. This example is part of the [New Controls sample](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_NewControls#3](../../mfc/reference/codesnippet/cpp/cmfccolordialog-class_1.cpp)]  
  
## Requirements  
 **Header:** afxcolordialog.h  
  
##  <a name="cmfccolordialog__cmfccolordialog"></a>  CMFCColorDialog::CMFCColorDialog  
 Constructs a `CMFCColorDialog` object.  
  
```  
CMFCColorDialog(
    COLORREF clrInit=0,  
    DWORD dwFlags=0,  
    CWnd* pParentWnd=NULL,  
    HPALETTE hPal=NULL);
```  
  
### Parameters  
 [in] `clrInit`  
 The default color selection. If no value is specified, the default is RGB(0,0,0) (black).  
  
 [in] `dwFlags`  
 (Reserved.)  
  
 [in] `pParentWnd`  
 A pointer to the dialog box's parent or owner window.  
  
 [in] `hPal`  
 A handle to a color palette.  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfccolordialog__getcolor"></a>  CMFCColorDialog::GetColor  
 Retrieves the color that the user selects from the color dialog.  
  
```  
COLORREF GetColor() const;

 
```  
  
### Return Value  
 A [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) value that contains the RGB information for the color selected in the color dialog box.  
  
### Remarks  
 Call this function after you call the `DoModal` method.  
  
##  <a name="cmfccolordialog__getpalette"></a>  CMFCColorDialog::GetPalette  
 Retrieves the color palette that is available in the current color dialog.  
  
```  
CPalette* GetPalette() const;

 
```  
  
### Return Value  
 A pointer to the `CPalette` object that was specified in the `CMFCColorDialog` constructor.  
  
### Remarks  
 The color palette specifies the colors that the user can choose.  
  
##  <a name="cmfccolordialog__rebuildpalette"></a>  CMFCColorDialog::RebuildPalette  
 Derives a palette from the system palette.  
  
```  
void RebuildPalette();
```  
  
##  <a name="cmfccolordialog__setcurrentcolor"></a>  CMFCColorDialog::SetCurrentColor  
 Sets the current color of the dialog box.  
  
```  
void SetCurrentColor(COLORREF rgb);
```  
  
### Parameters  
 [in] `rgb`  
 An RGB color value  
  
### Remarks  
  
##  <a name="cmfccolordialog__setnewcolor"></a>  CMFCColorDialog::SetNewColor  
 Sets the current color to the color in the current palette that is most similar.  
  
```  
void SetNewColor(COLORREF rgb);
```  
  
### Parameters  
 [in] `rgb`  
 A [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) that specifies an RGB color.  
  
### Remarks  
  
##  <a name="cmfccolordialog__setpageone"></a>  CMFCColorDialog::SetPageOne  
 Explicitly specifies the red, green, and blue components of a selected color on the first property page of a color dialog.  
  
```  
void SetPageOne(
    BYTE R,  
    BYTE G,  
    BYTE B);
```  
  
### Parameters  
 [in] `R`  
 Specifies the red component of the RGB value.  
  
 [in] `G`  
 Specifies the green component of the RGB value.  
  
 [in] `B`  
 Specifies the blue component of the RGB value.  
  
### Remarks  
  
##  <a name="cmfccolordialog__setpagetwo"></a>  CMFCColorDialog::SetPageTwo  
 Explicitly specifies the red, green, and blue components of a selected color on the second property page of a color dialog.  
  
```  
void SetPageTwo(
    BYTE R,  
    BYTE G,  
    BYTE B);
```  
  
### Parameters  
 [in] `R`  
 Specifies a red component of the RGB value  
  
 [in] `G`  
 Specifies a green component of an RGB value  
  
 [in] `B`  
 Specifies a blue component of an RGB value  
  
### Remarks  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CMFCColorPickerCtrl Class](../../mfc/reference/cmfccolorpickerctrl-class.md)
