---
title: "How to: Configure a SharePoint Site as a Private Gallery | Microsoft Docs"
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
  - "Sharepoint, private galleries"
  - "private galleries, Sharepoint"
ms.assetid: 6c6ed45f-7e46-4ed0-8b5c-839dbbe3769f
caps.latest.revision: 9
manager: "douge"
---
# How to: Configure a SharePoint Site as a Private Gallery
You can create a SharePoint List page that describes and provides extensions as a private gallery, and add the list to **Extensions and Updates**. For more information, see [Private Galleries](../Topic/Private%20Galleries.md).  
  
 To use SharePoint to create a private gallery,  
  
1.  First, create a List page for the private gallery.  
  
2.  Then, upload the extension (.vsix) files as items on the List page.  
  
> [!IMPORTANT]
>  For security, SharePoint blocks .vsix files from being uploaded. When you set up a private gallery, make sure that .vsix files aren’t blocked. For more information, see [Manage blocked file types](http://go.microsoft.com/fwlink/?LinkID=201253).  
  
## Creating a List Page for a Private Gallery  
 Depending on the configuration of the SharePoint server(s) you deploy to, the following steps may vary. In general, these deployment instructions are the same for any WSP extension to SharePoint. For an explanation of the STSAdm tool, which can be used for managing SharePoint solution deployments, see [Solution Deployment with SharePoint 2007](http://go.microsoft.com/fwlink/?LinkId=220676) on the MSDN Magazine website.  
  
#### To create a list page for a private gallery  
  
1.  Upload the Visual Studio Extensions List (.wsp) file to the SharePoint server.  
  
2.  At a command prompt, execute the following commands to install the .wsp file on the SharePoint server.  
  
     **stsadm –o addsolution –name VisualStudioExtensionsList.wsp**  
  
     **stsadm –o deploysolution –name VisualStudioExtensionsList.wsp –url http://\<SERVERNAME> –allowCasPolicies –allowgacdeployment –immediate**  
  
     You may also have to activate the feature through the SharePoint user interface for a sub-site, as follows.  
  
    1.  On the menu bar, choose **Site Actions**, **Site Settings**, **Manage site features**.  
  
    2.  Choose the **Activate** button that is next to **Visual Studio Extension Library**.  
  
    3.  Add the Visual Studio extension library to the sub-site you want.  
  
 If you have to remove a list page, use the following steps.  
  
#### To remove a list page for a private gallery  
  
1.  At a command prompt, execute the following commands to remove the .wsp file on the SharePoint server.  
  
     **stsadm –o retractsolution –name VisualStudioExtensionsList.wsp –immediate**  
  
     **stsadm –o deletesolution –name VisualStudioExtensionsList.wsp**  
  
2.  In SharePoint, retract and delete the solution.  
  
## FAQ  
  
### What happens when an extension is uploaded?  
 When a Visual Studio extension (.vsix) file is uploaded, information is extracted from the file. First, some values from the embedded .vsixmanifest file, for example, VsixId, VsixVersion, and so on, are extracted and stored as hidden metadata values on the corresponding SPListItem. Second, the Icon and PreviewImage files for the extension are extracted and stored in a separate list.  
  
 The images are stored in Picture Libraries named *ListTitle*_VSIXIcons and *ListTitle*_VSIXPreviewImages, where *ListTitle* is the name of the list instance that stores the .vsix files. The name of every image file is given the corresponding VSIX ID as a prefix.  
  
### What happens when an extension is deleted?  
 When a .vsix file is deleted, the corresponding image files (if any) are also deleted.  
  
### What happens when an extension is updated?  
 An extension can be updated by uploading a new version of the .vsix file and overwriting the existing version. When an extension is updated, all metadata values and images for the extension are updated according the values in the new version.  
  
### What happens when a list is deleted?  
 When an instance of a Visual Studio extensions list is deleted, the corresponding _VSIXIcons and _VSIXPreviewImages picture libraries are also deleted.  
  
### What version(s) of SharePoint are supported?  
 At present, only SharePoint 2010 is supported.  
  
## See Also  
 [Private Galleries](../Topic/Private%20Galleries.md)