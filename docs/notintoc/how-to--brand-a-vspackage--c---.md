---
title: "How to: Brand a VSPackage (C++)"
ms.custom: na
ms.date: "10/13/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
helpviewer_keywords: 
  - "About dialog box"
  - "VSPackages, splash screens"
  - "VSPackages, branding"
ms.assetid: a1b9213f-8702-4716-8623-cd3705d531fa
caps.latest.revision: 10
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
# How to: Brand a VSPackage (C++)
To appear in the **Help About** dialog box and the splash screen, VSPackages must implement the \<xref:Microsoft.VisualStudio.Shell.Interop.IVsInstalledProduct> interface. Doing this provides the following information to [!INCLUDE[vsprvs](../build/includes/vsprvs_md.md)]:  
  
-   Name  
  
-   ID, such as serial or version number  
  
-   Information  
  
-   Logo icon  
  
 The `IVsInstalledProductImpl` class takes template parameters for that information. Each template parameter is an ID. The first three are IDs of string resources and the fourth is the resource ID of an icon.  
  
## Example  
 The following class declaration for the VSPackage class is from the [VSSDK Samples](../notintoc/vssdk-samples.md).  
  
```  
class ATL_NO_VTABLE BasicPackage :   
  ...  
  public IVsInstalledProductImpl<  
    IDS_BASICPACKAGE_PRODUCT_NAME,  
    IDS_BASICPACKAGE_PRODUCT_IDENTIFIER,   
    IDS_BASICPACKAGE_PRODUCT_DETAILS,   
    IDI_BASICPACKAGE_LOGO>  
```  
  
 To test your VSPackage, see [How to: Test the Help About and Splash Screens](../notintoc/how-to--test-the-help-about-and-splash-screens.md).  
  
## See Also  
 [VSPackage Branding](../notintoc/vspackage-branding.md)