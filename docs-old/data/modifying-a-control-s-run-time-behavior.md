---
title: "Modifying a Control&#39;s Run-Time Behavior"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ActiveX controls [C++], run-time behavior"
ms.assetid: 78b44b0f-0d5a-4da0-8aa2-595f5789c634
caps.latest.revision: 10
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Modifying a Control&#39;s Run-Time Behavior
After you [insert a control](../data/inserting-the-control-into-a-visual-c---application.md) and generate one or more [wrapper classes](../data/wrapper-classes.md), you can invoke the control's methods and program the control's event handlers.  
  
 The control's [wrapper classes](../data/wrapper-classes.md) specify the functions you can use to modify the run-time behavior of the control. Include the appropriate wrapper class header file and use the methods. To set a property, look for an accessor method with the property name prefixed by Set. To retrieve a property, look for an accessor method with the property name prefixed by Get. Event handlers can be written later.  
  
 Because the controls are implemented using Automation, the types passed can only be Automation-safe types such as BSTR and VARIANT. While you can use system calls to allocate and set BSTRs and VARIANTs, you might want to use the ATL wrapper classes ([CComBSTR](../atl/ccombstr-class.md), [CComVariant](../atl/ccomvariant-class.md)), the Visual C++ COM Compiler support wrapper classes ([_bstr_t](../cpp/_bstr_t-class.md), [_variant_t](../cpp/_variant_t-class.md)), or the MFC wrapper class ([COleVariant](../mfcref/colevariant-class.md)).  
  
 If you add a data control, the Insert ActiveX Control Wizard generates wrapper classes for the data control's coclasses that manage its internal data objects. These classes do not include all of RDO or ADO, but rather represent internal objects declared in the type library.  
  
 If you want to use ADO and RDO directly, you should connect to the ADO or RDO DLLs directly (Msado15.dll or Msrdo20.dll), either with the [compiler COM support classes](../cpp/compiler-com-support-classes.md), which support the [#import directive](../c/preprocessor-directives.md), or with the respective SDK.  
  
## To Set Control Properties at Run Time  
 Note that some properties of an ActiveX control might be read-only at run time, which makes dynamic creation difficult. You can temporarily simulate design mode for property initialization by overriding the control container's [OnAmbientPropertyChange](../Topic/COleControl::OnAmbientPropertyChange.md) handler, as described in the Knowledge Base article, "How to: Set ActiveX Control Design-Time Properties at Run Time (Q260744)". You can find Knowledge Base articles at [http://support.microsoft.com/](http://support.microsoft.com/).  
  
## See Also  
 [Using ActiveX Controls](../data/using-activex-controls.md)