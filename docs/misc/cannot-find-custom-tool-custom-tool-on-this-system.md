---
title: "Cannot find custom tool &#39;custom tool&#39; on this system | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vs.tasklisterror.cannot_instantiate_generator1"
ms.assetid: 51fe9bec-b8bc-4a4c-94aa-15a1f7cc8b6b
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
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
# Cannot find custom tool &#39;custom tool&#39; on this system
The custom tool cannot be created by the project system. The requested custom tool will not be run because the project system has no way to instantiate it. Ensure that the custom tool is properly installed and registered.  
  
 This error may have been caused by specifying an invalid custom tool name for the `CustomTool` property for a particular file. It is also possible that the project file (.vbproj/.csproj) was edited, making the value for the `CustomTool` property invalid. Or you may be using a project developed on another computer, which has the custom tool, but the custom tool is not installed on your computer. For more information about the `CustomTool` property, see [File Properties](http://msdn.microsoft.com/en-us/013c4aed-08d6-4dce-a124-ca807ca08959).  
  
 This error could also occur if [CComPtrBase::CoCreateInstance](../Topic/CComPtrBase::CoCreateInstance.md) fails for the custom tool. For example, it may not be registered or a required DLL may be missing.  
  
## See Also  
 [CComPtrBase::CoCreateInstance](../Topic/CComPtrBase::CoCreateInstance.md)