---
title: "Renaming Project Hierarchy Nodes (C++)"
ms.custom: ""
ms.date: "10/19/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "HierUtil7 sample [Visual Studio SDK], renaming project nodes"
  - "project nodes, renaming in HierUtil7 sample"
ms.assetid: cea5968e-e9f8-41a5-b068-622df542247c
caps.latest.revision: 12
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
# Renaming Project Hierarchy Nodes (C++)
You can rename a project folder hierarchy node by using the HierUtil7 project framework for unmanaged C++. For more information, see [HierUtil7 Sample](http://msdn.microsoft.com/en-us/29c15184-a70c-4813-86c2-fb1d47442d11).  
  
## Expanding the Hierarchy node  
  
#### To expand the hierarchy node and rename the folder  
  
1.  Select the hierarchy node by using the following method:  
  
    ```  
    IfFailGo(pNode->ExtExpand(EXPF_SelectItem, GUID_MacroExplorer));  
    ```  
  
     `pNode` is the hierarchy container corresponding to the folder and `EXPF_SelectItem` is from the <xref:Microsoft.VisualStudio.Shell.Interop.EXPANDFLAGS> enumeration. The `GUID_MacroExplorer` is a GUID constant defined in Vsshell.idl and is an example for `rguidPersistenceSlot` in the function signature of `ExtExpand`, defined in Hu_node.h.  
  
    ```  
    HRESULT ExtExpand(EXPANDFLAGS expandflags, REFGUID rguidPersistenceSlot = GUID_SolutionExplorer) const;  
    ```  
  
     You can find the Hu_node.h file in the folder, \<installation root>\Program Files\VSIP 8.0\EnvSDK\common\hierutil7:  
  
2.  Rename the folder by posting the rename command by using <xref:Microsoft.VisualStudio.Shell.Interop.IVsUIShell.PostExecCommand*>  
  
    ```  
    IfFailGo(srpVsUIShell->PostExecCommand(&guidVSStd97, cmdidRename, 0, NULL));  
    ```  
  
     `srpVsUIShell` is a <xref:Microsoft.VisualStudio.Shell.Interop.IVsUIShell> pointer: `<IVsUIShell>``srpVsUIShell`. `guiVSStd97` is a unique identifier of the command group to which the command `cmdidRename` belongs, defined in Vsshlids.h.  
  
## See Also  
 [Creating Project Types](../Topic/Creating%20Project%20Types.md)   
 [VSSDK Samples](../misc/vssdk-samples.md)