    [Serializable()]
    internal class Control2_ToolboxItem : ToolboxItem
    {
        public Control2_ToolboxItem(Type toolType)
            : base(toolType) { }

        public override void Initialize(Type toolType)
        {
            if (!toolType.Equals(typeof(Control2)))
            {
                throw new ArgumentException(
                    string.Format(CultureInfo.CurrentCulture,
                        "The {0} constructor argument must be of type {1}.",
                        this.GetType().FullName, typeof(Control2).FullName));
            }

            base.Initialize(toolType);
        }
    }