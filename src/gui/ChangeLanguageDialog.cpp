// Copyright (c) 2016 The Karbowanec developers
// Copyright (c) 2018 The Brazukcoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "ChangeLanguageDialog.h"

#include "Settings.h"
#include "ui_changelanguagedialog.h"

namespace WalletGui {
ChangeLanguageDialog::ChangeLanguageDialog(QWidget* _parent) : QDialog(_parent),
                                                               m_ui(new Ui::ChangeLanguageDialog)
{
  m_ui->setupUi(this);
}
ChangeLanguageDialog::~ChangeLanguageDialog() {}

void ChangeLanguageDialog::initLangList()
{  
  QString currentlang = Settings::instance().getLanguage();
  int index = 0;
  
  if (currentlang.compare("cs") == 0) {
    index = 1;
  }
  else if (currentlang.compare("de") == 0) {
    index = 2;
  }
  else if (currentlang.compare("en-PT") == 0) {
    index = 3;
  }
  else if (currentlang.compare("es-ES") == 0) {
    index = 4;
  }
  else if (currentlang.compare("fr") == 0) {
    index = 5;
  }
  else if (currentlang.compare("id") == 0) {
    index = 6;
  }
  else if (currentlang.compare("it") == 0) {
    index = 7;
  }
  else if (currentlang.compare("kab") == 0) {
    index = 8;
  }
  else if (currentlang.compare("pt-BR") == 0) {
    index = 9;
  }
  else if (currentlang.compare("ru") == 0) {
    index = 10;
  }
  else if (currentlang.compare("vi") == 0) {
    index = 11;
  }
  else if (currentlang.compare("zh-CN") == 0) {
    index = 12;
  }
  else {
    index = 0;
  }
  
  m_ui->ChangeLangComboBox->setCurrentIndex(index);
}

QString ChangeLanguageDialog::getLang() const
{
  QString lang;   
  int index = m_ui->ChangeLangComboBox->currentIndex();

  if (index == 1) {
    lang = "cs";
  }
  else if (index == 2) {
    lang = "de";
  }
  else if (index == 3) {
    lang = "en-PT";
  }
  else if (index == 4) {
    lang = "es-ES";
  }
  else if (index == 5) {
    lang = "fr";
  }
  else if (index == 6) {
    lang = "id";
  }
  else if (index == 7) {
    lang = "it";
  }
  else if (index == 8) {
    lang = "kab";
  }
  else if (index == 9) {
    lang = "pt-BR";
  }
  else if (index == 10) {
    lang = "ru";
  }
  else if (index == 11) {
    lang = "vi";
  }
  else if (index == 12) {
    lang = "zh-CN";
  }
  else {
    lang = "en";
  }

  return lang;
}
}  // namespace WalletGui
