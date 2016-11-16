---
title: "Start Page Best Practices | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "start page tips"
  - "stat page best practices"
  - "start page design"
ms.assetid: f6ce1ce0-746e-4004-a37f-6f176f6f5851
caps.latest.revision: 16
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
# Start Page Best Practices
Because the Start Page can access Visual Studio commands, and opens whenever Visual Studio loads, we recommend that you ensure the stability of any custom Start Page before you use it or distribute it. This topic suggests best practices for robust Start Page design, and includes guidelines about how to create a helpful user interface (UI).  
  
## Stability Guidelines  
  
### Resource Availability  
 The most important consideration in making a robust custom Start Page is to ensure that all required resources are available:  
  
-   All required packages are installed.  
  
-   Packages are pre-loaded.  
  
-   All required assemblies are in the \PrivateAssemblies\ folder.  
  
-   Every component that uses a network or Internet connection has alternate paths for offline scenarios and broken connections.  
  
### Performance  
 If your Start Page has large memory requirements or loads many resources, consider how startup performance may be affected. Program such Start Pages to load components on demand, or in the background if practical, so that startup time is not significantly increased.  
  
### Development Process  
 If you modify the active Start Page directly, you might inadvertently introduce errors that cause Visual Studio to crash. Because the Start Page opens every time Visual Studio opens, a crashing Start Page is difficult to fix. Therefore, we recommend that you modify copies of the Start Page files and test them in an experimental instance of Visual Studio for reliability. When the new Start Page is stable, you can set it to run in the primary instance of Visual Studio.  
  
> [!NOTE]
>  We also recommend that you test any third-party Start Page in an experimental instance of Visual Studio before you use it in the primary instance.  
  
##### To test a Start Page in an experimental instance of Visual Studio  
  
1.  If you are using the Start Page project template, press F5. Otherwise:  
  
    1.  Copy your .xaml file and any supporting text or markup to \\%USERPROFILE%\My Documents\Visual Studio *\<version>*\StartPages\\.  
  
    2.  Copy any required assemblies into *\<Visual Studio installation path>*\Common7\IDE\PrivateAssemblies\\.  
  
    3.  Open an experimental instance of Visual Studio by using the following command at a Visual Studio command prompt.  
  
         **Devenv /rootsuffix exp**  
  
2.  On the **Tools** menu, click **Options**. Select **Environment** and then select **Startup**. In the **Customize Start Page** list, select the renamed StartPage.xaml file and then click **OK**.  
  
3.  From the **View** menu, click **Start Page**.  
  
     The custom Start Page opens. If the Start Page you are modifying crashes, you can restart the primary instance of Visual Studio, make the required fixes, and then open another experimental instance so that you can continue to modify your custom Start Page.  
  
 If your Start Page crashes the primary instance of Visual Studio, you can temporarily disable custom Start Pages by setting the registry value of HKEY_CURRENT_USER\Software\Microsoft\VisualStudio\14.0\StartPage\Default\CustomizationEnabled to 0. Alternatively, you can temporarily rename the .xaml file for your current default Start Page. Either measure will let you open Visual Studio long enough to fix the error.  
  
### Debugging  
 The Start Page tool window catches exceptions when a Start Page is first loaded, but does not catch exceptions after that. You can tell Visual Studio to display all unhandled exceptions by setting the following registry value to "1".  
  
 HKEY_CURRENT_USER\Software\Microsoft\VisualStudio\14.0\General\EnableUnhandledExceptionDisplay  
  
 The exception information will display in a message box, allowing you to debug controls on a Start Page, or in other unhandled locations, even in the primary Visual Studio instance. If you are unable to debug after the exception is raised, you can restart Visual Studio with the "devenv /safemode" command, switch back to your previous Start Page, and then continue debugging in the experimental instance.  
  
### Relative Paths  
 When you reference file paths from a Start Page, always use a relative path to allow for different system configurations. However, the root of all relative paths on a Start Page resolves not the \StartPages\ folder but to ..\\*Visual Studio installation folder*\Common7\IDE, which is where devenv.exe is located. To set a path relative to the \StartPages\ folder, use the VS Start Page Relative Converter. Do this by setting the `Source` property of the object to `vs:StartPageRelative`, as shown in the following example.  
  
 XAML  
  
```  
<Image Source="{vs:StartPageRelative myImage.png}" .../>  
```  
  
 Use standard relative path syntax when accessing resources included with Visual Studio, or files included in other packages.  
  
### Deployment  
 We recommend the following best practices when you deploy a custom Start Page to other users.  
  
#### User Settings  
  
-   Respect the user settings. Do not overwrite existing Start Page preferences.  
  
#### VSIX  
 These practices apply to VSIX deployment:  
  
-   Use the [GettingStartedGuide](http://msdn.microsoft.com/en-us/261bb1fd-abae-4ed6-80a8-90d5fc3bb8c6) element in the VSIX manifest to point to instructions about how to set the default Start Page.  
  
-   Use the [Name](http://msdn.microsoft.com/en-us/d99d38d1-060b-401a-9b9f-ede2c6213a11) element and [Description](http://msdn.microsoft.com/en-us/24ddc57e-e991-4a43-b0c9-0e76da293e99) element of the VSIX manifest to clearly identify the extension as a Start Page and describe its purpose.  
  
-   Verify that your VSIX manifest does not contain absolute paths.  
  
-   When you upload to the [Visual Studio Gallery](http://go.microsoft.com/fwlink/?LinkID=123847) Web site, include relevant tagging so that users can identify the extension as a Start Page.  
  
#### MSI  
 If you are producing a Start Page as part of a larger extension that you are deploying in a Windows Installer (MSI) package, you can set the Start Page to be installed as the default Start Page on the target computer. To accomplish this, write the name of the Start Page .xaml file to the Uri value of this registry key: HKCU\Software\Microsoft\VisualStudio\14.0\StartPage\Default\\. Use the following guidelines when you set this registry value:  
  
-   In the installer, provide UI to let the user select whether to make the new Start Page the default.  
  
-   If the user uninstalls your extension, restore the previous registry value.  
  
### Windows Presentation Framework (WPF)  
 Your XAML markup should follow WPF best practices. For information about [!INCLUDE[TLA#tla_winclient](../misc/includes/tlasharptla_winclient_md.md)] and [!INCLUDE[TLA#tla_netframewk](../misc/includes/tlasharptla_netframewk_md.md)] best practices for application development, see the following topics, as appropriate.  
  
|Area|Topic|  
|----------|-----------|  
|Accessibility|[Accessibility Best Practices](http://msdn.microsoft.com/Library/e6d5cd98-21a3-4b01-999c-fb953556d0e6)|  
|Localization|[WPF Globalization and Localization Overview](http://msdn.microsoft.com/Library/56e5a5c8-6c96-4d19-b8e1-a5be1dc564af)|  
|Performance|[Optimizing WPF Application Performance](http://msdn.microsoft.com/Library/ac8c6aa3-3c68-4a24-9827-3b6c829c1ebf)|  
|Security|[Security (WPF)](http://msdn.microsoft.com/Library/ee1baea0-3611-4e36-9ad6-fcd5205376fb)|  
  
## User Interface Guidelines  
 To ensure a convenient and intuitive user experience for your Start Page, use the following UI guidelines where applicable.  
  
### Top Row  
  
#### Banner  
  
-   Make the height of the banner image the same as the height of the row definition of the row that contains it.  
  
-   To accommodate different window sizes and screen resolutions, make the banner image visually pleasing at any width.  
  
-   Keep the banner area uncluttered. Do not overlay the logo with additional buttons or graphics.  
  
### Left Column  
  
#### Button Area  
  
-   Put only the most commonly used controls in the button area so that there is room for the names of recent projects to be displayed. We recommend fewer than five buttons.  
  
#### Recent Projects  
  
-   This control lets the user access recent projects. You can set the number of projects to display from 0 to 24. Because this is the most frequently used section of the Start Page, we recommend that you do not remove it.  
  
#### Start Page Options  
  
-   Make sure that the **Close page after project load** and **Show page on startup** options appear on the Start Page.  
  
-   For additional controls in this area, we recommend that you use check boxes or radio buttons, and make sure that the controls relate to Start Page preferences.  
  
### Content Area  
  
#### Top-Level Tabs  
  
-   Avoid adding so many tabs that the tab control wraps at typical screen widths.  
  
-   Use short, descriptive names for tabs.  
  
-   Make sure that tabs represent grouped content areas.  
  
#### Sub-Level Tabs  
  
-   Only use sub-level navigation if you have more than two subtopics.  
  
-   Avoid adding so many tabs that the tab control wraps at typical screen widths.  
  
-   Use short, descriptive names for tabs.  
  
#### Sub-Level Tab Content  
  
-   Show no more than five content items on a sub-level tab.  
  
#### Item Content  
  
-   Show no more than four links per content item.  
  
-   If you associate images with content items, make sure that every image is 175-by-125 pixels.  
  
-   Use short, descriptive titles for content items.  
  
-   Limit descriptions for content items to two sentences or less.  
  
### General  
  
#### Animations  
  
-   If you use animations, limit them to 0.5 seconds or less to help prevent any perception of bad performance.  
  
#### Environment Colors  
  
-   Respect system settings for fonts and colors.  
  
-   Use light-colored backgrounds.  
  
-   Use remote desktop detection to ensure graceful color degradation in remote sessions.  
  
## See Also  
 [Start Page Architecture](../misc/start-page-architecture.md)   
 [Deploying Custom Start Pages](/visualstudio/extensibility/deploying-custom-start-pages)   
 [Adding Visual Studio Commands to a Start Page](/visualstudio/extensibility/adding-visual-studio-commands-to-a-start-page)