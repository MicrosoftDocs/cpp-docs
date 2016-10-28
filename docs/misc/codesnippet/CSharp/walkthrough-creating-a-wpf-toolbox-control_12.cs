        public MainWindow()
        {
            InitializeComponent();
            counter1.Incremented += new EventHandler(counter1_Incremented);
        }

        void counter1_Incremented(object sender, EventArgs e)
        {
            button1.Opacity -= .2;
        }