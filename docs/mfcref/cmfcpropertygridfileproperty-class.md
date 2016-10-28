---
title: "CMFCPropertyGridFileProperty Class"
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
  - "CMFCPropertyGridFileProperty"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCPropertyGridFileProperty class"
  - "CMFCPropertyGridFileProperty::OnClickButton method"
ms.assetid: 2bb8b8b4-47fc-4798-bd5e-dc8ea0b4cd9d
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
# CMFCPropertyGridFileProperty Class
The `CMFCPropertyGridFileProperty` class supports a property list control item that opens a file selection dialog box.  
  
## Syntax  
  
```  
class CMFCPropertyGridFileProperty : public CMFCPropertyGridProperty  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCPropertyGridFileProperty::CMFCPropertyGridFileProperty](#cmfcpropertygridfileproperty__cmfcpropertygridfileproperty)|Constructs a `CMFCPropertyGridFileProperty` object.|  
|`CMFCPropertyGridFileProperty::~CMFCPropertyGridFileProperty`|Destructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|`CMFCPropertyGridFileProperty::GetThisClass`|Used by the framework to obtain a pointer to the [CRuntimeClass](../mfcref/cruntimeclass-structure.md) object that is associated with this class type.|  
|`CMFCPropertyGridFileProperty::OnClickButton`|(Overrides [CMFCPropertyGridProperty::OnClickButton](../mfcref/cmfcpropertygridproperty-class.md#cmfcpropertygridproperty__onclickbutton).)|  
  
### Remarks  
  
## Inheritance Hierarchy  
 [CObject](../mfcref/cobject-class.md)  
  
 [CMFCPropertyGridProperty](../mfcref/cmfcpropertygridproperty-class.md)  
  
 [CMFCPropertyGridFileProperty](../mfcref/cmfcpropertygridfileproperty-class.md)  
  
## Requirements  
 **Header:** afxpropertygridctrl.h  
  
##  <a name="cmfcpropertygridfileproperty__cmfcpropertygridfileproperty"></a>  CMFCPropertyGridFileProperty::CMFCPropertyGridFileProperty  
 Constructs a `CMFCPropertyGridFileProperty` object.  
  
```  
CMFCPropertyGridFileProperty(  
    const CString& strName,  
    BOOL bOpenFileDialog,  
    const CString& strFileName,  
    LPCTSTR lpszDefExt=NULL,  
    DWORD dwFlags=OFN_HIDEREADONLY|OFN_OVERWRITEPROMPT,  
    LPCTSTR lpszFilter=NULL,  
    LPCTSTR lpszDescr=NULL,  
    DWORD_PTR dwData=0 );  
```  
  
### Parameters  
 [in] `strName`  
 The property name.  
  
 [in] `bOpenFileDialog`  
 `TRUE` to open an **Open File** dialog box; `FALSE` to open a **Save File** dialog box.  
  
 [in] `strFileName`  
 The initial file name.  
  
 [in] `lpszDefExt`  
 A string of one or more file name extensions. The default value is `NULL`.  
  
 [in] `dwFlags`  
 Dialog box flags. The default value is a bitwise combination (OR) of `OFN_HIDEREADONLY` and `OFN_OVERWRITEPROMPT`.  
  
 [in] `lpszFilter`  
 A string of one or more file filters. The default value is `NULL`.  
  
 [in] `lpszDescr`  
 The property item description. The default value is `NULL`.  
  
 [in] `dwData`  
 Application-specific data that is associated with the property item. For example, a 32-bit integer or a pointer to other data. The default value is 0.  
  
### Return Value  
  
### Remarks  
 For a full list of available flags, see                         [OPENFILENAME structure](https://msdn.microsoft.com/library/ms646839.aspx).  
  
### Example  
 The following example demonstrates how to create an object using the constructor of the `CMFCPropertyGridFileProperty` class. This example is part of the [Visual Studio Demo sample](../top/visual-c---samples.md).  
  
 [!code[NVC_MFC_VisualStudioDemo#22](../mfc/codesnippet/CPP/cmfcpropertygridfileproperty-class_1.cpp)]  
  
## See Also  
 [Hierarchy Chart](../mfc/hierarchy-chart.md)   
 [Classes](../mfcref/mfc-classes.md)   
 [CMFCPropertyGridCtrl Class](../mfcref/cmfcpropertygridctrl-class.md)   
 [CMFCPropertyGridProperty Class](../mfcref/cmfcpropertygridproperty-class.md)