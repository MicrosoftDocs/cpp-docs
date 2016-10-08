---
title: "HLSL Property Pages: General"
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
ms.topic: article
ms.assetid: 0e02f2a6-f123-43da-b04b-a0719a7c2b03
caps.latest.revision: 8
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# HLSL Property Pages: General
To configure the following properties of the HLSL compiler (fxc.exe), use its **General** property page. For information about how to access the **General** property page in the HLSL folder, see [How to: Specify Project Properties with Property Pages](../Topic/How%20to:%20Specify%20Project%20Properties%20with%20Property%20Pages.md).  
  
## UIElement List  
 **Additional Include Directories**  
 Adds one or more directories to the include path. Use semi-colons to separate the directories.  
  
 This property corresponds to the **/I[path]** command-line argument.  
  
 **Entrypoint Name**  
 Specifies the entry point for the shader. By default, the value is **main**.  
  
 This property corresponds to the **/E[name]** command-line argument.  
  
 **Disable Optimizations**  
 **Yes (/Od)** to disable optimizations; otherwise, **No**. By default, the value is **Yes (/Od)** for **Debug** configurations and **No** for **Release** configurations.  
  
 The **/Od** command-line argument to the HLSL compiler implicitly applies the **/Gfp** command-line argument, but output may not be identical to output that is produced by passing both the **/Od** and **/Gfp** command-line arguments explicitly.  
  
 **Enable Debugging Information**  
 **Yes (/Zi)** to enable debugging information; otherwise, **No**. By default, the value is **Yes (/Zi)** for **Debug** configurations and **No** for **Release** configurations.  
  
 **Shader Type**  
 Specifies the kind of shader. Different kinds of shaders implement different parts of the graphics pipeline. Certain kinds of shaders are available only in more recent shader models (which are specified by the **Shader Model** property)—for example, compute shaders were introduced in shader model 5.  
  
 This property corresponds to the **[type]** portion of the **/T [type]_[model]** command-line argument to the HLSL compiler. The **Shader Models** property specifies the **[model]** portion of the argument.  
  
 **Shader Model**  
 Specifies the shader model. Different shader models have different capabilities. In general, more recent shader models offer expanded capabilities but require more modern graphics hardware to run the shader code. Certain kinds of shaders (which are specified by the **Shader Type** property) are available only in more recent shader models—for example, compute shaders were introduced in shader model 5.  
  
 This property corresponds to the **[model]** portion of the **/T [type]_[model]** command-line argument to the HLSL compiler. The **Shader Type** property specifies the **[type]** portion of the argument.  
  
 **Preprocessor Definitions**  
 Adds one or more preprocessor symbol definitions to apply to the HLSL source code file. Use semi-colons to separate the symbol definitions.  
  
 This property corresponds to the **/D [definitions]** command-line argument to the HLSL compiler.  
  
## See Also  
 [HLSL Property Pages](../VS_visualcpp/HLSL-Property-Pages.md)   
 [HLSL Property Pages: Advanced](../VS_visualcpp/HLSL-Property-Pages--Advanced.md)   
 [HLSL Property Pages: Output Files](../VS_visualcpp/HLSL-Property-Pages--Output-Files.md)