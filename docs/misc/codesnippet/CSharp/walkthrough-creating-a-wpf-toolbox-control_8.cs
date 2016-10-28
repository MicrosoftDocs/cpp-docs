        public event EventHandler Incremented;
        public void Increment()
        {
            dm.Count ++;
            if (Incremented != null)
            {
                Incremented(this, EventArgs.Empty);
            }
        }