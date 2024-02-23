#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    // Initialize the text edit widget
    textEdit = new QPlainTextEdit(this);

    // Set the text edit widget as the central widget
    setCentralWidget(textEdit);

    // Display some text in the text edit widget
    textEdit->setPlainText("Hello world!");

    // Other initialization code for your main window
}

MainWindow::~MainWindow()
{
    // Clean up resources if needed
}
