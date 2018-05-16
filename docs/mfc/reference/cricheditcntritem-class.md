---
title: "CRichEditCntrItem Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "reference"
f1_keywords: ["CRichEditCntrItem", "AFXRICH/CRichEditCntrItem", "AFXRICH/CRichEditCntrItem::CRichEditCntrItem", "AFXRICH/CRichEditCntrItem::SyncToRichEditObject"]
dev_langs: ["C++"]
helpviewer_keywords: ["CRichEditCntrItem [MFC], CRichEditCntrItem", "CRichEditCntrItem [MFC], SyncToRichEditObject"]
ms.assetid: 6c0b4efe-0fb8-4621-b5e1-fdcb8ec48c3b
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# CRichEditCntrItem Class
With [CRichEditView](../../mfc/reference/cricheditview-class.md) and [CRichEditDoc](../../mfc/reference/cricheditdoc-class.md), provides the functionality of the rich edit control within the context of MFC's document view architecture.  
  
## Syntax  
  
```  
class CRichEditCntrItem : public COleClientItem  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CRichEditCntrItem::CRichEditCntrItem](#cricheditcntritem)|Constructs a `CRichEditCntrItem` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CRichEditCntrItem::SyncToRichEditObject](#synctoricheditobject)|Activates the item as another type.|  
  
## Remarks  
 A "rich edit control" is a window in which the user can enter and edit text. The text can be assigned character and paragraph formatting, and can include embedded OLE objects. Rich edit controls provide a programming interface for formatting text. However, an application must implement any user interface components necessary to make formatting operations available to the user.  
  
 `CRichEditView` maintains the text and formatting characteristic of text. `CRichEditDoc` maintains the list of OLE client items which are in the view. `CRichEditCntrItem` provides container-side access to the OLE client item.  
  
 This Windows Common control (and therefore the [CRichEditCtrl](../../mfc/reference/cricheditctrl-class.md) and related classes) is available only to programs running under Windows 95/98 and Windows NT versions 3.51 and later.  
  
 For an example of using rich edit container items in an MFC application, see the [WORDPAD](../../visual-cpp-samples.md) sample application.  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CDocItem](../../mfc/reference/cdocitem-class.md)  
  
 [COleClientItem](../../mfc/reference/coleclientitem-class.md)  
  
 `CRichEditCntrItem`  
  
## Requirements  
 **Header:** afxrich.h  
  
##  <a name="cricheditcntritem"></a>  CRichEditCntrItem::CRichEditCntrItem  
 Call this function to create a `CRichEditCntrItem` object and add it to the container document.  
  
```  
CRichEditCntrItem(
    REOBJECT* preo = NULL,  
    CRichEditDoc* pContainer = NULL);
```  
  
### Parameters  
 *preo*  
 Pointer to an [REOBJECT](http://msdn.microsoft.com/library/windows/desktop/bb787946) structure which describes an OLE item. The new `CRichEditCntrItem` object is constructed around this OLE item. If *preo* is **NULL**, the client item is empty.  
  
 `pContainer`  
 Pointer to the container document that will contain this item. If `pContainer` is **NULL**, you must explicitly call [COleDocument::AddItem](../../mfc/reference/coledocument-class.md#additem) to add this client item to a document.  
  
### Remarks  
 This function does not perform any OLE initialization.  
  
 For more information, see the [REOBJECT](http://msdn.microsoft.com/library/windows/desktop/bb787946) structure in the Windows SDK.  
  
##  <a name="synctoricheditobject"></a>  CRichEditCntrItem::SyncToRichEditObject  
 Call this function to synchronize the device aspect, [DVASPECT](http://msdn.microsoft.com/library/windows/desktop/ms690318), of this **CRichEditCntrltem** to that specified by *reo*.  
  
```  
void SyncToRichEditObject(REOBJECT& reo);
```  
  
### Parameters  
 *reo*  
 Reference to an [REOBJECT](http://msdn.microsoft.com/library/windows/desktop/bb787946) structure which describes an OLE item.  
  
### Remarks  
 For more information, see [DVASPECT](http://msdn.microsoft.com/library/windows/desktop/ms690318) in the Windows SDK.  
  
## See Also  
 [MFC Sample WORDPAD](../../visual-cpp-samples.md)   
 [COleClientItem Class](../../mfc/reference/coleclientitem-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [CRichEditDoc Class](../../mfc/reference/cricheditdoc-class.md)   
 [CRichEditView Class](../../mfc/reference/cricheditview-class.md)
