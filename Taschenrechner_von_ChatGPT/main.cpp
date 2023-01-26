#include <QtCore>
#include <QtGui>
/*
#include <QApplication>
#include <QMainWindow>
#include <QLineEdit>
#include <QGridLayout>
#include <QPushButton>
*/
class Calculator : public QMainWindow {
 	//QObject
    //Q_SLOTS

public:
    Calculator(QWidget *parent = 0);
    ~Calculator();

private:
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
    double operand1;
    double operand2;
    double result;
    char operation;

//private slots:
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
};

Calculator::Calculator(QWidget *parent) : QMainWindow(parent) {

    setMinimumSize(700, 350);
    
    display = new QLineEdit("0", this);
    display->setReadOnly(true);
    display->setAlignment(Qt::AlignRight);
    display->setMaxLength(15);

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

    setLayout(layout);

    connect(button_0, &QPushButton::clicked, this, &Calculator::button_0_clicked);
    connect(button_1, &QPushButton::clicked, this, &Calculator::button_1_clicked);
    connect(button_2, &QPushButton::clicked, this, &Calculator::button_2_clicked);
    connect(button_3, &QPushButton::clicked, this, &Calculator::button_3_clicked);
    connect(button_4, &QPushButton::clicked, this, &Calculator::button_4_clicked);
    connect(button_5, &QPushButton::clicked, this, &Calculator::button_5_clicked);
    connect(button_6, &QPushButton::clicked, this, &Calculator::button_6_clicked);
    connect(button_7, &QPushButton::clicked, this, &Calculator::button_7_clicked);
    connect(button_8, &QPushButton::clicked, this, &Calculator::button_8_clicked);
    connect(button_9, &QPushButton::clicked, this, &Calculator::button_9_clicked);
    connect(button_decimal, &QPushButton::clicked, this, &Calculator::button_decimal_clicked);
    connect(button_add, &QPushButton::clicked, this, &Calculator::button_add_clicked);
    connect(button_subtract, &QPushButton::clicked, this, &Calculator::button_subtract_clicked);
    connect(button_multiply, &QPushButton::clicked, this, &Calculator::button_multiply_clicked);
    connect(button_divide, &QPushButton::clicked, this, &Calculator::button_divide_clicked);
    connect(button_equals, &QPushButton::clicked, this, &Calculator::button_equals_clicked);
    connect(button_clear, &QPushButton::clicked, this, &Calculator::button_clear_clicked);
}

Calculator::~Calculator() {}

void Calculator::button_0_clicked() {
    if(display->text() == "0") {
        display->clear();
    }
    display->insert("0");
}

void Calculator::button_1_clicked() {
    if(display->text() == "0") {
        display->clear();
    }
    display->insert("1");
}

void Calculator::button_2_clicked() {
    if(display->text() == "0") {
        display->clear();
    }
    display->insert("2");
}

void Calculator::button_3_clicked() {
    if(display->text() == "0") {
        display->clear();
    }
    display->insert("3");
}

void Calculator::button_4_clicked() {
    if(display->text() == "0") {
        display->clear();
    }
    display->insert("4");
}

void Calculator::button_5_clicked() {
    if(display->text() == "0") {
        display->clear();
    }
    display->insert("5");
}

void Calculator::button_6_clicked() {
    if(display->text() == "0") {
        display->clear();
    }
    display->insert("6");
}

void Calculator::button_7_clicked() {
    if(display->text() == "0") {
        display->clear();
    }
    display->insert("7");
}

void Calculator::button_8_clicked() {
    if(display->text() == "0") {
        display->clear();
    }
    display->insert("8");
}

void Calculator::button_9_clicked() {
    if(display->text() == "0") {
        display->clear();
    }
    display->insert("9");
}

void Calculator::button_decimal_clicked() {
    if(!display->text().contains(".")) {
        display->insert(".");
    }
}

void Calculator::button_add_clicked() {
    operand1 = display->text().toDouble();
    operation = '+';
    display->clear();
}

void Calculator::button_subtract_clicked() {
    operand1 = display->text().toDouble();
    operation = '-';
    display->clear();
}

void Calculator::button_multiply_clicked() {
    operand1 = display->text().toDouble();
    operation = '*';
    display->clear();
}

void Calculator::button_divide_clicked() {
    operand1 = display->text().toDouble();
    operation = '/';
    display->clear();
}

void Calculator::button_equals_clicked() {
    operand2 = display->text().toDouble();
    if(operation == '+') {
        result = operand1+ operand2;
    } else if(operation == '-') {
        result = operand1 - operand2;
    } else if(operation == '*') {
        result = operand1 * operand2;
    } else if(operation == '/') {
        if(operand2 != 0) {
            result = operand1 / operand2;
        } else {
            display->setText("Error: Division by 0");
            return;
        }
    }
    display->setText(QString::number(result));
}

void Calculator::button_clear_clicked() {
    display->clear();
    display->setText("0");
    operand1 = 0;
    operand2 = 0;
    result = 0;
}

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    Calculator calc;
    calc.show();
    return app.exec();
}

//#include "main.moc"