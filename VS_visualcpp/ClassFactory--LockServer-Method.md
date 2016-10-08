---
title: "ClassFactory::LockServer Method"
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
ms.assetid: 8d859815-956d-4f81-a5af-7cdee7e945de
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
# ClassFactory::LockServer Method
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>Increments or decrements the number of underlying objects that are tracked by the current ClassFactory object.</para>
  </introduction>
  <syntaxSection>
    <legacySyntax>STDMETHOD(
   LockServer
)(BOOL <parameterReference>fLock</parameterReference>);</legacySyntax>
  </syntaxSection>
  <parameters>
    <content>
      <definitionTable>
        <definedTerm>
          <parameterReference>fLock</parameterReference>
        </definedTerm>
        <definition>
          <para>
            <languageKeyword>true</languageKeyword> to increment the number of tracked objects. <languageKeyword>false</languageKeyword> to decrement the number of tracked objects.</para>
        </definition>
      </definitionTable>
    </content>
  </parameters>
  <returnValue>
    <content>
      <para>S_OK if successful; otherwise, E_FAIL.</para>
    </content>
  </returnValue>
  <section>
    <title>Remarks</title>
    <content>
      <para>ClassFactory keeps track of objects in an underlying instance of the <legacyLink xlink:href="dd67e3b8-c2e1-4f53-8c0f-565a140ba649">Module</legacyLink> class.</para>
    </content>
  </section>
  <requirements>
    <content>
      <para>
        <embeddedLabel>Header: </embeddedLabel>module.h</para>
      <para>
        <embeddedLabel>Namespace: </embeddedLabel>Microsoft::WRL</para>
    </content>
  </requirements>
  <relatedTopics>
    <link xlink:href="f13e6bce-722b-4f18-b7cf-3ffa6345c1db">ClassFactory Class</link>
  </relatedTopics>
</developerReferenceWithSyntaxDocument>