#pragma once

#include <QToolBar>
#include "Cutter.h"

class MainWindow;

class DebugToolbar : public QToolBar
{
    Q_OBJECT

public:
    explicit DebugToolbar(MainWindow *main, QWidget *parent = nullptr);

private:
    MainWindow *main;
    QAction *actionStart;
    QAction *actionStartEmul;

private slots:
    void continueUntilMain();
    void colorToolbar(bool p);
    void attachProcessDialog();
    void attachProcess(int pid);
};