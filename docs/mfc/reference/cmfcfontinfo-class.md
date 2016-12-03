---
title: "CMFCFontInfo Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCFontInfo"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCFontInfo class"
  - "CMFCFontInfo::CMFCFontInfo constructor"
ms.assetid: f88329b2-d74e-4921-9441-a3bb6536a049
caps.latest.revision: 26
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
# CMFCFontInfo Class
The `CMFCFontInfo` class describes the name and other attributes of a font.  
  
## Syntax  
  
```  
class CMFCFontInfo : public CObject  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|`CMFCFontInfo`|Constructs a `CMFCFontInfo` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCFontInfo::GetFullName](#cmfcfontinfo__getfullname)|Retrieves the concatenated names of a font and its character set (script).|  
  
### Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCFontInfo::m_nCharSet](#cmfcfontinfo__m_ncharset)|A value that specifies the character set (script) associated with the font.|  
|[CMFCFontInfo::m_nPitchAndFamily](#cmfcfontinfo__m_npitchandfamily)|A value that specifies the pitch and family of the font.|  
|[CMFCFontInfo::m_nType](#cmfcfontinfo__m_ntype)|A value that specifies the type of the font.|  
|[CMFCFontInfo::m_strName](#cmfcfontinfo__m_strname)|The name of the font; for example, **Arial**.|  
|[CMFCFontInfo::m_strScript](#cmfcfontinfo__m_strscript)|The name of a character set (script) associated with the font.|  
  
## Remarks  
 You can attach a `CMFCFontInfo` object to an item of the [CMFCToolBarFontComboBox Class](../../mfc/reference/cmfctoolbarfontcombobox-class.md) class. Call the [CMFCToolBarFontComboBox::GetFontDesc](../../mfc/reference/cmfctoolbarfontcombobox-class.md#cmfctoolbarfontcombobox__getfontdesc) method to retrieve a pointer to a `CMFCFontInfo` object.  
  
## Example  
 The following example demonstrates how to use various members of the `CMFCFontInfo` class. The example demonstrates how to get a `CMFCFontInfo` object from a `CMFCRibbonFontComboBox`, and how to access its local variables. This example is part of the [MSOffice 2007 Demo sample](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_MSOffice2007Demo#6](../../mfc/reference/codesnippet/cpp/cmfcfontinfo-class_1.cpp)]  
  
## Requirements  
 **Header:** afxtoolbarfontcombobox.h  
  
##  <a name="cmfcfontinfo__cmfcfontinfo"></a>  CMFCFontInfo::CMFCFontInfo  
 Constructs a `CMFCFontInfo` object.  
  
```  
CMFCFontInfo(
    LPCTSTR lpszName,  
    LPCTSTR lpszScript,  
    BYTE nCharSet,  
    BYTE nPitchAndFamily,  
    int nType);

 
CMFCFontInfo(
    const CMFCFontInfo& src);
```  
  
### Parameters  
 [in] `lpszName`  
 The name of the font. For more information, see the `lfFaceName` member of the [LOGFONT](http://msdn.microsoft.com/library/windows/desktop/dd145037) structure.  
  
 [in] `lpszScript`  
 The name of the script (character set) of the font.  
  
 [in] `nCharSet`  
 A value that specifies the character set (script) of the font. For more information, see the `lfCharSet` member of the [LOGFONT](http://msdn.microsoft.com/library/windows/desktop/dd145037) structure.  
  
 [in] `nPitchAndFamily`  
 A value that specifies the pitch and family of the font. For more information, see the `lfPitchAndFamily` member of the [LOGFONT](http://msdn.microsoft.com/library/windows/desktop/dd145037) structure.  
  
 [in] `nType`  
 A value that specifies the font type. This parameter can be a bitwise combination (OR) of DEVICE_FONTTYPE, RASTER_FONTTYPE, and TRUETYPE_FONTTYPE.  
  
 [in] `src`  
 An existing `CMFCFontInfo` object whose members are used to construct this `CMFCFontInfo` object.  
  
### Return Value  
  
### Remarks  
 This documentation uses the terms *character set* and *script* interchangeably. A *script*, which is also known as a writing system, is a collection of characters and rules for writing those characters in one or more languages. The collection of characters includes the alphabet and punctuation used in that script. For example, Latin script is used for English as it is spoken in the United States, and its alphabet includes the characters from A through Z. The `lfCharSet` member of the [LOGFONT](http://msdn.microsoft.com/library/windows/desktop/dd145037) structure specifies a character set. For example, the value `ANSI_CHARSET` specifies the [!INCLUDE[vcpransi](../../atl-mfc-shared/reference/includes/vcpransi_md.md)] character set, which includes the alphabet of the Latin script.  
  
##  <a name="cmfcfontinfo__getfullname"></a>  CMFCFontInfo::GetFullName  
 Retrieves the concatenated names of a font and its character set (script).  
  
```  
CString GetFullName() const;

 
```  
  
### Return Value  
 A string that contains the font name and script.  
  
### Remarks  
 Use this method to obtain the full name of the font. For example, if the font name is is `Arial` and the font script is `Cyrillic`, this method returns "Arial (Cyrillic)".  
  
##  <a name="cmfcfontinfo__m_ncharset"></a>  CMFCFontInfo::m_nCharSet  
 A value that specifies the character set (script) associated with the font.  
  
```  
const BYTE m_nCharSet;  
```  
  
### Remarks  
 For more information, see the `nCharSet` parameter of the [CMFCFontInfo::CMFCFontInfo](#cmfcfontinfo__cmfcfontinfo) constructor.  
  
##  <a name="cmfcfontinfo__m_npitchandfamily"></a>  CMFCFontInfo::m_nPitchAndFamily  
 A value that specifies the pitch (point size) and family (for example, serif, sans-serif, and monospace) of the font.  
  
```  
const BYTE m_nPitchAndFamily;  
```  
  
### Remarks  
 For more information, see the `nPitchAndFamily` parameter of the [CMFCFontInfo::CMFCFontInfo](#cmfcfontinfo__cmfcfontinfo) constructor.  
  
##  <a name="cmfcfontinfo__m_ntype"></a>  CMFCFontInfo::m_nType  
 A value that specifies the type of the font.  
  
```  
const int m_nType;  
```  
  
### Remarks  
 For more information, see the `nType` parameter of the [CMFCFontInfo::CMFCFontInfo](#cmfcfontinfo__cmfcfontinfo) constructor.  
  
##  <a name="cmfcfontinfo__m_strname"></a>  CMFCFontInfo::m_strName  
 The name of the font: for example, **Arial**.  
  
```  
const CString m_strName;  
```  
  
### Remarks  
 For more information, see the `lpszName` parameter of the [CMFCFontInfo::CMFCFontInfo](#cmfcfontinfo__cmfcfontinfo) constructor.  
  
##  <a name="cmfcfontinfo__m_strscript"></a>  CMFCFontInfo::m_strScript  
 The name of a character set (script) associated with the font.  
  
```  
const CString m_strScript;  
```  
  
### Remarks  
 For more information, see the `lpszScript` parameter of the [CMFCFontInfo::CMFCFontInfo](#cmfcfontinfo__cmfcfontinfo) constructor.  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CMFCToolBarFontComboBox Class](../../mfc/reference/cmfctoolbarfontcombobox-class.md)   
 [CMFCToolBarFontSizeComboBox Class](../../mfc/reference/cmfctoolbarfontsizecombobox-class.md)
