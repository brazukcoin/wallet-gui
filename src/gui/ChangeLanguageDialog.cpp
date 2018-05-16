// Copyright (c) 2016 The Karbowanec developers
// Copyright (c) 2018 The Brazukcoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "ChangeLanguageDialog.h"

#include "Settings.h"
#include "ui_changelanguagedialog.h"

namespace WalletGui {

ChangeLanguageDialog::ChangeLanguageDialog(QWidget* _parent)
    : QDialog(_parent), m_ui(new Ui::ChangeLanguageDialog) {
  m_ui->setupUi(this);
}

ChangeLanguageDialog::~ChangeLanguageDialog() {}

void ChangeLanguageDialog::initLangList() {
  
  QString currentlang = Settings::instance().getLanguage();

  switch (int index = 0) {
    case currentlang.compare("cs") == 0:
      index = 1;
      break;
    case currentlang.compare("de") == 0:
      index = 2;
      break;
    case currentlang.compare("en-PT") == 0:
      index = 3;
      break;
    case currentlang.compare("es-ES") == 0:
      index = 4;
      break;
    case currentlang.compare("fr") == 0:
      index = 5;
      break;
    case currentlang.compare("id") == 0:
      index = 6;
      break;
    case currentlang.compare("it") == 0:
      index = 7;
      break;
    case currentlang.compare("kab") == 0:
      index = 8;
      break;
    case currentlang.compare("pt-BR") == 0:
      index = 9;
      break;
    case currentlang.compare("ru") == 0:
      index = 10;
      break;
    case currentlang.compare("vi") == 0:
      index = 11;
      break;
    case currentlang.compare("zh-CN") == 0:
      index = 12;
      break;
    default:
      index = 0;
  }

  /*
  if(currentlang.compare("fr_FR") == 0) {
    index = 1;
  }

  if(currentlang.compare("fr_FR") == 0) {
    index = 1;
  }
  else if(currentlang.compare("pt_BR") == 0) {
    index = 2;
  }
  */

  m_ui->ChangeLangComboBox->setCurrentIndex(index);

}

QString ChangeLanguageDialog::getLang() const {

  QString lang;
    
//    int index = m_ui->ChangeLangComboBox->currentIndex();

/*
    if (n == 1) {
      lang = "fr_FR";
    }
    else if (n == 2) {
      lang = "pt_BR";
    }
    else {
      lang = "en";
    }
  return lang;
*/

  switch (int index = m_ui->ChangeLangComboBox->currentIndex()) {
    case index = 1:
      lang = "cs";
      break;
    case index = 2:
      lang = "de";
      break;
    case index = 3:
      lang = "en-PT";
      break;
    case index = 4:
      lang = "es-ES";
      break;
    case index = 5:
      lang = "fr";
      break;
    case index = 6:
      lang = "id";
      break;
    case index = 7:
      lang = "it";
      break;
    case index = 8:
      lang = "kab";
      break;
    case index = 9:
      lang = "pt-BR";
      break;
    case index = 10:
      lang = "ru";
      break;
    case index = 11:
      lang = "vi";
      break;
    case index = 12:
      lang = "zh-CN";
      break;
    default:
      index = 0;
  }
}

}  // namespace WalletGui
