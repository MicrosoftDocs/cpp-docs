    private ReadOnlyCollection<SmartTagActionSet> GetSmartTagActions(SnapshotSpan span)
    {
        List<SmartTagActionSet> actionSetList = new List<SmartTagActionSet>();
        List<ISmartTagAction> actionList = new List<ISmartTagAction>();

        ITrackingSpan trackingSpan = span.Snapshot.CreateTrackingSpan(span, SpanTrackingMode.EdgeInclusive);
        actionList.Add(new UpperCaseSmartTagAction(trackingSpan));
        actionList.Add(new LowerCaseSmartTagAction(trackingSpan));
        SmartTagActionSet actionSet = new SmartTagActionSet(actionList.AsReadOnly());
        actionSetList.Add(actionSet);
        return actionSetList.AsReadOnly();
    }