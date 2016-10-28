---
title: "CMFCRibbonFontComboBox Class"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "reference"
f1_keywords: 
  - "CMFCRibbonFontComboBox"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCRibbonFontComboBox class"
ms.assetid: 33b4db50-df4f-45fa-8f05-2e6e73c31435
caps.latest.revision: 20
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
# CMFCRibbonFontComboBox Class
Implements a combo box that contains a list of fonts. You place the combo box on a ribbon panel.  
  
## Syntax  
  
```  
class CMFCRibbonFontComboBox : public CMFCRibbonComboBox  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|`CMFCRibbonFontComboBox::~CMFCRibbonFontComboBox`|Destructor.|  
  
### Protected Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCRibbonFontComboBox::CMFCRibbonFontComboBox](#cmfcribbonfontcombobox__cmfcribbonfontcombobox)|Constructs and initializes a `CMFCRibbonFontComboBox` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCRibbonFontComboBox::BuildFonts](#cmfcribbonfontcombobox__buildfonts)|Populates the ribbon font combo box with fonts of the specified font type, character set, and pitch and family.|  
|`CMFCRibbonFontComboBox::CreateObject`|Used by the framework to create a dynamic instance of this class type.|  
|[CMFCRibbonFontComboBox::GetCharSet](#cmfcribbonfontcombobox__getcharset)|Returns the specified character set.|  
|[CMFCRibbonFontComboBox::GetFontDesc](#cmfcribbonfontcombobox__getfontdesc)||  
|[CMFCRibbonFontComboBox::GetFontType](#cmfcribbonfontcombobox__getfonttype)|Returns which font types to display in the combo box. Valid options are DEVICE_FONTTYPE, RASTER_FONTTYPE, and TRUETYPE_FONTTYPE, or any bitwise combination thereof.|  
|[CMFCRibbonFontComboBox::GetPitchAndFamily](#cmfcribbonfontcombobox__getpitchandfamily)|Returns the pitch and the family of the fonts that are displayed in the combo box.|  
|`CMFCRibbonFontComboBox::GetThisClass`|Used by the framework to obtain a pointer to the [CRuntimeClass](../mfcref/cruntimeclass-structure.md) object that is associated with this class type.|  
|[CMFCRibbonFontComboBox::RebuildFonts](#cmfcribbonfontcombobox__rebuildfonts)|Populates the ribbon font combo box with fonts of the previously specified font type, character set, and pitch and family.|  
|[CMFCRibbonFontComboBox::SetFont](#cmfcribbonfontcombobox__setfont)|Selects the specified font in the combo box.|  
  
## Remarks  
 After you create a `CMFCRibbonFontComboBox` object, add it to a ribbon panel by calling [CMFCRibbonPanel::Add](../mfcref/cmfcribbonpanel-class.md#cmfcribbonpanel__add).  
  
## Inheritance Hierarchy  
 [CObject](../mfcref/cobject-class.md)  
  
 [CMFCRibbonBaseElement](../mfcref/cmfcribbonbaseelement-class.md)  
  
 [CMFCRibbonButton](../mfcref/cmfcribbonbutton-class.md)  
  
 [CMFCRibbonEdit](../mfcref/cmfcribbonedit-class.md)  
  
 [CMFCRibbonComboBox](../mfcref/cmfcribboncombobox-class.md)  
  
 [CMFCRibbonFontComboBox](../mfcref/cmfcribbonfontcombobox-class.md)  
  
## Requirements  
 **Header:** afxRibbonComboBox.h  
  
##  <a name="cmfcribbonfontcombobox__buildfonts"></a>  CMFCRibbonFontComboBox::BuildFonts  
 Populates the combo box on the ribbon with fonts.  
  
```  
void BuildFonts(  
   int nFontType = DEVICE_FONTTYPE | RASTER_FONTTYPE | TRUETYPE_FONTTYPE,  
   BYTE nCharSet = DEFAULT_CHARSET,  
   BYTE nPitchAndFamily = DEFAULT_PITCH  
);  
```  
  
### Parameters  
 [in] `nFontType`  
 Specifies the font type of the fonts to add.  
  
 [in] `nCharSet`  
 Specifies the character set of the fonts to add.  
  
 [in] `nPitchAndFamily`  
 Specifies the pitch and family of the fonts to add.  
  
##  <a name="cmfcribbonfontcombobox__cmfcribbonfontcombobox"></a>  CMFCRibbonFontComboBox::CMFCRibbonFontComboBox  
 Constructs and initializes a [CMFCRibbonFontComboBox](../mfcref/cmfcribbonfontcombobox-class.md) object.  
  
```  
CMFCRibbonFontComboBox(  
    UINT nID,  
    int nFontType = DEVICE_FONTTYPE | RASTER_FONTTYPE | TRUETYPE_FONTTYPE,  
    BYTE nCharSet = DEFAULT_CHARSET,  
    BYTE nPitchAndFamily = DEFAULT_PITCH,  
    int nWidth = -1  
);  
```  
  
### Parameters  
 [in] `nID`  
 The command ID of the command that executes when the user selects an item from the combo box.  
  
 [in] `nFontType`  
 Specifies which font types to display in the combo box. Valid options are                                 **DEVICE_FONTTYPE**,                                 **RASTER_FONTTYPE**, and                                 **TRUETYPE_FONTTYPE**, or any bitwise combination thereof.  
  
 [in] `nCharSet`  
 Filters the fonts in the combo box to those that belong to the specified character set..  
  
 [in] `nPitchAndFamily`  
 Specifies the pitch and the family of the fonts that are displayed in the combo box.  
  
 [in] `nWidth`  
 Specifies the width, in pixels, of the combo box.  
  
### Remarks  
 For more information about possible `nFontType` parameter values, see                         [EnumFontFamProc](http://msdn.microsoft.com/library/windows/desktop/dd162621) in the Windows SDK documentation.  
  
 For more information about valid character sets that can be assigned to `nCharSet,` and valid values that can be assigned to `nPitchAndFamily`, see                         [LOGFONT](http://msdn.microsoft.com/library/windows/desktop/dd145037) in the Windows SDK documentation.  
  
##  <a name="cmfcribbonfontcombobox__getfontdesc"></a>  CMFCRibbonFontComboBox::GetFontDesc  
 [!INCLUDE[cpp_fp_under_construction](../mfcref/includes/cpp_fp_under_construction_md.md)]  
  
```  
const CMFCFontInfo* GetFontDesc(  
   int iIndex = -1  
) const;  
```  
  
### Parameters  
 [in] `iIndex`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcribbonfontcombobox__rebuildfonts"></a>  CMFCRibbonFontComboBox::RebuildFonts  
 Populates the combo box on the ribbon with fonts of a previously specified font type, character set, and pitch and family.  
  
```  
void RebuildFonts();  
```  
  
### Remarks  
 You can specify the font type, character set, and pitch and family of the fonts to include in the ribbon font combo box in the [constructor](#cmfcribbonfontcombobox__cmfcribbonfontcombobox) for this class, or by calling [CMFCRibbonFontComboBox::BuildFonts](#cmfcribbonfontcombobox__buildfonts).  
  
##  <a name="cmfcribbonfontcombobox__setfont"></a>  CMFCRibbonFontComboBox::SetFont  
 Selects the specified font in the combo box.  
  
```  
BOOL SetFont(  
    LPCTSTR lpszName,  
    BYTE nCharSet = DEFAULT_CHARSET,  
    BOOL bExact = FALSE   
);  
```  
  
### Parameters  
 `lpszName`  
 Specifies the name of the font to select.  
  
 `nCharSet`  
 Specifies the character set for the selected font.  
  
 `bExact`  
 `TRUE` to specify that the character set must match when selecting a font; `FALSE` to specify that the character set can be ignored when selecting a font.  
  
### Return Value  
 Nonzero if the specified font was found and selected; otherwise, zero.  
  
### Remarks  
  
##  <a name="cmfcribbonfontcombobox__getcharset"></a>  CMFCRibbonFontComboBox::GetCharSet  
 Returns the specified character set.  
  
```  
BYTE GetCharSet() const;  
```  
  
### Return Value  
 Character set (see LOGFONT in the Windows SDK documentation).  
  
### Remarks  
  
##  <a name="cmfcribbonfontcombobox__getfonttype"></a>  CMFCRibbonFontComboBox::GetFontType  
 Returns which font types to display in the combo box. Valid options are DEVICE_FONTTYPE, RASTER_FONTTYPE, and TRUETYPE_FONTTYPE, or any bitwise combination thereof.  
  
```  
int GetFontType() const;  
```  
  
### Return Value  
 Font types (see EnumFontFamProc in the Windows SDK documentation).  
  
### Remarks  
  
##  <a name="cmfcribbonfontcombobox__getpitchandfamily"></a>  CMFCRibbonFontComboBox::GetPitchAndFamily  
 Returns the pitch and the family of the fonts that are displayed in the combo box.  
  
```  
BYTE GetPitchAndFamily() const;  
```  
  
### Return Value  
 Pitch and the family (see LOGFONT in the Windows SDK documentation).  
  
### Remarks  
  
## See Also  
 [Hierarchy Chart](../mfc/hierarchy-chart.md)   
 [Classes](../mfcref/mfc-classes.md)   
 [CMFCRibbonComboBox Class](../mfcref/cmfcribboncombobox-class.md)