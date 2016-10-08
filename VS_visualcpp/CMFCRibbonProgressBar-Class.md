---
title: "CMFCRibbonProgressBar Class"
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
ms.assetid: de3d9f2e-ed59-480e-aa7d-08a33ab36c67
caps.latest.revision: 22
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
# CMFCRibbonProgressBar Class
Implements a control that visually indicates the progress of a lengthy operation.  
  
## Syntax  
  
```  
class CMFCRibbonProgressBar : public CMFCRibbonBaseElement  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCRibbonProgressBar::CMFCRibbonProgressBar](#cmfcribbonprogressbar__cmfcribbonprogressbar)|Constructs and initializes a `CMFCRibbonProgressBar` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCRibbonProgressBar::GetPos](#cmfcribbonprogressbar__getpos)|Returns the current progress.|  
|[CMFCRibbonProgressBar::GetRangeMax](#cmfcribbonprogressbar__getrangemax)|Returns the maximum value of the current range.|  
|[CMFCRibbonProgressBar::GetRangeMin](#cmfcribbonprogressbar__getrangemin)|Returns the minimum value of the current range.|  
|[CMFCRibbonProgressBar::GetRegularSize](#cmfcribbonprogressbar__getregularsize)|Returns the regular size of the ribbon element. (Overrides [CMFCRibbonBaseElement::GetRegularSize](../VS_visualcpp/CMFCRibbonBaseElement-Class.md#cmfcribbonbaseelement__getregularsize).)|  
|[CMFCRibbonProgressBar::IsInfiniteMode](#cmfcribbonprogressbar__isinfinitemode)|Specifies whether the progress bar is working in infinite mode.|  
|[CMFCRibbonProgressBar::OnDraw](#cmfcribbonprogressbar__ondraw)|Called by the framework to draw the ribbon element. (Overrides [CMFCRibbonBaseElement::OnDraw](../VS_visualcpp/CMFCRibbonBaseElement-Class.md#cmfcribbonbaseelement__ondraw).)|  
|[CMFCRibbonProgressBar::SetInfiniteMode](#cmfcribbonprogressbar__setinfinitemode)|Sets the progress bar to work in infinite mode.|  
|[CMFCRibbonProgressBar::SetPos](#cmfcribbonprogressbar__setpos)|Sets the current progress.|  
|[CMFCRibbonProgressBar::SetRange](#cmfcribbonprogressbar__setrange)|Sets the minimum and maximum values.|  
  
## Remarks  
 A `CMFCRibbonProgressBar` can operate in two modes: regular and infinite. In regular mode, the progress bar is filled from left to right and stops when it reaches the maximum value. In infinite mode, the progress bar is repeatedly filled from the minimum value to the maximum value. You might use infinite mode to indicate that an operation is ongoing, but that the completion time is unknown.  
  
## Example  
 The following example demonstrates how to use various methods in the `CMFCRibbonProgressBar` class. The example shows how to set the progress bar to work in infinite mode (where the completion time of an operation is unknown), set the minimum and maximum values for the progress bar, and set the current position of the progress bar. This code snippet is part of the [MS Office 2007 Demo sample](../VS_visualcpp/Visual-C---Samples.md).  
  
 [!CODE [NVC_MFC_MSOffice2007Demo#11](../CodeSnippet/VS_Snippets_Misc/NVC_MFC_MSOffice2007Demo#11)]  
  
## Inheritance Hierarchy  
 [CObject](../VS_visualcpp/CObject-Class.md)  
  
 [CMFCRibbonBaseElement](../VS_visualcpp/CMFCRibbonBaseElement-Class.md)  
  
 [CMFCRibbonProgressBar](../VS_visualcpp/CMFCRibbonProgressBar-Class.md)  
  
## Requirements  
 **Header:** afxRibbonProgressBar.h  
  
##  <a name="cmfcribbonprogressbar__cmfcribbonprogressbar"></a>  CMFCRibbonProgressBar::CMFCRibbonProgressBar  
 Constructs and initializes a [CMFCRibbonProgressBar](../VS_visualcpp/CMFCRibbonProgressBar-Class.md) object.  
  
```  
CMFCRibbonProgressBar();  
  
CMFCRibbonProgressBar(  
    UINT nID,  
    int nWidth = 90,  
    int nHeight = 22);  
```  
  
### Parameters  
 [in] `nID`  
 Specifies the command ID for the ribbon progress bar.  
  
 [in] `nWidth`  
 Specifies the width, in pixels, of the ribbon progress bar.  
  
 [in] `nHeight`  
 Specifies the height, in pixels, of the ribbon progress bar.  
  
##  <a name="cmfcribbonprogressbar__getpos"></a>  CMFCRibbonProgressBar::GetPos  
 Returns the current position of the progress bar.  
  
```  
int GetPos () const;  
```  
  
### Return Value  
 A value representing the current position of the progress bar.  
  
### Remarks  
 The range being set must be within the range specified by the [CMFCRibbonProgressBar::SetRange](#cmfcribbonprogressbar__setrange) method.  
  
##  <a name="cmfcribbonprogressbar__getrangemax"></a>  CMFCRibbonProgressBar::GetRangeMax  
 Returns the progress bar's current maximum value.  
  
```  
int GetRangeMax() const;  
```  
  
### Return Value  
 The maximum value of the current range.  
  
### Remarks  
  
##  <a name="cmfcribbonprogressbar__getrangemin"></a>  CMFCRibbonProgressBar::GetRangeMin  
 Returns the progress bar's current minimum range value.  
  
```  
int GetRangeMin() const;  
```  
  
### Return Value  
 The minimum value of the current range.  
  
##  <a name="cmfcribbonprogressbar__getregularsize"></a>  CMFCRibbonProgressBar::GetRegularSize  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual CSize GetRegularSize( CDC* pDC );  
```  
  
### Parameters  
 [in] `pDC`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcribbonprogressbar__isinfinitemode"></a>  CMFCRibbonProgressBar::IsInfiniteMode  
 Specifies whether the progress bar is working in infinite mode.  
  
```  
BOOL IsInfiniteMode() const;  
```  
  
### Return Value  
 `TRUE` if the progress bar is in infinite mode; otherwise, `FALSE`.  
  
### Remarks  
 In infinite mode, the progress bar fills repeatedly from the minimum value to the maximum value. You might use infinite mode to indicate that an operation is ongoing, but that the completion time is unknown.  
  
##  <a name="cmfcribbonprogressbar__ondraw"></a>  CMFCRibbonProgressBar::OnDraw  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDraw( CDC* pDC );  
```  
  
### Parameters  
 [in] `pDC`  
  
### Remarks  
  
##  <a name="cmfcribbonprogressbar__setinfinitemode"></a>  CMFCRibbonProgressBar::SetInfiniteMode  
 Sets the progress bar to work in infinite mode.  
  
```  
void SetInfiniteMode(  
    BOOL bSet = TRUE);  
```  
  
### Parameters  
 [in] `bSet`  
 `TRUE` to specify that the progress bar is in infinite mode; otherwise, `FALSE`.  
  
### Remarks  
 Usually, if the progress bar is in infinite mode, it is telling the user that an operation is ongoing, but that the completion time is unknown. Thus, the progress bar fills repeatedly from the minimum value to the maximum value.  
  
##  <a name="cmfcribbonprogressbar__setpos"></a>  CMFCRibbonProgressBar::SetPos  
 Sets the current position of the progress bar.  
  
```  
void SetPos(  
    int nPos,  
    BOOL bRedraw = TRUE);  
```  
  
### Parameters  
 [in] `nPos`  
 Specifies the position to which the progress bar is set.  
  
 [in] `bRedraw`  
 Specifies whether the progress bar should be redrawn.  
  
### Remarks  
 The range being set must be within the range specified by the [CMFCRibbonProgressBar::SetRange](#cmfcribbonprogressbar__setrange) method.  
  
##  <a name="cmfcribbonprogressbar__setrange"></a>  CMFCRibbonProgressBar::SetRange  
 Sets the minimum and maximum values for the progress bar.  
  
```  
void SetRange(  
    int nMin,  
    int nMax );  
```  
  
### Parameters  
 [in] `nMin`  
 Specifies the minimum value of the range.  
  
 [in] `nMax`  
 Specifies the maximum value of the range.  
  
### Remarks  
 Use this method to define the range of the progress bar by setting minimum and maximum values.  
  
## See Also  
 [Hierarchy Chart](../VS_visualcpp/Hierarchy-Chart.md)   
 [Classes](../VS_visualcpp/MFC-Classes.md)   
 [CMFCRibbonBaseElement Class](../VS_visualcpp/CMFCRibbonBaseElement-Class.md)   
 [CMFCRibbonBar Class](../VS_visualcpp/CMFCRibbonBar-Class.md)