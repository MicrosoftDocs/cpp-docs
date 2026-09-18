---
description: Learn more about the HLSL Compiler property pages.
title: HLSL Property Pages
ms.date: "09/17/2026"
ms.assetid: 0c65f5ec-a2a5-4f5b-8d4c-fa57113a5a1d
f1_keywords:
- VC.Project.FXCompilerTool.AdditionalIncludeDirectories
- VC.Project.FXCompilerTool.SuppressStartupBanner
- VC.Project.FXCompilerTool.EntryPointName
- VC.Project.FXCompilerTool.TreatWarningAsError
- VC.Project.FXCompilerTool.DisableOptimizations
- VC.Project.FXCompilerTool.EnableDebuggingInformation
- VC.Project.FXCompilerTool.ShaderType
- VC.Project.FXCompilerTool.ShaderModel
- VC.Project.FXCompilerTool.AllResourcesBound
- VC.Project.FXCompilerTool.EnableUnboundedDescriptorTables
- VC.Project.FXCompilerTool.SetRootSignature
- VC.Project.FXCompilerTool.PreprocessorDefinitions
- VC.Project.FXCompilerTool.AdditionalOptionsPage
- VC.Project.FXCompilerTool.VariableName
- VC.Project.FXCompilerTool.HeaderFileOutput
- VC.Project.FXCompilerTool.ObjectFileOutput
- VC.Project.FXCompilerTool.AssemblerOutput
- VC.Project.FXCompilerTool.AssemblerOutputFile
- VC.Project.FXCompilerTool.CompileD2DCustomEffect
- VC.Project.FXCompilerTool.MultiProcFXC
---
# HLSL Compiler property pages

You can use the HLSL compiler (fxc.exe) property pages to configure how individual HLSL shader files are built. You can also specify command-line arguments to the HLSL compiler by using the **Additional Options** property of the **Command Line** property page. This includes arguments that can't be configured by using other properties of the HLSL property pages. For information about the HLSL compiler, see [Effect-Compiler Tool](/windows/win32/direct3dtools/fxc).

## HLSL General property page

### Additional Include Directories

Specifies one or more directories to add to the include path. Separate directories with semicolons if you add more than one. (/I[path])

### Entrypoint Name

Specifies the name of the entry point for the shader. (/E[name])

### Disable Optimizations

**Yes (/Od)** to disable optimizations. Otherwise, **No**. By default, the value is **Yes (/Od)** for **Debug** configurations and **No** for **Release** configurations.

The **/Od** command-line argument to the HLSL compiler implicitly applies the **/Gfp** command-line argument, but output might not be identical to output that's produced by passing both the **/Od** and **/Gfp** command-line arguments explicitly.

### Enable Debugging Information

**Yes (/Zi)** to enable debugging information. Otherwise, **No**. By default, the value is **Yes (/Zi)** for **Debug** configurations and **No** for **Release** configurations.

### Shader Type

Specifies the kind of shader. Different kinds of shaders implement different parts of the graphics pipeline. Certain kinds of shaders are available only in more recent shader models (which are specified by the **Shader Model** property). For example, compute shaders were introduced in Shader Model 5.

This property corresponds to the **\[type]** portion of the **/T \[type]_\[model]** command-line argument to the HLSL compiler. The **Shader Models** property specifies the **[model]** portion of the argument.

:::moniker range=">=msvc-170"
**Choices**

- **Effect**
- **Vertex Shader**
- **Pixel Shader**
- **Geometry Shader**
- **Hull Shader**
- **Domain Shader**
- **Compute Shader**
- **Library**
- **Mesh Shader**
- **Amplification Shader**
- **Generate Root Signature Object**
:::moniker-end

:::moniker range="<msvc-170"
**Choices**

- **Effect**
- **Vertex Shader**
- **Pixel Shader**
- **Geometry Shader**
- **Hull Shader**
- **Domain Shader**
- **Compute Shader**
- **Library**
- **Generate Root Signature Object**
:::moniker-end

### Shader Model

Specifies the shader model. Different shader models have different capabilities. In general, more recent shader models offer expanded capabilities but require more modern graphics hardware to run the shader code. Certain kinds of shaders (which are specified by the **Shader Type** property) are available only in more recent shader models. For example, compute shaders were introduced in Shader Model 5.

This property corresponds to the **\[model]** portion of the **/T \[type]_\[model]** command-line argument to the HLSL compiler. The **Shader Type** property specifies the **[type]** portion of the argument.

### All Resources Bound

The compiler assumes that all resources that a shader might reference are bound and are in a good state for the duration of shader execution (/all_resources_bound). Available for Shader Model 5.1 and higher.

### Enable Unbounded Descriptor Tables

Inform the compiler that a shader might contain a declaration of a resource array with unbounded range (/enable_unbounded_descriptor_tables). Available for Shader Model 5.1 and higher.

### Set Root Signature

Attach root signature to shader bytecode (/setrootsignature). Available for Shader Model 5.0 and higher.

### Preprocessor Definitions

Adds one or more preprocessor symbol definitions to apply to the HLSL source code file. Use semicolons to separate the symbol definitions.

This property corresponds to the **/D \[definitions]** command-line argument to the HLSL compiler.

### Compile a Direct2D custom pixel shader effect

Compile a Direct2D custom effect that contains pixel shaders. Don't use for a vertex or compute custom effect.

### Multi Processor Compilation

Run multiple instances at the same time.

## Advanced Property Page

### Suppress Startup Banner

Suppresses the display of the startup banner and information message. (/nologo)

### Treat Warnings As Errors

Treats all compiler warnings as errors. For a new project, it might be best to use /WX in all compilations. Resolving all warnings ensures the fewest possible hard-to-find code defects.

## Output Files Property Page

### Header Variable Name

Specifies a name for the variable name in the header file. (/Vn [name])

### Header File Name

Specifies a name for header file containing object code. (/Fh [name])

### Object File Name

Specifies a name for the object file. (/Fo [name])

### Assembler Output

Specifies the contents of the assembly language output file. (/Fc, /Fx)

**Choices**

- **No Listing** - No listing.
- **Assembly-Only Listing** - Assembly code file.
- **Assembly Code and Hex** - Assembly code and hex listing file.

### Assembler Output File

Specifies the file name for the assembly code listing file.

## See also

[C++ project property page reference](property-pages-visual-cpp.md)<br>
[Command line property pages](command-line-property-pages.md)<br>
[Compiling shaders](/windows/win32/direct3dhlsl/dx-graphics-hlsl-part1)
