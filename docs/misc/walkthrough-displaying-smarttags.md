---
title: "Walkthrough: Displaying SmartTags | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "editors [Visual Studio SDK], new - smart tags"
ms.assetid: 10bb4f69-b259-41f0-b91a-69b04385d9a5
caps.latest.revision: 31
manager: "douge"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Walkthrough: Displaying SmartTags
Smart tags are deprecated in favor of light bulbs. See [Walkthrough: Displaying Light Bulb Suggestions](../Topic/Walkthrough:%20Displaying%20Light%20Bulb%20Suggestions.md).  
  
 Smart tags are tags on text that expand to display a set of actions. For example, in a Visual Basic or Visual C# project, a red line appears under a word when you rename an identifier such as a variable name. When you move the pointer over the underline, a button is displayed near the pointer. If you click the button, a suggested action is displayed, for example, **Rename IsRead to IsReady**. If you click the action, all references to **IsRead** in the project are renamed **IsReady**.  
  
 Although smart tags are part of the IntelliSense implementation in the editor, you can implement smart tags by subclassing <xref:Microsoft.VisualStudio.Language.Intellisense.SmartTag>, and then implementing the <xref:Microsoft.VisualStudio.Text.Tagging.ITagger%601> interface and the <xref:Microsoft.VisualStudio.Text.Tagging.IViewTaggerProvider> interface.  
  
> [!NOTE]
>  Other kinds of tags can be implemented in a similar manner.  
  
 The following walkthrough shows how to create a smart tag that appears on the current word and has two suggested actions: **Convert to upper case** and **Convert to lower case**.  
  
## Prerequisites  
 To follow this walkthrough, you must install the Visual Studio SDK. For more information, see [Visual Studio SDK](/visual-studio/extensibility/visual-studio-sdk).  
  
## Creating a Managed Extensibility Framework (MEF) Project  
  
#### To create a MEF project  
  
1.  Create an Editor Classifier project. Name the solution `SmartTagTest`.  
  
2.  Open the source.extension.vsixmanifest file in the VSIX Manifest Editor.  
  
3.  Make sure that the **Assets** section contains a `Microsoft.VisualStudio.MefComponent` type, the **Source** is set to `A project in current solution`, and **Project** is set to SmartTagTest.dll.  
  
4.  Save and close source.extension.vsixmanifest.  
  
5.  Add the following reference to the project, and set **CopyLocal** to `false`:  
  
     Microsoft.VisualStudio.Language.Intellisense  
  
6.  Delete the existing class files.  
  
## Implementing a Tagger for Smart Tags  
  
#### To implement a tagger for smart tags  
  
1.  Add a class file and name it `TestSmartTag`.  
  
2.  Add the following imports:  
  
     [!code-cs[VSSDKSmartTagTest#1](../misc/codesnippet/CSharp/walkthrough-displaying-smarttags_1.cs)]
     [!code-vb[VSSDKSmartTagTest#1](../misc/codesnippet/VisualBasic/walkthrough-displaying-smarttags_1.vb)]  
  
3.  Add a class named `TestSmartTag` that inherits from <xref:Microsoft.VisualStudio.Language.Intellisense.SmartTag>.  
  
     [!code-cs[VSSDKSmartTagTest#2](../misc/codesnippet/CSharp/walkthrough-displaying-smarttags_2.cs)]
     [!code-vb[VSSDKSmartTagTest#2](../misc/codesnippet/VisualBasic/walkthrough-displaying-smarttags_2.vb)]  
  
4.  Add a constructor for this class that calls the base constructor with a <xref:Microsoft.VisualStudio.Language.Intellisense.SmartTagType> of <xref:Microsoft.VisualStudio.Language.Intellisense.SmartTagType>, which will cause a blue line to appear under the first character of a word. (If you use <xref:Microsoft.VisualStudio.Language.Intellisense.SmartTagType>, a red line will appear under the last character of the word.)  
  
     [!code-cs[VSSDKSmartTagTest#3](../misc/codesnippet/CSharp/walkthrough-displaying-smarttags_3.cs)]
     [!code-vb[VSSDKSmartTagTest#3](../misc/codesnippet/VisualBasic/walkthrough-displaying-smarttags_3.vb)]  
  
5.  Add a class named `TestSmartTagger` that inherits from <xref:Microsoft.VisualStudio.Text.Tagging.ITagger%601> of type `TestSmartTag`, and implements <xref:System.IDisposable>.  
  
     [!code-cs[VSSDKSmartTagTest#4](../misc/codesnippet/CSharp/walkthrough-displaying-smarttags_4.cs)]
     [!code-vb[VSSDKSmartTagTest#4](../misc/codesnippet/VisualBasic/walkthrough-displaying-smarttags_4.vb)]  
  
6.  Add the following private fields to the tagger class.  
  
     [!code-cs[VSSDKSmartTagTest#5](../misc/codesnippet/CSharp/walkthrough-displaying-smarttags_5.cs)]
     [!code-vb[VSSDKSmartTagTest#5](../misc/codesnippet/VisualBasic/walkthrough-displaying-smarttags_5.vb)]  
  
7.  Add a constructor that sets the private fields, and subscribes to the <xref:Microsoft.VisualStudio.Text.Editor.ITextView.LayoutChanged> event.  
  
     [!code-cs[VSSDKSmartTagTest#6](../misc/codesnippet/CSharp/walkthrough-displaying-smarttags_6.cs)]
     [!code-vb[VSSDKSmartTagTest#6](../misc/codesnippet/VisualBasic/walkthrough-displaying-smarttags_6.vb)]  
  
8.  Implement <xref:Microsoft.VisualStudio.Text.Tagging.ITagger%601.GetTags%2A> so that the tag is created for the current word. (This method also calls a private method `GetSmartTagActions` that is explained later.)  
  
     [!code-cs[VSSDKSmartTagTest#7](../misc/codesnippet/CSharp/walkthrough-displaying-smarttags_7.cs)]
     [!code-vb[VSSDKSmartTagTest#7](../misc/codesnippet/VisualBasic/walkthrough-displaying-smarttags_7.vb)]  
  
9. Add a `GetSmartTagActions` method to set up the smart tag actions. The actions themselves are implemented in later steps.  
  
     [!code-cs[VSSDKSmartTagTest#8](../misc/codesnippet/CSharp/walkthrough-displaying-smarttags_8.cs)]
     [!code-vb[VSSDKSmartTagTest#8](../misc/codesnippet/VisualBasic/walkthrough-displaying-smarttags_8.vb)]  
  
10. Declare the `SmartTagsChanged` event.  
  
     [!code-cs[VSSDKSmartTagTest#9](../misc/codesnippet/CSharp/walkthrough-displaying-smarttags_9.cs)]
     [!code-vb[VSSDKSmartTagTest#9](../misc/codesnippet/VisualBasic/walkthrough-displaying-smarttags_9.vb)]  
  
11. Implement the `OnLayoutChanged` event handler to raise the `TagsChanged` event, which causes <xref:Microsoft.VisualStudio.Text.Tagging.ITagger%601.GetTags%2A> to be called.  
  
     [!code-cs[VSSDKSmartTagTest#10](../misc/codesnippet/CSharp/walkthrough-displaying-smarttags_10.cs)]
     [!code-vb[VSSDKSmartTagTest#10](../misc/codesnippet/VisualBasic/walkthrough-displaying-smarttags_10.vb)]  
  
12. Implement the <xref:System.IDisposable.Dispose%2A> method so that it unsubscribes from the <xref:Microsoft.VisualStudio.Text.Editor.ITextView.LayoutChanged> event.  
  
     [!code-cs[VSSDKSmartTagTest#11](../misc/codesnippet/CSharp/walkthrough-displaying-smarttags_11.cs)]
     [!code-vb[VSSDKSmartTagTest#11](../misc/codesnippet/VisualBasic/walkthrough-displaying-smarttags_11.vb)]  
  
## Implementing the Smart Tag Tagger Provider  
  
#### To implement the smart tag tagger provider  
  
1.  Add a class named `TestSmartTagTaggerProvider` that inherits from <xref:Microsoft.VisualStudio.Text.Tagging.IViewTaggerProvider>. Export it with a <xref:Microsoft.VisualStudio.Utilities.ContentTypeAttribute> of "text", a <xref:Microsoft.VisualStudio.Utilities.OrderAttribute> of Before="default", and a <xref:Microsoft.VisualStudio.Text.Tagging.TagTypeAttribute> of <xref:Microsoft.VisualStudio.Language.Intellisense.SmartTag>.  
  
     [!code-cs[VSSDKSmartTagTest#12](../misc/codesnippet/CSharp/walkthrough-displaying-smarttags_12.cs)]
     [!code-vb[VSSDKSmartTagTest#12](../misc/codesnippet/VisualBasic/walkthrough-displaying-smarttags_12.vb)]  
  
2.  Import the <xref:Microsoft.VisualStudio.Text.Operations.ITextStructureNavigatorSelectorService> as a property.  
  
     [!code-cs[VSSDKSmartTagTest#13](../misc/codesnippet/CSharp/walkthrough-displaying-smarttags_13.cs)]
     [!code-vb[VSSDKSmartTagTest#13](../misc/codesnippet/VisualBasic/walkthrough-displaying-smarttags_13.vb)]  
  
3.  Implement the <xref:Microsoft.VisualStudio.Text.Tagging.IViewTaggerProvider.CreateTagger%2A> method.  
  
     [!code-cs[VSSDKSmartTagTest#14](../misc/codesnippet/CSharp/walkthrough-displaying-smarttags_14.cs)]
     [!code-vb[VSSDKSmartTagTest#14](../misc/codesnippet/VisualBasic/walkthrough-displaying-smarttags_14.vb)]  
  
## Implementing Smart Tag Actions  
  
#### To implement smart tag actions  
  
1.  Create two classes, the first named `UpperCaseSmartTagAction` and the second named `LowerCaseSmartTagAction`. Both classes implement <xref:Microsoft.VisualStudio.Language.Intellisense.ISmartTagAction>.  
  
     [!code-cs[VSSDKSmartTagTest#15](../misc/codesnippet/CSharp/walkthrough-displaying-smarttags_15.cs)]
     [!code-vb[VSSDKSmartTagTest#15](../misc/codesnippet/VisualBasic/walkthrough-displaying-smarttags_15.vb)]  
  
     [!code-cs[VSSDKSmartTagTest#16](../misc/codesnippet/CSharp/walkthrough-displaying-smarttags_16.cs)]
     [!code-vb[VSSDKSmartTagTest#16](../misc/codesnippet/VisualBasic/walkthrough-displaying-smarttags_16.vb)]  
  
 Both classes are alike except that one calls <xref:System.String.ToUpper%2A> and the other calls <xref:System.String.ToLower%2A>. The following steps cover only the uppercase action class, but you must implement both classes. Use the steps for implementing the uppercase action as a pattern for implementing the lowercase action.  
  
1.  Declare a set of private fields.  
  
     [!code-cs[VSSDKSmartTagTest#17](../misc/codesnippet/CSharp/walkthrough-displaying-smarttags_17.cs)]
     [!code-vb[VSSDKSmartTagTest#17](../misc/codesnippet/VisualBasic/walkthrough-displaying-smarttags_17.vb)]  
  
2.  Add a constructor that sets the fields.  
  
     [!code-cs[VSSDKSmartTagTest#18](../misc/codesnippet/CSharp/walkthrough-displaying-smarttags_18.cs)]
     [!code-vb[VSSDKSmartTagTest#18](../misc/codesnippet/VisualBasic/walkthrough-displaying-smarttags_18.vb)]  
  
3.  Implement the properties as follows.  
  
     [!code-cs[VSSDKSmartTagTest#19](../misc/codesnippet/CSharp/walkthrough-displaying-smarttags_19.cs)]
     [!code-vb[VSSDKSmartTagTest#19](../misc/codesnippet/VisualBasic/walkthrough-displaying-smarttags_19.vb)]  
  
4.  Implement the <xref:Microsoft.VisualStudio.Language.Intellisense.ISmartTagAction.Invoke%2A> method by replacing the text in the span with its uppercase equivalent.  
  
     [!code-cs[VSSDKSmartTagTest#20](../misc/codesnippet/CSharp/walkthrough-displaying-smarttags_20.cs)]
     [!code-vb[VSSDKSmartTagTest#20](../misc/codesnippet/VisualBasic/walkthrough-displaying-smarttags_20.vb)]  
  
## Building and Testing the Code  
 To test this code, build the SmartTagTest solution and run it in the experimental instance.  
  
#### To build and test the SmartTagTest solution  
  
1.  Build the solution.  
  
2.  When you run this project in the debugger, a second instance of Visual Studio is instantiated.  
  
3.  Create a text file and type some text.  
  
     A blue line should be displayed under the first letter of the first word of the text.  
  
4.  Move the pointer over the blue line.  
  
     A button should be displayed near the pointer.  
  
5.  When you click the button, two suggested actions should be displayed: **Convert to upper case** and **Convert to lower case**. If you click the first action, all the text in the current word should be converted to upper case. If you click the second action, all the text should be converted to lower case.  
  
## See Also  
 [Walkthrough: Linking a Content Type to a File Name Extension](../Topic/Walkthrough:%20Linking%20a%20Content%20Type%20to%20a%20File%20Name%20Extension.md)