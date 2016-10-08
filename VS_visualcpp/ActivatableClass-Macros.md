---
title: "ActivatableClass Macros"
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
ms.topic: reference
ms.assetid: 9bd64709-ec2c-4678-8c96-ea5982622bdd
caps.latest.revision: 3
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
# ActivatableClass Macros
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>Populates an internal cache that contains a factory that can create an instance of the specified class.</para>
  </introduction>
  <syntaxSection>
    <legacySyntax language="cpp">ActivatableClass(
   <parameterReference>className</parameterReference>
);

ActivatableClassWithFactory(
   <parameterReference>className</parameterReference>, 
   <parameterReference>factory</parameterReference>
);

ActivatableClassWithFactoryEx(
   <parameterReference>className</parameterReference>, 
   <parameterReference>factory</parameterReference>, 
   <parameterReference>serverName</parameterReference>
);
</legacySyntax>
  </syntaxSection>
  <parameters>
    <content>
      <definitionTable>
        <definedTerm>
          <parameterReference>className</parameterReference>
        </definedTerm>
        <definition>
          <para>Name of the class to create.</para>
        </definition>
        <definedTerm>
          <parameterReference>factory</parameterReference>
        </definedTerm>
        <definition>
          <para>Factory that will create an instance of the specified class.</para>
        </definition>
        <definedTerm>
          <parameterReference>serverName</parameterReference>
        </definedTerm>
        <definition>
          <para>A name that specifies a subset of factories in the module.</para>
        </definition>
      </definitionTable>
    </content>
  </parameters>
  <languageReferenceRemarks>
    <content>
      <para>Do not use these macros with classic COM unless you use the <codeInline>#undef</codeInline> directive to ensure that the <system>__WRL_WINRT_STRICT__</system> macro definition is removed. </para>
    </content>
  </languageReferenceRemarks>
  <requirements>
    <content>
      <para>
        <embeddedLabel>Header: </embeddedLabel>module.h</para>
      <para>
        <embeddedLabel>Namespace: </embeddedLabel>Microsoft::WRL</para>
    </content>
  </requirements>
  <relatedTopics>
    <link xlink:href="dd67e3b8-c2e1-4f53-8c0f-565a140ba649">Module Class</link>
  </relatedTopics>
</developerReferenceWithSyntaxDocument>