---
title: "Module::Create Method"
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
ms.assetid: bfa97fd7-5226-4604-92a5-3b9697053e64
caps.latest.revision: 2
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
# Module::Create Method
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>Creates an instance of a module.</para>
  </introduction>
  <syntaxSection>
    <legacySyntax>WRL_NOTHROW static Module&amp; Create();
template&lt;
   typename <parameterReference>T</parameterReference>
&gt;
WRL_NOTHROW static Module&amp; Create(
   <parameterReference>T</parameterReference> <parameterReference>callback</parameterReference>
);
template&lt;
   typename <parameterReference>T</parameterReference>
&gt;
WRL_NOTHROW static Module&amp; Create(
   _In_ T* <parameterReference>object</parameterReference>,
   _In_ void (T::* <parameterReference>method</parameterReference>)()
);</legacySyntax>
  </syntaxSection>
  <parameters>
    <content>
      <definitionTable>
        <definedTerm>
          <parameterReference>T</parameterReference>
        </definedTerm>
        <definition>
          <para>Module type.</para>
        </definition>
        <definedTerm>
          <parameterReference>callback</parameterReference>
        </definedTerm>
        <definition>
          <para>Called when the last instance object of the module is released.</para>
        </definition>
        <definedTerm>
          <parameterReference>object</parameterReference>
        </definedTerm>
        <definition>
          <para>The <parameterReference>object</parameterReference> and <parameterReference>method</parameterReference> parameters are used in combination. Points to the last instance object when the last instance object in the module is released.</para>
        </definition>
        <definedTerm>
          <parameterReference>method</parameterReference>
        </definedTerm>
        <definition>
          <para>The <parameterReference>object</parameterReference> and <parameterReference>method</parameterReference> parameters are used in combination. Points to the method of the last instance object when the last instance object in the module is released.</para>
        </definition>
      </definitionTable>
    </content>
  </parameters>
  <returnValue>
    <content>
      <para>Reference to the module.</para>
    </content>
  </returnValue>
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