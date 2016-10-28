---
title: "CMFCSpinButtonCtrl Class"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "reference"
f1_keywords: 
  - "CMFCSpinButtonCtrl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCSpinButtonCtrl class"
ms.assetid: 8773f259-4d3f-4bca-a71c-09e0c71bc843
caps.latest.revision: 21
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
# CMFCSpinButtonCtrl Class
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
  
 [!code[NVC_MFC_RibbonApp#25](../mfcref/codesnippet/CPP/cmfcspinbuttonctrl-class_1.cpp)]  
  
## Inheritance Hierarchy  
 [CObject](../mfcref/cobject-class.md)  
  
 [CCmdTarget](../mfcref/ccmdtarget-class.md)  
  
 [CWnd](../mfcref/cwnd-class.md)  
  
 [CSpinButtonCtrl](../mfcref/cspinbuttonctrl-class.md)  
  
 [CMFCSpinButtonCtrl](../mfcref/cmfcspinbuttonctrl-class.md)  
  
## Requirements  
 **Header:** afxspinbuttonctrl.h  
  
##  <a name="cmfcspinbuttonctrl__ondraw"></a>  CMFCSpinButtonCtrl::OnDraw  
 Repaints the current spin button control.  
  
```  
virtual void OnDraw(  
   CDC* pDC  
);  
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
### Remarks  
 The framework calls the `CMFCSpinButtonCtrl::OnPaint` method to handle the [CWnd::OnPaint](../mfcref/cwnd-class.md#cwnd__onpaint) message, and that method in turn calls this `CMFCSpinButtonCtrl::OnDraw` method. Override this method to customize the way the framework draws the spin button control.  
  
## See Also  
 [Hierarchy Chart](../mfc/hierarchy-chart.md)   
 [Classes](../mfcref/mfc-classes.md)   
 [CMFCVisualManager Class](../mfcref/cmfcvisualmanager-class.md)