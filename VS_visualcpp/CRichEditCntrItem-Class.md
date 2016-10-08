---
title: "CRichEditCntrItem Class"
ms.custom: na
ms.date: 10/07/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: 6c0b4efe-0fb8-4621-b5e1-fdcb8ec48c3b
caps.latest.revision: 20
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
# CRichEditCntrItem Class
With [CRichEditView](../VS_visualcpp/CRichEditView-Class.md) and [CRichEditDoc](../VS_visualcpp/CRichEditDoc-Class.md), provides the functionality of the rich edit control within the context of MFC's document view architecture.  
  
## Syntax  
  
```  
class CRichEditCntrItem : public COleClientItem  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CRichEditCntrItem::CRichEditCntrItem](#cricheditcntritem__cricheditcntritem)|Constructs a `CRichEditCntrItem` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CRichEditCntrItem::SyncToRichEditObject](#cricheditcntritem__synctoricheditobject)|Activates the item as another type.|  
  
## Remarks  
 A "rich edit control" is a window in which the user can enter and edit text. The text can be assigned character and paragraph formatting, and can include embedded OLE objects. Rich edit controls provide a programming interface for formatting text. However, an application must implement any user interface components necessary to make formatting operations available to the user.  
  
 `CRichEditView` maintains the text and formatting characteristic of text. `CRichEditDoc` maintains the list of OLE client items which are in the view. `CRichEditCntrItem` provides container-side access to the OLE client item.  
  
 This Windows Common control (and therefore the [CRichEditCtrl](../VS_visualcpp/CRichEditCtrl-Class.md) and related classes) is available only to programs running under Windows 95/98 and Windows NT versions 3.51 and later.  
  
 For an example of using rich edit container items in an MFC application, see the [WORDPAD](../VS_visualcpp/Visual-C---Samples.md) sample application.  
  
## Inheritance Hierarchy  
 [CObject](../VS_visualcpp/CObject-Class.md)  
  
 [CCmdTarget](../VS_visualcpp/CCmdTarget-Class.md)  
  
 [CDocItem](../VS_visualcpp/CDocItem-Class.md)  
  
 [COleClientItem](../VS_visualcpp/COleClientItem-Class.md)  
  
 `CRichEditCntrItem`  
  
## Requirements  
 **Header:** afxrich.h  
  
##  <a name="cricheditcntritem__cricheditcntritem"></a>  CRichEditCntrItem::CRichEditCntrItem  
 Call this function to create a `CRichEditCntrItem` object and add it to the container document.  
  
```  
CRichEditCntrItem(  
    REOBJECT* preo = NULL,  
    CRichEditDoc* pContainer = NULL  );  
```  
  
### Parameters  
 *preo*  
 Pointer to an                                 [REOBJECT](http://msdn.microsoft.com/library/windows/desktop/bb787946) structure which describes an OLE item. The new `CRichEditCntrItem` object is constructed around this OLE item. If                                 *preo* is **NULL**, the client item is empty.  
  
 `pContainer`  
 Pointer to the container document that will contain this item. If `pContainer` is **NULL**, you must explicitly call [COleDocument::AddItem](../VS_visualcpp/COleDocument-Class.md#coledocument__additem) to add this client item to a document.  
  
### Remarks  
 This function does not perform any OLE initialization.  
  
 For more information, see the                         [REOBJECT](http://msdn.microsoft.com/library/windows/desktop/bb787946) structure in the Windows SDK.  
  
##  <a name="cricheditcntritem__synctoricheditobject"></a>  CRichEditCntrItem::SyncToRichEditObject  
 Call this function to synchronize the device aspect,                 [DVASPECT](http://msdn.microsoft.com/library/windows/desktop/ms690318), of this **CRichEditCntrltem** to that specified by                 *reo*.  
  
```  
void SyncToRichEditObject( REOBJECT& reo );  
```  
  
### Parameters  
 *reo*  
 Reference to an                                 [REOBJECT](http://msdn.microsoft.com/library/windows/desktop/bb787946) structure which describes an OLE item.  
  
### Remarks  
 For more information, see                         [DVASPECT](http://msdn.microsoft.com/library/windows/desktop/ms690318) in the Windows SDK.  
  
## See Also  
 [MFC Sample WORDPAD](../VS_visualcpp/Visual-C---Samples.md)   
 [COleClientItem Class](../VS_visualcpp/COleClientItem-Class.md)   
 [Hierarchy Chart](../VS_visualcpp/Hierarchy-Chart.md)   
 [CRichEditDoc Class](../VS_visualcpp/CRichEditDoc-Class.md)   
 [CRichEditView Class](../VS_visualcpp/CRichEditView-Class.md)