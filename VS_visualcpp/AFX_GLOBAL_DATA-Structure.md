---
title: "AFX_GLOBAL_DATA Structure"
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
ms.assetid: c7abf2fb-ad5e-4336-a01d-260c29ed53a2
caps.latest.revision: 26
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# AFX_GLOBAL_DATA Structure
The `AFX_GLOBAL_DATA` structure contains fields and methods that are used to manage the framework or customize the appearance and behavior of your application.  
  
## Syntax  
  
```  
struct AFX_GLOBAL_DATA  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|`AFX_GLOBAL_DATA::AFX_GLOBAL_DATA`|Constructs a `AFX_GLOBAL_DATA` structure.|  
|`AFX_GLOBAL_DATA::~AFX_GLOBAL_DATA`|Destructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[AFX_GLOBAL_DATA::CleanUp](../VS_visualcpp/AFX_GLOBAL_DATA--CleanUp.md)|Releases resources that are allocated by the framework, such as brushes, fonts, and DLLs.|  
|[AFX_GLOBAL_DATA::D2D1MakeRotateMatrix](../VS_visualcpp/AFX_GLOBAL_DATA--D2D1MakeRotateMatrix.md)|Creates a rotation transformation that rotates by a specified angle around a specified point.|  
|[AFX_GLOBAL_DATA::DrawParentBackground](../VS_visualcpp/AFX_GLOBAL_DATA--DrawParentBackground.md)|Draws the background of a control's parent in the specified area.|  
|[AFX_GLOBAL_DATA::DrawTextOnGlass](../VS_visualcpp/AFX_GLOBAL_DATA--DrawTextOnGlass.md)|Draws the specified text in the visual style of the specified theme.|  
|[AFX_GLOBAL_DATA::ExcludeTag](../VS_visualcpp/AFX_GLOBAL_DATA--ExcludeTag.md)|Removes the specified XML tag pair from a specified buffer.|  
|[AFX_GLOBAL_DATA::GetColor](../VS_visualcpp/AFX_GLOBAL_DATA--GetColor.md)|Retrieves the current color of the specified user interface element.|  
|[AFX_GLOBAL_DATA::GetDirect2dFactory](../VS_visualcpp/AFX_GLOBAL_DATA--GetDirect2dFactory.md)|Returns a pointer to the `ID2D1Factory` interface that is stored in the global data. If the interface is not initialized, it is created and has the default parameters.|  
|[AFX_GLOBAL_DATA::GetHandCursor](../VS_visualcpp/AFX_GLOBAL_DATA--GetHandCursor.md)|Retrieves the predefined cursor that resembles a hand and whose identifier is `IDC_HAND`.|  
|[AFX_GLOBAL_DATA::GetITaskbarList](../VS_visualcpp/AFX_GLOBAL_DATA--GetITaskbarList.md)|Creates and stores in the global data a pointer to ITaskBarList interface.|  
|[AFX_GLOBAL_DATA::GetITaskbarList3](../VS_visualcpp/AFX_GLOBAL_DATA--GetITaskbarList3.md)|Creates and stores in the global data a pointer to ITaskBarList3 interface.|  
|[AFX_GLOBAL_DATA::GetNonClientMetrics](../VS_visualcpp/AFX_GLOBAL_DATA--GetNonClientMetrics.md)|Retrieves the metrics associated with the nonclient area of nonminimized windows.|  
|[AFX_GLOBAL_DATA::GetShellAutohideBars](../VS_visualcpp/AFX_GLOBAL_DATA--GetShellAutohideBars.md)|Determines positions of Shell auto hide bars.|  
|[AFX_GLOBAL_DATA::GetTextHeight](../VS_visualcpp/AFX_GLOBAL_DATA--GetTextHeight.md)|Retrieves the height of text characters in the current font.|  
|[AFX_GLOBAL_DATA::GetWICFactory](../VS_visualcpp/AFX_GLOBAL_DATA--GetWICFactory.md)|Returns a pointer to the `IWICImagingFactory` interface that is stored in the global data. If the interface is not initialized, it is created and has the default parameters.|  
|[AFX_GLOBAL_DATA::GetWriteFactory](../VS_visualcpp/AFX_GLOBAL_DATA--GetWriteFactory.md)|Returns a pointer to the `IDWriteFactory` interface that is stored in the global data. If the interface is not initialized, it is created and has the default parameters.|  
|[AFX_GLOBAL_DATA::IsD2DInitialized](../VS_visualcpp/AFX_GLOBAL_DATA--IsD2DInitialized.md)|Initializes `D2D`, `DirectWrite`, and `WIC` factories. Call this method before the main window is initialized.|  
|[AFX_GLOBAL_DATA::Is32BitIcons](../VS_visualcpp/AFX_GLOBAL_DATA--Is32BitIcons.md)|Indicates whether predefined 32-bit icons are supported.|  
|[AFX_GLOBAL_DATA::IsD2DInitialized](../VS_visualcpp/AFX_GLOBAL_DATA--IsD2DInitialized.md)|Determines whether the `D2D` was initialized.|  
|[AFX_GLOBAL_DATA::IsDwmCompositionEnabled](../VS_visualcpp/AFX_GLOBAL_DATA--IsDwmCompositionEnabled.md)|Provides a simple way to call the Windows [DwmIsCompositionEnabled](http://msdn.microsoft.com/library/windows/desktop/aa969518) method.|  
|[AFX_GLOBAL_DATA::IsHighContrastMode](../VS_visualcpp/AFX_GLOBAL_DATA--IsHighContrastMode.md)|Indicates whether images are currently displayed in high contrast.|  
|[AFX_GLOBAL_DATA::OnSettingChange](../VS_visualcpp/AFX_GLOBAL_DATA--OnSettingChange.md)|Detects the current state of the desktop's menu animation and taskbar autohide features.|  
|[AFX_GLOBAL_DATA::RegisterWindowClass](../VS_visualcpp/AFX_GLOBAL_DATA--RegisterWindowClass.md)|Registers the specified MFC window class.|  
|[AFX_GLOBAL_DATA::ReleaseTaskBarRefs](../VS_visualcpp/AFX_GLOBAL_DATA--ReleaseTaskBarRefs.md)|Releases interfaces obtained through GetITaskbarList and GetITaskbarList3 methods.|  
|[AFX_GLOBAL_DATA::Resume](../VS_visualcpp/AFX_GLOBAL_DATA--Resume.md)|Reinitializes internal function pointers that access methods that support Windows [themes and visual styles](https://msdn.microsoft.com/en-us/library/windows/desktop/hh270423.aspx).|  
|[AFX_GLOBAL_DATA::SetLayeredAttrib](../VS_visualcpp/AFX_GLOBAL_DATA--SetLayeredAttrib.md)|Provides a simple way to call the Windows [SetLayeredWindowAttributes](http://msdn.microsoft.com/library/windows/desktop/ms633540) method.|  
|[AFX_GLOBAL_DATA::SetMenuFont](../VS_visualcpp/AFX_GLOBAL_DATA--SetMenuFont.md)|Creates the specified logical font.|  
|[AFX_GLOBAL_DATA::ShellCreateItemFromParsingName](../VS_visualcpp/AFX_GLOBAL_DATA--ShellCreateItemFromParsingName.md)|Creates and initializes a Shell item object from a parsing name.|  
|[AFX_GLOBAL_DATA::UpdateFonts](../VS_visualcpp/AFX_GLOBAL_DATA--UpdateFonts.md)|Reintializes the logical fonts that are used by the framework.|  
|[AFX_GLOBAL_DATA::UpdateSysColors](../VS_visualcpp/AFX_GLOBAL_DATA--UpdateSysColors.md)|Initializes the colors, color depth, brushes, pens, and images that are used by the framework.|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[AFX_GLOBAL_DATA::EnableAccessibilitySupport](../VS_visualcpp/AFX_GLOBAL_DATA--EnableAccessibilitySupport.md)|Enables or disables Microsoft Active Accessibility support. Active Accessibility provides reliable methods for exposing information about user interface elements.|  
|[AFX_GLOBAL_DATA::IsAccessibilitySupport](../VS_visualcpp/AFX_GLOBAL_DATA--IsAccessibilitySupport.md)|Indicates whether Microsoft Active Accessibility support is enabled.|  
|[AFX_GLOBAL_DATA::IsWindowsLayerSupportAvailable](../VS_visualcpp/AFX_GLOBAL_DATA--IsWindowsLayerSupportAvailable.md)|Indicates whether the operating system supports layered windows.|  
  
### Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[AFX_GLOBAL_DATA::bIsOSAlphaBlendingSupport](../VS_visualcpp/AFX_GLOBAL_DATA--bIsOSAlphaBlendingSupport.md)|Indicates whether the current operating system supports alpha blending.|  
|[AFX_GLOBAL_DATA::bIsWindows7](../VS_visualcpp/AFX_GLOBAL_DATA--bIsWindows7.md)|Indicates whether the application is being executed under Windows 7 OS or higher|  
|[AFX_GLOBAL_DATA::clrActiveCaptionGradient](../VS_visualcpp/AFX_GLOBAL_DATA--clrActiveCaptionGradient.md)|Specifies gradient color of active caption. Generally used for docking panes.|  
|[AFX_GLOBAL_DATA::clrInactiveCaptionGradient](../VS_visualcpp/AFX_GLOBAL_DATA--clrInactiveCaptionGradient.md)|Specifies gradient color of inactive active caption. Generally used for docking panes.|  
|[AFX_GLOBAL_DATA::m_bUseBuiltIn32BitIcons](../VS_visualcpp/AFX_GLOBAL_DATA--m_bUseBuiltIn32BitIcons.md)|Indicates whether the framework uses predefined 32-bit color icons or icons of a lower resolution.|  
|[AFX_GLOBAL_DATA::m_bUseSystemFont](../VS_visualcpp/AFX_GLOBAL_DATA--m_bUseSystemFont.md)|Indicates whether a system font is used for menus, toolbars, and ribbons.|  
|[AFX_GLOBAL_DATA::m_hcurHand](../VS_visualcpp/AFX_GLOBAL_DATA--m_hcurHand.md)|Stores the handle for the hand cursor.|  
|[AFX_GLOBAL_DATA::m_hcurStretch](../VS_visualcpp/AFX_GLOBAL_DATA--m_hcurStretch.md)|Stores the handle for the horizontal stretch cursor.|  
|[AFX_GLOBAL_DATA::m_hcurStretchVert](../VS_visualcpp/AFX_GLOBAL_DATA--m_hcurStretchVert.md)|Stores the handle for the vertical stretch cursor.|  
|[AFX_GLOBAL_DATA::m_hiconTool](../VS_visualcpp/AFX_GLOBAL_DATA--m_hiconTool.md)|Stores the handle for the tool icon.|  
|[AFX_GLOBAL_DATA::m_nAutoHideToolBarMargin](../VS_visualcpp/AFX_GLOBAL_DATA--m_nAutoHideToolBarMargin.md)|Specifies the offset from the leftmost autohide toolbar to the left side of the docking bar.|  
|[AFX_GLOBAL_DATA::m_nAutoHideToolBarSpacing](../VS_visualcpp/AFX_GLOBAL_DATA--m_nAutoHideToolBarSpacing.md)|Specifies the gap between autohide toolbars.|  
|[AFX_GLOBAL_DATA::m_nDragFrameThicknessDock](../VS_visualcpp/AFX_GLOBAL_DATA--m_nDragFrameThicknessDock.md)|Specifies the thickness of the drag frame that is used to communicate the docked state.|  
|[AFX_GLOBAL_DATA::m_nDragFrameThicknessFloat](../VS_visualcpp/AFX_GLOBAL_DATA--m_nDragFrameThicknessFloat.md)|Specifies the thickness of the drag frame that is used to communicate the floating state.|  
  
## Remarks  
 Most of the data in the `AFX_GLOBAL_DATA` structure is initialized when your application starts.  
  
## Inheritance Hierarchy  
 [AFX_GLOBAL_DATA](../VS_visualcpp/AFX_GLOBAL_DATA-Structure.md)  
  
## Requirements  
 **Header:** afxglobals.h  
  
## See Also  
 [Hierarchy Chart](../VS_visualcpp/Hierarchy-Chart.md)   
 [Structures, Styles, Callbacks, and Message Maps](../VS_visualcpp/Structures--Styles--Callbacks--and-Message-Maps.md)