using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace ArduArm
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            serialPort1.Open();
            if (serialPort1.IsOpen)
            {
                serialPort1.WriteLine("A");
            }
            serialPort1.Close();
            label1.BackColor = Color.Blue;
        }

        private void button2_Click(object sender, EventArgs e)
        {
            serialPort1.Open();
            if (serialPort1.IsOpen)
            {
                serialPort1.WriteLine("B");
            }
            serialPort1.Close();
            label5.BackColor = Color.Orange;
        }

        private void button9_Click(object sender, EventArgs e)
        {
            serialPort1.Open();
            if (serialPort1.IsOpen)
            {
                serialPort1.WriteLine("C");
            }
            serialPort1.Close();
            label1.BackColor = Color.Gray;
            label2.BackColor = Color.Gray;
            label3.BackColor = Color.Gray;
            label4.BackColor = Color.Gray;
            label5.BackColor = Color.Gray;
            label6.BackColor = Color.Gray;
            label7.BackColor = Color.Gray;
            label8.BackColor = Color.Gray;
        }
    }
}
