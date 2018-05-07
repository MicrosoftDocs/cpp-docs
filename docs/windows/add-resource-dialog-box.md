---
title: "Add Resource Dialog Box | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "conceptual"
f1_keywords: ["vc.editors.insertresource"]
dev_langs: ["C++"]
helpviewer_keywords: ["resources [Visual Studio], adding", "Add Resource dialog box"]
ms.assetid: e9fb6967-738f-47e8-ab58-728cf35b3af0
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Add Resource Dialog Box
Use this dialog box to add resources to a C++ Windows desktop application project.  
  
> [!NOTE]
>  This information does not apply to resources in Universal Windows Platform apps. For more information about that, see [App resources and the Resource Management System](/windows/uwp/app-resources/).  
  
 **Resource Type**  
 Specifies the kind of resource you want to create.  
  
 You can expand the cursor and dialog box resource categories to reveal additional resources. These resources are located in ...\Microsoft Visual Studio `version`\VC\VCResourceTemplates\\<LCID\>\mfc.rct. If you add .rct files, you must put them in this directory or you must specify an [include path](../windows/how-to-specify-include-directories-for-resources.md) for them. The resources in those files then appear at the second level under the appropriate category. There is no preset limit to the number of .rct files you can add.  
  
 The resources shown at the top level in the tree control are the default resources that are provided by Visual Studio.  
  
 **New**  
 Creates a resource based on the type you have selected in the **Resource Type** box. The resource opens in the appropriate editor. For example, if you create a dialog resource, it opens in the [dialog editor](../windows/dialog-editor.md).  
  
 **Import**  
 Opens the **Import** dialog box in which you can navigate to a resource you'd want to import into your current project. You can import a bitmap, icon, cursor, HTML resource file, sound (.WAV) resource file, or custom resource file.  
  
 **Custom**  
 Opens the [New Custom Resource dialog box](../windows/new-custom-resource-dialog-box.md) in which you can create a custom resource. Custom resources can be edited in the Binary editor only.  
  
## Requirements  
 None  
  
## See Also  
 [How to: Create a Resource](../windows/how-to-create-a-resource.md)