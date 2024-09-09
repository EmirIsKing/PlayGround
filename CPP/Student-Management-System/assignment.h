#ifndef ASSIGNMENT_H
#define ASSIGNMENT_H

#include <QWidget>

namespace Ui {
class assignment;
}

class assignment : public QWidget
{
    Q_OBJECT

public:
    explicit assignment(QWidget *parent = nullptr);
    ~assignment();

    void loadAssignmentDetails(const QString &startDate, const QString &dueDate, const QString &title, const QByteArray &file);

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::assignment *ui;
    void savePdfFile(const QByteArray &data, const QString &filePath);
    QByteArray assignmentFile;
};

#endif // ASSIGNMENT_H
