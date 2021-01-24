---
description: "Learn more about: Creating Document Frame Windows"
title: "Creating Document Frame Windows"
ms.date: "11/04/2016"
helpviewer_keywords: ["frame windows [MFC], creating", "document templates [MFC], and document frame windows", "windows [MFC], creating", "runtime, class information", "run-time class [MFC], and document frame window creation", "document frame windows [MFC], creating", "MFC, frame windows"]
ms.assetid: 8671e239-b76f-4dea-afa8-7024e6e58ff5
---
# Creating Document Frame Windows

[Document/View Creation](document-view-creation.md) shows how the [CDocTemplate](reference/cdoctemplate-class.md) object orchestrates creating the frame window, document, and view and connecting them all together. Three [CRuntimeClass](reference/cruntimeclass-structure.md) arguments to the `CDocTemplate` constructor specify the frame window, document, and view classes that the document template creates dynamically in response to user commands such as the New command on the File menu or the New Window command on an MDI Window menu. The document template stores this information for later use when it creates a frame window for a view and document.

For the [RUNTIME_CLASS](reference/run-time-object-model-services.md#runtime_class) mechanism to work correctly, your derived frame-window classes must be declared with the [DECLARE_DYNCREATE](reference/run-time-object-model-services.md#declare_dyncreate) macro. This is because the framework needs to create document frame windows using the dynamic construction mechanism of class `CObject`.

When the user chooses a command that creates a document, the framework calls upon the document template to create the document object, its view, and the frame window that will display the view. When it creates the document frame window, the document template creates an object of the appropriate class — a class derived from [CFrameWnd](reference/cframewnd-class.md) for an SDI application or from [CMDIChildWnd](reference/cmdichildwnd-class.md) for an MDI application. The framework then calls the frame-window object's [LoadFrame](reference/cframewnd-class.md#loadframe) member function to get creation information from resources and to create the Windows window. The framework attaches the window handle to the frame-window object. Then it creates the view as a child window of the document frame window.

Use caution in deciding [when to initialize](when-to-initialize-cwnd-objects.md) your `CWnd`-derived object.

## What do you want to know more about

- [Deriving a Class from CObject (its dynamic creation mechanism)](deriving-a-class-from-cobject.md)

- [Document/View Creation (templates and frame window creation)](document-view-creation.md)

- [Destroying frame windows](destroying-frame-windows.md)

## See also

[Using Frame Windows](using-frame-windows.md)
