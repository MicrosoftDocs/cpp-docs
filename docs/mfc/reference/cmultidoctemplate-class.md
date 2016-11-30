---
title: "CMultiDocTemplate Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMultiDocTemplate"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MDI, template"
  - "CMultiDocTemplate class"
ms.assetid: 5b8aa328-e461-41d0-b388-00594535e119
caps.latest.revision: 21
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
# CMultiDocTemplate Class
Defines a document template that implements the multiple document interface (MDI).  
  
## Syntax  
  
```  
class CMultiDocTemplate : public CDocTemplate  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CMultiDocTemplate::CMultiDocTemplate](#cmultidoctemplate__cmultidoctemplate)|Constructs a `CMultiDocTemplate` object.|  
  
## Remarks  
 An MDI application uses the main frame window as a workspace in which the user can open zero or more document frame windows, each of which displays a document. For a more detailed description of the MDI, see *Windows Interface Guidelines for Software Design*.  
  
 A document template defines the relationships among three types of classes:  
  
-   A document class, which you derive from [CDocument](../../mfc/reference/cdocument-class.md).  
  
-   A view class, which displays data from the document class listed above. You can derive this class from [CView](../../mfc/reference/cview-class.md), `CScrollView`, `CFormView`, or `CEditView`. (You can also use `CEditView` directly.)  
  
-   A frame window class, which contains the view. For an MDI document template, you can derive this class from `CMDIChildWnd`, or, if you don't need to customize the behavior of the document frame windows, you can use [CMDIChildWnd](../../mfc/reference/cmdichildwnd-class.md) directly without deriving your own class.  
  
 An MDI application can support more than one type of document, and documents of different types can be open at the same time. Your application has one document template for each document type that it supports. For example, if your MDI application supports both spreadsheets and text documents, the application has two `CMultiDocTemplate` objects.  
  
 The application uses the document template(s) when the user creates a new document. If the application supports more than one type of document, then the framework gets the names of the supported document types from the document templates and displays them in a list in the File New dialog box. Once the user has selected a document type, the application creates a document class object, a frame window object, and a view object and attaches them to each other.  
  
 You do not need to call any member functions of `CMultiDocTemplate` except the constructor. The framework handles `CMultiDocTemplate` objects internally.  
  
 For more information on `CMultiDocTemplate`, see [Document Templates and the Document/View Creation Process](../../mfc/document-templates-and-the-document-view-creation-process.md).  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CDocTemplate](../../mfc/reference/cdoctemplate-class.md)  
  
 `CMultiDocTemplate`  
  
## Requirements  
 **Header:** afxwin.h  
  
##  <a name="cmultidoctemplate__cmultidoctemplate"></a>  CMultiDocTemplate::CMultiDocTemplate  
 Constructs a `CMultiDocTemplate` object.  
  
```  
CMultiDocTemplate(
    UINT nIDResource,  
    CRuntimeClass* pDocClass,  
    CRuntimeClass* pFrameClass,  
    CRuntimeClass* pViewClass);
```  
  
### Parameters  
 `nIDResource`  
 Specifies the ID of the resources used with the document type. This may include menu, icon, accelerator table, and string resources.  
  
 The string resource consists of up to seven substrings separated by the '\n' character (the '\n' character is needed as a place holder if a substring is not included; however, trailing '\n' characters are not necessary); these substrings describe the document type. For information on the substrings, see [CDocTemplate::GetDocString](../../mfc/reference/cdoctemplate-class.md#cdoctemplate__getdocstring). This string resource is found in the application's resource file. For example:  
  
 `// MYCALC.RC`  
  
 `STRINGTABLE PRELOAD DISCARDABLE`  
  
 `BEGIN`  
  
 `IDR_SHEETTYPE "\nSheet\nWorksheet\nWorksheets (*.myc)\n.myc\n MyCalcSheet\nMyCalc Worksheet"`  
  
 `END`  
  
 Note that the string begins with a '\n' character; this is because the first substring is not used for MDI applications and so is not included. You can edit this string using the string editor; the entire string appears as a single entry in the String Editor, not as seven separate entries.  
  
 For more information about these resource types, see [Resource Editors](../../mfc/resource-editors.md).  
  
 `pDocClass`  
 Points to the `CRuntimeClass` object of the document class. This class is a **CDocument**-derived class you define to represent your documents.  
  
 `pFrameClass`  
 Points to the `CRuntimeClass` object of the frame-window class. This class can be a `CMDIChildWnd`-derived class, or it can be `CMDIChildWnd` itself if you want default behavior for your document frame windows.  
  
 `pViewClass`  
 Points to the `CRuntimeClass` object of the view class. This class is a `CView`-derived class you define to display your documents.  
  
### Remarks  
 Dynamically allocate one `CMultiDocTemplate` object for each document type that your application supports and pass each one to `CWinApp::AddDocTemplate` from the `InitInstance` member function of your application class.  
  
### Example  
 [!code-cpp[NVC_MFCDocView#92](../../mfc/codesnippet/cpp/cmultidoctemplate-class_1.cpp)]  
  
 Here is a second example.  
  
 [!code-cpp[NVC_MFCDocView#93](../../mfc/codesnippet/cpp/cmultidoctemplate-class_2.cpp)]  
  
## See Also  
 [CDocTemplate Class](../../mfc/reference/cdoctemplate-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [CDocTemplate Class](../../mfc/reference/cdoctemplate-class.md)   
 [CSingleDocTemplate Class](../../mfc/reference/csingledoctemplate-class.md)   
 [CWinApp Class](../../mfc/reference/cwinapp-class.md)
