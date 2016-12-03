---
title: "COleLinkingDoc Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "COleLinkingDoc"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "OLE containers, client items"
  - "COleLinkingDoc class"
ms.assetid: 9f547f35-2f95-427f-b9c0-85c31940198b
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
# COleLinkingDoc Class
The base class for OLE container documents that support linking to the embedded items they contain.  
  
## Syntax  
  
```  
class COleLinkingDoc : public COleDocument  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[COleLinkingDoc::COleLinkingDoc](#colelinkingdoc__colelinkingdoc)|Constructs a `COleLinkingDoc` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[COleLinkingDoc::Register](#colelinkingdoc__register)|Registers the document with the OLE system DLLs.|  
|[COleLinkingDoc::Revoke](#colelinkingdoc__revoke)|Revokes the document's registration.|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[COleLinkingDoc::OnFindEmbeddedItem](#colelinkingdoc__onfindembeddeditem)|Finds the specified embedded item.|  
|[COleLinkingDoc::OnGetLinkedItem](#colelinkingdoc__ongetlinkeditem)|Finds the specified linked item.|  
  
## Remarks  
 A container application that supports linking to embedded items is called a "link container." The [OCLIENT](../../visual-cpp-samples.md) sample application is an example of a link container.  
  
 When a linked item's source is an embedded item in another document, that containing document must be loaded in order for the embedded item to be edited. For this reason, a link container must be able to be launched by another container application when the user wants to edit the source of a linked item. Your application must also use the [COleTemplateServer](../../mfc/reference/coletemplateserver-class.md) class so that it can create documents when launched programmatically.  
  
 To make your container a link container, derive your document class from `COleLinkingDoc` instead of [COleDocument](../../mfc/reference/coledocument-class.md). As with any other OLE container, you must design your class for storing the application's native data as well as embedded or linked items. Also, you must design data structures for storing your native data. If you define a `CDocItem`-derived class for your application's native data, you can use the interface defined by `COleDocument` to store your native data as well as your OLE data.  
  
 To allow your application to be launched programmatically by another container, declare a `COleTemplateServer` object as a member of your application's `CWinApp`-derived class:  
  
 [!code-cpp[NVC_MFCOleContainer#23](../../mfc/codesnippet/cpp/colelinkingdoc-class_1.h)]  
  
 In the `InitInstance` member function of your `CWinApp`-derived class, create a document template and specify your `COleLinkingDoc`-derived class as the document class:  
  
 [!code-cpp[NVC_MFCOleContainer#24](../../mfc/codesnippet/cpp/colelinkingdoc-class_2.cpp)]  
  
 Connect your `COleTemplateServer` object to your document templates by calling the object's `ConnectTemplate` member function, and register all class objects with the OLE system by calling **COleTemplateServer::RegisterAll**:  
  
 [!code-cpp[NVC_MFCOleContainer#25](../../mfc/codesnippet/cpp/colelinkingdoc-class_3.cpp)]  
  
 For a sample `CWinApp`-derived class definition and `InitInstance` function, see OCLIENT.H and OCLIENT.CPP in the MFC sample [OCLIENT](../../visual-cpp-samples.md).  
  
 For more information on using `COleLinkingDoc`, see the articles [Containers: Implementing a Container](../../mfc/containers-implementing-a-container.md) and [Containers: Advanced Features](../../mfc/containers-advanced-features.md).  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CDocument](../../mfc/reference/cdocument-class.md)  
  
 [COleDocument](../../mfc/reference/coledocument-class.md)  
  
 `COleLinkingDoc`  
  
## Requirements  
 **Header:** afxole.h  
  
##  <a name="colelinkingdoc__colelinkingdoc"></a>  COleLinkingDoc::COleLinkingDoc  
 Constructs a `COleLinkingDoc` object without beginning communications with the OLE system DLLs.  
  
```  
COleLinkingDoc();
```  
  
### Remarks  
 You must call the `Register` member function to inform OLE that the document is open.  
  
##  <a name="colelinkingdoc__onfindembeddeditem"></a>  COleLinkingDoc::OnFindEmbeddedItem  
 Called by the framework to determine whether the document contains an embedded OLE item with the specified name.  
  
```  
virtual COleClientItem* OnFindEmbeddedItem(LPCTSTR lpszItemName);
```  
  
### Parameters  
 `lpszItemName`  
 Pointer to the name of the embedded OLE item requested.  
  
### Return Value  
 A pointer to the specified item; **NULL** if the item is not found.  
  
### Remarks  
 The default implementation searches the list of embedded items for an item with the specified name (the name comparison is case sensitive). Override this function if you have your own method of storing or naming embedded OLE items.  
  
##  <a name="colelinkingdoc__ongetlinkeditem"></a>  COleLinkingDoc::OnGetLinkedItem  
 Called by the framework to check whether the document contains a linked server item with the specified name.  
  
```  
virtual COleServerItem* OnGetLinkedItem(LPCTSTR lpszItemName);
```  
  
### Parameters  
 `lpszItemName`  
 Pointer to the name of the linked OLE item requested.  
  
### Return Value  
 A pointer to the specified item; **NULL** if the item is not found.  
  
### Remarks  
 The default `COleLinkingDoc` implementation always returns **NULL**. This function is overriden in the derived class `COleServerDoc` to search the list of OLE server items for a linked item with the specified name (the name comparison is case sensitive). Override this function if you have implemented your own method of storing or retrieving linked server items.  
  
##  <a name="colelinkingdoc__register"></a>  COleLinkingDoc::Register  
 Informs the OLE system DLLs that the document is open.  
  
```  
BOOL Register(
    COleObjectFactory* pFactory,  
    LPCTSTR lpszPathName);
```  
  
### Parameters  
 *pFactory*  
 Pointer to an OLE factory object (can be **NULL**).  
  
 `lpszPathName`  
 Pointer to the fully qualified path of the container document.  
  
### Return Value  
 Nonzero if the document is successfully registered; otherwise 0.  
  
### Remarks  
 Call this function when creating or opening a named file to register the document with the OLE system DLLs. There is no need to call this function if the document represents an embedded item.  
  
 If you are using `COleTemplateServer` in your application, `Register` is called for you by `COleLinkingDoc`'s implementation of `OnNewDocument`, `OnOpenDocument`, and `OnSaveDocument`.  
  
##  <a name="colelinkingdoc__revoke"></a>  COleLinkingDoc::Revoke  
 Informs the OLE system DLLs that the document is no longer open.  
  
```  
void Revoke();
```  
  
### Remarks  
 Call this function to revoke the document's registration with the OLE system DLLs.  
  
 You should call this function when closing a named file, but you usually do not need to call it directly. `Revoke` is called for you by `COleLinkingDoc`'s implementation of `OnCloseDocument`, `OnNewDocument`, `OnOpenDocument`, and `OnSaveDocument`.  
  
## See Also  
 [MFC Sample OCLIENT](../../visual-cpp-samples.md)   
 [COleDocument Class](../../mfc/reference/coledocument-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [CDocTemplate Class](../../mfc/reference/cdoctemplate-class.md)
