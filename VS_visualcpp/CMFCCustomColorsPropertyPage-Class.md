---
title: "CMFCCustomColorsPropertyPage Class"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: 46a45ba2-1fda-440d-8018-d4dcd44f5816
caps.latest.revision: 19
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# CMFCCustomColorsPropertyPage Class
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
|`CMFCCustomColorsPropertyPage::GetThisClass`|Used by the framework to obtain a pointer to the [CRuntimeClass](../VS_visualcpp/CRuntimeClass-Structure.md) object that is associated with this class type.|  
|[CMFCCustomColorsPropertyPage::Setup](#cmfccustomcolorspropertypage__setup)|Sets the color components of the property page.|  
  
### Remarks  
 The `CMFCColorDialog` class uses this class to display the custom color property page. For more information about `CMFCColorDialog`, see [CMFCColorDialog Class](../VS_visualcpp/CMFCColorDialog-Class.md).  
  
## Example  
 The following example demonstrates how to construct a `CMFCCustomColorsPropertyPage` object and set the color components of the property page.  
  
 [!CODE [NVC_MFC_RibbonApp#35](../CodeSnippet/VS_Snippets_Misc/NVC_MFC_RibbonApp#35)]  
  
## Inheritance Hierarchy  
 [CObject](../VS_visualcpp/CObject-Class.md)  
  
 [CCmdTarget](../VS_visualcpp/CCmdTarget-Class.md)  
  
 [CWnd](../VS_visualcpp/CWnd-Class.md)  
  
 [CDialog](../VS_visualcpp/CDialog-Class.md)  
  
 [CPropertyPage](../VS_visualcpp/CPropertyPage-Class.md)  
  
 [CMFCCustomColorsPropertyPage](../VS_visualcpp/CMFCCustomColorsPropertyPage-Class.md)  
  
## Requirements  
 **Header:** afxcustomcolorspropertypage.h  
  
##  <a name="cmfccustomcolorspropertypage__setup"></a>  CMFCCustomColorsPropertyPage::Setup  
 Sets the color components of the property page.  
  
```  
void Setup(  
    BYTE R,  
    BYTE G,  
    BYTE B );  
```  
  
### Parameters  
  
|||  
|-|-|  
|Parameter|Description|  
|[in] `R`|The red component of the RGB value.|  
|[in] `G`|The green component of the RGB value.|  
|[in] `B`|The blue component of the RGB value.|  
  
### Remarks  
 This method updates the current RGB and the associated HLS (hue, lightness, and saturation) color values of the property page. The [CMFCColorDialog::SetPageTwo](../VS_visualcpp/CMFCColorDialog-Class.md#cmfccolordialog__setpagetwo) method calls this method when the framework initializes the color dialog box or the user presses the left mouse button. For more information about `CMFCColorDialog`, see [CMFCColorDialog Class](../VS_visualcpp/CMFCColorDialog-Class.md).  
  
## See Also  
 [Hierarchy Chart](../VS_visualcpp/Hierarchy-Chart.md)   
 [Classes](../VS_visualcpp/MFC-Classes.md)   
 [CMFCColorDialog Class](../VS_visualcpp/CMFCColorDialog-Class.md)   
 [CMFCStandardColorsPropertyPage Class](../VS_visualcpp/CMFCStandardColorsPropertyPage-Class.md)