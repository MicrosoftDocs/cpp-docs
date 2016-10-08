---
title: "MFC ActiveX Controls: Using Stock Property Pages"
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
ms.topic: article
ms.assetid: 22638d86-ff3e-4124-933e-54b7c2a25968
caps.latest.revision: 8
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
# MFC ActiveX Controls: Using Stock Property Pages
This article discusses the stock property pages available for ActiveX controls and how to use them.  
  
 For more information on using property pages in an ActiveX control, see the following articles:  
  
-   [MFC ActiveX Controls: Property Pages](../VS_visualcpp/MFC-ActiveX-Controls--Property-Pages.md)  
  
-   [MFC ActiveX Controls: Adding Another Custom Property Page](../VS_visualcpp/MFC-ActiveX-Controls--Adding-Another-Custom-Property-Page.md)  
  
 MFC provides three stock property pages for use with ActiveX controls: **CLSID_CColorPropPage**, **CLSID_CFontPropPage**, and **CLSID_CPicturePropPage**. These pages display a user interface for stock color, font, and picture properties, respectively.  
  
 To incorporate these property pages into a control, add their IDs to the code that initializes the control's array of property page IDs. In the following example, this code, located in the control implementation file (.CPP), initializes the array to contain all three stock property pages and the default property page (named `CMyPropPage` in this example):  
  
 [!CODE [NVC_MFC_AxOpt#21](../CodeSnippet/VS_Snippets_Cpp/NVC_MFC_AxOpt#21)]  
  
 Note that the count of property pages, in the `BEGIN_PROPPAGEIDS` macro, is 4. This represents the number of property pages supported by the ActiveX control.  
  
 After these modifications have been made, rebuild your project. Your control now has property pages for the font, picture, and color properties.  
  
> [!NOTE]
>  If the control stock property pages cannot be accessed, it may be because the MFC DLL (MFCxx.DLL) has not been properly registered with the current operating system. This usually results from installing Visual C++ under an operating system different from the one currently running.  
  
> [!TIP]
>  If your stock property pages are not visible (see previous Note), register the DLL by running RegSvr32.exe from the command line with the full path name to the DLL.  
  
## See Also  
 [MFC ActiveX Controls](../VS_visualcpp/MFC-ActiveX-Controls.md)   
 [MFC ActiveX Controls: Adding Stock Properties](../VS_visualcpp/MFC-ActiveX-Controls--Adding-Stock-Properties.md)