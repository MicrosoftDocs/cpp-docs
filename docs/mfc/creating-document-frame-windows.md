---
title: "Creating Document Frame Windows | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "frame windows [C++], creating"
  - "document templates, and document frame windows"
  - "windows [C++], creating"
  - "runtime, class information"
  - "run-time class, and document frame window creation"
  - "document frame windows, creating"
  - "MFC [C++], frame windows"
ms.assetid: 8671e239-b76f-4dea-afa8-7024e6e58ff5
caps.latest.revision: 9
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
# Creating Document Frame Windows
[Document/View Creation](../mfc/document-view-creation.md) shows how the [CDocTemplate](../mfc/reference/cdoctemplate-class.md) object orchestrates creating the frame window, document, and view and connecting them all together. Three [CRuntimeClass](../mfc/reference/cruntimeclass-structure.md) arguments to the `CDocTemplate` constructor specify the frame window, document, and view classes that the document template creates dynamically in response to user commands such as the New command on the File menu or the New Window command on an MDI Window menu. The document template stores this information for later use when it creates a frame window for a view and document.  
  
 For the [RUNTIME_CLASS](../mfc/reference/run-time-object-model-services.md#runtime_class) mechanism to work correctly, your derived frame-window classes must be declared with the [DECLARE_DYNCREATE](../mfc/reference/run-time-object-model-services.md#declare_dyncreate) macro. This is because the framework needs to create document frame windows using the dynamic construction mechanism of class `CObject`.  
  
 When the user chooses a command that creates a document, the framework calls upon the document template to create the document object, its view, and the frame window that will display the view. When it creates the document frame window, the document template creates an object of the appropriate class — a class derived from [CFrameWnd](../mfc/reference/cframewnd-class.md) for an SDI application or from [CMDIChildWnd](../mfc/reference/cmdichildwnd-class.md) for an MDI application. The framework then calls the frame-window object's [LoadFrame](../mfc/reference/cframewnd-class.md#cframewnd__loadframe) member function to get creation information from resources and to create the Windows window. The framework attaches the window handle to the frame-window object. Then it creates the view as a child window of the document frame window.  
  
 Use caution in deciding [when to initialize](../mfc/when-to-initialize-cwnd-objects.md) your `CWnd`-derived object.  
  
## What do you want to know more about  
  
-   [Deriving a Class from CObject (its dynamic creation mechanism)](../mfc/deriving-a-class-from-cobject.md)  
  
-   [Document/View Creation (templates and frame window creation)](../mfc/document-view-creation.md)  
  
-   [Destroying frame windows](../mfc/destroying-frame-windows.md)  
  
## See Also  
 [Using Frame Windows](../mfc/using-frame-windows.md)

