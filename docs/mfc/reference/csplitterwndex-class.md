---
title: "CSplitterWndEx Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CSplitterWndEx"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CSplitterWndEx"
  
ms.assetid: 33e5eef3-05e1-4a07-a968-bf9207ce8598
caps.latest.revision: 24
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
# CSplitterWndEx Class



Represents a customized splitter window.  
  
## Syntax  
  
```  
class CSplitterWndEx : public CSplitterWnd  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|`CSplitterWndEx::CSplitterWndEx`|Default constructor.|  
|`CSplitterWndEx::~CSplitterWndEx`|Destructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CSplitterWndEx::OnDrawSplitter](#csplitterwndex__ondrawsplitter)|Called by the framework to draw a splitter window. (Overrides [CSplitterWnd::OnDrawSplitter](csplitterwnd-class.md#csplitterwnd__ondrawsplitter).)|  
  
## Remarks  
 Override the `OnDrawSplitter` method to customize the appearance of the graphical components of a splitter window.  
  
 The `CSplitterWndEx` class is used together with the [OnDrawSplitterBorder](cmfcvisualmanager-class.md#cmfcvisualmanager__ondrawsplitterborder), [OnDrawSplitterBox](cmfcvisualmanager-class.md#cmfcvisualmanager__ondrawsplitterbox), and [OnFillSplitterBackground](cmfcvisualmanager-class.md#cmfcvisualmanager__onfillsplitterbackground) methods, which are implemented by a visual manager. To cause a visual manager to draw a splitter window in your application, replace declarations of the `CSplitterWnd` class with the `CSplitterWndEx` class. For frame window applications, the splitter window class is declared in the CMainFrame class that is located in mainfrm.h. For an example, see the `OutlookDemo` sample in the Samples directory.  
  
## Inheritance Hierarchy  
 [CObject](cobject-class.md)  
  
 [CCmdTarget](ccmdtarget-class.md)  
  
 [CWnd](cwnd-class.md)  
  
 [CSplitterWnd](csplitterwnd-class.md)  
   
## Requirements  
 **Header:** afxsplitterwndex.h  
  
##  <a name="csplitterwndex__ondrawsplitter"></a>  CSplitterWndEx::OnDrawSplitter  
 Called by the framework to draw a splitter window.  
  
```  
virtual void OnDrawSplitter(  
   CDC* pDC,  
   ESplitType nType,  
   const CRect& rect   
);  
```  
  
### Parameters  
 [in] `pDC`  
 Pointer to the device context. If this parameter is `NULL`, the framework redraws the active window.  
  
 [in] `nType`  
 One of the `CSplitterWnd::ESplitType` enumeration values that specifies the splitter window element to draw. Valid values are `splitBox`, `splitBar`, `splitIntersection`, and `splitBorder`.  
  
 [in] `rect`  
 A bounding rectangle that specifies the dimensions and location to draw the specified splitter window element.  
  
### Remarks  
  
## See Also  
 [Hierarchy Chart](../hierarchy-chart.md)   
 [Classes](../mfc-classes.md)   
 [CSplitterWnd Class](csplitterwnd-class.md)   
 [CMFCVisualManager Class](cmfcvisualmanager-class.md)