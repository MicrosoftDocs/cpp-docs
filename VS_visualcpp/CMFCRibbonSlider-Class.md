---
title: "CMFCRibbonSlider Class"
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
ms.assetid: 9351ac34-f234-4e42-91e2-763f1989c8ff
caps.latest.revision: 39
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
# CMFCRibbonSlider Class
The `CMFCRibbonSlider` class implements a slider control that you can add to a ribbon bar or ribbon status bar. The ribbon slider control resembles the zoom sliders that appear in Office 2007 applications.  
  
## Syntax  
  
```  
class CMFCRibbonSlider : public CMFCRibbonBaseElement  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCRibbonSlider::CMFCRibbonSlider](#cmfcribbonslider__cmfcribbonslider)|Constructs and initializes a ribbon slider control.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCRibbonSlider::GetPos](#cmfcribbonslider__getpos)|Returns the current position of the slider control.|  
|[CMFCRibbonSlider::GetRangeMax](#cmfcribbonslider__getrangemax)|Returns the maximum value of the slider.|  
|[CMFCRibbonSlider::GetRangeMin](#cmfcribbonslider__getrangemin)|Returns the minimum value of the slider.|  
|[CMFCRibbonSlider::GetRegularSize](#cmfcribbonslider__getregularsize)|Returns the regular size of the ribbon element. (Overrides [CMFCRibbonBaseElement::GetRegularSize](../VS_visualcpp/CMFCRibbonBaseElement-Class.md#cmfcribbonbaseelement__getregularsize).)|  
|[CMFCRibbonSlider::GetZoomIncrement](#cmfcribbonslider__getzoomincrement)|Returns the size of the zoom increment for the slider control.|  
|[CMFCRibbonSlider::HasZoomButtons](#cmfcribbonslider__haszoombuttons)|Specifies whether the slider has zoom buttons.|  
|[CMFCRibbonSlider::OnDraw](#cmfcribbonslider__ondraw)|Called by the framework to draw the ribbon element. (Overrides [CMFCRibbonBaseElement::OnDraw](../VS_visualcpp/CMFCRibbonBaseElement-Class.md#cmfcribbonbaseelement__ondraw).)|  
|[CMFCRibbonSlider::SetPos](#cmfcribbonslider__setpos)|Sets the current position of the slider control.|  
|[CMFCRibbonSlider::SetRange](#cmfcribbonslider__setrange)|Specifies the range of the slider control by setting the minimum and maximum values.|  
|[CMFCRibbonSlider::SetZoomButtons](#cmfcribbonslider__setzoombuttons)|Shows or hides the zoom buttons.|  
|[CMFCRibbonSlider::SetZoomIncrement](#cmfcribbonslider__setzoomincrement)|Sets size of the zoom increment for the slider control.|  
  
## Remarks  
 You can use the `SetRange` method to configure the range of zoom increments for the slider. You can set current position of the slider by using the `SetPos` method.  
  
 You can display circular zoom buttons on the left and right side of the slider control by using the `SetZoomButtons` method. By default, the slider is horizontal, the left zoom button displays a minus sign and the right zoom button displays a plus sign.  
  
 The `SetZoomIncrement` method defines the increment to add to or subtract from the current position when a user clicks the zoom buttons.  
  
## Example  
 The following example demonstrates how to use various methods in the `CMFCRibbonSlider` class to set the properties of the slider. The example shows how to construct a `CMFCRibbonSlider` object, display zoom buttons, set the current position of the slider control, and set the range of values for the slider control.  
  
 [!CODE [NVC_MFC_RibbonApp#12](../CodeSnippet/VS_Snippets_Misc/NVC_MFC_RibbonApp#12)]  
  
## Inheritance Hierarchy  
 [CObject](../VS_visualcpp/CObject-Class.md)  
  
 [CMFCRibbonBaseElement](../VS_visualcpp/CMFCRibbonBaseElement-Class.md)  
  
 [CMFCRibbonSlider](../VS_visualcpp/CMFCRibbonSlider-Class.md)  
  
## Requirements  
 **Header:** afxribbonslider.h  
  
##  <a name="cmfcribbonslider__cmfcribbonslider"></a>  CMFCRibbonSlider::CMFCRibbonSlider  
 Construct a ribbon slider.  
  
```  
CMFCRibbonSlider(  
    UINT nID,  
    int nWidth=100 );  
```  
  
### Parameters  
 [in] `nID`  
 Slider ID.  
  
 [in]. `nWidth`  
 Slider width in pixels.  
  
### Remarks  
 Constructs a ribbon slider that is `nWidth` pixels wide in the panel category where the slider is added. By default, the slider is horizontal.  
  
##  <a name="cmfcribbonslider__getpos"></a>  CMFCRibbonSlider::GetPos  
 Returns the current position of the slider control.  
  
```  
int GetPos() const;  
```  
  
### Return Value  
 The current position of the slider control, which is a position relative to the beginning of the slider.  
  
##  <a name="cmfcribbonslider__getrangemax"></a>  CMFCRibbonSlider::GetRangeMax  
 Obtains the maximum increment of the slider that the slider can travel on the slider control.  
  
```  
int GetRangeMax() const;  
```  
  
### Return Value  
 The maximum increment of the slider that the slider can travel on the slider control.  
  
##  <a name="cmfcribbonslider__getrangemin"></a>  CMFCRibbonSlider::GetRangeMin  
 Returns the minimum increment that the slider can travel on the slider control.  
  
```  
int GetRangeMin() const;  
```  
  
### Return Value  
 The minimum increment that the slider can travel on the slider control.  
  
##  <a name="cmfcribbonslider__getregularsize"></a>  CMFCRibbonSlider::GetRegularSize  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual CSize GetRegularSize( CDC* pDC );  
```  
  
### Parameters  
 [in] `pDC`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcribbonslider__getzoomincrement"></a>  CMFCRibbonSlider::GetZoomIncrement  
 Obtain the zoom increment for the slider control.  
  
```  
int GetZoomIncrement() const;  
```  
  
### Return Value  
 The zoom increment for the slider control.  
  
##  <a name="cmfcribbonslider__haszoombuttons"></a>  CMFCRibbonSlider::HasZoomButtons  
 Specifies whether the slider has zoom buttons.  
  
```  
BOOL HasZoomButtons() const;  
```  
  
### Return Value  
 `TRUE` if the slider has zoom buttons; `FALSE` otherwise.  
  
##  <a name="cmfcribbonslider__ondraw"></a>  CMFCRibbonSlider::OnDraw  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDraw( CDC* pDC );  
```  
  
### Parameters  
 [in] `pDC`  
  
### Remarks  
  
##  <a name="cmfcribbonslider__setpos"></a>  CMFCRibbonSlider::SetPos  
 Set the current position of the slider control.  
  
```  
void SetPos(  
    int nPos,  
    BOOL bRedraw=TRUE );  
```  
  
### Parameters  
 [in] `nPos`  
 Specifies the position to set for the slider. The position is relative to the beginning of the slider.  
  
 [in] `bRedraw`  
 If `TRUE`, the slider will be redrawn.  
  
##  <a name="cmfcribbonslider__setrange"></a>  CMFCRibbonSlider::SetRange  
 Set the range of values for the slider control.  
  
```  
void SetRange(  
    int nMin,  
    int nMax );  
```  
  
### Parameters  
 [in] `nMin`  
 Specifies minimum value of the slider control.  
  
 [in] `nMax`  
 Specifies maximum value of the slider control.  
  
### Remarks  
 Specifies the range of values for the slider control by setting the minimum and maximum values.  
  
##  <a name="cmfcribbonslider__setzoombuttons"></a>  CMFCRibbonSlider::SetZoomButtons  
 Display or hide zoom buttons.  
  
```  
void SetZoomButtons(  
    BOOL bSet=TRUE );  
```  
  
### Parameters  
 [in]. `bSet`  
 `TRUE` to display zoom buttons; `FALSE` to hide them.  
  
##  <a name="cmfcribbonslider__setzoomincrement"></a>  CMFCRibbonSlider::SetZoomIncrement  
 Set the zoom increment for the slider control.  
  
```  
void SetZoomIncrement( int nZoomIncrement );  
```  
  
### Parameters  
 [in] `nZoomIncrement`  
 Specifies the zoom increment of the slider control.  
  
## See Also  
 [Hierarchy Chart](../VS_visualcpp/Hierarchy-Chart.md)   
 [Classes](../VS_visualcpp/MFC-Classes.md)   
 [CMFCRibbonBaseElement Class](../VS_visualcpp/CMFCRibbonBaseElement-Class.md)