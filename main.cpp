#include <QtCore>
#include <QtGui>
#include <iostream>

class MainWindow : public QWidget
{
private:
    //Anlegen der buttons
    QLineEdit *display;
    QGridLayout *layout;
    QPushButton *button_0;
    QPushButton *button_1;
    QPushButton *button_2;
    QPushButton *button_3;
    QPushButton *button_4;
    QPushButton *button_5;
    QPushButton *button_6;
    QPushButton *button_7;
    QPushButton *button_8;
    QPushButton *button_9;
    QPushButton *button_add;
    QPushButton *button_subtract;
    QPushButton *button_multiply;
    QPushButton *button_divide;
    QPushButton *button_equals;
    QPushButton *button_clear;
    QPushButton *button_decimal;

    //Definition der Zahlen und Operationen
    double zahl_1;
    double zahl_2;
    double ergebnis;
    char operation;

    //Anlegen der Methoden (Funktionen in einer Klasse)
    void button_0_clicked();
    void button_1_clicked();
    void button_2_clicked();
    void button_3_clicked();
    void button_4_clicked();
    void button_5_clicked();
    void button_6_clicked();
    void button_7_clicked();
    void button_8_clicked();
    void button_9_clicked();
    void button_add_clicked();
    void button_subtract_clicked();
    void button_multiply_clicked();
    void button_divide_clicked();
    void button_equals_clicked();
    void button_clear_clicked();
    void button_decimal_clicked();

public:
    MainWindow();
};

MainWindow::MainWindow()
{
    setMinimumSize(700, 350);

    display = new QLineEdit("0", this);
    display->setReadOnly(true);
    display->setAlignment(Qt::AlignRight);
    display->setMaxLength(50);

    //Erstellen der Buttons
    button_0 = new QPushButton("0", this);
    button_1 = new QPushButton("1", this);
    button_2 = new QPushButton("2", this);
    button_3 = new QPushButton("3", this);
    button_4 = new QPushButton("4", this);
    button_5 = new QPushButton("5", this);
    button_6 = new QPushButton("6", this);
    button_7 = new QPushButton("7", this);
    button_8 = new QPushButton("8", this);
    button_9 = new QPushButton("9", this);
    button_add = new QPushButton("+", this);
    button_subtract = new QPushButton("-", this);
    button_multiply = new QPushButton("*", this);
    button_divide = new QPushButton("/", this);
    button_equals = new QPushButton("=",this);
    button_clear = new QPushButton("Löschen",this);
    button_decimal = new QPushButton(".",this);

    //Layout der Buttons
    layout = new QGridLayout(this);
    layout->addWidget(display, 0, 0, 1, 4);
    layout->addWidget(button_7, 1, 0);
    layout->addWidget(button_8, 1, 1);
    layout->addWidget(button_9, 1, 2);
    layout->addWidget(button_divide, 1, 3);
    layout->addWidget(button_4, 2, 0);
    layout->addWidget(button_5, 2, 1);
    layout->addWidget(button_6, 2, 2);
    layout->addWidget(button_multiply, 2, 3);
    layout->addWidget(button_1, 3, 0);
    layout->addWidget(button_2, 3, 1);
    layout->addWidget(button_3, 3, 2);
    layout->addWidget(button_subtract, 3, 3);
    layout->addWidget(button_0, 4, 0);
    layout->addWidget(button_decimal, 4, 1);
    layout->addWidget(button_equals, 4, 2);
    layout->addWidget(button_add, 4, 3);
    layout->addWidget(button_clear, 5, 0);

    setLayout(layout);

    //Verbinden der Buttons mit ihren Funktionen
    connect(button_0, &QPushButton::clicked, this, &MainWindow::button_0_clicked);
    connect(button_1, &QPushButton::clicked, this, &MainWindow::button_1_clicked);
    connect(button_2, &QPushButton::clicked, this, &MainWindow::button_2_clicked);
    connect(button_3, &QPushButton::clicked, this, &MainWindow::button_3_clicked);
    connect(button_4, &QPushButton::clicked, this, &MainWindow::button_4_clicked);
    connect(button_5, &QPushButton::clicked, this, &MainWindow::button_5_clicked);
    connect(button_6, &QPushButton::clicked, this, &MainWindow::button_6_clicked);
    connect(button_7, &QPushButton::clicked, this, &MainWindow::button_7_clicked);
    connect(button_8, &QPushButton::clicked, this, &MainWindow::button_8_clicked);
    connect(button_9, &QPushButton::clicked, this, &MainWindow::button_9_clicked);
    connect(button_decimal, &QPushButton::clicked, this, &MainWindow::button_decimal_clicked);
    connect(button_add, &QPushButton::clicked, this, &MainWindow::button_add_clicked);
    connect(button_subtract, &QPushButton::clicked, this, &MainWindow::button_subtract_clicked);
    connect(button_multiply, &QPushButton::clicked, this, &MainWindow::button_multiply_clicked);
    connect(button_divide, &QPushButton::clicked, this, &MainWindow::button_divide_clicked);
    connect(button_equals, &QPushButton::clicked, this, &MainWindow::button_equals_clicked);
    connect(button_clear, &QPushButton::clicked, this, &MainWindow::button_clear_clicked);
}

//Funktionen der Buttons
void MainWindow::button_0_clicked()
{
    if(display->text() == "0")
    {
        display->clear();
    }
    display->insert("0");
}

void MainWindow::button_1_clicked()
{
    if(display->text() == "0")
    {
        display->clear();
    }
    display->insert("1");
}

void MainWindow::button_2_clicked()
{
    if(display->text() == "0")
    {
        display->clear();
    }
    display->insert("2");
}

void MainWindow::button_3_clicked()
{
    if(display->text() == "0")
    {
        display->clear();
    }
    display->insert("3");
}

void MainWindow::button_4_clicked()
{
    if(display->text() == "0")
    {
        display->clear();
    }
    display->insert("4");
}

void MainWindow::button_5_clicked()
{
    if(display->text() == "0")
    {
        display->clear();
    }
    display->insert("5");
}

void MainWindow::button_6_clicked()
{
    if(display->text() == "0")
    {
        display->clear();
    }
    display->insert("6");
}

void MainWindow::button_7_clicked()
{
    if(display->text() == "0")
    {
        display->clear();
    }
    display->insert("7");
}

void MainWindow::button_8_clicked()
{
    if(display->text() == "0")
    {
        display->clear();
    }
    display->insert("8");
}

void MainWindow::button_9_clicked()
{
    if(display->text() == "0")
    {
        display->clear();
    }
    display->insert("9");
}

void MainWindow::button_decimal_clicked()
{
    if(!display->text().contains("."))
    {
        display->insert(".");
    }
}

void MainWindow::button_add_clicked()
{
    zahl_1 = display->text().toDouble();
    operation = '+';
    display->clear();
}

void MainWindow::button_subtract_clicked()
{
    zahl_1 = display->text().toDouble();
    operation = '-';
    display->clear();
}

void MainWindow::button_multiply_clicked()
{
    zahl_1 = display->text().toDouble();
    operation = '*';
    display->clear();
}

void MainWindow::button_divide_clicked()
{
    zahl_1 = display->text().toDouble();
    operation = '/';
    display->clear();
}


void MainWindow::button_equals_clicked()
{
    zahl_2 = display->text().toDouble();

    if(operation == '+')
    {
        ergebnis = zahl_1+ zahl_2;
    }
    else if(operation == '-')
    {
        ergebnis = zahl_1 - zahl_2;
    }
    else if(operation == '*')
    {
        ergebnis = zahl_1 * zahl_2;
    }
    else if(operation == '/')
    {
        if(zahl_2 != 0)
        {
            ergebnis = zahl_1 / zahl_2;
        }
        else
        {
            display->setText("Ahh! Du sollst nicht durch 0 Teilen! ERROR");
            return;
        }
    }

    display->setText(QString::number(ergebnis));
}

/*
void MainWindow::button_equals_clicked()
{
    zahl_2 = display->text().toDouble();

    switch (operation)
    {
    case '+':
        ergebnis = zahl_1 + zahl_2;
        break;

    case '-':
        ergebnis = zahl_1 - zahl_2;
        break;

    case '*':
        ergebnis = zahl_1 * zahl_2;
        break;

    case '/':
        ergebnis = zahl_1 / zahl_2;
        break;
    }

    display->setText(QString::number(ergebnis));
}
*/

void MainWindow::button_clear_clicked()
{
    display->clear();
    display->setText("0");
    zahl_1 = 0;
    zahl_2 = 0;
    ergebnis = 0;
}

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    MainWindow *window = new MainWindow();
    window->show();

    return app.exec();
}