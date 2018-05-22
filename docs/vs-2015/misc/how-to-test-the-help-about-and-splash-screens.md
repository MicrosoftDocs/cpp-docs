---
title: "How to: Test the Help About and Splash Screens | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "About dialog box"
  - "VSPackages, splash screens"
  - "VSPackages, branding"
ms.assetid: 2b959fa4-56d3-44f4-8c2d-9ea2e6fb269d
caps.latest.revision: 10
manager: "douge"
---
# How to: Test the Help About and Splash Screens
After you implement **Help About** and splash screen support, you can test your implementation in [!INCLUDE[vsprvs](../includes/vsprvs-md.md)].  
  
### To test the Help About dialog box  
  
1.  From the [!INCLUDE[vsprvs](../includes/vsprvs-md.md)] command prompt, run devenv.exe with the **/setup** switch. To run in the experimental environment, type:  
  
     **devenv /rootsuffix Exp /setup**  
  
     **Note** You have to repeat this step only when you change the **Help About** screen information.  
  
2.  Run [!INCLUDE[vsprvs](../includes/vsprvs-md.md)] in the same registry root as was mentioned earlier, but without the **/setup** switch:  
  
     **devenv /rootsuffix Exp**  
  
3.  On  the **Help** menu, click **About Microsoft Visual Studio**.  
  
     Your VSPackage name appears in the **Installed products** list.  
  
4.  Select your VSPackage from the list.  
  
     Your VSPackage product information appears in the **Product details** text box.  
  
### To test the splash screen  
  
1.  Run devenv.exe with the **/setup** switch. To run in the experimental environment, type:  
  
     **devenv /rootsuffix Exp /setup**  
  
     **Note** You have to repeat this step only when you change the splash screen information.  
  
2.  Run [!INCLUDE[vsprvs](../includes/vsprvs-md.md)] in the same registry root as was mentioned earlier, but with the **/splash** switch instead of the **/setup** switch.  
  
     **devenv /rootsuffix Exp /splash**  
  
     Your VSPackage product information and logo appear on the splash screen.  
  
## See Also  
 [VSPackage Branding](../misc/vspackage-branding.md)