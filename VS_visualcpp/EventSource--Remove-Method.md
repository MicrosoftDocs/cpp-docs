---
title: "EventSource::Remove Method"
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
ms.assetid: afafedf5-3665-4408-a639-fb6884f7c5f9
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
# EventSource::Remove Method
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>Deletes the event handler represented by the specified event registration token from the set of event handlers associated with the current EventSource object.</para>
  </introduction>
  <syntaxSection>
    <legacySyntax>HRESULT Remove(
   EventRegistrationToken <parameterReference>token</parameterReference>
);</legacySyntax>
  </syntaxSection>
  <parameters>
    <content>
      <definitionTable>
        <definedTerm>
          <parameterReference>token</parameterReference>
        </definedTerm>
        <definition>
          <para>A handle that represents an event handler. This token was returned when the event handler was registered by the <legacyLink xlink:href="8bded85b-929e-4425-a464-e5de67bb774c">Add()</legacyLink> method.</para>
        </definition>
      </definitionTable>
    </content>
  </parameters>
  <returnValue>
    <content>
      <para>S_OK if successful; otherwise, an HRESULT that indicates the error.</para>
    </content>
  </returnValue>
  <section>
    <title>Remarks</title>
    <content>
      <para>For more information about the EventRegistrationToken structure, see the Windows::Foundation::EventRegistrationToken Structure topic in the Windows Runtime reference documentation.</para>
    </content>
  </section>
  <requirements>
    <content>
      <para>
        <embeddedLabel>Header: </embeddedLabel>event.h</para>
      <para>
        <embeddedLabel>Namespace: </embeddedLabel>Microsoft::WRL</para>
    </content>
  </requirements>
  <relatedTopics>
    <link xlink:href="91f1c072-6af4-44e6-b6d8-ac6d0c688dde">EventSource Class</link>
  </relatedTopics>
</developerReferenceWithSyntaxDocument>