    public string DisplayText
    {
        get { return m_display; }
    }
    public ImageSource Icon
    {
        get { return null; }
    }
    public bool IsEnabled
    {
        get { return true; }
    }

    public ISmartTagSource Source
    {
        get;
        private set;
    }

    public ReadOnlyCollection<SmartTagActionSet> ActionSets
    {
        get { return null; }
    }