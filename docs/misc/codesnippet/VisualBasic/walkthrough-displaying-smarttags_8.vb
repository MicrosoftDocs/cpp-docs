    Private Function GetSmartTagActions(ByVal span As SnapshotSpan) As ReadOnlyCollection(Of SmartTagActionSet)
        Dim actionSetList As New List(Of SmartTagActionSet)()
        Dim actionList As New List(Of ISmartTagAction)()

        Dim trackingSpan As ITrackingSpan = span.Snapshot.CreateTrackingSpan(span, SpanTrackingMode.EdgeInclusive)
        actionList.Add(New UpperCaseSmartTagAction(trackingSpan))
        actionList.Add(New LowerCaseSmartTagAction(trackingSpan))
        Dim actionSet As New SmartTagActionSet(actionList.AsReadOnly())
        actionSetList.Add(actionSet)
        Return actionSetList.AsReadOnly()
    End Function