---
title: "CMFCCustomColorsPropertyPage Class | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCCustomColorsPropertyPage"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCCustomColorsPropertyPage class"
ms.assetid: 46a45ba2-1fda-440d-8018-d4dcd44f5816
caps.latest.revision: 28
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CMFCCustomColorsPropertyPage Class
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [CMFCCustomColorsPropertyPage Class](https://docs.microsoft.com/cpp/mfc/reference/cmfccustomcolorspropertypage-class).  
  
  
Represents a property page that can select custom colors in a color dialog box.  
  
## Syntax  
  
```  
class CMFCCustomColorsPropertyPage : public CPropertyPage  
```  
  
## Members  
  
### Public Constructors  
  
|||  
|-|-|  
|Name|Description|  
|`CMFCCustomColorsPropertyPage::CMFCCustomColorsPropertyPage`|Default constructor.|  
  
### Public Methods  
  
|||  
|-|-|  
|Name|Description|  
|`CMFCCustomColorsPropertyPage::CreateObject`|Used by the framework to create a dynamic instance of this class type.|  
|`CMFCCustomColorsPropertyPage::GetThisClass`|Used by the framework to obtain a pointer to the [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) object that is associated with this class type.|  
|[CMFCCustomColorsPropertyPage::Setup](#cmfccustomcolorspropertypage__setup)|Sets the color components of the property page.|  
  
### Remarks  
 The `CMFCColorDialog` class uses this class to display the custom color property page. For more information about `CMFCColorDialog`, see [CMFCColorDialog Class](../../mfc/reference/cmfccolordialog-class.md).  
  
## Example  
 The following example demonstrates how to construct a `CMFCCustomColorsPropertyPage` object and set the color components of the property page.  
  
 [!code-cpp[NVC_MFC_RibbonApp#35](../../snippets/cpp/VS_Snippets_Misc/NVC_MFC_RibbonApp/cpp/MainFrm.cpp#35)]  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CDialog](../../mfc/reference/cdialog-class.md)  
  
 [CPropertyPage](../../mfc/reference/cpropertypage-class.md)  
  
 [CMFCCustomColorsPropertyPage](../../mfc/reference/cmfccustomcolorspropertypage-class.md)  
  
## Requirements  
 **Header:** afxcustomcolorspropertypage.h  
  
##  <a name="cmfccustomcolorspropertypage__setup"></a>  CMFCCustomColorsPropertyPage::Setup  
 Sets the color components of the property page.  
  
```  
void Setup(
    BYTE R,  
    BYTE G,  
    BYTE B);
```  
  
### Parameters  
  
|||  
|-|-|  
|Parameter|Description|  
|[in] `R`|The red component of the RGB value.|  
|[in] `G`|The green component of the RGB value.|  
|[in] `B`|The blue component of the RGB value.|  
  
### Remarks  
 This method updates the current RGB and the associated HLS (hue, lightness, and saturation) color values of the property page. The [CMFCColorDialog::SetPageTwo](../../mfc/reference/cmfccolordialog-class.md#cmfccolordialog__setpagetwo) method calls this method when the framework initializes the color dialog box or the user presses the left mouse button. For more information about `CMFCColorDialog`, see [CMFCColorDialog Class](../../mfc/reference/cmfccolordialog-class.md).  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CMFCColorDialog Class](../../mfc/reference/cmfccolordialog-class.md)   
 [CMFCStandardColorsPropertyPage Class](../../mfc/reference/cmfcstandardcolorspropertypage-class.md)






