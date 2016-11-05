---
title: "How Graphics Diagnostics Works | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: 2ae14497-c77c-4399-bc0c-595caba23656
caps.latest.revision: 2
ms.author: "mithom"
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
# How Graphics Diagnostics Works
Insert introduction here.  
  
## How Graphics Diagnostics works  
 To use Graphics Diagnostics, you first record information about how an app uses the Direct3D API as it runs, and then later examine the recorded behavior. For the specified frames, the information that’s recorded includes API calls—such as those that clear the screen, draw geometry, dispatch compute shaders, or change the state of the graphics device—together with their arguments, and copies of buffers and objects that are referenced indirectly. Additionally, API calls related to setup and initialization are recorded before any frames are rendered. The information that’s recorded is written to a *graphics log* (.vsglog) file.  
  
 You recreate the rendering behavior that’s recorded in the graphics log by playing back the graphics events on your development machine, or on a remote machine or device. The playback machine can be the same machine or device where the graphics log was originally captured, or a different one. For most playback features, the graphics hardware of the playback machine is used to play back graphics events, but when the HLSL debugger is used, the shader code is always played back by using an emulated GPU on the CPU. Using an emulated GPU makes it possible to step through the shader code, inspect variables, and use other common debugging features regardless of whether the graphics hardware in the playback machine supports hardware debugging.  
  
> [!NOTE]
>  Although a graphics log captures most of the relevant information internally, additional information is required to fully utilize some Graphics Diagnostics features. For example, to make full use of the graphics call stack feature, you also have to have the program database (.pdb) file and the app's source code. To debug HLSL shader source code, you also have to have the shader source code. (If the shader is compiled by using the D3D11.1 shader compiler and debugging information is enabled, then the shader source code is embedded in the graphics log during capture.)  
  
> [!NOTE]
>  Because certain APIs might not be available in previous versions of Windows or DirectX, you can't play back graphics logs that captured these API calls on a playback machine that doesn't support them.  
  
### Graphics logs  
 A graphics log contains one or more frames that were captured from a running DirectX graphics application. Because a graphics log is self-contained, these frames can be recreated at a later time and without external information or references. This means that you can share graphics logs with other developers, examine problems on different machines, and examine old graphics logs even when the models and textures have been changed in development. You can also load multiple graphics log (.vsglog) files at the same time to compare data and rendering results.  
  
##### To open a graphics log (vsglog) file  
  
1.  In [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)], on the menu bar, choose **File**, **Open**, **File**. The **Open File** dialog box appears.  
  
2.  Specify a graphics log (.vsglog) file to open, and then choose the **Open** button.  
  
> [!NOTE]
>  You can extract, modify, and save copies of meshes and textures from a graphics log by using graphics tools that are a part of [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)]. However, the contents of the graphics log are not affected by these modifications. For information about these graphics tools, see [Working with 3-D Assets for Games and Apps](/visual-studio/designers/working-with-3-d-assets-for-games-and-apps).