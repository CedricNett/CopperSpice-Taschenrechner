#include <QtCore>
#include <QtGui>

class MainWindow : public QWidget
{
   public:
      MainWindow();

   private:
      double operand1;
      double operand2;
      double ergebnis;
      char operation;
};

MainWindow::MainWindow()
{
   setMinimumSize(700, 350);

   //Erstellen der Felder
   QLabel *feld1 = new QLabel("<h3>Feld 1:</h3>");

   QLineEdit *eingabe_1 = new QLineEdit();
   eingabe_1->setText("");
   eingabe_1->setMinimumSize(50, 35);
   eingabe_1->setEchoMode(QLineEdit::Normal);

   QLabel *feld2 = new QLabel("<h3>Feld 2:</h3>");

   QLineEdit *eingabe_2 = new QLineEdit();
   eingabe_2->setText("");
   eingabe_2->setMinimumSize(50, 35);
   eingabe_2->setEchoMode(QLineEdit::Normal);

   QLabel *feld3 = new QLabel("<h3>Ergebnis:</h3>");

   QLineEdit *text_3 = new QLineEdit();
   text_3->setMinimumSize(50, 35);
   text_3->setEchoMode(QLineEdit::Normal);

   QPushButton *pb_1 = new QPushButton();
   pb_1->setText("Schließen");

   //Erstellen der Buttons
   QPushButton *pb_2 = new QPushButton();
   pb_2->setText("+");

   QPushButton *pb_3 = new QPushButton();
   pb_3->setText("-");

   QPushButton *pb_4 = new QPushButton();
   pb_4->setText("x");
   
   QPushButton *pb_5 = new QPushButton();
   pb_5->setText("÷");

   //Erstellen der Layouts
   QHBoxLayout *layout1 = new QHBoxLayout();
   layout1->addStretch();
   layout1->addSpacing(25);
   layout1->addWidget(feld1);
   layout1->addWidget(eingabe_1);
   layout1->addSpacing(75);
   layout1->addWidget(feld2);
   layout1->addWidget(eingabe_2);
   layout1->addSpacing(25);
   layout1->addStretch();

   QHBoxLayout *layout2 = new QHBoxLayout();
   layout2->addStretch();
   layout2->addWidget(feld3);
   layout2->addWidget(text_3);
   layout2->addStretch();

   QHBoxLayout *layout3 = new QHBoxLayout();
   layout3->addStretch();
   layout3->addWidget(pb_2);
   layout3->addSpacing(5);
   layout3->addWidget(pb_3);
   layout3->addSpacing(5);
   layout3->addWidget(pb_4);
   layout3->addSpacing(5);
   layout3->addWidget(pb_5);
   layout3->addStretch();

   QHBoxLayout *layout4 = new QHBoxLayout();
   layout4->addStretch();
   layout4->addWidget(pb_1);
   layout4->addStretch();

   QVBoxLayout *layoutMain = new QVBoxLayout(this);
   layoutMain->addLayout(layout1);
   layoutMain->addSpacing(20);
   layoutMain->addLayout(layout2);
   layoutMain->addSpacing(20);
   layoutMain->addLayout(layout3);
   layoutMain->addSpacing(15);
   layoutMain->addLayout(layout4);

   //Verbindung der Buttons
   connect(pb_1, &QPushButton::clicked, this, &QWidget::close);

   //connect(pb_2, &QPushButton::clicked, this, &operant::operation);

   /*
   void Calculator::operation()
   {
      operand2 = display->text().toDouble();
      if(operation == '+')
      {
         ergebnis = operand1+ operand2;
      } 
      
      else if(operation == '-')
      {
         ergebnis = operand1 - operand2;
      }
      
      else if(operation == '*')
      {
         ergebnis = operand1 * operand2;
      }
      
      else if(operation == '/')
      {
         if(operand2 != 0)
         {
               ergebnis = operand1 / operand2;
         }

         else
         {
               display->ergebnis("Error: Division by 0");
               return;
         }
      }

      display->ergebnis(QString::number(ergebnis));
   }
   */
   
}

int main(int argc, char *argv[])
{
   QApplication app(argc, argv);

   MainWindow *window = new MainWindow();
   window->show();

   return app.exec();
}
