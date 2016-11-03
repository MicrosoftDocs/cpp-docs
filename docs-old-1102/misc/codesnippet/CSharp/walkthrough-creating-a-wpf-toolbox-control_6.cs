        private MyDataModel dm;
        public Counter()
        {
            this.DataContext = new MyDataModel();
            dm = (MyDataModel)DataContext;
            InitializeComponent();            
        }