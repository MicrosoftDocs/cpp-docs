# Voice and tone guidelines

A wide variety of people, including IT Pros and developers, read your documents, both to learn
Microsoft C++ and to use it in their regular work. Your goal is to create great documentation
that helps the reader on their journey. Our guidelines help with this goal. Our style guide
contains the following recommendations:

- [Use a conversational tone](#use-a-conversational-tone)
- [Write in second person](#write-in-second-person)
- [Use active voice](#use-active-voice)
- [Target a fifth grade reading level](#target-a-fifth-grade-reading-level)
- [Avoid future tense](#avoid-future-tense)
- [What is it, and why use it](#what-is-it-and-why-use-it)

You can see examples of each of these recommendations as you read this style guide. We've
written this guide following our guidelines to provide examples for you to follow as you build
documentation for C++. We also provide contrasting samples, so you can see what articles look
like when you don't follow our guidelines. Here are the details on what we recommend:

## Use a conversational tone

### Appropriate style:

We want our documentation to have a conversational tone. Hopefully, you'll feel as though you're
having a conversation with the author as you read any of our tutorials or explanations.
For you, the experience ought to be informal, conversational, and informative. Readers should
feel as though they're listening to the author explain the concepts to them.

### Inappropriate style:

One might see the contrast between a conversational style, and the style one finds with
more academic treatments of technical subjects. Those resources are useful, but the authors
have written their articles in a qualitatively different style than our documentation. When one
reads an academic journal, one finds a largely formal tone, and a substantially different style
of writing. It feels as though one is reading a dry account of an even drier subject.

The first paragraph above follows our recommendation conversational style. The second one
is a more academic style. You can see the difference immediately.

## Write in second person

### Appropriate style:

Write your articles as though you're speaking directly to the reader. Use the second person
often as you write (as I just have in these two sentences). Second person doesn't always mean
using the word 'you'. Write directly to the reader. Write imperative sentences. Tell your
reader what you want them to learn.

### Inappropriate style:

An author could also choose to write in third person. In that model, an author must find some
pronoun or noun to use when referring to the reader. A reader might often find this third
person style less engaging, and less enjoyable to read.

The first paragraph follows our recommended style. You probably found it much easier to read.
The second uses third person, which readers may find more difficult. That's why we recommend
you write in second person.

## Use active voice

Write your articles in active voice. Active voice means the subject of the sentence does
the action (verb) of that sentence. It contrasts with passive voice, where the sentence is
arranged so the subject of the sentence is acted upon. Consider these two examples:

> The compiler transformed source code into an executable.

> The source code was transformed into an executable by the compiler.

The first sentence uses active voice. The second sentence was written in passive voice.
(These two sentences provide another example of each style).

We recommend active voice because it's more readable. Passive voice can be more difficult to
read.

## Target a fifth grade reading level

We provide this final guideline because many of our readers aren't native English speakers.
You reach an international audience with your articles. Please take into account that
they may not have the English vocabulary you have.

Remember, you're still writing for technical professionals. You can assume that your readers
have programming knowledge and the specific vocabulary for programming terms. *Object-oriented
programming*, *class*, *object*, *function*, and *method* are familiar terms. However, not
everyone that reads your articles has a formal computer science degree. Terms like 'idempotent'
probably need to be defined if you use them:

> The `Close()` method is *idempotent*, which means you can call it multiple times, and the
> effect is the same as if you called it once.

## Avoid future tense

In some non-English languages, the concept of future tense isn't the same as English. Use of
future tense can make your documents harder to read. And, when using the future tense, the
obvious question is *when*. If you say 'Learning PowerShell will be good for you," the obvious
question for the reader is, when will it be good? You can just say "Learning PowerShell is
good for you," instead.

## What is it, and why use it

Whenever you introduce a new concept to the reader, define the concept first. Only then explain
why it's useful. It's important for readers to understand what something is before they can
understand the benefits (or otherwise).
