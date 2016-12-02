---
title: "AFX_GLOBAL_DATA Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "GLOBAL_DATA"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "AFX_GLOBAL_DATA structure"
  - "AFX_GLOBAL_DATA constructor"
ms.assetid: c7abf2fb-ad5e-4336-a01d-260c29ed53a2
caps.latest.revision: 30
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
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
|[AFX_GLOBAL_DATA::CleanUp](#afx_global_data__cleanup)|Releases resources that are allocated by the framework, such as brushes, fonts, and DLLs.|  
|[AFX_GLOBAL_DATA::D2D1MakeRotateMatrix](#afx_global_data__d2d1makerotatematrix)|Creates a rotation transformation that rotates by a specified angle around a specified point.|  
|[AFX_GLOBAL_DATA::DrawParentBackground](#afx_global_data__drawparentbackground)|Draws the background of a control's parent in the specified area.|  
|[AFX_GLOBAL_DATA::DrawTextOnGlass](#afx_global_data__drawtextonglass)|Draws the specified text in the visual style of the specified theme.|  
|[AFX_GLOBAL_DATA::ExcludeTag](#afx_global_data__excludetag)|Removes the specified XML tag pair from a specified buffer.|  
|[AFX_GLOBAL_DATA::GetColor](#afx_global_data__getcolor)|Retrieves the current color of the specified user interface element.|  
|[AFX_GLOBAL_DATA::GetDirect2dFactory](#afx_global_data__getdirect2dfactory)|Returns a pointer to the `ID2D1Factory` interface that is stored in the global data. If the interface is not initialized, it is created and has the default parameters.|  
|[AFX_GLOBAL_DATA::GetHandCursor](#afx_global_data__gethandcursor)|Retrieves the predefined cursor that resembles a hand and whose identifier is `IDC_HAND`.|  
|[AFX_GLOBAL_DATA::GetITaskbarList](#afx_global_data__getitaskbarlist)|Creates and stores in the global data a pointer to ITaskBarList interface.|  
|[AFX_GLOBAL_DATA::GetITaskbarList3](#afx_global_data__getitaskbarlist3)|Creates and stores in the global data a pointer to ITaskBarList3 interface.|  
|[AFX_GLOBAL_DATA::GetNonClientMetrics](#afx_global_data__getnonclientmetrics)|Retrieves the metrics associated with the nonclient area of nonminimized windows.|  
|[AFX_GLOBAL_DATA::GetShellAutohideBars](#afx_global_data__getshellautohidebars)|Determines positions of Shell auto hide bars.|  
|[AFX_GLOBAL_DATA::GetTextHeight](#afx_global_data__gettextheight)|Retrieves the height of text characters in the current font.|  
|[AFX_GLOBAL_DATA::GetWICFactory](#afx_global_data__getwicfactory)|Returns a pointer to the `IWICImagingFactory` interface that is stored in the global data. If the interface is not initialized, it is created and has the default parameters.|  
|[AFX_GLOBAL_DATA::GetWriteFactory](#afx_global_data__getwritefactory)|Returns a pointer to the `IDWriteFactory` interface that is stored in the global data. If the interface is not initialized, it is created and has the default parameters.|  
|[AFX_GLOBAL_DATA::IsD2DInitialized](#afx_global_data__isd2dinitialized)|Initializes `D2D`, `DirectWrite`, and `WIC` factories. Call this method before the main window is initialized.|  
|[AFX_GLOBAL_DATA::Is32BitIcons](#afx_global_data__is32biticons)|Indicates whether predefined 32-bit icons are supported.|  
|[AFX_GLOBAL_DATA::IsD2DInitialized](#afx_global_data__isd2dinitialized)|Determines whether the `D2D` was initialized.|  
|[AFX_GLOBAL_DATA::IsDwmCompositionEnabled](#afx_global_data__isdwmcompositionenabled)|Provides a simple way to call the Windows [DwmIsCompositionEnabled](http://msdn.microsoft.com/library/windows/desktop/aa969518) method.|  
|[AFX_GLOBAL_DATA::IsHighContrastMode](#afx_global_data__ishighcontrastmode)|Indicates whether images are currently displayed in high contrast.|  
|[AFX_GLOBAL_DATA::OnSettingChange](#afx_global_data__onsettingchange)|Detects the current state of the desktop's menu animation and taskbar autohide features.|  
|[AFX_GLOBAL_DATA::RegisterWindowClass](#afx_global_data__registerwindowclass)|Registers the specified MFC window class.|  
|[AFX_GLOBAL_DATA::ReleaseTaskBarRefs](#afx_global_data__releasetaskbarrefs)|Releases interfaces obtained through GetITaskbarList and GetITaskbarList3 methods.|  
|[AFX_GLOBAL_DATA::Resume](#afx_global_data__resume)|Reinitializes internal function pointers that access methods that support Windows [themes and visual styles](https://msdn.microsoft.com/library/windows/desktop/hh270423.aspx).|  
|[AFX_GLOBAL_DATA::SetLayeredAttrib](#afx_global_data__setlayeredattrib)|Provides a simple way to call the Windows [SetLayeredWindowAttributes](http://msdn.microsoft.com/library/windows/desktop/ms633540) method.|  
|[AFX_GLOBAL_DATA::SetMenuFont](#afx_global_data__setmenufont)|Creates the specified logical font.|  
|[AFX_GLOBAL_DATA::ShellCreateItemFromParsingName](#afx_global_data__shellcreateitemfromparsingname)|Creates and initializes a Shell item object from a parsing name.|  
|[AFX_GLOBAL_DATA::UpdateFonts](#afx_global_data__updatefonts)|Reintializes the logical fonts that are used by the framework.|  
|[AFX_GLOBAL_DATA::UpdateSysColors](#afx_global_data__updatesyscolors)|Initializes the colors, color depth, brushes, pens, and images that are used by the framework.|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[AFX_GLOBAL_DATA::EnableAccessibilitySupport](#afx_global_data__enableaccessibilitysupport)|Enables or disables Microsoft Active Accessibility support. Active Accessibility provides reliable methods for exposing information about user interface elements.|  
|[AFX_GLOBAL_DATA::IsAccessibilitySupport](#afx_global_data__isaccessibilitysupport)|Indicates whether Microsoft Active Accessibility support is enabled.|  
|[AFX_GLOBAL_DATA::IsWindowsLayerSupportAvailable](#afx_global_data__iswindowslayersupportavailable)|Indicates whether the operating system supports layered windows.|  
  
### Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[AFX_GLOBAL_DATA::bIsOSAlphaBlendingSupport](#afx_global_data__bisosalphablendingsupport)|Indicates whether the current operating system supports alpha blending.|  
|[AFX_GLOBAL_DATA::bIsWindows7](#afx_global_data__biswindows7)|Indicates whether the application is being executed under Windows 7 OS or higher|  
|[AFX_GLOBAL_DATA::clrActiveCaptionGradient](#afx_global_data__clractivecaptiongradient)|Specifies gradient color of active caption. Generally used for docking panes.|  
|[AFX_GLOBAL_DATA::clrInactiveCaptionGradient](#afx_global_data__clrinactivecaptiongradient)|Specifies gradient color of inactive active caption. Generally used for docking panes.|  
|[AFX_GLOBAL_DATA::m_bUseBuiltIn32BitIcons](#afx_global_data__m_busebuiltin32biticons)|Indicates whether the framework uses predefined 32-bit color icons or icons of a lower resolution.|  
|[AFX_GLOBAL_DATA::m_bUseSystemFont](#afx_global_data__m_busesystemfont)|Indicates whether a system font is used for menus, toolbars, and ribbons.|  
|[AFX_GLOBAL_DATA::m_hcurHand](#afx_global_data__m_hcurhand)|Stores the handle for the hand cursor.|  
|[AFX_GLOBAL_DATA::m_hcurStretch](#afx_global_data__m_hcurstretch)|Stores the handle for the horizontal stretch cursor.|  
|[AFX_GLOBAL_DATA::m_hcurStretchVert](#afx_global_data__m_hcurstretchvert)|Stores the handle for the vertical stretch cursor.|  
|[AFX_GLOBAL_DATA::m_hiconTool](#afx_global_data__m_hicontool)|Stores the handle for the tool icon.|  
|[AFX_GLOBAL_DATA::m_nAutoHideToolBarMargin](#afx_global_data__m_nautohidetoolbarmargin)|Specifies the offset from the leftmost autohide toolbar to the left side of the docking bar.|  
|[AFX_GLOBAL_DATA::m_nAutoHideToolBarSpacing](#afx_global_data__m_nautohidetoolbarspacing)|Specifies the gap between autohide toolbars.|  
|[AFX_GLOBAL_DATA::m_nDragFrameThicknessDock](#afx_global_data__m_ndragframethicknessdock)|Specifies the thickness of the drag frame that is used to communicate the docked state.|  
|[AFX_GLOBAL_DATA::m_nDragFrameThicknessFloat](#afx_global_data__m_ndragframethicknessfloat)|Specifies the thickness of the drag frame that is used to communicate the floating state.|  
  
### Remarks  
 Most of the data in the `AFX_GLOBAL_DATA` structure is initialized when your application starts.  
  
### Inheritance Hierarchy  
 [AFX_GLOBAL_DATA](../../mfc/reference/afx-global-data-structure.md)  
  
### Requirements  
 **Header:** afxglobals.h  
  
### See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Structures, Styles, Callbacks, and Message Maps](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)


## <a name="afx_global_data__bisosalphablendingsupport"></a> AFX_GLOBAL_DATA::bIsOSAlphaBlendingSupport
Indicates whether the operating system supports alpha blending.  
  
  
```  
BOOL  bIsOSAlphaBlendingSupport;  
```  
  
### Remarks  
 `TRUE` indicates alpha blending is supported; otherwise, `FALSE`.  
  

## <a name="afx_global_data__cleanup"></a> AFX_GLOBAL_DATA::CleanUp
Releases resources that are allocated by the framework, such as brushes, fonts, and DLLs.  
  
  
```  
void CleanUp();
```  
## <a name="afx_global_data__d2d1makerotatematrix"></a> AFX_GLOBAL_DATA::D2D1MakeRotateMatrix
Creates a rotation transformation that rotates by a specified angle around a specified point.  
  
  
```  
HRESULT D2D1MakeRotateMatrix(
    FLOAT angle,  
    D2D1_POINT_2F center,  
    D2D1_MATRIX_3X2_F *matrix);
```  
  
### Parameters   
 `angle`  
 The clockwise rotation angle, in degrees.  
  
 `center`  
 The point about which to rotate.  
  
 `matrix`  
 When this method returns, contains the new rotation transformation. You must allocate storage for this parameter.  
  
### Return Value  
 Returns S_OK if successful, or an error value otherwise.  
  
## <a name="afx_global_data__drawparentbackground"></a> AFX_GLOBAL_DATA::DrawParentBackground
Draws the background of a control's parent in the specified area.  
  
  
```  
BOOL DrawParentBackground(
    CWnd* pWnd,   
    CDC* pDC,   
    LPRECT lpRect = NULL);
```  
  
### Parameters   
 [in] `pWnd`  
 Pointer to a control's window.  
  
 [in] `pDC`  
 Pointer to a device context.  
  
 [in] `lpRect`  
 Pointer to a rectangle that bounds the area to draw. The default value is `NULL`.  
  
### Return Value  
 `TRUE` if this method is successful; otherwise, `FALSE`.  
  
## <a name="afx_global_data__drawtextonglass"></a> AFX_GLOBAL_DATA::DrawTextOnGlass
Draws the specified text in the visual style of the specified theme.  
  
  
```  
BOOL DrawTextOnGlass(
    HTHEME hTheme,   
    CDC* pDC,   
    int iPartId,   
    int iStateId,   
    CString strText,   
    CRect rect,   
    DWORD dwFlags,   
    int nGlowSize = 0,   
    COLORREF clrText = (COLORREF)-1);
```  
  
### Parameters   
 [in] `hTheme`  
 Handle to the theme data of a window, or `NULL`. The framework uses the specified theme to draw the text if this parameter is not `NULL` and themes are supported. Otherwise, the framework does not use a theme to draw the text.  
  
 Use the [OpenThemeData](http://msdn.microsoft.com/library/windows/desktop/bb759821) method to create an `HTHEME`.  
  
 [in] `pDC`  
 Pointer to a device context.  
  
 [in] `iPartId`  
 The control part that has the desired text appearance. For more information, see the Parts column of the table in [Parts and States](http://msdn.microsoft.com/library/windows/desktop/bb773210). If this value is 0, the text is drawn in the default font, or a font selected into the device context.  
  
 [in] `iStateId`  
 The control state that has the desired text appearance. For more information, see the States column of the table in [Parts and States](http://msdn.microsoft.com/library/windows/desktop/bb773210).  
  
 [in] `strText`  
 The text to draw.  
  
 [in] `rect`  
 The boundary of the area in which the specified text is drawn.  
  
 [in] `dwFlags`  
 A bitwise combination (OR) of flags that specify how the specified text is drawn.  
  
 If the `hTheme` parameter is `NULL` or if themes are not supported and enabled, the `nFormat` parameter of the [CDC::DrawText](../../mfc/reference/cdc-class.md#cdc__drawtext) method describes the valid flags. If themes are supported, the `dwFlags` parameter of the [DrawThemeTextEx](http://msdn.microsoft.com/library/windows/desktop/bb773317) method describes the valid flags.  
  
 [in] `nGlowSize`  
 The size of a glow effect that is drawn on the background before drawing the specified text. The default value is 0.  
  
 [in] `clrText`  
 The color in which the specified text is drawn. The default value is the default color.  
  
### Return Value  
 `TRUE` if a theme is used to draw the specified text; otherwise, `FALSE`.  
  
### Remarks  
 A theme defines the visual style of an application. A theme is not used to draw the text if the `hTheme` parameter is `NULL`, or if the [DrawThemeTextEx](http://msdn.microsoft.com/library/windows/desktop/bb773317) method is not supported, or if [Desktop Window Manager](http://msdn.microsoft.com/library/windows/desktop/aa969540) (DWM) composition is disabled.  
  
 
## See Also  
 [AFX_GLOBAL_DATA Structure](../../mfc/reference/afx-global-data-structure.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449)   
 [Parts and States](http://msdn.microsoft.com/library/windows/desktop/bb773210)   
 [CDC::DrawText](../../mfc/reference/cdc-class.md#cdc__drawtext)   
 [DrawThemeTextEx](http://msdn.microsoft.com/library/windows/desktop/bb773317)   
 [Desktop Window Manager](http://msdn.microsoft.com/library/windows/desktop/aa969540)   
 [Enable and Control DWM Composition](http://msdn.microsoft.com/library/windows/desktop/aa969538)

## <a name="afx_global_data__enableaccessibilitysupport"></a> AFX_GLOBAL_DATA::EnableAccessibilitySupport
Enables or disables Microsoft Active Accessibility support.  
  
  
```  
void EnableAccessibilitySupport(BOOL bEnable=TRUE);
```  
  
### Parameters   
 [in] `bEnable`  
 `TRUE` to enable accessibility support; `FALSE` to disable accessibility support. The default value is `TRUE`.  
  
### Remarks  
 Active Accessibility is a COM-based technology that improves the way programs and the Windows operating system work together with assistive technology products. It provides reliable methods for exposing information about user interface elements. However, a newer accessibility model called Microsoft UI Automation is now available. For a comparison of the two technologies, see [UI Automation and Microsoft Active Accessibility](http://msdn.microsoft.com/library/87bee662-0a3e-4232-a421-20e7a5968321).  
  
 Use the [AFX_GLOBAL_DATA::IsAccessibilitySupport](#afx_global_data__isaccessibilitysupport) method to determine whether Microsoft Active Accessibility support is enabled.  
  
 
## See Also  
 [UI Automation and Microsoft Active Accessibility](http://msdn.microsoft.com/library/87bee662-0a3e-4232-a421-20e7a5968321)   
 [AFX_GLOBAL_DATA::IsAccessibilitySupport](#afx_global_data__isaccessibilitysupport)

## <a name="afx_global_data__excludetag"></a> AFX_GLOBAL_DATA::ExcludeTag
Removes the specified XML tag pair from a specified buffer.  
  
  
```  
BOOL ExcludeTag(
    CString& strBuffer,  
    LPCTSTR lpszTag,  
    CString& strTag,  
    BOOL bIsCharsList = FALSE);
```  
  
### Parameters   
 [in] `strBuffer`  
 A buffer of text.  
  
 [in] `lpszTag`  
 The name of a pair of opening and closing XML tags.  
  
 [out] `strTag`  
 When this method returns, the `strTag` parameter contains the text that is between the opening and closing XML tags that are named by the `lpszTag` parameter. Any leading or trailing whitespace is trimmed from the result.  
  
 [in] `bIsCharsList`  
 `TRUE` to convert symbols for escape characters in the `strTag` parameter into actual escape characters; `FALSE` not to perform the conversion.The default value is `FALSE`. For more information, see Remarks.  
  
### Return Value  
 `TRUE` if this method is successful; otherwise, `FALSE`.  
  
### Remarks  
 An XML tag pair consists of named opening and closing tags that indicate the start and end of a run of text in the specified buffer. The `strBuffer` parameter specifies the buffer, and the `lpszTag` parameter specifies the name of the XML tags.  
  
 Use the symbols in the following table to encode a set of escape characters in the specified buffer. Specify `TRUE` for the `bIsCharsList` parameter to convert the symbols in the `strTag` parameter into actual escape characters. The following table uses the [_T()](../../c-runtime-library/data-type-mappings.md) macro to specify the symbol and escape character strings.  
  
|Symbol|Escape character|  
|------------|----------------------|  
|_T("\\\t")|_T("\t")|  
|_T("\\\n")|_T("\n")|  
|_T("\\\r")|_T("\r")|  
|_T("\\\b")|_T("\b")|  
|_T("LT")|_T("\<")|  
|_T("GT")|_T(">")|  
|_T("AMP")|_T("&")|  
  
## <a name="afx_global_data__getcolor"></a> AFX_GLOBAL_DATA::GetColor
Retrieves the current color of the specified user interface element.  
  
  
```  
COLORREF GetColor(int nColor);
```  
  
### Parameters   
 [in] `nColor`  
 A value that specifies a user interface element whose color is retrieved. For a list of valid values, see the `nIndex` parameter of the [GetSysColor](http://msdn.microsoft.com/library/windows/desktop/ms724371) method.  
  
### Return Value  
 The RGB color value of the specified user interface element. For more information, see Remarks.  
  
### Remarks  
 If the `nColor` parameter is out of range, the return value is zero. Because zero is also a valid RGB value, you cannot use this method to determine whether a system color is supported by the current operating system. Instead, use the [GetSysColorBrush](http://msdn.microsoft.com/library/windows/desktop/dd144927) method, which returns `NULL` if the color is not supported.  
  
## See Also  

 [GetSysColor Function](http://msdn.microsoft.com/library/windows/desktop/ms724371)   
 [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449)   
 [GetSysColorBrush](http://msdn.microsoft.com/library/windows/desktop/dd144927)

## <a name="afx_global_data__getdirect2dfactory"></a> AFX_GLOBAL_DATA::GetDirect2dFactory
 Returns a pointer to the ID2D1Factory interface that is stored in the global data. If the interface is not initialized, it is created and has the default parameters.  
  
  
```  
ID2D1Factory* GetDirect2dFactory();
```  
  
### Return Value  
 A pointer to ID2D1Factory interface if creation of a factory succeeds, or NULL if creation fails or current Operation System don't have D2D support.  
  
## <a name="afx_global_data__gethandcursor"></a>  AFX_GLOBAL_DATA::GetHandCursor
Retrieves the predefined cursor that resembles a hand and whose identifier is `IDC_HAND`.  
  
  
```  
HCURSOR GetHandCursor();
```  
  
### Return Value  
 The handle of the hand cursor.  

## <a name="afx_global_data__getnonclientmetrics"></a> AFX_GLOBAL_DATA::GetNonClientMetrics
Retrieves the metrics associated with the nonclient area of nonminimized windows.  
  
  
```  
BOOL GetNonClientMetrics(NONCLIENTMETRICS& info);
```  
  
### Parameters   
 [in, out] `info`  
 A [NONCLIENTMETRICS](http://msdn.microsoft.com/library/windows/desktop/ff729175) structure that contains the scalable metrics associated with the nonclient area of a nonminimized window.  
  
### Return Value  
 `TRUE` if this method succeeds; otherwise, `FALSE`.  
 
  
## See Also   
 [NONCLIENTMETRICS Structure](http://msdn.microsoft.com/library/windows/desktop/ff729175)

## <a name="afx_global_data__gettextheight"></a> AFX_GLOBAL_DATA::GetTextHeight
 Retrieves the height of text characters in the current font.  
  
  
```  
int GetTextHeight(BOOL bHorz = TRUE);
```  
  
### Parameters   
 [in] `bHorz`  
 `TRUE` to retrieve the height of characters when text runs horizontally; `FALSE` to retrieve the height of characters when text runs vertically. The default value is `TRUE`.  
  
### Return Value  
 The height of the current font, which is measured from its ascender to its descender.  
  
## <a name="afx_global_data__getwicfactory"></a> AFX_GLOBAL_DATA::GetWICFactory
Returns a pointer to the IWICImagingFactory interface that is stored in the global data. If the interface is not initialized, it is created and has the default parameters.  
  
  
```  
IWICImagingFactory* GetWICFactory();
```  
  
### Return Value  
 A pointer to IWICImagingFactory interface if creation of a factory succeeds, or NULL if creation fails or current Operation System don't have WIC support.  
  
## <a name="afx_global_data__getwritefactory"></a> AFX_GLOBAL_DATA::GetWriteFactory
Returns a pointer to the IDWriteFactory interface that is stored in the global data. If the interface is not initialized, it is created and has the default parameters.  
  
  
```  
IDWriteFactory* GetWriteFactory();
```  
  
### Return Value  
 A pointer to IDWriteFactory interface if creation of a factory succeeds, or NULL if creation fails or current Operation System don't have DirectWrite support.  
 
## <a name="afx_global_data__initd2d"></a> AFX_GLOBAL_DATA::InitD2D
Initializes D2D, DirectWrite, and WIC factories. Call this method before the main window is initialized.  
  
  
```  
BOOL InitD2D(
    D2D1_FACTORY_TYPE d2dFactoryType = D2D1_FACTORY_TYPE_SINGLE_THREADED,  
    DWRITE_FACTORY_TYPE writeFactoryType = DWRITE_FACTORY_TYPE_SHARED);
```  
  
### Parameters   
 `d2dFactoryType`  
 The threading model of the D2D factory and the resources it creates.  
  
 `writeFactoryType`  
 A value that specifies whether the write factory object will be shared or isolated  
  
### Return Value  
 Returns TRUE if the factories were intilalizrd, FALSE - otherwise  
  
## <a name="afx_global_data__is32biticons"></a> AFX_GLOBAL_DATA::Is32BitIcons
Indicates whether predefined 32-bit icons are supported.  
  
  
```  
BOOL Is32BitIcons() const;

 
```  
  
### Return Value  
 `TRUE` if predefined 32-bit icons are supported; otherwise, `FALSE`.  
  
### Remarks  
 This method returns `TRUE` if the framework supports 32-bit built-in icons, and if the operating system supports 16 bits per pixel or more, and if images are not displayed in high contrast.  
  
## <a name="afx_global_data__isaccessibilitysupport"></a> AFX_GLOBAL_DATA::IsAccessibilitySupport
Indicates whether Microsoft Active Accessibility support is enabled.  
  
  
```  
BOOL IsAccessibilitySupport() const; 
```  
  
### Return Value  
 `TRUE` if accessibility support is enabled; otherwise, `FALSE`.  
  
### Remarks  
 Microsoft Active Accessibility was the earlier solution for making applications accessible. Microsoft UI Automation is the new accessibility model for Microsoft Windows and is intended to address the needs of assistive technology products and automated testing tools. For more information, see [UI Automation and Microsoft Active Accessibility](http://msdn.microsoft.com/library/87bee662-0a3e-4232-a421-20e7a5968321).  
  
 Use the [AFX_GLOBAL_DATA::EnableAccessibilitySupport](#afx_global_data__enableaccessibilitysupport) method to enable or disable Active Accessibility support.  
  

## See Also  
 [UI Automation and Microsoft Active Accessibility](http://msdn.microsoft.com/library/87bee662-0a3e-4232-a421-20e7a5968321)

## <a name="afx_global_data__isd2dinitialized"></a> AFX_GLOBAL_DATA::IsD2DInitialized
 Determines whether the D2D was initialized  
  
  
```  
BOOL IsD2DInitialized() const; 
```  
  
### Return Value  
 TRUE if D2D was initialized; otherwise FALSE.  
  
## <a name="afx_global_data__isdwmcompositionenabled"></a> AFX_GLOBAL_DATA::IsDwmCompositionEnabled
Provides a simple way to call the Windows [DwmIsCompositionEnabled](http://msdn.microsoft.com/library/windows/desktop/aa969518) method.  
  
  
```  
BOOL IsDwmCompositionEnabled();
```  
  
### Return Value  
 `TRUE` if [Desktop Window Manager](http://msdn.microsoft.com/library/windows/desktop/aa969540) (DWM) composition is enabled; otherwise, `FALSE`.  
  
## See Also    
 [Desktop Window Manager](http://msdn.microsoft.com/library/windows/desktop/aa969540)   
 [Enable and Control DWM Composition](http://msdn.microsoft.com/library/windows/desktop/aa969538)

## <a name="afx_global_data__ishighcontrastmode"></a> AFX_GLOBAL_DATA::IsHighContrastMode
 Indicates whether images are currently displayed in high contrast.    
```  
BOOL IsHighContrastMode() const; 
```  
  
### Return Value  
 `TRUE` if images are currently displayed in black or white high contrast mode; otherwise, `FALSE`.  
  
### Remarks  
 In black high contrast mode, edges facing the light are white and the background is black. In white high contrast mode, edges facing the light are black and the background is white.  
  
## <a name="afx_global_data__iswindowslayersupportavailable"></a> AFX_GLOBAL_DATA::IsWindowsLayerSupportAvailable
Indicates whether the operating system supports layered windows.  
  
  
```  
BOOL IsWindowsLayerSupportAvailable() const; 
```  
  
### Return Value  
 `TRUE` if layered windows are supported; otherwise, `FALSE`.  
  
### Remarks  
 If layered windows are supported, *smart docking* markers use layered windows.  
  
## <a name="afx_global_data__m_busebuiltin32biticons"></a> AFX_GLOBAL_DATA::m_bUseBuiltIn32BitIcons
Indicates whether the framework uses predefined 32-bit color icons or icons of a lower resolution.  
  
  
```  
BOOL  m_bUseBuiltIn32BitIcons;  
```  
  
### Remarks  
 `TRUE` specifies that the framework use 32-bit color icons; `FALSE` specifies lower resolution icons. The `AFX_GLOBAL_DATA::AFX_GLOBAL_DATA` constructor initializes this member to `TRUE`.  
  
 This member must be set at application startup.  
  
## <a name="afx_global_data__m_busesystemfont"></a> AFX_GLOBAL_DATA::m_bUseSystemFont
Indicates whether a system font is used for menus, toolbars, and ribbons.  
  
  
```  
BOOL m_bUseSystemFont;  
```  
  
### Remarks  
 `TRUE` specifies to use a system font; otherwise, `FALSE`. The `AFX_GLOBAL_DATA::AFX_GLOBAL_DATA` constructor initializes this member to `FALSE`.  
  
 Testing this member is not the only way for the framework to determine the font to use. The `AFX_GLOBAL_DATA::UpdateFonts` method also tests default and alternative fonts to determine what visual styles are available to be applied to menus, toolbars, and ribbons.  
  
## <a name="afx_global_data__m_hcurhand"></a> AFX_GLOBAL_DATA::m_hcurHand
Stores the handle for the hand cursor.  
  
  
```  
HCURSOR m_hcurHand;  
```  
  
## <a name="afx_global_data__m_hcurstretch"></a> AFX_GLOBAL_DATA::m_hcurStretch
Stores the handle for the horizontal stretch cursor.  
  
  
```  
HCURSOR m_hcurStretch;  
```  

## <a name="afx_global_data__m_hcurstretchvert"></a> AFX_GLOBAL_DATA::m_hcurStretchVert
Stores the handle for the vertical stretch cursor.  
  
  
```  
HCURSOR m_hcurStretchVert;  
```  
  
## <a name="afx_global_data__m_hicontool"></a> AFX_GLOBAL_DATA::m_hiconTool
Stores the handle for the tool icon.  
  
  
```  
HICON m_hiconTool;  
```  
## <a name="afx_global_data__m_nautohidetoolbarmargin"></a> AFX_GLOBAL_DATA::m_nAutoHideToolBarMargin
Specifies the offset from the leftmost autohide toolbar to the left side of the dock bar.  
  
  
```  
int  m_nAutoHideToolBarMargin;  
```  
  
### Remarks  
 The `AFX_GLOBAL_DATA::AFX_GLOBAL_DATA` constructor initializes this member to 4 pixels.  
  
## <a name="afx_global_data__m_nautohidetoolbarspacing"></a> AFX_GLOBAL_DATA::m_nAutoHideToolBarSpacing
Specifies the gap between autohide toolbars.  
  
  
```  
int   m_nAutoHideToolBarSpacing;  
```  
  
### Remarks  
 The `AFX_GLOBAL_DATA::AFX_GLOBAL_DATA` constructor initializes this member to 14 pixels.  
  
## <a name="afx_global_data__m_ndragframethicknessdock"></a> AFX_GLOBAL_DATA::m_nDragFrameThicknessDock

Specifies the thickness of the drag frame that is used to indicate the docked state.  
  
  
```  
int  m_nDragFrameThicknessDock;  
```  
  
### Remarks  
 The `AFX_GLOBAL_DATA::AFX_GLOBAL_DATA` constructor initializes this member to 3 pixels.  
  
## <a name="afx_global_data__m_ndragframethicknessfloat"></a> AFX_GLOBAL_DATA::m_nDragFrameThicknessFloat
Specifies the thickness of the drag frame that is used to indicate the floating state.  
  
  
```  
int  m_nDragFrameThicknessFloat;  
```  
  
### Remarks  
 The `AFX_GLOBAL_DATA::AFX_GLOBAL_DATA` constructor initializes this member to 4 pixels.  
  
## <a name="afx_global_data__onsettingchange"></a> AFX_GLOBAL_DATA::OnSettingChange
Detects the current state of the desktop's menu animation and taskbar autohide features.  
  
  
```  
void OnSettingChange();
```  
  
### Remarks  
 This method sets framework variables to the state of certain attributes of the user's desktop. This method detects the current state of the menu animation, menu fade, and task bar autohide features.  
  
## <a name="afx_global_data__registerwindowclass"></a> AFX_GLOBAL_DATA::RegisterWindowClass
Registers the specified MFC window class.  
  
  
```  
CString RegisterWindowClass(LPCTSTR lpszClassNamePrefix);
```  
  
### Parameters   
 [in] `lpszClassNamePrefix`  
 The name of the window class to register.  
  
### Return Value  
 The qualified name of the registered class if this method succeeds; otherwise, a [resource exception](http://msdn.microsoft.com/library/ddd99292-819b-4fa4-8371-b1954ed5856d).  
  
### Remarks  
 The return value is a colon-delimited list of the `lpszClassNamePrefix` parameter string, and the hexadecimal text representations of the handles of the current application instance; the application cursor, which is the arrow cursor whose identifier is IDC_ARROW; and the background brush. For more information about registering MFC window classes, see [AfxRegisterClass](../../mfc/reference/application-information-and-management.md#afxregisterclass).  
  
## See Also    
 [AfxRegisterClass](../../mfc/reference/application-information-and-management.md#afxregisterclass)   
 [AfxThrowResourceException](../../mfc/reference/exception-processing.md#afxthrowresourceexception)

## <a name="afx_global_data__resume"></a> AFX_GLOBAL_DATA::Resume
 Reinitializes internal function pointers that access methods that support Windows themes and visual styles. 
  
  
```  
BOOL Resume();
```  
  
### Return Value  
 `TRUE` if this method succeeds; otherwise, `FALSE`. In debug mode, this method asserts if this method is unsuccessful.  
  
### Remarks  
 This method is called when the framework receives the [WM_POWERBROADCAST](http://msdn.microsoft.com/library/windows/desktop/aa373247) message.  
  
## <a name="afx_global_data__setlayeredattrib"></a> AFX_GLOBAL_DATA::SetLayeredAttrib
Provides a simple way to call the Windows [SetLayeredWindowAttributes](http://msdn.microsoft.com/library/windows/desktop/ms633540) method.  
  
  
```  
BOOL SetLayeredAttrib(
    HWND hwnd,  
    COLORREF crKey,  
    BYTE bAlpha,  
    DWORD dwFlags);
```  
  
### Parameters   
 [in] `hwnd`  
 Handle to the layered window.  
  
 [in] `crKey`  
 The transparency color key that the [Desktop Window Manager](http://msdn.microsoft.com/library/windows/desktop/aa969540) uses to compose the layered window.  
  
 [in] `bAlpha`  
 The alpha value that is used to describe the opacity of the layered window.  
  
 [in] `dwFlags`  
 A bitwise combination (OR) of flags that specify which method parameters to use. Specify LWA_COLORKEY to use the `crKey` parameter as the transparency color. Specify LWA_ALPHA to use the `bAlpha` parameter to determine the opacity of the layered window.  
  
### Return Value  
 `TRUE` if this method succeeds; otherwise, `FALSE`.   
 
## See Also   
 [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449)   
 [SetLayeredWindowAttributes](http://msdn.microsoft.com/library/windows/desktop/ms633540)

## <a name="afx_global_data__setmenufont"></a> AFX_GLOBAL_DATA::SetMenuFont
Creates the specified logical font.  
  
  
```  
BOOL SetMenuFont(
    LPLOGFONT lpLogFont,  
    BOOL bHorz);
```  
  
### Parameters   
 [in] `lpLogFont`  
 Pointer to a structure that contains the attributes of a font.  
  
 [in] `bHorz`  
 `TRUE` to specify that the text runs horizontally; `FALSE` to specify that the text runs vertically.  
  
### Return Value  
 `TRUE` if this method succeeds; otherwise, `FALSE`. In debug mode, this method asserts if this method is unsuccessful.  
  
### Remarks  
 This method creates a horizontal regular font, an underlined font, and a bold font that is used in default menu items. This method optionally creates a regular vertical font. For more information about logical fonts, see [CFont::CreateFontIndirect](../../mfc/reference/cfont-class.md#cfont__createfontindirect).  
  
## <a name="afx_global_data__updatefonts"></a> AFX_GLOBAL_DATA::UpdateFonts
Reintializes the logical fonts that are used by the framework.  
  
  
```  
void UpdateFonts();
```  
  
### Remarks  
 For more information about logical fonts, see `CFont::CreateFontIndirect`.  
  
## <a name="afx_global_data__updatesyscolors"></a> AFX_GLOBAL_DATA::UpdateSysColors
Initializes the colors, color depth, brushes, pens, and images that are used by the framework.  
  
  
```  
void UpdateSysColors();
```  
  
## <a name="afx_global_data__biswindows7"></a> AFX_GLOBAL_DATA::bIsWindows7
Indicates whether the application is being executed under Windows 7 or higher.  
  
  
```  
BOOL bIsWindows7;  
```  
  
## <a name="afx_global_data__clractivecaptiongradient"></a> AFX_GLOBAL_DATA::clrActiveCaptionGradient
Specifies the gradient color of the active caption. Generally used for docking panes.  
  
  
```  
COLORREF clrActiveCaptionGradient;  
```  
  
## <a name="afx_global_data__clrinactivecaptiongradient"></a> AFX_GLOBAL_DATA::clrInactiveCaptionGradient
Specifies the gradient color of the inactive caption. Generally used for docking panes.  
  
  
```  
COLORREF clrInactiveCaptionGradient;  
```  
  
## <a name="afx_global_data__getitaskbarlist"></a> AFX_GLOBAL_DATA::GetITaskbarList
Creates and stores in the global data a pointer to the `ITaskBarList` interface.  
  
  
```  
ITaskbarList *GetITaskbarList();
```  
  
### Return Value  
 A pointer to the `ITaskbarList` interface if creation of a task bar list object succeeds; `NULL` if creation fails or if the current Operation System is less than Windows 7.  
  
## <a name="afx_global_data__getitaskbarlist3"></a> AFX_GLOBAL_DATA::GetITaskbarList3
Creates and stores in the global data a pointer to the `ITaskBarList3` interface.  
  
  
```  
ITaskbarList3 *GetITaskbarList3();
```  
  
### Return Value  
 A pointer to the `ITaskbarList3` interface if creation of a task bar list object succeeds; `NULL` if creation fails or if the current Operation System is less than Windows 7.  
  
## <a name="afx_global_data__getshellautohidebars"></a> AFX_GLOBAL_DATA::GetShellAutohideBars
Determines positions of Shell auto hide bars.  
  
  
```  
int GetShellAutohideBars();
```  
  
### Return Value  
 An integer value with encoded flags that specify positions of auto hide bars. It may combine the following values: AFX_AUTOHIDE_BOTTOM, AFX_AUTOHIDE_TOP, AFX_AUTOHIDE_LEFT, AFX_AUTOHIDE_RIGHT.  
  
## <a name="afx_global_data__releasetaskbarrefs"></a> AFX_GLOBAL_DATA::ReleaseTaskBarRefs
Releases interfaces obtained through the `GetITaskbarList` and `GetITaskbarList3` methods.  
  
  
```  
void ReleaseTaskBarRefs();
```  
  
## <a name="afx_global_data__shellcreateitemfromparsingname"></a> AFX_GLOBAL_DATA::ShellCreateItemFromParsingName
Creates and initializes a Shell item object from a parsing name.  
  
  
```  
HRESULT ShellCreateItemFromParsingName(
    PCWSTR pszPath,  
    IBindCtx *pbc,  
    REFIID riid,  
    void **ppv);
```  
  
### Parameters   
 `pszPath`  
 [in] A pointer to a display name.  
  
 `pbc`  
 A pointer to a bind context that controls the parsing operation.  
  
 `riid`  
 A reference to an interface ID.  
  
 `ppv`  
 [out] When this function returns, contains the interface pointer requested in `riid`. This will typically be `IShellItem` or `IShellItem2`.  
  
### Return Value  
 Returns S_OK if successful; an error value otherwise.  

