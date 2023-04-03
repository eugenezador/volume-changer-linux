#ifndef SOUND_H
#define SOUND_H

#include <QMainWindow>

#include <QProcess>
#include <QDebug>
#include <fstream>

QT_BEGIN_NAMESPACE
namespace Ui { class sound; }
QT_END_NAMESPACE

class sound : public QMainWindow
{
    Q_OBJECT

public:
    sound(QWidget *parent = nullptr);
    ~sound();

    void get_cur_sound_value();

    void set_sink_mute();

    void set_volume(char znak);

    int is_number(QCharRef c);

private slots:
    void on_start_clicked();

    void on_sbros_clicked();

private:
    Ui::sound *ui;

    QProcess *p = nullptr;

    QStringList args;

    QString new_sound_value;

    int current_sound_val;
};
#endif // SOUND_H
