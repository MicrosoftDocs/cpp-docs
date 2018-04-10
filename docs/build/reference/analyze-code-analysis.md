---
title: "-analyze (Code Analysis) | Microsoft Docs"
ms.custom: ""
ms.date: "04/20/2018"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["VC.Project.VCCLCompilerTool.EnablePREfast", "/analyze", "VC.Project.VCCLCompilerTool.PREfastAdditionalOptions", "VC.Project.VCCLCompilerTool.PREfastAdditionalPlugins"]
dev_langs: ["C++"]
helpviewer_keywords: ["/analyze compiler option [C++]", "-analyze compiler option [C++]", "analyze compiler option [C++]"]
ms.assetid: 81da536a-e030-4bd4-be18-383927597d08
caps.latest.revision: 21
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# /analyze (Code Analysis)

Enables code analysis and control options.

## Syntax

```cmd
/analyze[-][:WX-][:log filename][:quiet][:stacksize number][:max_paths number][:only][:ruleset]
```

## Arguments

 /analyze
 Turns on analysis in the default mode. Analysis output goes to the **Output** window like other error messages. Use **/analyze-** to explicitly turn off analysis.

 /analyze:WX-
 Specifying **/analyze:WX-** means that code analysis warnings are not treated as errors when you compile by using **/WX**. For more information, see [/w, /W0, /W1, /W2, /W3, /W4, /w1, /w2, /w3, /w4, /Wall, /wd, /we, /wo, /Wv, /WX (Warning Level)](../../build/reference/compiler-option-warning-level.md).

 /analyze:log `filename`
 Detailed analyzer results are written as XML to the file that is specified by `filename`.

 /analyze:quiet
 Turns off analyzer output to the **Output** window.

 /analyze:stacksize `number`
 The `number` parameter that is used with this option specifies the size, in bytes, of the stack frame for which warning [C6262](/visualstudio/code-quality/c6262) is generated. If this parameter is not specified, the stack frame size is 16KB by default.

 /analyze:max_paths `number`
 The `number` parameter that is used with this option specifies the maximum number of code paths to be analyzed. If this parameter is not specified, the number is 256 by default. Larger values perform more thorough checking, but the analysis might take longer.

 /analyze:only
 Typically, the compiler generates code and does more syntax checking after it runs the analyzer. The **/analyze:only** option turns off this code generation pass; this makes analysis faster but compile errors and warnings that might have been discovered by the code generation pass of the compiler are not emitted. If the program is not free of code-generation errors, analysis results might be unreliable; therefore, we recommend that you use this option only if the code already passes code-generation syntax checking without errors.

 /analyze:ruleset `<file_path>.ruleset`
Enables you to specify which rule sets to analyze, including custom rule sets that you can create yourself. When this switch is set, the rules engine is more efficient because it excludes non-members of the specified rule set before running. When the switch is not set, the engine checks all rules and then excludes results for non-members before displaying the output.

The following sample rule set tells the rules engine to check for C6001 and C26494. You can place this file anywhere as long as it has a `.rulesert` extension and you provide the full path in the argument.

```xml
<?xml version="1.0" encoding="utf-8"?>
<RuleSet Name="New Rule Set" Description=" " ToolsVersion="15.0">
  <Rules AnalyzerId="Microsoft.Analyzers.NativeCodeAnalysis" RuleNamespace="Microsoft.Rules.Native">
    <Rule Id="C6001" Action="Warning" />
    <Rule Id="C26494" Action="Warning" />
  </Rules>
</RuleSet>
```

For more information, see [Code Analysis for C/C++ Overview](/visualstudio/code-quality/code-analysis-for-c-cpp-overview).

## Remarks

For more information, see [Code Analysis for C/C++ Overview](/visualstudio/code-quality/code-analysis-for-c-cpp-overview) and [Code Analysis for C/C++ Warnings](/visualstudio/code-quality/code-analysis-for-c-cpp-warnings).

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).

1. Expand the **Configuration Properties** node.

1. Expand the **Code Analysis** node.

1. Select the **General** property page.

1. Modify one or more of the **Code Analysis** properties.

### To set this compiler option programmatically

1. See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.EnablePREfast%2A>.

## See Also

- [Compiler Options](../../build/reference/compiler-options.md)
- [Setting Compiler Options](../../build/reference/setting-compiler-options.md)