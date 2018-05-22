---
title: "How to: Brand a VSPackage (C# and Visual Basic) | Microsoft Docs"
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
ms.assetid: 705a41c3-63d6-4c1e-9f82-771be9191579
caps.latest.revision: 16
manager: "douge"
---
# How to: Brand a VSPackage (C# and Visual Basic)
To appear in the **About** dialog box and the splash screen, VSPackages must implement the <xref:Microsoft.VisualStudio.Shell.Interop.IVsInstalledProduct> interface. This provides the following information to [!INCLUDE[vsprvs](../includes/vsprvs-md.md)]:  
  
-   Name  
  
-   ID, such as serial or version number  
  
-   Information  
  
-   Logo icon  
  
 The following code is from [VSSDK Samples](../misc/vssdk-samples.md).  
  
### To implement the IVsInstalledProduct interface  
  
1.  Add the <xref:Microsoft.VisualStudio.Shell.InstalledProductRegistrationAttribute> attribute to the class that implements the VSPackage. This class must derive from both <xref:Microsoft.VisualStudio.Shell.Package> and <xref:Microsoft.VisualStudio.Shell.Interop.IVsInstalledProduct>.  
  
     [!code-csharp[VSSDKPackageSplashHelpAboutLoadKey#1](../snippets/csharp/VS_Snippets_VSSDK/vssdkpackagesplashhelpaboutloadkey/cs/vssdkpackagesplashhelpaboutloadkeypackage.cs#1)]
     [!code-vb[VSSDKPackageSplashHelpAboutLoadKey#1](../snippets/visualbasic/VS_Snippets_VSSDK/vssdkpackagesplashhelpaboutloadkey/vb/vssdkpackagesplashhelpaboutloadkeypackage.vb#1)]  
  
     The first argument, <xref:Microsoft.VisualStudio.Shell.InstalledProductRegistrationAttribute.UseInterface%2A>, of the <xref:Microsoft.VisualStudio.Shell.InstalledProductRegistrationAttribute> attribute tells [!INCLUDE[vsprvs](../includes/vsprvs-md.md)] to use <xref:Microsoft.VisualStudio.Shell.Interop.IVsInstalledProduct> to obtain product information, instead of the InstalledProducts registry key. The remaining arguments select string resources to display the product name, details, and ID, respectively. However, because the first argument is `true`, the remaining arguments are `null`.  
  
2.  Right-click <xref:Microsoft.VisualStudio.Shell.Interop.IVsInstalledProduct>, point to **Implement Interface**, and then click **Implement Interface**.  
  
3.  Implement <xref:Microsoft.VisualStudio.Shell.Interop.IVsInstalledProduct> by using the following code.  
  
     [!code-csharp[VSSDKPackageSplashHelpAboutLoadKey#2](../snippets/csharp/VS_Snippets_VSSDK/vssdkpackagesplashhelpaboutloadkey/cs/vssdkpackagesplashhelpaboutloadkeypackage.cs#2)]
     [!code-vb[VSSDKPackageSplashHelpAboutLoadKey#2](../snippets/visualbasic/VS_Snippets_VSSDK/vssdkpackagesplashhelpaboutloadkey/vb/vssdkpackagesplashhelpaboutloadkeypackage.vb#2)]  
  
     [!INCLUDE[vsprvs](../includes/vsprvs-md.md)] calls these methods to obtain information for branding the VSPackage. The GetResourceString method is used to localize this information.  
  
    > [!NOTE]
    >  Code comments are deleted for brevity. You can find them in [VSSDK Samples](../misc/vssdk-samples.md).  
  
### To maintain the product information strings  
  
1.  Double-click the .resx resource file associated with the VSPackage.  
  
     The resource editor opens.  
  
2.  Find or add the product name, information, and ID.  
  
     The following resource strings are from the [VSSDK Samples](../misc/vssdk-samples.md).  
  
     @101  
     Package Splash screen and Help About Official Name (C#).  
  
     @102  
     This package demonstrates how to display text and image in the splash screen and the help about.  
  
     @104  
     8.0  
  
3.  Select and edit this information as you want.  
  
### To maintain the product icons and bitmaps  
  
1.  Add the bitmaps and icons to the project as project resources.  
  
     For more information, see [NOT IN BUILD: Adding and Editing Resources (Visual C#)](http://msdn.microsoft.com/en-us/95f15d03-bed0-410c-8d1f-dece5199ba1e).  
  
2.  Close the resource editor and reopen the .resx file in an XML or text editor.  
  
    > [!NOTE]
    >  The resource editor does not support assigning resource IDs to items other than strings.  
  
3.  Find or add the icon and bitmap resources to the .resx file. The following resources are from [VSSDK Samples](../misc/vssdk-samples.md).  
  
    ```  
    <data name="300" type="System.Resources.ResXFileRef, System.Windows.Forms">  
        <value>GenericPackage.bmp;System.Drawing.Bitmap, System.Drawing,  
            Version=2.0.0.0, Culture=neutral,         PublicKeyToken=b03f5f7f11d50a3a</value>  
    </data>  
    <data name="400" type="System.Resources.ResXFileRef, System.Windows.Forms">  
        <value>GenericPackage.ico;System.Drawing.Icon, System.Drawing,  
            Version=2.0.0.0, Culture=neutral,         PublicKeyToken=b03f5f7f11d50a3a</value>  
    </data>  
    ```  
  
### To test the About dialog box and splash screens  
  
-   To test your VSPackage, see [How to: Test the Help About and Splash Screens](../misc/how-to-test-the-help-about-and-splash-screens.md).  
  
## See Also  
 [VSPackage Branding](../misc/vspackage-branding.md)