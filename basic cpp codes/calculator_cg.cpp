
#include <QWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QGridLayout>
int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    QWidget window;
    window.setWindowTitle("Calculator");
    QGridLayout *gridLayout = new QGridLayout(&window);
    QLineEdit *display = new QLineEdit(&window);
    display->setAlignment(Qt::AlignRight);
    display->setReadOnly(true);
    gridLayout->addWidget(display, 0, 0, 1, 4);
    QPushButton *buttons[10];
    for (int i = 0; i < 10; ++i) 
    {
        buttons[i] = new QPushButton(QString::number(i), &window);
        gridLayout->addWidget(buttons[i], (9 - i) / 3 + 1, (i - 1) % 3);
    }
    QPushButton *addButton = new QPushButton("+", &window);
    QPushButton *subtractButton = new QPushButton("-", &window);
    QPushButton *multiplyButton = new QPushButton("*", &window);
    QPushButton *divideButton = new QPushButton("/", &window);
    QPushButton *equalButton = new QPushButton("=", &window);
    QPushButton *clearButton = new QPushButton("C", &window);

    gridLayout->addWidget(addButton, 4, 3);
    gridLayout->addWidget(subtractButton, 3, 3);
    gridLayout->addWidget(multiplyButton, 2, 3);
    gridLayout->addWidget(divideButton, 1, 3);
    gridLayout->addWidget(equalButton, 4, 2);
    gridLayout->addWidget(clearButton, 4, 0);
    window.setLayout(gridLayout);
    window.show();
    return app.exec();
}
