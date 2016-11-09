---
title: "The following components could not be browsed:"
ms.custom: ""
ms.date: "10/19/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VS_E_CANNOTBROWSECOM"
  - "VS.Message.0x00006A6D"
  - "VS_E_LOADTYPELIBFAILED"
  - "VS_E_INVALIDCOMCOMPONENT"
  - "VS_E_UNRECOGNIZEDCOMPONENT"
  - "VS.Message.0x00006A6E"
  - "VS.Message.ObjectBrowserErrors"
  - "vs.Message.0x00005AC3"
  - "VS.Message.0x00005AC4"
  - "VS.Message.0x00005AC5"
  - "VS_E_REGFAILEDCOMCOMPONENT"
ms.assetid: 83b03767-eecb-47a4-8029-166308c7dded
caps.latest.revision: 8
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
# The following components could not be browsed:
This message box can list multiple errors related to the Object Browser and Component Selection dialog box. The following errors are some of the most common.  
  
## Component or file type cannot be viewed in the Object Browser.  
 This error generally occurs when you specify a file name that does not exist or is not valid, or a file that cannot be browsed through the Object Browser.  
  
#### To correct this error  
  
-   Verify that the file name you specified exists and is a browsable component, such as a .NET assembly, COM type library, or a source browser file.  
  
## File is not a valid .NET Framework or COM component.  
 This error generally occurs when the component specified is not a .NET Framework assembly or a COM type library.  
  
#### To correct this error  
  
-   Choose a different component to browse.  
  
## File cannot be registered as a COM component.  
 This error generally occurs when the type library for a COM component cannot be registered. The type library might not exist or might be corrupted.  
  
#### To correct this error  
  
-   Reinstall the component and try again.  
  
## No matching type library is registered or the registered information is not valid.  
 The type library you have specified may no longer exist or may not contain valid information.  
  
#### To correct this error  
  
-   Verify that the type library exists and is correctly registered.  
  
## Components required to browse COM type libraries are missing or not registered correctly.  
 The file vstlbinf.dll is missing or incorrectly registered.  
  
#### To correct this issue  
  
1.  Find vstlbinf.dll on your machine and register it using regsvr32.exe.  
  
     —or—  
  
2.  If you cannot find vstlbinf.dll on your machine, reinstall this product.  
  
## See Also  
 [Object Browser](http://msdn.microsoft.com/en-us/f89acfc5-1152-413d-9f56-3dc16e3f0470)   
 [Edit Custom Component Set Dialog Box](http://msdn.microsoft.com/en-us/dc995bd7-afbf-4389-ba1c-f377b677ded7)