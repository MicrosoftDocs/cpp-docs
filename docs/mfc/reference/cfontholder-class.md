---
title: "CFontHolder Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CFontHolder"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "custom fonts"
  - "CFontHolder class"
  - "fonts, ActiveX controls"
ms.assetid: 728ab472-0c97-440d-889f-1324c6e1b6b8
caps.latest.revision: 19
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
# CFontHolder Class
Implements the stock Font property and encapsulates the functionality of a Windows font object and the `IFont` interface.  
  
## Syntax  
  
```  
class CFontHolder  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CFontHolder::CFontHolder](#cfontholder__cfontholder)|Constructs a `CFontHolder` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CFontHolder::GetDisplayString](#cfontholder__getdisplaystring)|Retrieves the string displayed in a container's property browser.|  
|[CFontHolder::GetFontDispatch](#cfontholder__getfontdispatch)|Returns the font's `IDispatch` interface.|  
|[CFontHolder::GetFontHandle](#cfontholder__getfonthandle)|Returns a handle to a Windows font.|  
|[CFontHolder::InitializeFont](#cfontholder__initializefont)|Initializes a `CFontHolder` object.|  
|[CFontHolder::QueryTextMetrics](#cfontholder__querytextmetrics)|Retrieves information for the related font.|  
|[CFontHolder::ReleaseFont](#cfontholder__releasefont)|Disconnects the `CFontHolder` object from the `IFont` and `IFontNotification` interfaces.|  
|[CFontHolder::Select](#cfontholder__select)|Selects a font resource into a device context.|  
|[CFontHolder::SetFont](#cfontholder__setfont)|Connects the `CFontHolder` object to an `IFont` interface.|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CFontHolder::m_pFont](#cfontholder__m_pfont)|A pointer to the `CFontHolder` object's `IFont` interface.|  
  
## Remarks  
 `CFontHolder` does not have a base class.  
  
 Use this class to implement custom font properties for your control. For information on creating such properties, see the article [ActiveX Controls: Using Fonts](../../mfc/mfc-activex-controls-using-fonts.md).  
  
## Inheritance Hierarchy  
 `CFontHolder`  
  
## Requirements  
 **Header:** afxctl.h  
  
##  <a name="cfontholder__cfontholder"></a>  CFontHolder::CFontHolder  
 Constructs a `CFontHolder` object.  
  
```  
explicit CFontHolder(LPPROPERTYNOTIFYSINK pNotify);
```  
  
### Parameters  
 *pNotify*  
 Pointer to the font's `IPropertyNotifySink` interface.  
  
### Remarks  
 You must call `InitializeFont` to initialize the resulting object before using it.  
  
##  <a name="cfontholder__getdisplaystring"></a>  CFontHolder::GetDisplayString  
 Retrieves a string that can be displayed in a container's property browser.  
  
```  
BOOL GetDisplayString(CString& strValue);
```  
  
### Parameters  
 `strValue`  
 Reference to the [CString](../../atl-mfc-shared/reference/cstringt-class.md) that is to hold the display string.  
  
### Return Value  
 Nonzero if the string is successfully retrieved; otherwise 0.  
  
##  <a name="cfontholder__getfontdispatch"></a>  CFontHolder::GetFontDispatch  
 Call this function to retrieve a pointer to the font's dispatch interface.  
  
```  
LPFONTDISP GetFontDispatch();
```  
  
### Return Value  
 A pointer to the `CFontHolder` object's **IFontDisp** interface. Note that the function that calls `GetFontDispatch` must call `IUnknown::Release` on this interface pointer when done with it.  
  
### Remarks  
 Call `InitializeFont` before calling `GetFontDispatch`.  
  
##  <a name="cfontholder__getfonthandle"></a>  CFontHolder::GetFontHandle  
 Call this function to get a handle to a Windows font.  
  
```  
HFONT GetFontHandle();

 
HFONT GetFontHandle(
    long cyLogical,  
    long cyHimetric);
```  
  
### Parameters  
 `cyLogical`  
 Height, in logical units, of the rectangle in which the control is drawn.  
  
 `cyHimetric`  
 Height, in `MM_HIMETRIC` units, of the control.  
  
### Return Value  
 A handle to the Font object; otherwise **NULL**.  
  
### Remarks  
 The ratio of `cyLogical` and `cyHimetric` is used to calculate the proper display size, in logical units, for the font's point size expressed in `MM_HIMETRIC` units:  
  
 Display size = ( `cyLogical` / `cyHimetric`) X font size  
  
 The version with no parameters returns a handle to a font sized correctly for the screen.  
  
##  <a name="cfontholder__initializefont"></a>  CFontHolder::InitializeFont  
 Initializes a `CFontHolder` object.  
  
```  
void InitializeFont(
    const FONTDESC* pFontDesc = NULL,  
    LPDISPATCH pFontDispAmbient = NULL);
```  
  
### Parameters  
 `pFontDesc`  
 Pointer to a font description structure ( [FONTDESC](http://msdn.microsoft.com/library/windows/desktop/ms692782)) that specifies the font's characteristics.  
  
 `pFontDispAmbient`  
 Pointer to the container's ambient Font property.  
  
### Remarks  
 If `pFontDispAmbient` is not **NULL**, the `CFontHolder` object is connected to a clone of the `IFont` interface used by the container's ambient Font property.  
  
 If `pFontDispAmbient` is **NULL**, a new Font object is created either from the font description pointed to by `pFontDesc` or, if `pFontDesc` is **NULL**, from a default description.  
  
 Call this function after constructing a `CFontHolder` object.  
  
##  <a name="cfontholder__m_pfont"></a>  CFontHolder::m_pFont  
 A pointer to the `CFontHolder` object's `IFont` interface.  
  
```  
LPFONT m_pFont;  
```  
  
##  <a name="cfontholder__querytextmetrics"></a>  CFontHolder::QueryTextMetrics  
 Retrieves information on the physical font represented by the `CFontHolder` object.  
  
```  
void QueryTextMetrics(LPTEXTMETRIC lptm);
```  
  
### Parameters  
 `lptm`  
 A pointer to a [TEXTMETRIC](http://msdn.microsoft.com/library/windows/desktop/dd145132) structure that will receive the information.  
  
##  <a name="cfontholder__releasefont"></a>  CFontHolder::ReleaseFont  
 This function disconnects the `CFontHolder` object from its `IFont` interface.  
  
```  
void ReleaseFont();
```  
  
##  <a name="cfontholder__select"></a>  CFontHolder::Select  
 Call this function to select your control's font into the specified device context.  
  
```  
CFont* Select(
    CDC* pDC,  
    long cyLogical,  
    long cyHimetric);
```  
  
### Parameters  
 `pDC`  
 Device context into which the font is selected.  
  
 `cyLogical`  
 Height, in logical units, of the rectangle in which the control is drawn.  
  
 `cyHimetric`  
 Height, in `MM_HIMETRIC` units, of the control.  
  
### Return Value  
 A pointer to the font that is being replaced.  
  
### Remarks  
 See [GetFontHandle](#cfontholder__getfonthandle) for a discussion of the `cyLogical` and `cyHimetric` parameters.  
  
##  <a name="cfontholder__setfont"></a>  CFontHolder::SetFont  
 Releases any existing font and connects the `CFontHolder` object to an `IFont` interface.  
  
```  
void SetFont(LPFONT pNewFont);
```  
  
### Parameters  
 *pNewFont*  
 Pointer to the new `IFont` interface.  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [CPropExchange Class](../../mfc/reference/cpropexchange-class.md)
