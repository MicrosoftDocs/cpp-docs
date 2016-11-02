        private string text = "Count:";
        public string Text
        {
            get { return this.text; }
            set
            {
                this.text = value;
                RaisePropertyChanged("Text");
            }
        }

        private int count = 0;
        public int Count
        {
            get { return this.count; }
            set
            {
                this.count = value;
                RaisePropertyChanged("Count");
            }
        }