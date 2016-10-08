---
title: "Asynchronous Agents Library"
ms.custom: na
ms.date: 10/07/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: d2a72a31-8ba6-4220-ad7a-e403a6acaa42
caps.latest.revision: 26
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
# Asynchronous Agents Library
<?xml version="1.0" encoding="utf-8"?>
<developerConceptualDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>The Asynchronous Agents Library (or just <newTerm>Agents Library</newTerm>) provides a programming model that lets you increase the robustness of concurrency-enabled application development. The Agents Library is a C++ template library that promotes an actor-based programming model and in-process message passing for coarse-grained dataflow and pipelining tasks. The Agents Library builds on the scheduling and resource management components of the Concurrency Runtime.</para>
  </introduction>
  <section>
    <title>Programming Model</title>
    <content>
      <para>The Agents Library provides alternatives to shared state by letting you connect isolated components through an asynchronous communication model that is based on dataflow instead of control flow. <newTerm>Dataflow</newTerm> refers to a programming model where computations are made when all required data is available; <newTerm>control flow</newTerm> refers to a programming model where computations are made in a predetermined order.</para>
      <para>The dataflow programming model is related to the concept of <newTerm>message passing</newTerm>, where independent components of a program communicate with one another by sending messages.</para>
      <para>The Agents Library is composed of three components: <newTerm>asynchronous agents</newTerm>, <newTerm>asynchronous message blocks</newTerm>, and <newTerm>message-passing functions</newTerm>. Agents maintain state, and use message blocks and message-passing functions to communicate with one another and with external components. Message-passing functions enable agents to send and receive messages to and from the external components. Asynchronous message blocks hold messages and enable agents to communicate in a synchronized manner.</para>
      <para>The following illustration shows how two agents use message blocks and message-passing functions to communicate. In this illustration, <unmanagedCodeEntityReference>agent1</unmanagedCodeEntityReference> sends a message to <unmanagedCodeEntityReference>agent2</unmanagedCodeEntityReference> by using the <legacyLink xlink:href="8713fb36-066b-47de-af12-589fa74805d6">concurrency::send</legacyLink> function and a <legacyLink xlink:href="6b1a939a-1819-4385-b1d8-708f83d4ec47">concurrency::unbounded_buffer</legacyLink> object. <unmanagedCodeEntityReference>agent2</unmanagedCodeEntityReference> uses the <legacyLink xlink:href="f36bbca1-97ac-4343-bfac-ea71ca2139e9">concurrency::receive</legacyLink> function to read the message. <unmanagedCodeEntityReference>agent2</unmanagedCodeEntityReference> uses the same method to send a message to <unmanagedCodeEntityReference>agent1</unmanagedCodeEntityReference>. Dashed arrows represent the flow of data between agents. Solid arrows connect the agents to the message blocks that they write to or read from.</para>
      <mediaLink>
        <image xlink:href="76c8cc6d-e5c9-42ea-8f6e-e17e3b6b6a06" />
      </mediaLink>
      <para>A code example that implements this illustration is shown later in this topic.</para>
      <para>The agent programming model has several advantages over other concurrency and synchronization mechanisms, for example, events. One advantage is that by using message passing to transmit state changes between objects, you can isolate access to shared resources, and thereby improve scalability. An advantage to message passing is that it ties synchronization to data instead of tying it to an external synchronization object. This simplifies data transmission among components and can eliminate programming errors in your applications.</para>
    </content>
  </section>
  <section>
    <title>When to Use the Agents Library</title>
    <content>
      <para>Use the Agents library when you have multiple operations that must communicate with one another asynchronously. Message blocks and message-passing functions let you write parallel applications without requiring synchronization mechanisms such as locks. This lets you focus on application logic.</para>
      <para>The agent programming model is often used to create <newTerm>data pipelines</newTerm> or <newTerm>networks</newTerm>. A data pipeline is a series of components, each of which performs a specific task that contributes to a larger goal. Every component in a dataflow pipeline performs work when it receives a message from another component. The result of that work is passed to other components in the pipeline or network. The components can use more fine-grained concurrency functionality from other libraries, for example, the <link xlink:href="40fd86b2-69fa-45e5-93d8-98a75636c242">Parallel Patterns Library (PPL)</link>.</para>
    </content>
  </section>
  <section>
    <title>Example</title>
    <content>
      <para>The following example implements the illustration shown earlier in this topic.</para>
      <codeReference>concrt-basic-agents#1</codeReference>
      <para>This example produces the following output:</para>
      <computerOutput>agent1: sending request...
agent2: received 'request'.
agent2: sending response...
agent1: received '42'.</computerOutput>
      <para>The following topics describe the functionality used in this example.</para>
    </content>
  </section>
  <section>
    <title>Related Topics</title>
    <content>
      <definitionTable>
        <definedTerm>
          <link xlink:href="6cf6ccc6-87f1-4e14-af15-ea8ba58fef1a">Asynchronous Agents</link>
        </definedTerm>
        <definition>
          <para>Describes the role of asynchronous agents in solving larger computing tasks.</para>
        </definition>
        <definedTerm>
          <link xlink:href="79c456c0-1692-480c-bb67-98f2434c1252">Asynchronous Message Blocks</link>
        </definedTerm>
        <definition>
          <para>Describes the various message block types that are provided by the Agents Library.</para>
        </definition>
        <definedTerm>
          <link xlink:href="42477c9e-a8a6-4dc4-a98e-93c6dc8c4dd0">Message Passing Functions</link>
        </definedTerm>
        <definition>
          <para>Describes the various message passing routines that are provided by the Agents Library.</para>
        </definition>
        <definedTerm>
          <link xlink:href="75f2c7cc-5399-49ea-98eb-847fe6747169">How to: Implement Various Producer-Consumer Patterns</link>
        </definedTerm>
        <definition>
          <para>Describes how to implement the producer-consumer pattern in your application.</para>
        </definition>
        <definedTerm>
          <link xlink:href="df715ce4-8507-41ca-b204-636d11707a73">How to: Use the call and transformer Classes</link>
        </definedTerm>
        <definition>
          <para>Illustrates several ways to provide work functions to the <legacyLink xlink:href="1521970a-1e9c-4b0c-a681-d18e40976f49">concurrency::call</legacyLink> and <legacyLink xlink:href="eea71925-7043-4a92-bfd4-dbc0ece5d081">concurrency::transformer</legacyLink> classes.</para>
        </definition>
        <definedTerm>
          <link xlink:href="ca49cb3f-4dab-4b09-a9c9-d3a109ae4c29">How to: Use transformer in a Data Pipeline</link>
        </definedTerm>
        <definition>
          <para>Shows how to use the <legacyLink xlink:href="eea71925-7043-4a92-bfd4-dbc0ece5d081">concurrency::transformer</legacyLink> class in a data pipeline.</para>
        </definition>
        <definedTerm>
          <link xlink:href="c8ccc160-043f-4599-847b-32ed270bb257">How to: Select Among Completed Tasks</link>
        </definedTerm>
        <definition>
          <para>Shows how to use the <legacyLink xlink:href="4157a539-d5c2-4161-b1ab-536ce2888397">concurrency::choice</legacyLink> and <legacyLink xlink:href="d2217119-70a1-40b6-809f-c1c13a571c3f">concurrency::join</legacyLink> classes to select the first task to complete a search algorithm.</para>
        </definition>
        <definedTerm>
          <link xlink:href="4b60ea6c-97c8-4d69-9f7b-ad79f3548026">How to: Send a Message at a Regular Interval</link>
        </definedTerm>
        <definition>
          <para>Shows how to use the <legacyLink xlink:href="4f4dea51-de9f-40f9-93f5-dd724c567b49">concurrency::timer</legacyLink> class to send a message at a regular interval.</para>
        </definition>
        <definedTerm>
          <link xlink:href="db6b99fb-288d-4477-96dc-b9751772ebb2">How-to: Use a Message Block Filter</link>
        </definedTerm>
        <definition>
          <para>Demonstrates how to use a filter to enable an asynchronous message block to accept or reject messages.</para>
        </definition>
        <definedTerm>
          <link xlink:href="40fd86b2-69fa-45e5-93d8-98a75636c242">Parallel Patterns Library (PPL)</link>
        </definedTerm>
        <definition>
          <para>Describes how to use various parallel patterns, such as parallel algorithms, in your applications.</para>
        </definition>
        <definedTerm>
          <link xlink:href="874bc58f-8dce-483e-a3a1-4dcc9e52ed2c">Concurrency Runtime</link>
        </definedTerm>
        <definition>
          <para>Describes the Concurrency Runtime, which simplifies parallel programming, and contains links to related topics.</para>
        </definition>
      </definitionTable>
    </content>
  </section>
  <relatedTopics />
</developerConceptualDocument>