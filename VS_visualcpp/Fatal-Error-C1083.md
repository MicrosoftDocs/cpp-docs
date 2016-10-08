---
title: "Fatal Error C1083"
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
ms.topic: error-reference
ms.assetid: 97e52df3-e79c-4f85-8f1e-bbd1057d55e7
caps.latest.revision: 20
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
# Fatal Error C1083
<?xml version="1.0" encoding="utf-8"?>
<developerErrorMessageDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <secondaryErrorTitle>Cannot open filetype file: 'file': message</secondaryErrorTitle>
  <introduction>
    <para>The compiler generates a C1083 error when it can’t find a file. Here are the common reasons why the compiler generates this error.</para>
    <para>
      <embeddedLabel>The specified file name is wrong</embeddedLabel>
    </para>
    <para>The name of a file may be mistyped. For example,</para>
    <code language="cpp">#include &lt;algorithms.h&gt;</code>
    <para>might not find the file you intend. There is a Standard C++ Library header file named algorithms that does not have a .h file name extension. It would not be found by this <languageKeyword>include</languageKeyword> directive. To fix this issue, verify that the correct file name is entered.</para>
    <para>Certain C Runtime Library headers are located in a subdirectory of the standard include directory. For example, to include sys\types.h, you must include the sys subdirectory name in the include directive:</para>
    <para>
      <codeInline>#include &lt;sys\types.h&gt;</codeInline>
    </para>
    <para>
      <embeddedLabel>The file is not included in the compiler search path</embeddedLabel>
    </para>
    <para>The compiler cannot find the file by using the search rules that are indicated by an <languageKeyword>include</languageKeyword> or <languageKeyword>import</languageKeyword> directive. For example, a header file name that is enclosed by quotation marks</para>
    <para>
      <codeInline>#include "myincludefile.h"</codeInline>
    </para>
    <para>tells the compiler to look for the file in the same directory that contains the source file first, and then look in other locations specified by the build environment. If the quotation marks contain an absolute path, the compiler only looks for the file at that location. If the quotation marks contain a relative path, the compiler looks for the file in the directory relative to the source directory. If the name is enclosed by angle brackets</para>
    <para>
      <codeInline>#include &lt;stdio.h&gt;</codeInline>
    </para>
    <para>the compiler follows a search path that is defined by the build environment, the <system>/I</system> compiler option, the <system>/X</system> compiler option, and the <system>INCLUDE</system> environment variable. For more information, including specific details about the search order used to find a file, see <link xlink:href="17067dc0-8db1-4f2d-b43e-ec12ecf83238">#include Directive</link> and <link xlink:href="787d1112-e543-40d7-ab15-a63d43f4030a">#import Directive</link>. </para>
    <para>Even when header files are listed in <ui>Solution Explorer</ui> as part of a project, the files are only found by the compiler when they are referred to by an <languageKeyword>include</languageKeyword> or <languageKeyword>import</languageKeyword> directive and are located on a directory search path. Different kinds of builds might use different search paths. The <system>/X</system> compiler option can be used to exclude directories from the include file search path. This enables different builds to use different include files that have the same name, but are kept in different directories. This is an alternative to conditional compilation by using preprocessor commands. For more information about the <system>/X</system> compiler option, see <link xlink:href="16bdf2cc-c8dc-46e4-bdcc-f3caeba5e1ef">/X (Ignore Standard Include Paths)</link>.</para>
    <para>When the compiler is invoked on the command line, environment variables are often used to specify search paths. If the search path described by the <system>INCLUDE</system> environment variable is not set correctly, a C1083 error is generated. For more information about how to use environment variables, see <link xlink:href="7f9e4469-8865-4b59-aab3-3ff26bd36e77">How to: Use Environment Variables in a Build</link>.</para>
    <para>To fix this issue, correct the path that the compiler uses to search for the included or imported file. A new project uses default search paths. You may have to modify the path to add a directory for your project. If you are compiling on the command line, set the <system>INCLUDE</system> environment variable or the <system>/I</system> compiler option to specify the path of the file. To set the include directory path in Visual Studio, open the project’s <ui>Property Pages</ui> dialog box, expand <ui>Configuration Properties</ui> and <ui>VC++ Directories</ui>, and then edit the <ui>Include Directories</ui> value. For more information about the per-user and per-project directories searched by the compiler in Visual Studio, see <link xlink:href="428eeef6-f127-4271-b3ea-0ae6f2c3d624">VC++ Directories Property Page</link>. For more information about the <system>/I</system> compiler option, see <link xlink:href="3e9add2a-5ed8-4d15-ad79-5b411e313a49">/I (Additional Include Directories) (C++)</link>. </para>
    <para>
      <embeddedLabel>The wrong version of a file name is included</embeddedLabel>
    </para>
    <para>A C1083 error can also indicate that the wrong version of a file is included. For example, a build could include the wrong version of a file that has an <languageKeyword>include</languageKeyword> directive for a header file that is not intended for that build. When the header file is not found, the compiler generates a C1083 error. The fix for this problem is to use the correct file, not to add the header file or directory to the build.</para>
    <para>
      <embeddedLabel>The precompiled headers are not yet precompiled </embeddedLabel>
    </para>
    <para>When a project is configured to use precompiled headers, the relevant .pch files have to be created so that files that use the header contents can be compiled. For example, the stdafx.cpp file is automatically created in the project directory for new MFC projects. Compile that file first to create the precompiled header files. (In the typical build process design, this is done automatically.) For more information, see <link xlink:href="e2cdb404-a517-4189-9771-c869c660cb1b">Creating Precompiled Header Files</link>. </para>
    <para>
      <embeddedLabel>Additional causes </embeddedLabel>
    </para>
    <list class="bullet">
      <listItem>
        <para>The file uses managed code, but the compiler option <system>/clr</system> is not specified. For more information, see <link xlink:href="fec5a8c0-40ec-484c-a213-8dec918c1d6c">/clr (Common Language Runtime Compilation) (C++)</link>.</para>
      </listItem>
      <listItem>
        <para>The file is compiled by using a different <system>/analyze</system> compiler option setting than is used to precompile the headers. (When the headers for a project are precompiled, all should use the same <system>/analyze</system> settings.) For more information, see <link xlink:href="81da536a-e030-4bd4-be18-383927597d08">/analyze (Enterprise Code Analysis)</link>.</para>
      </listItem>
      <listItem>
        <para>The file, the directory, or the disk is read-only.</para>
      </listItem>
      <listItem>
        <para>Access permissions for the file or the directory are not granted.</para>
      </listItem>
      <listItem>
        <para>There are not enough file handles. Close some applications and then recompile. This condition is unusual under typical circumstances. However, it can occur when large projects are built on a computer that has limited physical memory.</para>
      </listItem>
    </list>
    <para>The following example generates a C1083 error.</para>
    <code>// C1083.cpp
// compile with: /c
#include "test.h"   // C1083 test.h does not exist
#include "stdio.h"   // OK</code>
    <para>For information about how to build C/C++ projects in the IDE or on the command line, and information about setting environment variables, see <link xlink:href="fa6ed4ff-334a-4d99-b5e2-a1f83d2b3008">Building a C/C++ Program</link>.</para>
  </introduction>
  <relatedTopics>
<link xlink:href="962912ac-8931-49bf-a88c-0200b6e37362">MSBuild Properties</link>
</relatedTopics>
</developerErrorMessageDocument>