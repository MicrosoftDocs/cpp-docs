<Export(GetType(IViewTaggerProvider))>
<ContentType("text")>
<Order(Before:="default")>
<TagType(GetType(SmartTag))>
Friend Class TestSmartTaggerProvider
    Implements IViewTaggerProvider