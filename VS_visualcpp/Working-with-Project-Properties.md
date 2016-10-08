---
title: "Working with Project Properties"
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
ms.assetid: 9b0d6f8b-7d4e-4e61-aa75-7d14944816cd
caps.latest.revision: 42
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
# Working with Project Properties
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithoutSyntaxDocument
    xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5"
    xmlns:xlink="http://www.w3.org/1999/xlink"
    xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://dduestorage.blob.core.windows.net/ddueschema/developer.xsd">
    <introduction>
        <para>In the IDE, all information that is needed to build a project is exposed as 
            <newTerm>properties</newTerm>. This information includes the application name, extension (such as DLL, LIB, EXE), compiler options, linker options, debugger settings, custom build steps, and many other things. You use 
            <newTerm>property pages</newTerm> (
            <ui>Project | Properties</ui>) to view and modify these properties. 
        </para>
        <para>When you create a project, the system assigns values for various properties. The defaults vary somewhat depending on the kind of project and what options you choose in the app wizard. For example, an ATL project has properties related to MIDL files, but these are absent in a basic console application.   The default properties are shown in the General pane in the Property Pages:</para>
        <mediaLink>
            <image xlink:href="c1f19961-0127-40a1-8fa2-d27c8b484776"></image>
        </mediaLink>
        <para>Some properties, such as the application name, apply to all build variations, regardless of the target platform or whether it is a debug or release build. But most properties are configuration-dependent.   This is because the compiler has to know what specific platform the program will run on and what specific compiler options to use in order to generate the correct code. Therefore, when you set a property, it is important to pay attention to which configuration and platform the new value should apply to.  Should it apply only to Debug  Win32 builds, or should it also apply to Debug  ARM and Debug  x64? For example, the 
            <ui>Optimization</ui> property, by default, is set to 
            <ui>Maximize Speed (/O2)</ui> in a Release configuration, but is disabled in the Debug configuration. 
        </para>
        <para>The property pages are designed so that you can always see, and if necessary modify, which configuration and platform a property value should apply to. The following illustration shows the property pages with the configuration and platform information in the list boxes at the top. When the Optimization property is set here, it will apply only to Debug Win32 builds, which happens to be the active configuration, as shown by the red arrows.</para>
        <mediaLink>
            <image xlink:href="61f31684-80d9-4df8-9427-a1bfefeb3c29"></image>
        </mediaLink>
        <para></para>
        <para>The following illustration shows the same project property page, but the configuration has been changed to Release. Note the different value for the Optimization property. Also note that the active configuration is still Debug. You can set properties for any configuration here; it doesn't have to be the active one.   </para>
        <mediaLink>
            <image xlink:href="89646b16-7059-4912-bb97-284030a12121"></image>
        </mediaLink>
        <para>The project system itself is based on MSBuild, which defines file formats and rules for building projects of any kind. MSBuild manages much of the complexity of building for multiple configurations and platforms, but you need to understand a little bit about how it works. This is especially important if you want to define custom configurations or create reusable sets of properties that you can share and import into multiple projects. </para>
        <para>Project properties are stored either directly in the project file (*.vcxproj) or in other .xml or .props files that the project file imports and which supply default values. As shown earlier, the same property for the same configuration may be assigned a different value in different files. When you build a project, the MSBuild engine evaluates the project file and all the imported files in a well-defined order (described below). As each file is evaluated, any property values defined in that file will override the existing values.  Any values that are not specified are inherited from files that were evaluated earlier.  Therefore, when you set a property with property pages, it is also important to pay attention to where you set it. If you set a property to "X" in a .props file, but the property is set to "Y" in the project file, then the project will build with the property set to "Y". If the same property is set to "Z" on a project item, such as a .cpp file, then the MSBuild engine will use the "Z" value. For more information, see 
            <link xlink:href="#bkmkPropertyInheritance">Property Inheritance</link> later in this article.
        </para>
    </introduction>
    <section>
        <title>Build configurations</title>
        <content>
            <para>A configuration is just an arbitrary group of properties that are given a name. Visual Studio provides Debug and Release configurations and each sets various properties appropriately for a debug build or release build. You can use the
                <ui> Configuration Manager</ui> to define custom configurations as a convenient way to group properties for a specific flavor of build.  The Property Manager is used for advanced work with properties, but we introduce it here because it helps visualize property configurations. You access it from 
                <ui>View |  Property Manager</ui> or 
                <ui>View | Other Windows | Property Manager</ui> depending on your settings. It has nodes for each configuration/platform pair in the project. Under each of these nodes are nodes for property sheets (.props files) that set some specific properties for that configuration. 
            </para>
            <mediaLink>
                <image xlink:href="0c88aca8-93d8-455c-ab30-ec920839abfa"></image>
            </mediaLink>
            <para>If you go to the General pane in the Property Pages (see the illustration above) and set the Character Set property to "Not Set" instead of "Use Unicode" and click 
                <ui>OK</ui>,  Property Manager will  show no 
                <ui>Unicode Support</ui> property sheet for the current configuration, but it will still be there for other configurations.
            </para>
            <para>For more information about Property Manager and property sheets, see 
                <link xlink:href="#bkmkPropertySheets">Creating reusable property configurations</link> later in this article.
            </para>
            <alert class="tip">
                <para>The .user file is a legacy feature and we recommend that you delete it in order to keep properties correctly grouped according to configuration/platform.</para>
            </alert>
            <para></para>
        </content>
    </section>
    <section>
        <title>Target platforms</title>
        <content>
            <para>
                <newTerm>Target platform</newTerm> refers to the kind of device and/or operating system that the executable will run on. You can build a project for more than one platform. The available target platforms for C++ projects depend on the kind of project; they include but are not limited to Win32, x64, ARM, Android, and iOS. 
 
 The 
                <system> x86</system> target platform that you might see in 
                <ui>Configuration Manager</ui> is identical to 
                <system>Win32</system> in native C++ projects. Win32 means 32-bit Windows and 
                <system>x64</system> means 64-bit Windows.  For more information about these two platforms, see 
                <externalLink>
                    <linkText>Running 32-bit applications</linkText>
                    <linkUri>https://msdn.microsoft.com/library/windows/desktop/aa384249(v=vs.85).aspx</linkUri>
                </externalLink>.
            </para>
            <para>The 
                <system>Any CPU</system> target platform value that you might see in 
                <ui>Configuration Manager</ui> has no effect on native C++ projects; it is relevant for C++/CLI and other .NET project types. For more information, see 
                <link xlink:href="04c60ee6-9dd7-4391-bc03-6926ad0fa116">/CLRIMAGETYPE (Specify Type of CLR Image)</link>. 
            </para>
        </content>
    </section>
    <section>
        <title>Property pages</title>
        <content>
            <para>As stated earlier, the Visual C++ project system is based on 
                <legacyLink xlink:href="e39f13f7-1e1d-4435-95ca-0c222bca071c">MSBuild</legacyLink> and the values are stored in the XML project file, default .props and .targets files that (for Visual Studio 2015) are located in    
                <system>&lt;drive&gt;\Program Files (x86)\MSBuild\Microsoft.Cpp\v4.0\V140</system> and in custom .props files that you might add. We highly recommend that you use NOT edit those files manually, and instead use the property pages in the IDE  to modify all properties, especially those that participate in inheritance, unless you have a very good understanding of MSBuild.
            </para>
            <para>The following illustration shows the property pages for a Visual C++ project. In the left pane, the 
                <ui>VC++ Directories</ui>
                <newTerm>rule</newTerm> is selected, and the right pane lists the properties that are associated with that rule. The 
                <languageKeyword>$(...)</languageKeyword> values are unfortunately called 
                <newTerm>macros</newTerm>. These are 
                <legacyItalic>not</legacyItalic> C/C++ macros but simply compile-time constants. Macros are discussed in the 
                <link xlink:href="#bkmkPropertiesVersusMacros">Property Page Macros</link> section later in this article.) 
            </para>
            <mediaLink>
                <image xlink:href="f73521f8-4fa8-4543-bb98-5a49c2b47e13"/>
            </mediaLink>
            <alert class="warning">
                <para>The 
                    <ui>Common Properties</ui> configurations in earlier versions of Visual Studio have been removed. To add a reference to a project, you now use the 
                    <ui>Add Reference</ui> dialog in the same way as for managed languages. See 
                    <link xlink:href="05d1c51b-44f3-4973-8a11-6c919b08ad62">Managing Project References</link>.
                </para>
            </alert>
            <procedure>
                <title>To set a property for a project</title>
                <steps class="ordered">
                    <step>
                        <content>
                            <para>For most scenarios, you can set properties at the project level without creating a custom property sheet. On the main menu, choose 
                                <ui>Project | Properties</ui>, or right-click on the project node in 
                                <ui>Solution Explorer</ui> and choose 
                                <ui>Properties</ui>. 
                            </para>
                        </content>
                    </step>
                    <step>
                        <content>
                            <para>Use the 
                                <ui>Configuration</ui> and 
                                <ui>Platform</ui> list boxes at the top of the dialog box to specify which property groups should apply your changes. In many cases 
                                <ui>All Platforms</ui> and 
                                <ui>All Configurations</ui> are the right choice. To set properties for just some configurations, multi-select them in 
                                <ui>Property Manager</ui>, and then open the shortcut menu and choose 
                                <ui>Properties</ui>.
                            </para>
                        </content>
                    </step>
                </steps>
            </procedure>
            <para>The 
                <ui>Property Pages</ui> dialog box shows only the property pages that apply to the current project. For example, if the project does not have an .idl file, the MIDL property page is not displayed.
            </para>
            <para>When you highlight a property in a Property Page, you can press 
                <ui>F1</ui> to go to the reference topic for more information about the corresponding compiler or linker switch.
            </para>
            <para>You can find more information about each Property Page in these topics:</para>
            <list class="bullet">
                <listItem>
                    <para>
                        <link xlink:href="593B383C-CD0F-4DCD-AD65-9EC9B4B19C45">General Property Page (Project)</link>
                    </para>
                </listItem>
                <listItem>
                    <para>
                        <link xlink:href="26E3711E-9E7D-4E8D-BC4C-2474538EFDAD">General Property Page (File)</link>
                    </para>
                </listItem>
                <listItem>
                    <para>
                        <link xlink:href="E1721B6C-8B39-4B44-A41E-69B5BB470CC9">Command Line Property Pages</link>
                    </para>
                </listItem>
                <listItem>
                    <para>
                        <link xlink:href="860c7f13-a108-4fe5-8fca-d235cd3ca1cb">Debugging Property Page</link>
                    </para>
                </listItem>
                <listItem>
                    <para>
                        <link xlink:href="BD20CB52-9F1D-4240-B4FC-4F43205AC94B">NMake Property Page</link>
                    </para>
                </listItem>
                <listItem>
                    <para>
                        <link xlink:href="7E7671E5-A35A-4E67-9BDB-661D75C4D11E">Linker Property Pages</link>
                    </para>
                </listItem>
                <listItem>
                    <para>
                        <link xlink:href="DADE2F6B-C51F-4C33-9023-41956AE4B5F6">Resources Property Pages</link>
                    </para>
                </listItem>
                <listItem>
                    <para>
                        <link xlink:href="57498A01-FCCC-4A0E-A036-6FF702F83126">MIDL Property Pages</link>
                    </para>
                </listItem>
                <listItem>
                    <para>
                        <link xlink:href="B80F7C77-AF88-4551-9943-99748EBACF09">Web Reference Property Page</link>
                    </para>
                </listItem>
                <listItem>
                    <para>
                        <link xlink:href="B2EF1C12-3419-429D-BB9D-BD7D9FFE1FFB">XML Data Generator Tool Property Page</link>
                    </para>
                </listItem>
            </list>
        </content>
    </section>
    <section>
        <title>To quickly browse and search all properties</title>
        <content>
            <para>The 
                <ui>All Options</ui> property page (under the 
                <ui>Configuration Properties | C/C++</ui> node in the 
                <ui>Property Pages</ui> dialog box) provides a quick way to browse and search the properties that are available in the current context. It has a special search box and a simple syntax to help you filter results:
            </para>
            <definitionTable>
                <definedTerm>No prefix:</definedTerm>
                <definition>
                    <para>Search in property names only (case-insensitive substring).</para>
                </definition>
                <definedTerm>'/' or '-' :</definedTerm>
                <definition>
                    <para>Search only in compiler switches (case-insensitive prefix)</para>
                </definition>
                <definedTerm>v:</definedTerm>
                <definition>
                    <para>Search only in values (case-insensitive substring).</para>
                </definition>
            </definitionTable>
        </content>
    </section>
    <section address="bkmkPropertiesVersusMacros">
        <title>Property page macros</title>
        <content>
            <para> A 
                <newTerm>macro</newTerm> is a compile-time constant that can refer to a value that is defined by Visual Studio or the MSBuild system, or to a user-defined value. By using macros instead of hard-coded values such as directory paths, you can more easily share property settings between machines and between versions of Visual Studio, and you can better ensure that your project settings participate correctly in property inheritance. You can use the Property Editor to view the values of all available macros. 
            </para>
        </content>
        <sections>
            <section>
                <title>Predefined macros</title>
                <content>
                    <definitionTable>
                        <definedTerm>global macros</definedTerm>
                        <definition>
                            <para>Applies to all items in a project configuration. Has the syntax 
                                <languageKeyword>$(name)</languageKeyword>. An example of a global macro is 
                                <languageKeyword>$(VCInstallDir)</languageKeyword>, which stores the root directory of your Visual Studio installation. A global macro corresponds to a 
                                <languageKeyword>PropertyGroup</languageKeyword> in MSBuild.
                            </para>
                        </definition>
                        <definedTerm>item macros</definedTerm>
                        <definition>
                            <para>Has the syntax 
                                <languageKeyword>%(name)</languageKeyword>. For a file, an item macro applies only to that file—for example, you can use 
                                <languageKeyword>%(AdditionalIncludeDirectories)</languageKeyword> to specify include directories that apply only to a particular file. This kind of item macro corresponds to an 
                                <languageKeyword>ItemGroup</languageKeyword> metadata in MSBuild. When it's used in the context of a project configuration, an item macro applies to all files of a certain type. For example, the C/C++ 
                                <ui>Preprocessor Definitions</ui> configuration property can take a 
                                <languageKeyword>%(PreprocessorDefinitions)</languageKeyword> item macro that applies to all .cpp files in the project. This kind of item macro corresponds to an 
                                <languageKeyword>ItemDefinitionGroup</languageKeyword> metadata in MSBuild. For more information, see 
                                <link xlink:href="8e3dc223-f9e5-4974-aa0e-5dc7967419cb">Item Definitions</link>.
                            </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>User-defined macros</title>
                <content>
                    <para>You can create 
                        <newTerm>user-defined macros</newTerm> to use as variables in project builds. For example, you could create a user-defined macro that provides a value to a custom build step or a custom build tool. A user-defined macro is a name/value pair. In a project file, use the 
                        <system>$(</system>
                        <placeholder>name</placeholder>
                        <system>)</system> notation to access the value.
                    </para>
                    <para>A user-defined macro is stored in a property sheet. If your project does not already contain a property sheet, you can create one by following the steps under 
                        <link xlink:href="#bkmkPropertySheets">Creating reusable property configurations</link>.
                    </para>
                    <procedure>
                        <title>To create a user-defined macro</title>
                        <steps class="ordered">
                            <step>
                                <content>
                                    <para>In the 
                                        <ui>Property Manager</ui> window (on the menu bar, choose 
                                        <ui>View</ui>, 
                                        <ui>Property Manager</ui>), open the shortcut menu for a property sheet (its name ends in .user) and then choose Properties. The 
                                        <ui>Property Pages</ui> dialog box for that property sheet opens.
                                    </para>
                                </content>
                            </step>
                            <step>
                                <content>
                                    <para>In the left pane of the dialog box, select 
                                        <ui>User Macros</ui>. In the right pane, choose the 
                                        <ui>Add Macro</ui> button to open the 
                                        <ui>Add User Macro</ui> dialog box.
                                    </para>
                                </content>
                            </step>
                            <step>
                                <content>
                                    <para>In the dialog box, specify a name and value for the macro. Optionally, select the 
                                        <ui>Set this macro as an environment variable in the build environment</ui> check box.
                                    </para>
                                </content>
                            </step>
                        </steps>
                    </procedure>
                </content>
            </section>
        </sections>
    </section>
    <section>
        <title>Property Editor</title>
        <content>
            <para>You can use the Property Editor to modify certain string properties and select macros as values. To access the Property Editor, select a property on a property page and then choose the down arrow button on the right. If the drop-down list contains 
                <ui>&lt;Edit&gt;</ui>, then you can choose it to display the Property Editor for that property.
            </para>
            <mediaLink>
                <image xlink:href="fb4c2859-954b-491a-9757-6c02351c4af1"/>
            </mediaLink>
            <para></para>
            <para>In the Property Editor, you can choose the 
                <ui>Macros</ui> button to view the available macros and their current values. The following illustration shows the Property Editor for the 
                <ui>Additional Include Directories</ui> property after the 
                <ui>Macros</ui> button was chosen. When the 
                <ui>Inherit from parent or project defaults</ui> check box is selected and you add a new value, it is appended to any values that are currently being inherited. If you clear the check box, your new value replaces the inherited values. In most cases, leave the check box selected.
            </para>
            <mediaLink>
                <image xlink:href="1fa627c8-a9c2-4cb9-bed4-4b3e813d9605"/>
            </mediaLink>
            <para/>
        </content>
    </section>
    <section address="bkmkPropertySheets">
        <title>Creating reusable property configurations</title>
        <content>
            <para>Although you can set "global" properties on a per-user, per-computer basis, we no longer recommend it. Instead, we recommend that you use 
                <ui>Property Manager</ui> to create a 
                <newTerm>property sheet</newTerm> to store the settings for each kind of project that you want to be able to reuse or share with others. Property sheets also make it less likely that property settings for other project types will be inadvertently changed. Property sheets are discussed in more detail 
                <link xlink:href="#bkmkPropertySheets">later in this article</link>.
            </para>
            <alert class="important">
                <para>
                    <legacyBold>.user files and why they are problematic</legacyBold>
                </para>
                <para>Past versions of Visual Studio used global property sheets that had a .user file name extension and were located in the &lt;userprofile&gt;\AppData\Local\Microsoft\MSBuild\v4.0\ folder. We no longer recommend these files because they set properties for project configurations on a per-user, per-computer basis. Such "global" settings can interfere with builds, especially when you are targeting more than one platform on your build computer. For example, if you have both an MFC project and Windows Phone project, the .user properties would be invalid for one of them. Reusable property sheets are more flexible and more robust. </para>
                <para>Although .user files are still installed by Visual Studio and participate in property inheritance, they are empty by default. The best practice is to delete the reference to them in 
                    <ui>Property Manager</ui> to ensure that your projects operate independently of any per-user, per-computer settings This is important to ensure correct behavior in a SCC (source code control) environment.
                </para>
            </alert>
            <para>To display 
                <ui>Property Manager</ui>, on the menu bar, choose 
                <ui>View</ui>, 
                <ui>Other Windows</ui>, 
                <ui>Property Manager</ui>.
            </para>
            <para>If you have a common, frequently used set of properties that you want to apply to multiple projects, you can use 
                <ui>Property Manager</ui> to capture them in a reusable 
                <newTerm>property sheet</newTerm> file, which by convention has a .props file name extension. You can apply the sheet (or sheets) to new projects so that you don't have to set its properties from scratch. To access 
                <ui>Property Manager</ui>, on the menu bar, choose 
                <ui>View</ui>, 
                <ui>Property Manager</ui>.
            </para>
            <mediaLink>
                <image xlink:href="b3ec3cbd-0f57-4c27-8206-b56eb2384321"/>
            </mediaLink>
            <para>Under each configuration node, you see nodes for each property sheet that applies to that configuration. The system adds property sheets that set values based on options you choose in the app wizard when you create the project. Right-click any node and choose Properties to see the properties that apply to that node.  All the property sheets are imported automatically into the project's "master" property sheet (ms.cpp.props) and are evaluated in the order they appear in Property Manager. You can move them to change the evaluation order. Property sheets that are evaluated later will override the values in previously-evaluated sheets.</para>
            <para>If you choose 
                <ui>Add New Project Property Sheet</ui> and then select, for example, the MyProps.props property sheet, a property page dialog box appears. Notice that it applies to the MyProps property sheet; any changes you make are written to the sheet, not to the project file (.vcxproj).
            </para>
            <para>Properties in a property sheet are overridden if the same property is set directly in the .vcxproj file. </para>
            <para>You can import a property sheet as often as required. Multiple projects in a solution can inherit settings from the same property sheet, and a project can have multiple sheets. A property sheet itself can inherit settings from another property sheet.</para>
            <para>You can also create one property sheet for multiple configurations. To do this, create a property sheet for each configuration, open the shortcut menu for one of them, choose 
                <ui>Add Existing Property Sheet</ui>, and then add the other sheets. However, if you use one common property sheet, be aware that when you set a property, it gets set for all configurations that the sheet applies to, and that the IDE doesn’t show which projects or other property sheets are inheriting from a given property sheet. 
            </para>
            <para>In large solutions that will have many projects, it can be useful to create a property sheet at the solution level. When you add a project to the solution, use 
                <ui>Property Manager</ui> to add that property sheet to the project. If required at the project level, you can add a new property sheet to set project-specific values.
            </para>
            <alert class="important">
                <para>A .props file by default does not participate in source control because it isn’t created as a project item. You can manually add the file as a solution item if you want to include it in source control.</para>
            </alert>
            <procedure>
                <title>To create a property sheet</title>
                <steps class="ordered">
                    <step>
                        <content>
                            <para>On the menu bar, choose 
                                <ui>View</ui>, 
                                <ui>Property Manager</ui>. The 
                                <ui>Property Manager</ui> opens.
                            </para>
                        </content>
                    </step>
                    <step>
                        <content>
                            <para>To define the scope of the property sheet, select the item to which it applies. This can be a particular configuration, or another property sheet. Open the shortcut menu for this item and then choose 
                                <ui>Add New Project Property Sheet</ui>. Specify a name and location.
                            </para>
                        </content>
                    </step>
                    <step>
                        <content>
                            <para>In 
                                <ui>Property Manager</ui>, open the new property sheet and then set the properties you want to include.
                            </para>
                        </content>
                    </step>
                </steps>
            </procedure>
        </content>
    </section>
    <section address="bkmkPropertyInheritance">
        <title>Property inheritance</title>
        <content>
            <para>Project properties are layered. Each layer inherits the values of the previous layer, but an inherited value can be overridden by setting the property explicitly. Here's the basic inheritance tree: </para>
            <list class="ordered">
                <listItem>
                    <para>Default settings from the MSBuild CPP Toolset (..\Program Files\MSBuild\Microsoft.Cpp\v4.0\Microsoft.Cpp.Default.props, which is imported by the .vcxproj file.)</para>
                </listItem>
                <listItem>
                    <para>Property sheets</para>
                </listItem>
                <listItem>
                    <para>.vcxproj file. (Can override the default and property sheet settings.)</para>
                </listItem>
                <listItem>
                    <para>Items metadata</para>
                </listItem>
            </list>
            <alert class="tip">
                <para>On a property page, a property in 
                    <languageKeyword>bold</languageKeyword> is defined in the current context. A property in normal font is inherited. 
                </para>
            </alert>
            <para>A project file (.vcxproj) imports other property sheets at build time. After all property sheets are imported, the project file is evaluated and the last definition of any property value is the one that's used. Sometimes it's useful to view the expanded file to determine how a given property value is inherited. To view the expanded version, enter the following command at a Visual Studio command prompt. (Change the placeholder file names to the one you want to use.) </para>
            <para>
                <system>msbuild /pp:</system>
                <placeholder>temp</placeholder>
                <system>.txt</system>
                <placeholder>myapp</placeholder>
                <system>.vcxproj</system>
            </para>
            <para>Expanded project files can be large and difficult to understand unless you are familiar with MSBuild. Here's the basic structure of a project file:</para>
            <list class="ordered">
                <listItem>
                    <para>Fundamental project properties, which are not exposed in the IDE.</para>
                </listItem>
                <listItem>
                    <para>Import of Microsoft.cpp.default.props, which defines some basic, toolset-independent properties.</para>
                </listItem>
                <listItem>
                    <para>Global Configuration properties (exposed as 
                        <ui>PlatformToolset</ui> and 
                        <ui>Project</ui> default properties on the 
                        <ui>Configuration General</ui> page. These properties determine which toolset and intrinsic property sheets are imported in Microsoft.cpp.props in the next step. 
                    </para>
                </listItem>
                <listItem>
                    <para>Import of Microsoft.cpp.props, which sets most of the project defaults. </para>
                </listItem>
                <listItem>
                    <para>Import of all property sheets, including .user files. These property sheets can override everything except the 
                        <ui>PlatformToolset</ui> and 
                        <ui>Project</ui> default properties.
                    </para>
                </listItem>
                <listItem>
                    <para>The remainder of the project configuration properties. These values can override what was set in the property sheets.</para>
                </listItem>
                <listItem>
                    <para>Items (files) together with their metadata. These are always the last word in MSBuild evaluation rules, even if they occur before other properties and imports.</para>
                </listItem>
            </list>
            <para>For more information, see 
                <link xlink:href="962912ac-8931-49bf-a88c-0200b6e37362">MSBuild Properties</link>.
            </para>
        </content>
    </section>
    <section>
        <title>Adding an include directory to the set of default directories</title>
        <content>
            <para>When you add an include directory to a project, it is important not to override all the default directories. The correct way to add a directory is to append the new path, for example “C:\MyNewIncludeDir\”, and then to Append the 
                <ui>$(IncludePath)</ui> macro to the property value.
            </para>
        </content>
    </section>
    <section>
        <title>Setting environment variables for a build</title>
        <content>
            <para>The Visual C++ compiler (cl.exe) recognizes certain environment variables, specifically LIB, LIBPATH, PATH, and INCLUDE. When you build with the IDE, the properties that are set in the 
                <link xlink:href="428eeef6-f127-4271-b3ea-0ae6f2c3d624">VC++ Directories Property Page</link> property page are used to set those environment variables. If LIB, LIBPATH, and INCLUDE values have already been set, for example by a Developer Command Prompt, they are replaced with the values of the corresponding MSBuild properties. The build then prepends the value of the VC++ Directories executable directories property to PATH. You can set a user-defined environment variable by created a user-defined macro and then checking the box that says 
                <ui>Set this macro as an environment variable in the build environment</ui>.
            </para>
        </content>
    </section>
    <section>
        <title>Setting environment variables for a debugging session</title>
        <content>
            <para>In the left pane of the project's 
                <ui>Property Pages</ui> dialog box, expand 
                <ui>Configuration Properties</ui> and then select 
                <ui>Debugging</ui>.
            </para>
            <para>In the right pane, modify the 
                <ui>Environment</ui> or 
                <ui>Merge Environment</ui> project settings and then choose the 
                <ui>OK</ui> button.
            </para>
        </content>
    </section>
    <relatedTopics>
        <link xlink:href="11003CD8-9046-4630-A189-A32BF3B88047">Creating and Managing Visual C++ Projects</link>
    </relatedTopics>
</developerReferenceWithoutSyntaxDocument>