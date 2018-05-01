---
title: "CMFCSpinButtonCtrl Class | Microsoft Docs"
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
  - "CMFCSpinButtonCtrl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCSpinButtonCtrl class"
ms.assetid: 8773f259-4d3f-4bca-a71c-09e0c71bc843
caps.latest.revision: 31
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CMFCSpinButtonCtrl Class
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [CMFCSpinButtonCtrl Class](https://docs.microsoft.com/cpp/mfc/reference/cmfcspinbuttonctrl-class).  
  
  
The `CMFCSpinButtonCtrl` class supports a visual manager that draws a spin button control.  
  
## Syntax  
  
```  
class CMFCSpinButtonCtrl : public CSpinButtonCtrl  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|`CMFCSpinButtonCtrl::CMFCSpinButtonCtrl`|Default constructor.|  
|`CMFCSpinButtonCtrl::~CMFCSpinButtonCtrl`|Destructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCSpinButtonCtrl::OnDraw](#cmfcspinbuttonctrl__ondraw)|Repaints the current spin button control.|  
  
## Remarks  
 To use a visual manager to draw a spin button control in your application, replace all instances of the `CSpinButtonCtrl` class with the `CMFCSpinButtonCtrl` class.  
  
## Example  
 The following example demonstrates how to create an object of the `CMFCSpinButtonCtrl` class and use its `Create` method.  
  
 [!code-cpp[NVC_MFC_RibbonApp#25](../../snippets/cpp/VS_Snippets_Misc/NVC_MFC_RibbonApp/cpp/MainFrm.cpp#25)]  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CSpinButtonCtrl](../../mfc/reference/cspinbuttonctrl-class.md)  
  
 [CMFCSpinButtonCtrl](../../mfc/reference/cmfcspinbuttonctrl-class.md)  
  
## Requirements  
 **Header:** afxspinbuttonctrl.h  
  
##  <a name="cmfcspinbuttonctrl__ondraw"></a>  CMFCSpinButtonCtrl::OnDraw  
 Repaints the current spin button control.  
  
```  
virtual void OnDraw(CDC* pDC);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
### Remarks  
 The framework calls the `CMFCSpinButtonCtrl::OnPaint` method to handle the [CWnd::OnPaint](../../mfc/reference/cwnd-class.md#cwnd__onpaint) message, and that method in turn calls this `CMFCSpinButtonCtrl::OnDraw` method. Override this method to customize the way the framework draws the spin button control.  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CMFCVisualManager Class](../../mfc/reference/cmfcvisualmanager-class.md)








