#include <QtCore>
#include <QtGui>

class MainWindow : public QWidget
{
   public:
      MainWindow();
};

MainWindow::MainWindow()
{
   setMinimumSize(700, 350);

   QLabel *feld1 = new QLabel("<h3>Eingabe 1:</h3>");

   QLineEdit *text_1 = new QLineEdit();
   text_1->setText("");
   text_1->setMinimumSize(50, 35);
   text_1->setEchoMode(QLineEdit::Normal);

   QLabel *feld2 = new QLabel("<h3>Eingabe 2:</h3>");

   QLineEdit *text_2 = new QLineEdit();
   text_2->setText("");
   text_2->setMinimumSize(50, 35);
   text_2->setEchoMode(QLineEdit::Normal);

   QLabel *ausgabe = new QLabel("<h3>Ausgabe</h3>");

   QLineEdit *text_3 = new QLineEdit();

   QPushButton *pb_1 = new QPushButton();
   pb_1->setText("Schließen");

   QPushButton *pb_2 = new QPushButton();
   pb_2->setText("+");

   QPushButton *pb_3 = new QPushButton();
   pb_3->setText("-");

   QPushButton *pb_4 = new QPushButton();
   pb_4->setText("x");
   
   QPushButton *pb_5 = new QPushButton();
   pb_5->setText("÷");

   QVBoxLayout *layout1 = new QVBoxLayout();
   layout1->addSpacing(75);
   layout1->addWidget(feld1);layout1->addWidget(text_1);
   layout1->addSpacing(35);
   layout1->addWidget(feld2);layout1->addWidget(text_2);
   layout1->addSpacing(35);

   QHBoxLayout *layout2 = new QHBoxLayout();
   layout2->addSpacing(25);
   layout2->addStretch();
   layout2->addWidget(feld1);
   layout2->addSpacing(75);
   layout2->addWidget(feld2);
   layout2->addStretch();
   layout2->addSpacing(25);

   QHBoxLayout *layout3 = new QHBoxLayout();
   layout3->addStretch();
   layout3->addWidget(pb_2);
   layout3->addWidget(pb_3);
   layout3->addWidget(pb_4);
   layout3->addWidget(pb_5);
   layout3->addStretch();

   QHBoxLayout *layout4 = new QHBoxLayout();
   layout4->addStretch();
   layout4->addWidget(pb_1);
   layout4->addStretch();

   QVBoxLayout *layoutMain = new QVBoxLayout(this);
   layoutMain->addLayout(layout1);
   layoutMain->addSpacing(40);
   layoutMain->addLayout(layout2);
   layoutMain->addSpacing(20);
   layoutMain->addLayout(layout3);
   layoutMain->addSpacing(15);
   layoutMain->addLayout(layout4);

   connect(pb_1, &QPushButton::clicked, this, &QWidget::close);

   /*
   void Calculator::button_equals_clicked()
   {
      operand2 = display->text().toDouble();
      if(operation == '+')
      {
         result = operand1+ operand2;
      } 
      
      else if(operation == '-')
      {
         result = operand1 - operand2;
      }
      
      else if(operation == '*')
      {
         result = operand1 * operand2;
      }
      
      else if(operation == '/')
      {
         if(operand2 != 0)
         {
               result = operand1 / operand2;
         }

         else
         {
               display->setText("Error: Division by 0");
               return;
         }
      }

      display->setText(QString::number(result));
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
