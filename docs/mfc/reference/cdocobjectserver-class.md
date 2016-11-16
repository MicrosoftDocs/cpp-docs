---
title: "CDocObjectServer Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CDocObjectServer"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "document object server"
  - "CDocObjectServer class"
  - "servers [C++], ActiveX documents"
  - "docobject server"
  - "servers [C++], doc objects"
  - "ActiveX documents [C++], document server"
ms.assetid: 18cd0dff-0616-4472-b8d9-66c081bc383a
caps.latest.revision: 23
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
# CDocObjectServer Class
Implements the additional OLE interfaces needed to make a normal `COleDocument` server into a full DocObject server: `IOleDocument`, `IOleDocumentView`, `IOleCommandTarget`, and `IPrint`.  
  
## Syntax  
  
```  
class CDocObjectServer : public CCmdTarget  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CDocObjectServer::CDocObjectServer](#cdocobjectserver__cdocobjectserver)|Constructs a `CDocObjectServer` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CDocObjectServer::ActivateDocObject](#cdocobjectserver__activatedocobject)|Activates the document object server, but does not show it.|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CDocObjectServer::OnActivateView](#cdocobjectserver__onactivateview)|Displays the DocObject view.|  
|[CDocObjectServer::OnApplyViewState](#cdocobjectserver__onapplyviewstate)|Restores the state of the DocObject view.|  
|[CDocObjectServer::OnSaveViewState](#cdocobjectserver__onsaveviewstate)|Saves the state of the DocObject view.|  
  
## Remarks  
 `CDocObjectServer` is derived from `CCmdTarget` and works closely with `COleServerDoc` to expose the interfaces.  
  
 A DocObject server document can contain [CDocObjectServerItem](../../mfc/reference/cdocobjectserveritem-class.md) objects, which represent the server interface to DocObject items.  
  
 To customize your DocObject server, derive your own class from `CDocObjectServer` and override its view setup functions, [OnActivateView](#cdocobjectserver__onactivateview), [OnApplyViewState](#cdocobjectserver__onapplyviewstate), and [OnSaveViewState](#cdocobjectserver__onsaveviewstate). You will need to provide a new instance of your class in response to framework calls.  
  
 For further information on DocObjects, see [CDocObjectServerItem](../../mfc/reference/cdocobjectserveritem-class.md) and [COleCmdUI](../../mfc/reference/colecmdui-class.md) in the *MFC Reference*. Also see [Internet First Steps: Active Documents](../../mfc/active-documents-on-the-internet.md) and [Active Documents](../../mfc/active-documents-on-the-internet.md).  
  
 Also see the following Knowledge Base article:  
  
-   Q247382 : PRB: ToolTips for Controls in ActiveX Document Server Are Hidden by the ActiveX Document Container  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 `CDocObjectServer`  
  
## Requirements  
 **Header:** afxdocob.h  
  
##  <a name="cdocobjectserver__activatedocobject"></a>  CDocObjectServer::ActivateDocObject  
 Call this function to activate (but not show) the document object server.  
  
```  
void ActivateDocObject();
```  
  
### Remarks  
 `ActivateDocObject` calls `IOleDocumentSite`'s **ActivateMe** method, but does not show the view because it waits for specific instructions on how to set up and display the view, given in the call to [CDocObjectServer::OnActivateView](#cdocobjectserver__onactivateview).  
  
 Together, `ActivateDocObject` and `OnActivateView` activate and display the DocObject view. DocObject activation differs from other kinds of OLE in-place activation. DocObject activation bypasses displaying in-place hatch borders and object adornments (such as sizing handles), ignores object extent functions, and draws scroll bars within the view rectangle as opposed to drawing them outside that rectangle (as in normal in-place activation).  
  
##  <a name="cdocobjectserver__cdocobjectserver"></a>  CDocObjectServer::CDocObjectServer  
 Constructs and initializes a `CDocObjectServer` object.  
  
```  
explicit CDocObjectServer(
    COleServerDoc* pOwner,  
    LPOLEDOCUMENTSITE pDocSite = NULL);
```  
  
### Parameters  
 *pOwner*  
 A pointer to the client site document that is the client for the DocObject server.  
  
 `pDocSite`  
 A pointer to the `IOleDocumentSite` interface implemented by the container.  
  
### Remarks  
 When a DocObject is active, the client site OLE interface ( `IOleDocumentSite`) is what allows the DocObject server to communicate with its client (the container). When a DocObject server is activated, it first checks that the container implements the `IOleDocumentSite` interface. If so, [COleServerDoc::GetDocObjectServer](../../mfc/reference/coleserverdoc-class.md#coleserverdoc__getdocobjectserver) is called to see if the container supports DocObjects. By default, `GetDocObjectServer` returns **NULL**. You must override `COleServerDoc::GetDocObjectServer` to construct a new `CDocObjectServer` object or a derived object of your own, with pointers to the `COleServerDoc` container and its `IOleDocumentSite` interface as arguments to the constructor.  
  
##  <a name="cdocobjectserver__onactivateview"></a>  CDocObjectServer::OnActivateView  
 Call this function to display the DocObject view.  
  
```  
virtual HRESULT OnActivateView();
```  
  
### Return Value  
 Returns an error or warning value. By default, returns **NOERROR** if successful; otherwise, **E_FAIL**.  
  
### Remarks  
 This function creates an in-place frame window, draws scrollbars within the view, sets up the menus the server shares with its container, adds frame controls, sets the active object, then finally shows the in-place frame window and sets the focus.  
  
##  <a name="cdocobjectserver__onapplyviewstate"></a>  CDocObjectServer::OnApplyViewState  
 Override this function to restore the state of the DocObject view.  
  
```  
virtual void OnApplyViewState(CArchive& ar);
```  
  
### Parameters  
 `ar`  
 A `CArchive` object from which to serialize the view state.  
  
### Remarks  
 This function is called when the view is being displayed for the first time after its instantiation. `OnApplyViewState` instructs a view to reinitialize itself according to the data in the `CArchive` object previously saved with [OnSaveViewState](#cdocobjectserver__onsaveviewstate). The view must validate the data in the `CArchive` object because the container does not attempt to interpret the view state data in any way.  
  
 You can use `OnSaveViewState` to store persistent information specific to your view's state. If you override `OnSaveViewState` to store information, you will want to override `OnApplyViewState` to read that information and apply it to your view when it is newly activated.  
  
##  <a name="cdocobjectserver__onsaveviewstate"></a>  CDocObjectServer::OnSaveViewState  
 Override this function to save extra state information about your DocObject view.  
  
```  
virtual void OnSaveViewState(CArchive& ar);
```  
  
### Parameters  
 `ar`  
 A `CArchive` object to which the view state is serialized.  
  
### Remarks  
 Your state might include properties like the view type, zoom factor, insertion and selection point, and so on. The container typically calls this function before deactivating the view. The saved state can later be restored through [OnApplyViewState](#cdocobjectserver__onapplyviewstate).  
  
 You can use `OnSaveViewState` to store persistent information specific to your view's state. If you override `OnSaveViewState` to store information, you will want to override `OnApplyViewState` to read that information and apply it to your view when it is newly activated.  
  
## See Also  
 [CCmdTarget Class](../../mfc/reference/ccmdtarget-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [CDocObjectServerItem Class](../../mfc/reference/cdocobjectserveritem-class.md)
