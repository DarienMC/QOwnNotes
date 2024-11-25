#pragma once

#include "masterdialog.h"

namespace Ui {
class TextDiffDialog;
}

class QButtonGroup;
class QCheckBox;
class QAbstractButton;

class TextDiffDialog : public MasterDialog {
    Q_OBJECT

   public:
    explicit TextDiffDialog(QWidget *parent = nullptr, const QString &title = QString(),
                            const QString &labelText = QString(), const QString &text1 = QString(),
                            const QString &text2 = QString());
    ~TextDiffDialog();
    bool resultAccepted();
    QString resultText();

   private slots:
    void dialogButtonClicked(QAbstractButton *button);

   private:
    Ui::TextDiffDialog *ui;
    bool accepted = false;
};
