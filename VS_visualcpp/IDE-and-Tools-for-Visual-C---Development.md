---
title: "IDE and Tools for Visual C++ Development"
ms.custom: na
ms.date: 10/08/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 56eabafb-1956-4f0f-bec5-29b887763559
caps.latest.revision: 14
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
# IDE and Tools for Visual C++ Development
<?xml version="1.0" encoding="utf-8"?>
<developerConceptualDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://dduestorage.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>As part of the Visual Studio Integrated Development Environment (IDE), Visual C++ shares many windows and tools in common with other languages. Many of those, including <ui>Solution Explorer</ui>, the Code Editor, and the Debugger, are documented in the MSDN library under <link xlink:href="772b6cf4-cee5-42d0-bc18-b4eb07e22ff0">Visual Studio IDE</link>. Often, a shared tool or window has a slightly different set of features for C++ than for the .NET languages or Javascript. Some windows or tools are only available in Visual Studio Pro or Visual Studio Enterprise. This topic introduces the Visual Studio IDE from the perspective of Visual C++, and provides links to other topics relevant to Visual C++.</para>
    <para>In addition to shared tools in the Visual Studio IDE, Visual C++ has several tools specifically for native code development. These tools are also listed in this article. For a list of which tools are available in each edition of Visual Studio, see <link xlink:href="3d88607b-9cc4-490a-8d4c-31ee7610a26f">Visual C++ Tools and Templates in Visual Studio Editions</link>. </para>
  </introduction>
  <section>
    <title>Creating a solution and project(s)</title>
    <content>
      <para>In all editions of Visual C++, you organize the source code and related files for an executable ( such as an .exe, .dll or .lib) into a project. A project has a project file in XML format (.vcxproj) that specifies all the files and resources needed to compile the program, as well as other configuration settings, for example the target platform (x86, x64 or ARM) and whether you are building a release version or debug version of the program. A project (or many projects) are contained in a <newTerm>Solution</newTerm>; for example, a solution might contain several Win32 DLL projects, and a single Win32 console application that uses those DLLs. When you build the project, the MSBuild engine consumes the project file and produces the executable file and/or any other custom output you have specified.</para>
      <para>
        <embeddedLabel>Project templates</embeddedLabel>
      </para>
      <para>Visual C++ comes with several project templates, which contain starter code and the settings needed for a variety of basic program types. Typically you start by choosing <ui>File | New Project</ui> to create a project from a project template, then add new source code files to that project, or start coding in the files provided. For information specific to C++ projects and project wizards, see <link xlink:href="11003cd8-9046-4630-a189-a32bf3b88047">Creating and Managing Visual C++ Projects</link>.</para>
      <para>
        <embeddedLabel>Application wizards</embeddedLabel>
      </para>
      <para>Visual C++ provides wizards for some project types. A wizard guides you step-by-step through the process of creating a new project. This is useful for project types that have many options and settings. For more information, see <link xlink:href="090c6423-deb8-4a00-817d-337eb5644544">Creating Desktop Projects By Using Application Wizards</link>.</para>
    </content>
  </section>
  <section>
    <title>Creating user interfaces with designers</title>
    <content>
      <para>If your program has a user interface, one of the first tasks is to populate it with controls such as buttons, list boxes and so on. Visual Studio includes a visual design surface and a toolbox for each flavor of C++ application. No matter which type of app you are creating, the basic idea is the same: you drag a control from the toolbox window and drop it onto the design surface at the desired location. In the background, Visual Studio generates the resources and code required to make it all work.</para>
      <para>For more information about designing a user interface for a Universal Windows Platform app, <?Comment MB: need fwlink 2012-07-23T09:33:00Z  Id='1?>see  <externalLink><linkText>Design and UI</linkText><linkUri>https://developer.microsoft.com/en-us/windows/design</linkUri></externalLink>.</para>
      <para>For more information about creating a user interface for an MFC application, see <link xlink:href="7101cb18-a681-495c-8f2b-069ad20c72f7">MFC Desktop Applications</link>. For information about Win32 Windows programs, see <link xlink:href="be15855a-fa3f-41e9-89cd-41b9484ebfdb">Win32 Windows Applications (C++)</link>.</para>
      <para>For information about Windows Forms applications with C++/CLI, see <legacyLink xlink:href="8e007885-6c8b-4fb2-a41d-91febd114a9b">Creating a Windows Forms Application By Using the .NET Framework (C++)</legacyLink>. </para>
    </content>
  </section>
  <section>
    <title>Writing and editing code</title>
    <content>
      <para>
        <embeddedLabel>Semantic colorization</embeddedLabel>
      </para>
      <para>After you create a project, all the project files are displayed in the Solution Explorer window. When you click on a .h or .cpp file in Solution Explorer, the file opens up in the code editor. The code editor is a specialized word processor for C++ source code. It color-codes language keywords, method and variable names, and other elements of your code to make the code more readable and easier to understand.</para>
      <para>
        <embeddedLabel>Intellisense</embeddedLabel>
      </para>
      <para>The code editor also supports several features that together are known as Intellisense. You can hover over a method and see some basic documentation for it. After you type a class variable name and a . or -&gt;, a list of instance members of that class appears. If you type a class name and then a ::, a list of static members appears. When you start typing a class or method name, the code editor will offer suggestions to complete the statement. For more information, see <link xlink:href="9fdb489b-8b46-4b92-9ccc-c8f8cc184081">Using IntelliSense</link>.</para>
      <para>
        <embeddedLabel>Code snippets</embeddedLabel>
      </para>
      <para>You can use Intellisense code snippets to generate commonly-used or complicated code constructs with a shortcut keystroke. For more information, see <link xlink:href="85976ad9-4c9a-4e7b-896e-66ec6f955199">Code Snippets</link>.</para>
    </content>
  </section>
  <section>
    <title> Navigating code</title>
    <content>
      <para>The VIEW menu provides access to many windows and tools for navigating around in your code files. For detailed information about these windows, see <link xlink:href="e6064f58-5ad9-4f05-8c3f-12e994b6583f">Viewing the Structure of Code</link>.</para>
      <para>
        <embeddedLabel>Solution Explorer</embeddedLabel>
      </para>
      <para>In all editions of Visual Studio, use the Solution Explorer pane to navigate between the files in a project. Expand a .h or .cpp file icon to view the classes in the file. Expand a class to see its members. Double-click on a member to navigate to its definition or implementation in the file.</para>
      <para>
        <embeddedLabel>Class View and Code Definition Window</embeddedLabel>
      </para>
      <para>Use the Class View pane to see the namespaces and classes across all the files, including partial classes. You can expand each namespace or class to see its members and double-click on the member to navigate to that location in the source file. If you open the Code Definition Window, you can view the definition or implementation of the type when you choose it in Class View.</para>
      <para>
        <embeddedLabel>Object Browser</embeddedLabel>
      </para>
      <para>Use Object Browser to explore type information in Windows Runtime components (.winmd files), .NET assemblies and COM type libraries. It is not used with Win32 DLLs.</para>
      <para>
        <embeddedLabel>Go To Definition/Declaration</embeddedLabel>
      </para>
      <para>Press F12 on any API name or member variable to go to its definition. If the definition is in a .winmd file (for a <token>win8_appname_long</token> app) then you will be shown the type info in the Object Browser. You can also Go To Definition or Go To Declaration by right-clicking on the variable or type name and choosing the option from the context menu.</para>
      <para>
        <embeddedLabel>Find All References</embeddedLabel>
      </para>
      <para>In a source code file, right-click with the mouse cursor over the name of a type or method or variable, and choose Find all References to return a list of every location in the file, project or solution where the type is used. Find All References is intelligent and only returns instances of the same identical variable, even if other variables at different scope have the same name.</para>
      <para>
        <embeddedLabel>Architecture Explorer and Dependency Graphs (Ultimate)</embeddedLabel>
      </para>
      <para>Use Architecture Explorer to view relationships between various elements in your code. For more information, see <legacyLink xlink:href="b1707926-ef73-47f9-92cd-e00d0fac7e76">Find code with Architecture Explorer</legacyLink>. Use  dependency graphs to view dependency relationships. For more information, see <link xlink:href="3bd5cf9f-62f6-41d0-9f35-d4b2637cba3c">How to: Generate Dependency Graphs for C and C++ Code</link>.</para>
    </content>
  </section>
  <section>
    <title>Adding and Editing Resources</title>
    <content>
      <para>The term "resource" in the context of a Visual Studio desktop project includes things such as dialog boxes, icons, localizable strings, spash screens, database connection strings, or any arbitrary data that you want to include in the executable file. </para>
      <para>For more information on adding and editing resources in native desktop C++ projects, see <link xlink:href="2699a539-b369-4b78-80f0-df03eb7b6780">Working with Resource Files</link>. </para>
    </content>
  </section>
  <section>
    <title>Building (compiling and linking)</title>
    <content>
      <para>Press <ui>Ctrl + Shift + B</ui> to compile and link a project. Visual Studio uses <legacyLink xlink:href="e39f13f7-1e1d-4435-95ca-0c222bca071c">MSBuild</legacyLink> to create executable code. You can set general build options under <ui>Tools | Options | Projects and Solutions</ui> and you can set properties for specific projects under <ui>Project | Properties</ui>. Build errors and warnings are reported in the Error List (<ui>Ctrl +\, E</ui>). Additional information is sometimes shown in the Output Window (<ui>Alt + 2</ui>). For more information, see  <link xlink:href="9b0d6f8b-7d4e-4e61-aa75-7d14944816cd">Working with Project Properties</link>  and <link xlink:href="9e8bc1a2-bb17-4951-937a-c757ed88d2d1">Building C++ Projects in Visual Studio</link>.</para>
      <para>You can also use the Visual C++ compiler (cl.exe) and many other build-related standalone tools such as NMAKE and LIB directly from the command line. For more information, see <link xlink:href="7ca9daed-a003-4162-842d-908f79058365">Building on the Command Line</link> and <link xlink:href="100b4ccf-572c-4d1f-970c-fa0bc0cc0d2d">C/C++ Building Reference</link>.</para>
    </content>
  </section>
  <section>
    <title>Testing</title>
    <content>
      <para>Visual Studio includes a unit test framework for both native C++ and C++/CLI. For more information, see <legacyLink xlink:href="c191de3e-3f3b-471e-b828-29ec24e80e2c">Verifying Code by Using Unit Tests</legacyLink> and <legacyLink xlink:href="4f4b5f10-7314-4725-8c6e-e72f52eff918">Writing Unit tests for C/C++ with the Microsoft Unit Testing Framework for C++</legacyLink></para>
    </content>
  </section>
  <section>
    <title>Debugging</title>
    <content>
      <para>You can debug your program by pressing F5 when your project configuration is set to Debug. While debugging you can set breakpoints by pressing F9, step through code by pressing F10, view the values of specified variables or registers, and even in some cases make changes in code and continue debugging without re-compiling. For more information, see <link xlink:href="590f152d-31e2-4e13-b808-a1b13e421483">Debugging in Visual Studio</link>.</para>
    </content>
  </section>
  <section>
    <title>Deploying completed applications</title>
    <content>
      <para>You deploy a <token>win8_appname_long</token> to customers through the Windows Store through the <ui>PROJECT | Store</ui> menu option. Deployment of the CRT is handled automatically behind the scenes. For more information, see <externalLink><linkText>Selling Apps</linkText><linkUri>http://go.microsoft.com/fwlink/p/?LinkId=262280</linkUri></externalLink>.</para>
      <para>When you deploy a native C++ desktop application to another computer, you must install the application itself and any library files that the application depends on. There are three ways to deploy the Visual C++ runtime with an application: central deployment, local deployment, or static linking. For more information, see <link xlink:href="37f1691e-d67c-41e4-926e-528a237a9bac">Deploying Native Desktop Applications (Visual C++)</link>.</para>
      <para>For more information about deploying a C++/CLI program, see <link xlink:href="094d043e-33c4-40ba-a503-e0b20b55f4cf">.NET Framework Deployment Guide for Developers</link>, </para>
      <para/>
    </content>
  </section>
  <section>
    <title>Other tools</title>
    <content>
      <para/>
    </content>
  </section>
  <section>
    <title>Related Articles</title>
    <content>
      <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
        <tbody>
          <tr>
            <TD>
              <para>
                <link xlink:href="3d88607b-9cc4-490a-8d4c-31ee7610a26f">Visual C++ Tools and Templates in Visual Studio Editions</link>
              </para>
            </TD>
            <TD>
              <para>Shows which features are available in the various editions of Visual Studio.</para>
            </TD>
          </tr>
          <tr>
            <TD>
              <para>
                <legacyLink xlink:href="499cb66f-7df1-45d6-8b6b-33d94fd1f17c">Visual C++ Guided Tour</legacyLink>
              </para>
            </TD>
            <TD>
              <para>Provides an overview of the Visual Studio development environment and the kinds of C++ apps that you can create.</para>
            </TD>
          </tr>
          <tr>
            <TD>
              <para>
                <link xlink:href="11003cd8-9046-4630-a189-a32bf3b88047">Creating and Managing Visual C++ Projects</link>
              </para>
            </TD>
            <TD>
              <para>Provides an overview of C++ projects in Visual Studio and links to other articles that explain how to create and manage them.</para>
            </TD>
          </tr>
          <tr>
            <TD>
              <para>
                <link xlink:href="fa6ed4ff-334a-4d99-b5e2-a1f83d2b3008">Building C/C++ Programs</link>
              </para>
            </TD>
            <TD>
              <para>Describes how to build C++ projects.</para>
            </TD>
          </tr>
          <tr>
            <TD>
              <para>
                <link xlink:href="37f1691e-d67c-41e4-926e-528a237a9bac">Deploying Desktop Applications</link>
              </para>
            </TD>
            <TD>
              <para>Provides an overview of deployment for C++ apps and links to other articles that describe deployment in detail.</para>
            </TD>
          </tr>
          <tr>
            <TD>
              <para>
                <link xlink:href="c36c44b3-5a9b-4bb4-9b7a-469aa770ed00">Porting and Upgrading Programs</link>
              </para>
            </TD>
            <TD>
              <para>Links to articles that describe how to open C++ apps that were created in earlier versions of Visual Studio, and also how to open apps that were created by using tools other than Visual Studio.</para>
            </TD>
          </tr>
          <tr>
            <TD>
              <para/>
            </TD>
            <TD>
              <para/>
            </TD>
          </tr>
          <tr>
            <TD>
              <para>
                <link xlink:href="e8dcc44c-a3e2-4ffe-887c-fd15b18dc458">Visual C++</link>
              </para>
            </TD>
            <TD>
              <para>Describes key features of Visual C++ in Visual Studio and links to the rest of the Visual C++ documentation.</para>
            </TD>
          </tr>
        </tbody>
      </table>
    </content>
  </section>
  <relatedTopics/>
</developerConceptualDocument>
