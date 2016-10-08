---
title: "How to: Use the Windows 10 SDK in a Windows Desktop Application"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: get-started-article
ms.assetid: eed6421e-9355-44a6-9582-3f1d453a6d44
caps.latest.revision: 4
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# How to: Use the Windows 10 SDK in a Windows Desktop Application
When you create a classic Windows desktop project in Visual Studio 2015, it is set up by default to build with the Windows 8.1 SDK. This version of the Windows SDK is compatible with all recent Windows releases, including Windows 10, but it does not contain the newest Windows 10 APIs and CRT functions which are in the Windows 10 SDK. If you want to use the new APIs, you can retarget your project to reference the Windows 10 SDK.  
  
 Starting with Visual Studio 2015 and the Windows 10 SDK, the CRT library was separated into two parts, one (ucrtbase) that contains the functions that are acceptable to be used in Universal Windows Apps, and one that contains everything else (vcruntime140). Since the Windows 10 SDK contains new functions, such as many C99 functions, you need to follow these steps in order to use those functions. See [CRT Library Features](../VS_visualcpp/CRT-Library-Features.md).  
  
### To target the Windows 10 SDK  
  
1.  Make sure the Windows 10 SDK is installed. The Windows 10 SDK is installed as part of the [Tools for Windows 10](http://go.microsoft.com/fwlink/?LinkID=617631).  
  
2.  Open the shortcut menu for the project node, and choose **Retarget SDK Version**.  
  
     ![Retarget SDK Version](../VS_visualcpp/media/RetargetingWindowsSDK1.PNG "RetargetingWindowsSDK1")  
  
     The **Review Solution Actions** dialog appears.  
  
     ![Review Solution Actions](../VS_visualcpp/media/RetargetingWindowsSDK2.PNG "RetargetingWindowsSDK2")  
  
3.  In the **Target Platform Version** dropdown list, choose the version of the Windows 10 SDK you want to target, or choose 8.1 if you don't want to make any changes. Choose the OK button to apply the change.  
  
     Note that 8.1 in this context refers to the Windows SDK version, which is also backwardly compatible with Windows 8, Windows Server 2012, Windows 7, Windows Server 2008, and Windows Vista.  
  
     If this step is successful, the following text appears in the Output window:  
  
     `Retargeting End: 1 completed, 0 failed, 0 skipped`  
  
4.  Open the project properties, and in the **Configuration Properties, General** section, notice the values of **Windows Target Platform Version**. Changing the value here has the same effect as following this procedure. See [General Property Page (Project)](../VS_visualcpp/General-Property-Page--Project-.md).  
  
     ![Target Platform Version](../VS_visualcpp/media/RetargetingWindowsSDK3.PNG "RetargetingWindowsSDK3")  
  
     This action changes the values of project macros that include paths to header files and library files. To see what changed, in the Visual C++ Directories section of the Project Properties dialog, choose one of the properties such as the Include Directories, choose to open the dropdown list, and choose <Edit\>. The **Include Directories** dialog appears.  
  
     ![Include Directories dialog box](../VS_visualcpp/media/RetargetingWindowsSDK4.PNG "RetargetingWindowsSDK4")  
  
     Choose the **Macros >>** button, and scroll down the list of macros to the Windows SDK macros to see all the new values.  
  
     ![Windows SDK Macros](../VS_visualcpp/media/RetargetingWindowsSDK5.PNG "RetargetingWindowsSDK5")  
  
5.  Repeat for other projects, as needed, and rebuild the solution.  
  
### To target the Windows 8.1 SDK  
  
1.  Open the shortcut menu for the project node, and choose **Retarget SDK Version**.  
  
2.  In the Target Platform Version dropdown list, choose 8.1.  
  
## See Also  
 [Windows Desktop Applications (Visual C++)](../VS_visualcpp/How-to--Use-the-Windows-10-SDK-in-a-Windows-Desktop-Application.md)