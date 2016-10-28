---
title: "CMFCImageEditorPaletteBar Class"
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
  - "CMFCImageEditorPaletteBar"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCImageEditorPaletteBar class"
ms.assetid: 3fb7ba8e-f254-4d56-b913-9941b4ed8138
caps.latest.revision: 16
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
# CMFCImageEditorPaletteBar Class
Provides palette bar functionality to an image editor dialog box.  
  
## Syntax  
  
```  
class CMFCImageEditorPaletteBar : public CMFCToolBar  
```  
  
## Members  
  
### Public Methods  
  
|||  
|-|-|  
|Name|Description|  
|[CMFCImageEditorPaletteBar::GetRowHeight](#cmfcimageeditorpalettebar__getrowheight)|Returns the height of toolbar buttons. (Overrides [CMFCToolBar::GetRowHeight](../mfcref/cmfctoolbar-class.md#cmfctoolbar__getrowheight).)|  
|[CMFCImageEditorPaletteBar::IsButtonExtraSizeAvailable](#cmfcimageeditorpalettebar__isbuttonextrasizeavailable)|Determines whether the toolbar can display buttons that have extended borders. (Overrides [CMFCToolBar::IsButtonExtraSizeAvailable](../mfcref/cmfctoolbar-class.md#cmfctoolbar__isbuttonextrasizeavailable).)|  
  
### Remarks  
 This class is not intended to be used directly from your code.  
  
 The framework uses this class to display a palette bar in an image editor dialog box. For more information about the image editor dialog box, see [CMFCImageEditorDialog Class](../mfcref/cmfcimageeditordialog-class.md).  
  
## Inheritance Hierarchy  
 [CObject](../mfcref/cobject-class.md)  
  
 [CCmdTarget](../mfcref/ccmdtarget-class.md)  
  
 [CWnd](../mfcref/cwnd-class.md)  
  
 [CBasePane](../mfcref/cbasepane-class.md)  
  
 [CPane](../mfcref/cpane-class.md)  
  
 [CMFCBaseToolBa](../mfcref/cmfcbasetoolbar-class.md)  
  
 [CMFCToolBar](../mfcref/cmfctoolbar-class.md)  
  
 [CMFCImageEditorPaletteBar](../mfcref/cmfcimageeditorpalettebar-class.md)  
  
## Requirements  
 **Header:** afximageeditordialog.h  
  
##  <a name="cmfcimageeditorpalettebar__getrowheight"></a>  CMFCImageEditorPaletteBar::GetRowHeight  
 Returns the height of toolbar buttons.  
  
```  
virtual int GetRowHeight() const;  
```  
  
### Return Value  
 The height of each button on the toolbar.  
  
##  <a name="cmfcimageeditorpalettebar__isbuttonextrasizeavailable"></a>  CMFCImageEditorPaletteBar::IsButtonExtraSizeAvailable  
 Determines whether the toolbar can display buttons that have extended borders.  
  
```  
virtual BOOL IsButtonExtraSizeAvailable() const;  
```  
  
### Return Value  
 This method returns `FALSE`.  
  
## See Also  
 [Hierarchy Chart](../mfc/hierarchy-chart.md)   
 [Classes](../mfcref/mfc-classes.md)   
 [CMFCImageEditorDialog Class](../mfcref/cmfcimageeditordialog-class.md)